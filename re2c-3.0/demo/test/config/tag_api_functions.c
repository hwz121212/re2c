/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i


// stags, default API

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{ * }
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2;
			yyt2 = YYCURSOR;
			goto yy2;
		default: goto yy3;
	}
yy3:
	x = yyt1;
	y = YYCURSOR - 1;
	z = YYCURSOR - 1;
	{ a }
}


// stags, generic API

{
	YYCTYPE yych;
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			stagn(yyt1);
			stagp(yyt2);
			goto yy6;
		default: goto yy5;
	}
yy5:
	skip();
	{ * }
yy6:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			yyt1 = yyt2;
			stagp(yyt2);
			goto yy6;
		default: goto yy7;
	}
yy7:
	x = yyt1;
	stagp(y);
	shiftstag(y, -1);
	stagp(z);
	shiftstag(z, -1);
	{ a }
}


// mtags, default API

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yytm2 = yytm1;
			mtagp(yytm2);
			yytm3 = yytm4;
			mtagp(yytm3);
			mtagn(yytm4);
			goto yy10;
		default: goto yy9;
	}
yy9:
	++YYCURSOR;
	{ * }
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yytm4 = yytm3;
			yytm2 = yytm1;
			mtagp(yytm2);
			mtagp(yytm3);
			goto yy10;
		default: goto yy11;
	}
yy11:
	x = yytm4;
	y = yytm2;
	z = yytm2;
	{ a }
}


// mtags, generic API

{
	YYCTYPE yych;
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			yytm2 = yytm1;
			mtagp(yytm2);
			yytm3 = yytm4;
			mtagp(yytm3);
			mtagn(yytm4);
			goto yy14;
		default: goto yy13;
	}
yy13:
	skip();
	{ * }
yy14:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			yytm4 = yytm3;
			yytm2 = yytm1;
			mtagp(yytm2);
			mtagp(yytm3);
			goto yy14;
		default: goto yy15;
	}
yy15:
	x = yytm4;
	y = yytm2;
	z = yytm2;
	{ a }
}


// trailing context, default API

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) fill(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy18;
		case 'b': goto yy20;
		case 'c': goto yy22;
		default: goto yy17;
	}
yy17:
yy18:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy18;
		default: goto yy19;
	}
yy19:
	YYCURSOR = yyt1;
	{ a }
yy20:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy20;
		default: goto yy21;
	}
yy21:
	YYCURSOR -= 1;
	{ b }
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c':
			yyt1 = YYCURSOR;
			goto yy23;
		default: goto yy17;
	}
yy23:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c':
			yyt1 = YYCURSOR;
			goto yy23;
		default: goto yy24;
	}
yy24:
	z = yyt1;
	x = yyt1 - 1;
	y = yyt1 - 1;
	YYCURSOR = yyt1 - 1;
	{ c }
}


// trailing context, generic API

{
	YYCTYPE yych;
	if (lessthan(2)) fill(2);
	yych = peek();
	switch (yych) {
		case 'a':
			stagp(yyt1);
			goto yy27;
		case 'b': goto yy29;
		case 'c': goto yy31;
		default: goto yy26;
	}
yy26:
yy27:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			stagp(yyt1);
			goto yy27;
		default: goto yy28;
	}
yy28:
	restoretag(yyt1);
	{ a }
yy29:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'b': goto yy29;
		default: goto yy30;
	}
yy30:
	shift(-1);
	{ b }
yy31:
	skip();
	yych = peek();
	switch (yych) {
		case 'c':
			stagp(yyt1);
			goto yy32;
		default: goto yy26;
	}
yy32:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'c':
			stagp(yyt1);
			goto yy32;
		default: goto yy33;
	}
yy33:
	z = yyt1;
	x = yyt1;
	shiftstag(x, -1);
	y = yyt1;
	shiftstag(y, -1);
	restoretag(yyt1);
	shift(-1);
	{ c }
}


// trailing context (old-style), default API

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			YYCTXMARKER = YYCURSOR;
			goto yy36;
		case 'b': goto yy38;
		default: goto yy35;
	}
yy35:
yy36:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			YYCTXMARKER = YYCURSOR;
			goto yy36;
		default: goto yy37;
	}
yy37:
	YYCURSOR = YYCTXMARKER;
	{ a }
yy38:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) fill(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy38;
		default: goto yy39;
	}
yy39:
	YYCURSOR -= 1;
	{ b }
}


// trailing context (old-style), generic API

{
	YYCTYPE yych;
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			backupctx();
			goto yy42;
		case 'b': goto yy44;
		default: goto yy41;
	}
yy41:
yy42:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'a':
			backupctx();
			goto yy42;
		default: goto yy43;
	}
yy43:
	restorectx();
	{ a }
yy44:
	skip();
	if (lessthan(1)) fill(1);
	yych = peek();
	switch (yych) {
		case 'b': goto yy44;
		default: goto yy45;
	}
yy45:
	shift(-1);
	{ b }
}

config/tag_api_functions.re:25:20: warning: tag 'x' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:33:20: warning: tag 'x' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:41:20: warning: tag 'x' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:41:20: warning: tag 'y' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:41:20: warning: tag 'z' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:49:20: warning: tag 'x' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:49:20: warning: tag 'y' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:49:20: warning: tag 'z' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:57:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:58:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:59:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:57:25: warning: trailing context has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:59:25: warning: tag 'z' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:54:0: warning: control flow is undefined for strings that match 
	'[\x0-\x60\x64-\xFF]'
	'\x63 [\x0-\x62\x64-\xFF]'
, use default rule '*' [-Wundefined-control-flow]
config/tag_api_functions.re:66:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:67:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:68:25: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:66:25: warning: trailing context has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:68:25: warning: tag 'z' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:63:0: warning: control flow is undefined for strings that match 
	'[\x0-\x60\x64-\xFF]'
	'\x63 [\x0-\x62\x64-\xFF]'
, use default rule '*' [-Wundefined-control-flow]
config/tag_api_functions.re:75:12: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:76:12: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:75:12: warning: trailing context has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:72:0: warning: control flow is undefined for strings that match '[\x0-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
config/tag_api_functions.re:83:12: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:84:12: warning: rule matches empty string [-Wmatch-empty-string]
config/tag_api_functions.re:83:12: warning: trailing context has 2nd degree of nondeterminism [-Wnondeterministic-tags]
config/tag_api_functions.re:80:0: warning: control flow is undefined for strings that match '[\x0-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
