/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy4;
		case 'c': goto yy5;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy8;
		case 'c': goto yy9;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy1;
	} else {
		yyt2 = yyt1;
		yyt1 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy7;
	}
yy4:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy9;
		default: goto yy3;
	}
yy6:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy13;
		case 'c': goto yy9;
		case 'd': goto yy14;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy7:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy15;
		default: goto yy3;
	}
yy9:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy10:
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy14;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy16;
		default: goto yy3;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy17;
		default: goto yy3;
	}
yy13:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt5 = yyt2;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt2;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy15;
		case 'd': goto yy14;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy14:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy18;
		default:
			yyt4 = yyt3;
			yyt3 = yyt2;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy15:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy19;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b':
		case 'c': goto yy10;
		default: goto yy3;
	}
yy17:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy19;
		default: goto yy3;
	}
yy18:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy18;
		default:
			yyt4 = yyt3;
			yyt3 = yyt2;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
yy19:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = yyt4;
	yyt5 = yyt3;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy14;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt2 = yyt1;
			yyt1 = yyt5;
			goto yy7;
	}
}

posix_captures/repetition/70_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
