/* Generated by re2c */
#line 1 "control_flow_yymarker_yyaccept_ok.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "control_flow_yymarker_yyaccept_ok.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	++YYCURSOR;
	yyaccept = 0;
	YYMARKER = ++YYCURSOR;
	goto yy2;
yy1:
#line 6 "control_flow_yymarker_yyaccept_ok.re"
	{ action3 }
#line 18 "control_flow_yymarker_yyaccept_ok.c"
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy3;
	}
yy3:
	++YYCURSOR;
	goto yy6;
yy4:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	goto yy6;
yy5:
#line 5 "control_flow_yymarker_yyaccept_ok.re"
	{ action2 }
#line 35 "control_flow_yymarker_yyaccept_ok.c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy1;
	} else {
		goto yy5;
	}
yy8:
	++YYCURSOR;
#line 4 "control_flow_yymarker_yyaccept_ok.re"
	{ action1 }
#line 53 "control_flow_yymarker_yyaccept_ok.c"
}
#line 8 "control_flow_yymarker_yyaccept_ok.re"
