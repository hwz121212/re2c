/* Generated by re2c */
#line 1 "encodings/default_full_u_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -u --encoding-policy substitute

#line 6 "encodings/default_full_u_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x0000D7FF) goto yy1;
	if (yych <= 0x0000DFFF) goto yy2;
yy1:
	++YYCURSOR;
#line 4 "encodings/default_full_u_encoding_policy_substitute.re"
	{ return FULL; }
#line 17 "encodings/default_full_u_encoding_policy_substitute.c"
yy2:
	++YYCURSOR;
#line 3 "encodings/default_full_u_encoding_policy_substitute.re"
	{ return DEFAULT; }
#line 22 "encodings/default_full_u_encoding_policy_substitute.c"
}
#line 5 "encodings/default_full_u_encoding_policy_substitute.re"

