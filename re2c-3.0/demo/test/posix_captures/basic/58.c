/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
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
		case 0x01:
		case 0x02:
		case 0x03: goto yy4;
		case 'c': goto yy5;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy5;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/basic/58.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
