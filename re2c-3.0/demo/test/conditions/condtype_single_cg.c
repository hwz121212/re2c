/* Generated by re2c */
#line 1 "conditions/condtype_single_cg.re"
// re2c $INPUT -o $OUTPUT -cg

#line 6 "conditions/condtype_single_cg.c"
{
	YYCTYPE yych;
	static void *yyctable[1] = {
		&&yyc_a,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'a') goto yy1;
yy1:
	++YYCURSOR;
#line 3 "conditions/condtype_single_cg.re"
	{}
#line 22 "conditions/condtype_single_cg.c"
}
#line 4 "conditions/condtype_single_cg.re"

conditions/condtype_single_cg.re:2:0: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_single_cg.re:2:0: warning: condition numbers may change, use '/*!conditions:re2c*/' directive to generate reliable condition identifiers [-Wcondition-order]
