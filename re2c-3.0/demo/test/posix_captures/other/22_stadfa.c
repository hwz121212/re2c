/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'y': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy4;
		default: goto yy3;
	}
yy3:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy4:
	yych = *++YYCURSOR;
	yyt2 = yyt3;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy5;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	yyt2 = yyt3;
	yyt3 = YYCURSOR - 1;
	goto yy3;
}

posix_captures/other/22_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
