/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2 = YYCURSOR;
			goto yy2;
		default:
			yyt2 = yyt3 = NULL;
			yyt1 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default:
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy2;
		default:
			yyt3 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/implicit_grouping3.re:4:7: warning: rule matches empty string [-Wmatch-empty-string]
