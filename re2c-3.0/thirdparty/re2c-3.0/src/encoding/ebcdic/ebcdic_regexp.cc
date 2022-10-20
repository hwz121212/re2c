#include <stddef.h>
#include "util/c99_stdint.h"

#include "encoding/ebcdic/ebcdic.h"
#include "encoding/ebcdic/ebcdic_regexp.h"
#include "regexp/re.h"
#include "util/range.h"


namespace re2c {

RE *EBCDICRange(RESpec &spec, const Range *r)
{
    RangeMgr &rm = spec.rangemgr;

    Range *s = NULL;
    for (; r; r = r->next()) {
        const uint32_t l = r->lower(), u = r->upper();
        for (uint32_t c = l; c < u; ++c) {
            s = rm.add(s, rm.sym(asc2ebc[c]));
        }
    }
    return re_sym(spec, s);
}

} // namespace re2c
