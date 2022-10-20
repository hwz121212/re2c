/* Generated by re2c */
#line 1 "encodings/unicode_group_Pd_x_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy substitute
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pd:
	
#line 14 "encodings/unicode_group_Pd_x_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x2E39) {
		if (yych <= 0x1400) {
			if (yych <= 0x058A) {
				if (yych == '-') goto yy2;
				if (yych >= 0x058A) goto yy2;
			} else {
				if (yych == 0x05BE) goto yy2;
				if (yych >= 0x1400) goto yy2;
			}
		} else {
			if (yych <= 0x2015) {
				if (yych == 0x1806) goto yy2;
				if (yych >= 0x2010) goto yy2;
			} else {
				if (yych <= 0x2E17) {
					if (yych >= 0x2E17) goto yy2;
				} else {
					if (yych == 0x2E1A) goto yy2;
				}
			}
		}
	} else {
		if (yych <= 0x30A0) {
			if (yych <= 0x301B) {
				if (yych <= 0x2E3B) goto yy2;
				if (yych == 0x2E40) goto yy2;
			} else {
				if (yych <= 0x302F) {
					if (yych <= 0x301C) goto yy2;
				} else {
					if (yych <= 0x3030) goto yy2;
					if (yych >= 0x30A0) goto yy2;
				}
			}
		} else {
			if (yych <= 0xFE58) {
				if (yych <= 0xFE30) goto yy1;
				if (yych <= 0xFE32) goto yy2;
				if (yych >= 0xFE58) goto yy2;
			} else {
				if (yych <= 0xFE63) {
					if (yych >= 0xFE63) goto yy2;
				} else {
					if (yych == 0xFF0D) goto yy2;
				}
			}
		}
	}
yy1:
	++YYCURSOR;
#line 14 "encodings/unicode_group_Pd_x_encoding_policy_substitute.re"
	{ return YYCURSOR == limit; }
#line 70 "encodings/unicode_group_Pd_x_encoding_policy_substitute.c"
yy2:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Pd_x_encoding_policy_substitute.re"
	{ goto Pd; }
#line 75 "encodings/unicode_group_Pd_x_encoding_policy_substitute.c"
}
#line 15 "encodings/unicode_group_Pd_x_encoding_policy_substitute.re"

}
static const unsigned int chars_Pd [] = {0x2d,0x2d,  0x58a,0x58a,  0x5be,0x5be,  0x1400,0x1400,  0x1806,0x1806,  0x2010,0x2015,  0x2e17,0x2e17,  0x2e1a,0x2e1a,  0x2e3a,0x2e3b,  0x2e40,0x2e40,  0x301c,0x301c,  0x3030,0x3030,  0x30a0,0x30a0,  0xfe31,0xfe32,  0xfe58,0xfe58,  0xfe63,0xfe63,  0xff0d,0xff0d,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Pd = new unsigned int [50];
	YYCTYPE * s = (YYCTYPE *) buffer_Pd;
	unsigned int buffer_len = encode_utf16 (chars_Pd, sizeof (chars_Pd) / sizeof (unsigned int), buffer_Pd);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Pd[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Pd' failed\n");
	delete [] buffer_Pd;
	return 0;
}
