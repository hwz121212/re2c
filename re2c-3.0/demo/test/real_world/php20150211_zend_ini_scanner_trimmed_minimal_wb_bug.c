/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -iwb

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	static const unsigned char yybm[] = {
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		128,   0,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
		 64,  64,  64,  64,  64,  64,  64,  64, 
	};
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych == '1') goto yy2;
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != '1') goto yy4;
yy1:
	{ default action }
yy2:
	++YYCURSOR;
	goto yy1;
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy4:
	if (yych & ~0xFF) {
		goto yy3;
	} else if (yybm[0+yych] & 64) {
		goto yy3;
	}
	if (yych <= '0') goto yy5;
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy1;
	} else {
		goto yy6;
	}
yy5:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych & ~0xFF) {
		goto yy3;
	} else if (yybm[0+yych] & 64) {
		goto yy3;
	}
	if (yych <= '0') goto yy5;
yy6:
	{ action }
}
