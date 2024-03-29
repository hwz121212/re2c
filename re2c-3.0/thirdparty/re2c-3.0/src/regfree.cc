#include <stddef.h>
#include <set>
#include <valarray>
#include <vector>

#include "regcomp_dfa_regless.h"
#include "regex.h"
#include "regex_impl.h"
#include "regoff_trie.h"
#include "dfa/dfa.h"
#include "dfa/tcmd.h"
#include "encoding/range_suffix.h"
#include "nfa/nfa.h"
#include "parse/ast.h"
#include "regexp/rule.h"
#include "regexp/tag.h"
#include "util/free_list.h"
#include "util/range.h"


using namespace re2c;
using namespace re2c::libre2c;

void regfree(regex_t *preg)
{
    delete preg->rmgr;

    delete &preg->nfa->charset;
    delete &preg->nfa->rules;
    delete &preg->nfa->tags;
    delete preg->nfa;

    if (preg->flags & REG_TSTRING) {
        delete[] preg->tstring.string;
    } else if (preg->flags & REG_SUBHIST) {
        // regfreesub() should be called by the user after regparse()
    } else {
        // allocated and freed by the user (pointer stored in regex_t)
    }

    if (preg->flags & REG_NFA) {
        if ((preg->flags & REG_TRIE) && (preg->flags & REG_LEFTMOST)) {
            delete static_cast<lzsimctx_t*>(preg->simctx);
        } else if (preg->flags & REG_TRIE) {
            delete static_cast<pzsimctx_t*>(preg->simctx);
        } else if (preg->flags & REG_LEFTMOST) {
            delete static_cast<lsimctx_t*>(preg->simctx);
        } else if (preg->flags & REG_KUKLEWICZ) {
            delete static_cast<ksimctx_t*>(preg->simctx);
        } else {
            delete static_cast<psimctx_t*>(preg->simctx);
        }
    } else {
        delete[] preg->char2class;
        delete[] preg->dfa->finvers;

        delete &preg->dfa->mtagvers;
        delete &preg->dfa->tcpool;
        delete preg->dfa;

        if (preg->flags & REG_REGLESS) {
            if (preg->flags & REG_LEFTMOST) {
                delete static_cast<ldetctx_t*>(preg->rldfa->ctx);
            } else {
                delete static_cast<pdetctx_t*>(preg->rldfa->ctx);
            }
            delete preg->rldfa->opts;
            delete[] preg->rldfa->result;
            delete preg->rldfa;
        }
        if (preg->flags & REG_TSTRING) {
            // t-string construction does not use this
        } else if (preg->flags & REG_SUBHIST) {
            delete preg->regtrie;
        } else {
            delete[] preg->regs;
        }
    }

    AST::flist.clear();
    RangeSuffix::freeList.clear();
}

void regfreesub(subhistory_t *history)
{
    free(history);
}
