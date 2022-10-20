#ifndef _RE2C_UTIL_S_TO_N32_UNSAFE_
#define _RE2C_UTIL_S_TO_N32_UNSAFE_

#include "util/c99_stdint.h"

#include "util/attribute.h"


namespace re2c {

bool s_to_u32_unsafe (const char * s, const char * s_end, uint32_t & number) RE2C_ATTR((warn_unused_result));
bool s_to_i32_unsafe (const char * s, const char * s_end, int32_t & number) RE2C_ATTR((warn_unused_result));

} // namespace re2c

#endif // _RE2C_UTIL_S_TO_N32_UNSAFE_
