/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -fi


// normal block, 1 state


	switch (GETSTATE_LAST()) {
		default: goto yy0;
		case 0: goto yyFillLabel0;
		case 4: goto yyFillLabel4;
	}
yy0:
	SETSTATE_1(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case 'e': goto yy3;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	SETSTATE_1(-1);
	{ x }
yy3:
	++YYCURSOR;
	SETSTATE_1(-1);
	{ e }


// reuse block, 3 states


	switch (GETSTATE_REUSE_1()) {
		default: goto yy4;
		case 1: goto yyFillLabel1;
		case 2: goto yyFillLabel2;
		case 3: goto yyFillLabel3;
	}
yy4:
	SETSTATE_REUSE_1(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy8;
		case 'c': goto yy10;
		default: goto yy6;
	}
yy6:
	++YYCURSOR;
	SETSTATE_REUSE_1(-1);
	{ x }
yy7:
	++YYCURSOR;
	SETSTATE_REUSE_1(-1);
	{ a }
yy8:
	++YYCURSOR;
	SETSTATE_REUSE_1(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy8;
		default: goto yy9;
	}
yy9:
	SETSTATE_REUSE_1(-1);
	{ c }
yy10:
	++YYCURSOR;
	SETSTATE_REUSE_1(3);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy10;
		default: goto yy9;
	}


// normal block, 1 state


	SETSTATE_2(4);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case 'f': goto yy14;
		default: goto yy13;
	}
yy13:
	++YYCURSOR;
	SETSTATE_2(-1);
	{ x }
yy14:
	++YYCURSOR;
	SETSTATE_2(-1);
	{ f }


// last normal block, no rules, only the YYGETSTATE configuration


// reuse block, 1 state


	switch (GETSTATE_REUSE_2()) {
		default: goto yy15;
		case 5: goto yyFillLabel5;
	}
yy15:
	SETSTATE_REUSE_2(5);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel5:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy18;
		default: goto yy17;
	}
yy17:
	++YYCURSOR;
	SETSTATE_REUSE_2(-1);
	{ x }
yy18:
	++YYCURSOR;
	SETSTATE_REUSE_2(-1);
	{ a }
