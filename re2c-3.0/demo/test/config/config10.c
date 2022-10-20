/* Generated by re2c */
#line 1 "config/config10.re"
// re2c $INPUT -o $OUTPUT 
#include <cstring>
#include <iostream>

struct Scanner
{
	Scanner(char *txt)
		: cur(txt), lim(txt + strlen(txt))
	{
	}
	
	char    *cur;
	char    *lim;
	char	*ptr;
	char	*ctx;
	char    *tok;
};

enum What
{
	UNEXPECTED,
	KEYWORD,
	NUMBER,
	EOI
};

char * tokens[] = { "UNEXPECTED", "KEYWORD", "NUMBER", "EOI" };

void fill()
{
}

int scan(Scanner &s)
{
	char *cursor = s.cur;

	if(cursor == s.lim)
		return EOI;
	
std:
	s.tok = cursor;


#line 47 "config/config10.c"
{
	char curr;
	if ((s.lim - s.cur) < 3) fill();
	curr = *s.cur;
	switch (curr) {
		case '\t':
		case '\n':
		case ' ': goto xx3;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto xx4;
		case 'a':
		case 'b': goto xx6;
		default: goto xx1;
	}
xx1:
	++s.cur;
xx2:
#line 68 "config/config10.re"
	{
		return UNEXPECTED;
	}
#line 77 "config/config10.c"
xx3:
	++s.cur;
#line 61 "config/config10.re"
	{
		if(s.cur == s.lim)
			return EOI;
		cursor = s.cur;
		goto std;
	}
#line 87 "config/config10.c"
xx4:
	++s.cur;
	if (s.lim <= s.cur) fill();
	curr = *s.cur;
	switch (curr) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto xx4;
		default: goto xx5;
	}
xx5:
#line 58 "config/config10.re"
	{ return NUMBER;  }
#line 108 "config/config10.c"
xx6:
	curr = *++s.cur;
	switch (curr) {
		case '0':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			s.ctx = s.cur;
			goto xx7;
		case '1':
			s.ctx = s.cur;
			goto xx9;
		default: goto xx2;
	}
xx7:
	++s.cur;
	if (s.lim <= s.cur) fill();
	curr = *s.cur;
	switch (curr) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto xx7;
		default: goto xx8;
	}
xx8:
	s.cur = s.ctx;
#line 57 "config/config10.re"
	{ return KEYWORD; }
#line 149 "config/config10.c"
xx9:
	curr = *++s.cur;
	switch (curr) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto xx7;
		default: goto xx10;
	}
xx10:
	s.cur -= 1;
#line 56 "config/config10.re"
	{ return KEYWORD; }
#line 169 "config/config10.c"
}
#line 71 "config/config10.re"

}

int main(int,char**)
{
	Scanner s("a77 a1 b8 b1");
	
	int t, n = 0;
	while ((t = scan(s)) != EOI)
	{
		std::cout << (++n) << ": " << tokens[t] << " = \""; std::cout.write(s.tok, s.cur-s.tok); std::cout << "\"" << std::endl;
	}
}
