/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default:
			yyt1 = yyt3 = NULL;
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt2;
	yypmatch[2] = yyt3;
	yypmatch[3] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy3;
		default:
			yyt1 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default:
			yyt1 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/nullsubexpr/03_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/03_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/03_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
