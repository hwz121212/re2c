/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'b': goto yy4;
		default: goto yy2;
	}
yy1:
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy3;
		default: goto yy5;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy3;
		default: goto yy7;
	}
yy5:
	++YYCURSOR;
	yyt1 = NULL;
yy6:
	t = yyt1;
	{}
yy7:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	goto yy6;
}

