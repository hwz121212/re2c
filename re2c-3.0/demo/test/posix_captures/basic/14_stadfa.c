/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
		case 'b': goto yy2;
		case 'c': goto yy4;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a':
		case 'b': goto yy6;
		case 'c': goto yy7;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	++YYCURSOR;
	yyt2 = NULL;
	yyt1 = YYCURSOR - 1;
	yyt3 = NULL;
yy5:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 1;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b': goto yy6;
		case 'c': goto yy7;
		default: goto yy3;
	}
yy7:
	++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	yyt3 = NULL;
	goto yy5;
}

posix_captures/basic/14_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
