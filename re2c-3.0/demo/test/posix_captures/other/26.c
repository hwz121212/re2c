/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'y':
			yyt1 = YYCURSOR;
			goto yy2;
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
		case 'y': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y':
			yyt2 = YYCURSOR;
			goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y':
			yyt2 = YYCURSOR;
			goto yy7;
		default:
			yyt3 = YYCURSOR;
			goto yy6;
	}
yy6:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y':
			yyt2 = YYCURSOR;
			goto yy8;
		default:
			yyt3 = YYCURSOR;
			goto yy6;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y': goto yy9;
		default:
			yyt3 = YYCURSOR;
			goto yy6;
	}
yy9:
	++YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy6;
}

posix_captures/other/26.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]