/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy4;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy7;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	yyt1 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy8;
		default:
			yyt3 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt4;
			goto yy5;
	}
yy5:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = YYCURSOR;
	{}
yy6:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy7;
		default: goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy8;
		default:
			yyt3 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt4;
			goto yy5;
	}
yy8:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy9;
		default:
			yyt3 = yyt2;
			yyt2 = yyt1;
			yyt1 = yyt4;
			goto yy5;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy9;
		default:
			yyt3 = yyt2;
			yyt2 = yyt1;
			yyt1 = yyt4;
			goto yy5;
	}
}

posix_captures/rightassoc/06_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
