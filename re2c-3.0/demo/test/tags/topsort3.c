/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --no-lookahead

{
	YYCTYPE yych;
	yyt2 = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR++);
	yyt1 = NULL;
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		default: goto yy2;
	}
yy1:
	{}
yy2:
	yych = *YYCURSOR++;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy9;
		default: goto yy7;
	}
yy3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default:
			++YYCURSOR;
			goto yy9;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy1;
yy5:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		default:
			++YYCURSOR;
			goto yy8;
	}
yy6:
	c = yyt1;
	{}
yy7:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
			yyt1 = yyt2;
			goto yy6;
		default:
			++YYCURSOR;
			yyt2 = yyt1;
			goto yy8;
	}
yy8:
	yyt1 = yyt2;
	goto yy6;
yy9:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy4;
		default:
			++YYCURSOR;
			yyt2 = yyt1;
			goto yy8;
	}
}

tags/topsort3.re:4:29: warning: tag 'c' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
