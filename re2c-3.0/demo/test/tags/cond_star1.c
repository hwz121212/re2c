/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yycc1: goto yyc_c1;
		case yycc2: goto yyc_c2;
	}
/* *********************************** */
yyc_c1:
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
		case 'b': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYCTXMARKER;
	{}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		case 'c':
			YYCTXMARKER = YYCURSOR;
			goto yy7;
		default:
			YYCTXMARKER = YYCURSOR;
			goto yy5;
	}
yy5:
	YYCURSOR = YYCTXMARKER;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		default: goto yy3;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy7;
		default: goto yy5;
	}
/* *********************************** */
yyc_c2:
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy10;
		default: goto yy9;
	}
yy9:
	++YYCURSOR;
	{}
yy10:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
		case 'b': goto yy12;
		default: goto yy15;
	}
yy11:
	YYCURSOR = YYCTXMARKER;
	{}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy12;
		default: goto yy13;
	}
yy13:
	YYCURSOR = YYCTXMARKER;
	{}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy15:
	switch (yych) {
		case 'c': goto yy14;
		default: goto yy11;
	}
}
