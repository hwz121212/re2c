/* Generated by re2c */
#line 1 "input5.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "input5.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
#line 5 "input5.re"
	{ return 1; }
#line 19 "input5.c"
yy2:
	++YYCURSOR;
#line 4 "input5.re"
	{ return 0; }
#line 24 "input5.c"
}
#line 7 "input5.re"
