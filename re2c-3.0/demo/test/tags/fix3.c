/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *p0, *p1, *p2, *p3, *p4;
    const char *yyt1;const char *yyt2;const char *yyt3;const char *yyt4;const char *yyt5;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
			yyt1 = YYCURSOR;
			goto yy2;
		case '1':
			yyt1 = yyt2 = YYCURSOR;
			goto yy4;
		case '2':
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy5;
		case '3':
			yyt1 = yyt2 = yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		case '4':
			yyt1 = yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
			goto yy7;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{ printf("error\n"); return; }
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0': goto yy2;
		case '1':
			yyt2 = YYCURSOR;
			goto yy4;
		case '2':
			yyt2 = yyt3 = YYCURSOR;
			goto yy5;
		case '3':
			yyt2 = yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		case '4':
			yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
			goto yy3;
	}
yy3:
	p0 = yyt1;
	p1 = yyt2;
	p2 = yyt3;
	p3 = yyt4;
	p4 = yyt5;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                p4 - p3, p3,
                YYCURSOR - p4, p4);
                return;
        }
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case '1': goto yy4;
		case '2':
			yyt3 = YYCURSOR;
			goto yy5;
		case '3':
			yyt3 = yyt4 = YYCURSOR;
			goto yy6;
		case '4':
			yyt3 = yyt4 = yyt5 = YYCURSOR;
			goto yy7;
		default:
			yyt3 = yyt4 = yyt5 = YYCURSOR;
			goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case '2': goto yy5;
		case '3':
			yyt4 = YYCURSOR;
			goto yy6;
		case '4':
			yyt4 = yyt5 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt5 = YYCURSOR;
			goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case '3': goto yy6;
		case '4':
			yyt5 = YYCURSOR;
			goto yy7;
		default:
			yyt5 = YYCURSOR;
			goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case '4': goto yy7;
		default: goto yy3;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
tags/fix3.re:18:17: warning: rule matches empty string [-Wmatch-empty-string]
