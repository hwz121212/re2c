/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy1;
		default: goto yy2;
	}
yy1:
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy3;
	}
yy3:
	{}
yy4:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		case 'c':
			yyt1 = YYCURSOR;
			goto yy5;
		default: goto yy6;
	}
yy5:
	t = yyt1;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	yyt1 = YYCURSOR;
	goto yy5;
}

