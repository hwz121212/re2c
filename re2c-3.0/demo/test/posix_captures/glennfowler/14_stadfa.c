/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy2;
	yyt1 = yyt2 = yyt3 = YYCURSOR;
yy1:
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
yy2:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt3 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt3 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	if (yych <= 0x00) goto yy1;
	++YYCURSOR;
	goto yy1;
}

posix_captures/glennfowler/14_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/14_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/14_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
