/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy4;
		default:
			yyt1 = yyt2 = YYCURSOR;
			goto yy3;
	}
yy3:
	yynmatch = 2;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[0] = yyt1 - 1;
	yypmatch[1] = YYCURSOR;
	{}
yy4:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		default:
			yyt2 = YYCURSOR;
			goto yy3;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		default:
			yyt2 = YYCURSOR;
			goto yy3;
	}
}

posix_captures/basic/48_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
