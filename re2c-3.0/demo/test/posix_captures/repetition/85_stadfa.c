/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 32) YYFILL(32);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy3;
		case 'c': goto yy5;
		case 'd': goto yy6;
		default:
			yyt1 = yyt2 = NULL;
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt4;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy8;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt1 = yyt2 = NULL;
		yyt3 = yyt4 = YYCURSOR;
		goto yy1;
	} else {
		yyt2 = yyt3 = YYCURSOR;
		goto yy1;
	}
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = NULL;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy13;
		default: goto yy1;
	}
yy7:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy15;
		case 'c': goto yy16;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy8:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = yyt2;
	yyt4 = yyt2;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy17;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt4 = yyt2;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy10:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy13;
		default: goto yy1;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy19;
		default: goto yy4;
	}
yy12:
	yych = *++YYCURSOR;
	yyt3 = yyt2;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy20;
		default: goto yy4;
	}
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy13;
		default: goto yy1;
	}
yy14:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy22;
		case 'c': goto yy23;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = yyt4;
	yyt5 = YYCURSOR - 1;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy24;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy16:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy25;
		case 'c': goto yy23;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt4 = yyt2;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy26;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy18:
	yych = *++YYCURSOR;
	yyt3 = yyt4;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy27;
		default: goto yy4;
	}
yy19:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy26;
		default: goto yy4;
	}
yy21:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy28;
		case 'b': goto yy29;
		case 'c': goto yy30;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy25;
		case 'c': goto yy31;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy23:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy28;
		case 'b': goto yy32;
		case 'c': goto yy30;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy24:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy25;
		case 'c': goto yy23;
		case 'd': goto yy33;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy25:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy34;
		default: goto yy4;
	}
yy26:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt4 = yyt3;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy33;
		default: goto yy4;
	}
yy28:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy35;
		case 'b': goto yy36;
		case 'c': goto yy37;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy29:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy28;
		case 'b': goto yy32;
		case 'c': goto yy38;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy30:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy35;
		case 'b': goto yy39;
		case 'c': goto yy37;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy31:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy28;
		case 'b': goto yy32;
		case 'c': goto yy30;
		case 'd': goto yy40;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy32:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy41;
		default: goto yy4;
	}
yy33:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt4 = yyt3;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy25;
		case 'c': goto yy23;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy40;
		default: goto yy4;
	}
yy35:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy42;
		case 'b': goto yy43;
		case 'c': goto yy44;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy36:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy35;
		case 'b': goto yy39;
		case 'c': goto yy45;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy37:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy42;
		case 'b': goto yy46;
		case 'c': goto yy44;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy38:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy35;
		case 'b': goto yy39;
		case 'c': goto yy37;
		case 'd': goto yy47;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy39:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy48;
		default: goto yy4;
	}
yy40:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy28;
		case 'b': goto yy32;
		case 'c': goto yy30;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy47;
		default: goto yy4;
	}
yy42:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy49;
		case 'b': goto yy50;
		case 'c': goto yy51;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy43:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy42;
		case 'b': goto yy46;
		case 'c': goto yy52;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy44:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy49;
		case 'b': goto yy53;
		case 'c': goto yy51;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy42;
		case 'b': goto yy46;
		case 'c': goto yy44;
		case 'd': goto yy54;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy46:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy55;
		default: goto yy4;
	}
yy47:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy35;
		case 'b': goto yy39;
		case 'c': goto yy37;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy54;
		default: goto yy4;
	}
yy49:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy56;
		case 'b': goto yy57;
		case 'c': goto yy58;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy50:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy49;
		case 'b': goto yy53;
		case 'c': goto yy59;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy51:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy56;
		case 'b': goto yy60;
		case 'c': goto yy58;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy49;
		case 'b': goto yy53;
		case 'c': goto yy51;
		case 'd': goto yy61;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy53:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy62;
		default: goto yy4;
	}
yy54:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy42;
		case 'b': goto yy46;
		case 'c': goto yy44;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy61;
		default: goto yy4;
	}
yy56:
	yych = *++YYCURSOR;
	yyt5 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy63;
		case 'b': goto yy64;
		case 'c': goto yy65;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy57:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy56;
		case 'b': goto yy60;
		case 'c': goto yy66;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy58:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy63;
		case 'b': goto yy67;
		case 'c': goto yy65;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy59:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy56;
		case 'b': goto yy60;
		case 'c': goto yy58;
		case 'd': goto yy68;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy60:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy69;
		default: goto yy4;
	}
yy61:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy49;
		case 'b': goto yy53;
		case 'c': goto yy51;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy68;
		default: goto yy4;
	}
yy63:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy70;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy64:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	yyt4 = yyt5;
	switch (yych) {
		case 'a': goto yy63;
		case 'b': goto yy67;
		case 'c': goto yy71;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy65:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy66:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy63;
		case 'b': goto yy67;
		case 'c': goto yy65;
		case 'd': goto yy72;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy67:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy73;
		default: goto yy4;
	}
yy68:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy56;
		case 'b': goto yy60;
		case 'c': goto yy58;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy72;
		default: goto yy4;
	}
yy70:
	yych = *++YYCURSOR;
	yyt4 = yyt2;
	switch (yych) {
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy71:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy74;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy72:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'a': goto yy63;
		case 'b': goto yy67;
		case 'c': goto yy65;
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy74;
		default: goto yy4;
	}
yy74:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt4 = yyt2;
	switch (yych) {
		case 'd': goto yy10;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/repetition/85_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/85_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/85_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
