/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		default:
			yyt3 = yyt5 = NULL;
			yyt1 = yyt2 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt6;
	yypmatch[5] = yyt5;
	yypmatch[7] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt5;
	if (yyt5 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 3;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt4 = yyt6 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	yyt3 = yyt5 = NULL;
	yyt1 = yyt2 = yyt6 = YYCURSOR;
	goto yy1;
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt6;
	switch (yych) {
		case 'a': goto yy5;
		default:
			yyt3 = yyt5 = NULL;
			yyt2 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt4;
	yyt3 = yyt4;
	switch (yych) {
		case 'a': goto yy6;
		default:
			yyt3 = yyt5 = NULL;
			yyt2 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt6;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		default:
			yyt3 = yyt5 = NULL;
			yyt2 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt3;
	yyt5 = NULL;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		default:
			yyt3 = NULL;
			yyt5 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt6;
	switch (yych) {
		case 'a': goto yy9;
		default:
			yyt3 = yyt5 = NULL;
			yyt2 = yyt6 = YYCURSOR;
			goto yy1;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt3;
	yyt1 = yyt6;
	switch (yych) {
		case 'a': goto yy4;
		default:
			yyt3 = yyt6 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/other/29_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/29_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/29_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]