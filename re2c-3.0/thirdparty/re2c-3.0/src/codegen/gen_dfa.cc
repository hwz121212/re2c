#include <stddef.h>
#include "util/c99_stdint.h"
#include <algorithm>
#include <ostream>
#include <set>
#include <string>
#include <utility>
#include <valarray>
#include <vector>

#include "adfa/adfa.h"
#include "codegen/code.h"
#include "codegen/helpers.h"
#include "msg/location.h"
#include "msg/msg.h"
#include "options/opt.h"
#include "regexp/rule.h"
#include "regexp/tag.h"
#include "skeleton/skeleton.h"
#include "util/string_utils.h"


namespace re2c {

void gen_yydebug(Output &output, const Label *label, CodeList *stmts) {
    const opt_t *opts = output.block().opts;
    Scratchbuf &buf = output.scratchbuf;

    if (!opts->dFlag) return;

    // The label may be unused but still have a valid index (one such example is the
    // initial label in goto/label mode). It still needs an YYDEBUG statement.
    buf.str(opts->yydebug).cstr("(").label(*label, /*check_used*/ false).cstr(", ");
    gen_peek_expr(buf.stream(), opts);
    buf.cstr(")");
    append(stmts, code_stmt(output.allocator, buf.flush()));
}

static void emit_state(Output &output, const State *state, CodeList *stmts) {
    // If state label is unused, we should not generate it.
    // Nor can we emit an YYDEBUG statement, as there is no state number to pass to it.
    if (!state->label->used) return;

    if (!output.block().opts->loop_switch) {
        append(stmts, code_nlabel(output.allocator, state->label));
    }
    if (state->action.type != Action::INITIAL) {
        gen_yydebug(output, state->label, stmts);
    }
}

static void gen_storable_state_cases(Output &output, CodeCases *cases)
{
    OutputBlock &block = output.block();
    const opt_t *opts = block.opts;
    code_alc_t &alc = output.allocator;

    if (!opts->fFlag || !opts->loop_switch) return;

    // TODO: If `re2c:eof` is not used, some of these cases are redundant (they contain a
    // single transition to the DFA state that has the corresponding YYFILL invocation).
    for (storable_states_t::const_iterator i = block.fill_goto.begin();
            i != block.fill_goto.end(); ++i) {
        append(cases, code_case_number(alc, i->second, static_cast<int32_t>(i->first)));
    }

    // Prepare a single range [-1, 1) covering cases `yystate = -1` and `yystate = 0`.
    int64_t *ranges = alc.alloct<int64_t>(2), *ranges_end = ranges;
    *ranges_end++ = -1;
    *ranges_end++ = 1;

    // Replace the first case 0 with a case that covers both -1 and 0.
    CodeCase *first = cases->head;
    DASSERT(first->kind == CodeCase::NUMBER && first->number == 0);
    first->kind = CodeCase::RANGES;
    first->ranges = code_ranges(alc, VAR_TYPE_INT, ranges, ranges_end);
}

void gen_dfa_as_blocks_with_labels(Output &output, const DFA &dfa, CodeList *stmts)
{
    const opt_t *opts = output.block().opts;
    code_alc_t &alc = output.allocator;
    Scratchbuf &o = output.scratchbuf;

    gen_settags(output, stmts, dfa, dfa.tags0, /*delayed*/ false);

    // If DFA has transitions into the initial state and --eager-skip option is not used,
    // then the initial state must have a YYSKIP statement that must be bypassed when
    // first entering the DFA. With --loop-switch that would be impossible, because there
    // can be no transitions in the middle of a state.
    DASSERT(!opts->loop_switch);
    if (dfa.head->label->used && !opts->eager_skip) {
        dfa.initial_label->used = true;
        o.cstr("goto ").str(opts->labelPrefix).label(*dfa.initial_label);
        append(stmts, code_stmt(alc, o.flush()));
    }

    for (State *s = dfa.head; s; s = s->next) {
        emit_state(output, s, stmts);
        emit_action(output, dfa, s, stmts);
        gen_go(output, dfa, &s->go, s, stmts);
    }
}

void gen_dfa_as_switch_cases(Output &output, DFA &dfa, CodeCases *cases) {
    code_alc_t &alc = output.allocator;

    DASSERT(output.block().opts->loop_switch);
    DASSERT(dfa.tags0 == TCID0);

    for (State *s = dfa.head; s; s = s->next) {
        CodeList *body = code_list(alc);

        // Emit current state.
        emit_state(output, s, body);
        emit_action(output, dfa, s, body);
        gen_go(output, dfa, &s->go, s, body);
        uint32_t label = s->label->index;
        DASSERT(label != Label::NONE);

        // As long as the following state has no incoming transitions (its label is
        // unused), generate it as a continuation of the current state. This avoids
        // looping through the `yystate` switch only to return to the next case.
        while (s->next && !s->next->label->used) {
            s = s->next;
            emit_state(output, s, body);
            emit_action(output, dfa, s, body);
            gen_go(output, dfa, &s->go, s, body);
        }

        append(cases, code_case_number(alc, body, static_cast<int32_t>(label)));
    }
}

void wrap_dfas_in_loop_switch(Output &output, CodeList *stmts, CodeCases *cases)
{
    const opt_t *opts = output.block().opts;
    code_alc_t &alc = output.allocator;

    DASSERT(opts->loop_switch);

    CodeList* loop = code_list(alc);
    gen_storable_state_cases(output, cases);
    if (opts->bUseStateAbort || opts->lang != LANG_C) {
        // Do not abort by default in C/C++ as it requires including a header.
        CodeList *abort = code_list(alc);
        append(abort, code_abort(alc));
        append(cases, code_case_default(alc, abort));
    }
    append(loop, code_switch(alc, opts->yystate.c_str(), cases));
    append(stmts, code_loop(alc, loop));
}

void DFA::emit_dot(Output &output, CodeList *program) const
{
    code_alc_t &alc = output.allocator;
    Scratchbuf &o = output.scratchbuf;
    const char *text;

    if (!cond.empty()) {
        text = o.str(cond).cstr(" -> ").label(*head->label).flush();
        append(program, code_text(alc, text));
    }

    for (State *s = head; s; s = s->next) {
        if (s->action.type == Action::ACCEPT) {
            const accept_t &accs = *s->action.info.accepts;
            for (uint32_t i = 0; i < accs.size(); ++i) {
                text = o.label(*s->label).cstr(" -> ").label(*accs[i].first->label)
                    .cstr(" [label=\"yyaccept=").u32(i).cstr("\"]").flush();
                append(program, code_text(alc, text));
            }
        }
        else if (s->action.type == Action::RULE) {
            const SemAct *semact = rules[s->action.info.rule].semact;
            if (!semact->autogen) {
                text = o.label(*s->label).cstr(" [label=\"")
                    .str(msg.filenames[semact->loc.file]).cstr(":")
                    .u32(semact->loc.line).cstr("\"]").flush();
                append(program, code_text(alc, text));
            }
        }
        gen_go(output, *this, &s->go, s, program);
    }
}

static inline BlockNameList *block_list_for_implicit_state_goto(code_alc_t &alc,
    const OutputBlock &block)
{
    BlockNameList *p = NULL;
    if (block.kind == INPUT_USE) {
        // For `use:re2c` blocks, link the block to the state switch by the
        // autogenerated block name. Note that it is impossible for the user to
        // do so with a `getstate:re2c` directive, as use blocks do not have a
        // user-defined name and cannot be referenced.
        p = alc.alloct<BlockNameList>(1);
        p->name = copystr(block.name, alc);
        p->next = NULL;
    } else {
        // For non-use blocks do not provide a block list: the autogenerated
        // state switch should include all non-use blocks in the file.
    }
    return p;
}

void gen_code(Output &output, dfas_t &dfas)
{
    OutputBlock &oblock = output.block();
    const opt_t *opts = oblock.opts;
    code_alc_t &alc = output.allocator;
    Scratchbuf &o = output.scratchbuf;

    dfas_t::const_iterator i, b = dfas.begin(), e = dfas.end();
    if (b == e) return;

    // All conditions are named, so it suffices to check the first DFA.
    const bool is_cond_block = !(*b)->cond.empty();

    for (i = b; i != e; ++i) {
        const bool first = i == b;
        DFA &dfa = *(*i);

        if (opts->bFlag) {
            dfa.bitmap = code_bitmap(alc, std::min(dfa.ubChar, 256u));
            for (State *s = dfa.head; s; s = s->next) {
                if (s->isBase) {
                    DASSERT(s->next);
                    insert_bitmap(alc, dfa.bitmap, &s->next->go, s);
                }
            }
        }

        // Allocate labels for DFA states, but do not assign indices yet: they will be
        // assigned after the used label analysis only to the labels that are used.
        for (State *s = dfa.head; s; s = s->next) {
            s->label = new_label(alc, Label::NONE);
        }

        if (!opts->loop_switch) {
            if (first) {
                if (opts->startlabel_force) {
                    // User-enforced start label.
                    dfa.start_label = new_label(alc, output.label_counter++);
                    dfa.start_label->used = true;
                } else if (opts->fFlag) {
                    // Start label is needed in `-f` mode: it points to state 0 (the
                    // beginning of block, before condition dispatch in `-c` mode).
                    dfa.start_label = new_label(alc, output.label_counter++);
                }
                oblock.start_label = dfa.start_label;
            }
            // Initial label points to the beginning of the DFA (after condition
            // dispatch in `-c` mode).
            dfa.initial_label = new_label(alc, output.label_counter++);
            dfa.head->action.set_initial();
        } else {
            // In loop/switch mode the label of the first state is always used.
            dfa.head->label->used = true;
            // With loop/switch there are no labels, and each block has its own state
            // switch where all conditions are joined. Restart state counter from zero so
            // that cases start from zero. With skeleton conditions are separate.
            if (first || opts->target == TARGET_SKELETON) output.label_counter = 0;
        }

        // Generate DFA transitions and perform used label analysis: for every transition
        // mark its destination state label as used.
        for (State *s = dfa.head; s; s = s->next) {
            code_go(alc, dfa, opts, s);
        }

        // Assign label indices (only to the labels that are used).
        for (State *s = dfa.head; s; s = s->next) {
            if (s->label->used) s->label->index = output.label_counter++;
        }

        // With loop/switch storable states need their own cases in the state switch, as
        // they have some logic on top of transition to the state that invoked YYFILL.
        // Give them continuous indices after the last state index.
        if (opts->loop_switch && opts->fFlag) {
            oblock.fill_index = output.label_counter;
        }

        if (!dfa.cond.empty()) {
            // If loop/switch is used, condition numbers are the numeric indices of their
            // initial DFA state. Otherwise we do not assign explicit numbers, and
            // conditions are implicitly assigned consecutive numbers starting from zero.
            StartCond sc = {dfa.cond, opts->loop_switch ? dfa.head->label->index : 0};
            oblock.conds.push_back(sc);
        }
    }

    CodeList *program = code_list(alc);
    uint32_t ind = 0;

    if (opts->target == TARGET_DOT) {
        append(program, code_text(alc, "digraph re2c {"));
        append(program, code_cond_goto(alc));
        for (i = b; i != e; ++i) {
            (*i)->emit_dot(output, program);
        }
        append(program, code_text(alc, "}"));
    }
    else if (opts->target == TARGET_SKELETON) {
        for (i = b; i != e; ++i) {
            DFA &dfa = *(*i);
            if (output.skeletons.insert(dfa.name).second) {
                emit_skeleton(output, program, dfa);
            }
        }
    }
    else {
        ind = output.block().opts->topIndent;
        bool have_bitmaps = false;

        const char *text;
        CodeList *program1 = code_list(alc);
        CodeCases *cases = code_cases(alc);
        for (i = b; i != e; ++i) {
            const bool first = i == b;
            DFA &dfa = *(*i);

            CodeList *bms = opts->bFlag ? gen_bitmap(output, dfa.bitmap) : NULL;
            have_bitmaps |= bms != NULL;

            if (first && opts->fFlag) {
                append(program1, code_newline(alc));
            }

            if (first && !opts->fFlag) {
                append(program1, code_yych_decl(alc));
                append(program1, code_yyaccept_def(alc));
            }
            if (first) {
                append(program1, code_yystate_def(alc));
            }

            if (!is_cond_block && bms) {
                append(program1, bms);
            }

            if (first && is_cond_block && opts->gFlag) {
                append(program1, code_cond_table(alc));
            }

            if (opts->fFlag && !output.state_goto && !opts->loop_switch) {
                append(program1, code_state_goto(alc,
                    block_list_for_implicit_state_goto(alc, oblock)));
                output.state_goto = true;
            }

            // start label
            if (dfa.start_label) {
                append(program1, code_nlabel(alc, dfa.start_label));
            }

            // user-defined start label
            if (first && !opts->startlabel.empty()) {
                text = o.str(opts->startlabel).flush();
                append(program1, code_slabel(alc, text));
            }

            if (is_cond_block && !opts->loop_switch) {
                if (!output.cond_goto) {
                    append(program1, code_cond_goto(alc));
                    output.cond_goto = true;
                }
                if (opts->condDivider.length()) {
                    o.str(opts->condDivider);
                    argsubst(o.stream(), opts->condDividerParam, "cond", true, dfa.cond);
                    append(program1, code_textraw(alc, o.flush()));
                }
                text = o.str(opts->condPrefix).str(dfa.cond).flush();
                append(program1, code_slabel(alc, text));
            }

            if (!opts->loop_switch) {
                // In the goto/label mode, generate DFA states as blocks of code preceded
                // with labels, and `goto` transitions between states.
                CodeList *body = code_list(alc);
                gen_dfa_as_blocks_with_labels(output, dfa, body);
                if (is_cond_block && bms) {
                    CodeList *block = code_list(alc);
                    append(block, bms);
                    append(block, body);
                    append(program1, code_block(alc, block, CodeBlock::WRAPPED));
                } else {
                    append(program1, body);
                }
            } else {
                // In the loop/switch mode append all DFA states as cases of the `yystate`
                // switch. Merge DFAs for different conditions together in one switch.
                DASSERT(!bms);
                gen_dfa_as_switch_cases(output, dfa, cases);
            }
        }
        if (opts->loop_switch) {
            wrap_dfas_in_loop_switch(output, program1, cases);
        }

        append(program, code_newline(alc));
        append(program, code_line_info_output(alc));

        if ((opts->fFlag && opts->gFlag)
                || (!opts->fFlag && (oblock.used_yyaccept || opts->bEmitYYCh))
                || (!is_cond_block && have_bitmaps)
                || (is_cond_block && opts->gFlag)) {
            append(program, code_block(alc, program1, CodeBlock::WRAPPED));
        } else {
            ind = std::max(ind, 1u);
            append(program, program1);
        }
    }

    output.wdelay_stmt(ind, code_block(alc, program, CodeBlock::RAW));
}

std::string vartag_name(tagver_t ver, const std::string &prefix,
    const std::set<tagver_t> &mtagvers)
{
    std::ostringstream s;
    s << prefix;
    // S-tags and m-tags should not overlap, so m-tags have an additional "m" prefix
    // (note that tag variables in different conditions may have identical numbers).
    if (mtagvers.find(ver) != mtagvers.end()) s << "m";
    s << ver;
    return s.str();
}

std::string vartag_expr(tagver_t ver, const opt_t *opts,
    const std::set<tagver_t> &mtagvers)
{
    std::ostringstream os(opts->tags_expression);
    std::string name = vartag_name(ver, opts->tags_prefix, mtagvers);
    argsubst(os, opts->api_sigil, "tag", true, name);
    return os.str();
}

} // end namespace re2c
