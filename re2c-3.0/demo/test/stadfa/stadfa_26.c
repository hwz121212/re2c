/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy2;
		default:
			YYMTAGP(yytm2);
			YYMTAGP(yytm2);
			goto yy1;
	}
yy1:
	t = yytm2;
	{}
yy2:
	yych = *++YYCURSOR;
	yytm1 = yytm2;
	YYMTAGP(yytm1);
	YYSHIFTMTAG(yytm1, -1);
	YYMTAGP(yytm2);
	YYSHIFTMTAG(yytm2, -1);
	switch (yych) {
		case 'b': goto yy3;
		default:
			YYMTAGP(yytm2);
			goto yy1;
	}
yy3:
	++YYCURSOR;
	yytm2 = yytm1;
	YYMTAGP(yytm2);
	YYSHIFTMTAG(yytm2, -1);
	goto yy1;
}

stadfa/stadfa_26.re:3:13: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_26.re:4:3: warning: unreachable rule (shadowed by rule at line 3) [-Wunreachable-rules]
