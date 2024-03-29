#ifndef _RE2C_TEST_RANGE_TEST_IMPL_
#define _RE2C_TEST_RANGE_TEST_IMPL_

#include "test/range/test.h"
#include "util/range.h"
#include "util/static_assert.h"


namespace re2c_test {

static inline bool bit_set (uint32_t n, uint32_t bit)
{
    return n & (1u << bit);
}

template <uint8_t BITS>
re2c::Range *range(re2c::RangeMgr &rm, uint32_t n)
{
    RE2C_STATIC_ASSERT (BITS <= 31);

    re2c::Range * r = NULL;
    re2c::Range ** p = &r;
    for (uint32_t i = 0; i < BITS; ++i)
    {
        for (; i < BITS && !bit_set (n, i); ++i);
        if (i == BITS && !bit_set (n, BITS - 1))
        {
            break;
        }
        const uint32_t lb = i;
        for (; i < BITS && bit_set (n, i); ++i);
        rm.append(p, lb, i);
    }
    return r;
}

template <uint8_t BITS>
re2c::Range * add (re2c::RangeMgr &rm, uint32_t n1, uint32_t n2)
{
    return range<BITS> (rm, n1 | n2);
}

template <uint8_t BITS>
re2c::Range * sub (re2c::RangeMgr &rm, uint32_t n1, uint32_t n2)
{
    return range<BITS> (rm, n1 & ~n2);
}

} // namespace re2c_test

#endif // _RE2C_TEST_RANGE_TEST_IMPL_
