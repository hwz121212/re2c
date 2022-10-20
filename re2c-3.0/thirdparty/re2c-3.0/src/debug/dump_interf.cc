#ifdef RE2C_DEBUG

#include <stdio.h>

#include "cfg/cfg.h"
#include "dfa/dfa.h"
#include "debug/debug.h"
#include "regexp/tag.h"


namespace re2c {

void dump_interf(const cfg_t &cfg, const bool *interf)
{
    const tagver_t nver = cfg.dfa.maxtagver + 1;
    for (tagver_t y = 1; y < nver; ++y) {
        fprintf(stderr, "%2d ", y);
    }
    fprintf(stderr, "\n");
    for (tagver_t x = 1; x < nver; ++x) {
        for (tagver_t y = 1; y < nver; ++y) {
            fprintf(stderr, "%2c ", interf[x * nver + y] ? '*' : '.');
        }
        fprintf(stderr, "\n");
    }
}

} // namespace re2c

#endif // RE2C_DEBUG
