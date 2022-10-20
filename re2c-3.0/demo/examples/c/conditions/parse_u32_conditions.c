/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci
#include <stdint.h>
#include <limits.h>
#include <assert.h>

static const uint64_t ERROR = UINT64_MAX;
enum YYCONDTYPE {
	yycinit,
	yycbin,
	yycdec,
	yychex,
	yycoct,
};


template<int BASE> static void add(uint64_t &u, char d) {
    u = u * BASE + d;
    if (u > UINT32_MAX) u = ERROR;
}

static uint64_t parse_u32(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    int c = yycinit;
    uint64_t u = 0;

    
{
	char yych;
	switch (c) {
		case yycinit: goto yyc_init;
		case yycbin: goto yyc_bin;
		case yycdec: goto yyc_dec;
		case yychex: goto yyc_hex;
		case yycoct: goto yyc_oct;
	}
/* *********************************** */
yyc_init:
	yych = *YYCURSOR;
	switch (yych) {
		case '0': goto yy2;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy4;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{ return ERROR; }
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'B':
		case 'b': goto yy5;
		case 'X':
		case 'x': goto yy7;
		default: goto yy3;
	}
yy3:
	c = yycoct;
	goto yyc_oct;
yy4:
	++YYCURSOR;
	YYCURSOR -= 1;
	c = yycdec;
	goto yyc_dec;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1': goto yy8;
		default: goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy9;
		default: goto yy6;
	}
yy8:
	++YYCURSOR;
	YYCURSOR -= 1;
	c = yycbin;
	goto yyc_bin;
yy9:
	++YYCURSOR;
	YYCURSOR -= 1;
	c = yychex;
	goto yyc_hex;
/* *********************************** */
yyc_bin:
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy11;
		case '0':
		case '1': goto yy13;
		default: goto yy12;
	}
yy11:
	++YYCURSOR;
	{ return u; }
yy12:
	++YYCURSOR;
	{ return ERROR; }
yy13:
	++YYCURSOR;
	{ add<2>(u,  YYCURSOR[-1] - '0');      goto yyc_bin; }
/* *********************************** */
yyc_dec:
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy15;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy17;
		default: goto yy16;
	}
yy15:
	++YYCURSOR;
	{ return u; }
yy16:
	++YYCURSOR;
	{ return ERROR; }
yy17:
	++YYCURSOR;
	{ add<10>(u, YYCURSOR[-1] - '0');      goto yyc_dec; }
/* *********************************** */
yyc_hex:
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy19;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy21;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F': goto yy22;
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy23;
		default: goto yy20;
	}
yy19:
	++YYCURSOR;
	{ return u; }
yy20:
	++YYCURSOR;
	{ return ERROR; }
yy21:
	++YYCURSOR;
	{ add<16>(u, YYCURSOR[-1] - '0');      goto yyc_hex; }
yy22:
	++YYCURSOR;
	{ add<16>(u, YYCURSOR[-1] - 'A' + 10); goto yyc_hex; }
yy23:
	++YYCURSOR;
	{ add<16>(u, YYCURSOR[-1] - 'a' + 10); goto yyc_hex; }
/* *********************************** */
yyc_oct:
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy25;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7': goto yy27;
		default: goto yy26;
	}
yy25:
	++YYCURSOR;
	{ return u; }
yy26:
	++YYCURSOR;
	{ return ERROR; }
yy27:
	++YYCURSOR;
	{ add<8>(u,  YYCURSOR[-1] - '0');      goto yyc_oct; }
}

}

int main() {
    assert(parse_u32("") == ERROR);
    assert(parse_u32("1234567890") == 1234567890);
    assert(parse_u32("0b1101") == 13);
    assert(parse_u32("0x7Fe") == 2046);
    assert(parse_u32("0644") == 420);
    assert(parse_u32("9999999999") == ERROR);
    return 0;
}