/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'c': goto yy3;
		default: goto yy2;
	}
yy1:
	{}
yy2:
	yych = *++YYCURSOR;
	goto yy6;
yy3:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'c': goto yy9;
		default: goto yy2;
	}
yy4:
	x = YYCURSOR - 1;
	{}
yy5:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy6:
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy5;
	}
yy7:
	y = yyt1;
	{}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy5;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy2;
		default: goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0: goto yy1;
		case 1: goto yy4;
		case 2: goto yy7;
		default:
			yyt1 = NULL;
			goto yy7;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy12;
		default: goto yy10;
	}
yy12:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy5;
	}
}

