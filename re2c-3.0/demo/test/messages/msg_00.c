/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --location-format msvc

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
yy2:
	++YYCURSOR;
	{}
}

messages/msg_00.re(2,0): warning: control flow is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]