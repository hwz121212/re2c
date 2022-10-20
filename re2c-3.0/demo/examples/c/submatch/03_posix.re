// re2c $INPUT -o $OUTPUT
#include <assert.h>
#include <stddef.h>

// Maximum number of capturing groups among all rules.
/*!maxnmatch:re2c*/

struct SemVer { int major, minor, patch; };

static int s2n(const char *s, const char *e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

static bool lex(const char *str, SemVer &ver) {
    const char *YYCURSOR = str, *YYMARKER;

    // Allocate memory for capturing parentheses (twice the number of groups).
    const char *yypmatch[YYMAXNMATCH * 2];
    size_t yynmatch;

    // Autogenerated tag variables used by the lexer to track tag values.
    /*!stags:re2c format = 'const char *@@;\n'; */

    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;
        re2c:posix-captures = 1;

        num = [0-9]+;

        (num) "." (num) ("." num)? [\x00] {
            // `yynmatch` is the number of capturing groups
            assert(yynmatch == 4);
            // Even `yypmatch` values are for opening parentheses, odd values
            // are for closing parentheses, the first group is the whole match.
            ver.major = s2n(yypmatch[2], yypmatch[3]);
            ver.minor = s2n(yypmatch[4], yypmatch[5]);
            ver.patch = yypmatch[6] ? s2n(yypmatch[6] + 1, yypmatch[7]) : 0;
            return true;
        }
        * { return false; }
    */
}

int main() {
    SemVer v;
    assert(lex("23.34", v) && v.major == 23 && v.minor == 34 && v.patch == 0);
    assert(lex("1.2.999", v) && v.major == 1 && v.minor == 2 && v.patch == 999);
    assert(!lex("1.a", v));
    return 0;
}
