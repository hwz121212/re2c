/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy3;
		default:
			yyt4 = NULL;
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt4;
	if (yyt4 != NULL) yypmatch[4] -= 2;
	{}
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy6;
		default:
			yyt4 = NULL;
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	yyt4 = NULL;
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	yyt4 = NULL;
	yyt2 = yyt3 = YYCURSOR;
	goto yy1;
yy6:
	yych = *++YYCURSOR;
	yyt4 = NULL;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy8;
		default: goto yy1;
	}
yy7:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	switch (yych) {
		case 'b': goto yy8;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy8:
	++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = yyt4 = YYCURSOR - 1;
	goto yy1;
}

posix_captures/glennfowler/19_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/19_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/19_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
