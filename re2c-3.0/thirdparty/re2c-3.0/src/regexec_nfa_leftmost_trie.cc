#include <stddef.h>
#include <algorithm>
#include <vector>

#include "regex.h"
#include "regex_impl.h"
#include "debug/debug.h"
#include "dfa/closure_leftmost.h"
#include "dfa/tag_history.h"
#include "nfa/nfa.h"
#include "util/range.h"


namespace re2c {
namespace libre2c {

static void make_step(lzsimctx_t &, uint32_t);
static void make_final_step(lzsimctx_t &ctx);

int regexec_nfa_leftmost_trie(const regex_t *preg, const char *string
    , size_t nmatch, regmatch_t pmatch[], int)
{
    lzsimctx_t &ctx = *static_cast<lzsimctx_t*>(preg->simctx);
    init(ctx, string);

    const conf_t c0(ctx.nfa.root, 0/* unused */, HROOT);
    ctx.reach.push_back(c0);
    for (;;) {
        closure_leftmost_dfs(ctx);
        const uint32_t sym = static_cast<uint8_t>(*ctx.cursor++);
        if (ctx.state.empty() || sym == 0) break;
        make_step(ctx, sym);
    }
    make_final_step(ctx);

    ctx.history.cache.clear();
    return finalize(ctx, string, nmatch, pmatch);
}

void make_step(lzsimctx_t &ctx, uint32_t sym)
{
    const confset_t &state = ctx.state;
    confset_t &reach = ctx.reach;

    // in reverse, so that future closure DFS has states in stack order
    rcconfiter_t b = state.rbegin(), e = state.rend(), i;
    DASSERT(reach.empty());

    for (i = b; i != e; ++i) {
        nfa_state_t *s = i->state;

        // cleanup from previous closure
        s->clos = NOCLOS;

        if (s->type == nfa_state_t::RAN) {
            for (const Range *r = s->ran.ran; r; r = r->next()) {
                if (r->lower() <= sym && sym < r->upper()) {
                    const conf_t c(s->ran.out, 0/* unused */, i->thist);
                    reach.push_back(c);
                    break;
                }
            }
        }
        else if (s->type == nfa_state_t::FIN) {
            ctx.marker = ctx.cursor;
            ctx.hidx = i->thist;
            ctx.rule = 0;
        }
    }

    ++ctx.step;
}

void make_final_step(lzsimctx_t &ctx)
{
    for (confiter_t i = ctx.state.begin(), e = ctx.state.end(); i != e; ++i) {
        nfa_state_t *s = i->state;

        s->clos = NOCLOS;
        DASSERT(s->active == 0);

        if (s->type == nfa_state_t::FIN) {
            ctx.marker = ctx.cursor;
            ctx.hidx = i->thist;
            ctx.rule = 0;
        }
    }
}

} // namespace libre2
} // namespace re2c

