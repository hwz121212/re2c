/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy3;
		default:
			yyt2 = yyt3 = NULL;
			yyt1 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt3;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy3:
	yych = *++YYCURSOR;
	yyt2 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy1;
	} else {
		yyt2 = YYCURSOR;
		goto yy1;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt1;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy6:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt2;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy8;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy7:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt4;
	yyt1 = yyt2;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy8;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		default: goto yy4;
	}
}

posix_captures/glennfowler/25_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/25_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/25_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
