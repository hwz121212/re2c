/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy2;
	}
	yyt1 = yyt2 = yyt3 = YYCURSOR;
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy1;
	}
	yyt2 = YYCURSOR;
	++YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy1;
}

posix_captures/glennfowler/08.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/08.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/08.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
