/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --case-insensitive

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'A':
		case 'a': goto yy2;
		case 'B':
		case 'b': goto yy3;
		default: goto yy1;
	}
yy1:
yy2:
	++YYCURSOR;
	{return 'a';}
yy3:
	++YYCURSOR;
	{return 'b';}
}

}
casing-flags.re:2:0: warning: control flow is undefined for strings that match '[\x0-\x40\x43-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
