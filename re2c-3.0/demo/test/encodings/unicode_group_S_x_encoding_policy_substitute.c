/* Generated by re2c */
#line 1 "encodings/unicode_group_S_x_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy substitute
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
S:
	
#line 14 "encodings/unicode_group_S_x_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x2127) {
		if (yych <= 0x0D78) {
			if (yych <= 0x02ED) {
				if (yych <= 0x00AB) {
					if (yych <= '_') {
						if (yych <= '+') {
							if (yych == '$') goto yy3;
							if (yych >= '+') goto yy3;
						} else {
							if (yych <= '>') {
								if (yych >= '<') goto yy3;
							} else {
								if (yych == '^') goto yy3;
							}
						}
					} else {
						if (yych <= '~') {
							if (yych <= '{') {
								if (yych <= '`') goto yy3;
							} else {
								if (yych != '}') goto yy3;
							}
						} else {
							if (yych <= 0x00A6) {
								if (yych >= 0x00A2) goto yy3;
							} else {
								if (yych <= 0x00A7) goto yy1;
								if (yych <= 0x00A9) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x00D7) {
						if (yych <= 0x00B3) {
							if (yych == 0x00AD) goto yy1;
							if (yych <= 0x00B1) goto yy3;
						} else {
							if (yych <= 0x00B7) {
								if (yych <= 0x00B4) goto yy3;
							} else {
								if (yych <= 0x00B8) goto yy3;
								if (yych >= 0x00D7) goto yy3;
							}
						}
					} else {
						if (yych <= 0x02D1) {
							if (yych <= 0x00F7) {
								if (yych >= 0x00F7) goto yy3;
							} else {
								if (yych <= 0x02C1) goto yy1;
								if (yych <= 0x02C5) goto yy3;
							}
						} else {
							if (yych <= 0x02E4) {
								if (yych <= 0x02DF) goto yy3;
							} else {
								if (yych != 0x02EC) goto yy3;
							}
						}
					}
				}
			} else {
				if (yych <= 0x06DD) {
					if (yych <= 0x0481) {
						if (yych <= 0x0375) {
							if (yych <= 0x02EE) goto yy1;
							if (yych <= 0x02FF) goto yy3;
							if (yych >= 0x0375) goto yy3;
						} else {
							if (yych <= 0x0385) {
								if (yych >= 0x0384) goto yy3;
							} else {
								if (yych == 0x03F6) goto yy3;
							}
						}
					} else {
						if (yych <= 0x0608) {
							if (yych <= 0x058C) {
								if (yych <= 0x0482) goto yy3;
							} else {
								if (yych <= 0x058F) goto yy3;
								if (yych >= 0x0606) goto yy3;
							}
						} else {
							if (yych <= 0x060B) {
								if (yych >= 0x060B) goto yy3;
							} else {
								if (yych <= 0x060D) goto yy1;
								if (yych <= 0x060F) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x09F9) {
						if (yych <= 0x06FE) {
							if (yych <= 0x06E8) {
								if (yych <= 0x06DE) goto yy3;
							} else {
								if (yych <= 0x06E9) goto yy3;
								if (yych >= 0x06FD) goto yy3;
							}
						} else {
							if (yych <= 0x07F6) {
								if (yych >= 0x07F6) goto yy3;
							} else {
								if (yych <= 0x09F1) goto yy1;
								if (yych <= 0x09F3) goto yy3;
							}
						}
					} else {
						if (yych <= 0x0B70) {
							if (yych <= 0x0AF0) {
								if (yych <= 0x09FB) goto yy3;
							} else {
								if (yych <= 0x0AF1) goto yy3;
								if (yych >= 0x0B70) goto yy3;
							}
						} else {
							if (yych <= 0x0BFA) {
								if (yych >= 0x0BF3) goto yy3;
							} else {
								if (yych == 0x0C7F) goto yy3;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0x1B73) {
				if (yych <= 0x0FC5) {
					if (yych <= 0x0F17) {
						if (yych <= 0x0F00) {
							if (yych <= 0x0D79) goto yy3;
							if (yych == 0x0E3F) goto yy3;
						} else {
							if (yych <= 0x0F12) {
								if (yych <= 0x0F03) goto yy3;
							} else {
								if (yych != 0x0F14) goto yy3;
							}
						}
					} else {
						if (yych <= 0x0F35) {
							if (yych <= 0x0F1F) {
								if (yych >= 0x0F1A) goto yy3;
							} else {
								if (yych == 0x0F34) goto yy3;
							}
						} else {
							if (yych <= 0x0F37) {
								if (yych <= 0x0F36) goto yy3;
							} else {
								if (yych <= 0x0F38) goto yy3;
								if (yych >= 0x0FBE) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x138F) {
						if (yych <= 0x0FCF) {
							if (yych <= 0x0FC6) goto yy1;
							if (yych != 0x0FCD) goto yy3;
						} else {
							if (yych <= 0x0FD8) {
								if (yych >= 0x0FD5) goto yy3;
							} else {
								if (yych <= 0x109D) goto yy1;
								if (yych <= 0x109F) goto yy3;
							}
						}
					} else {
						if (yych <= 0x1940) {
							if (yych <= 0x17DA) {
								if (yych <= 0x1399) goto yy3;
							} else {
								if (yych <= 0x17DB) goto yy3;
								if (yych >= 0x1940) goto yy3;
							}
						} else {
							if (yych <= 0x19FF) {
								if (yych >= 0x19DE) goto yy3;
							} else {
								if (yych <= 0x1B60) goto yy1;
								if (yych <= 0x1B6A) goto yy3;
							}
						}
					}
				}
			} else {
				if (yych <= 0x207C) {
					if (yych <= 0x1FDF) {
						if (yych <= 0x1FBE) {
							if (yych <= 0x1B7C) goto yy3;
							if (yych == 0x1FBD) goto yy3;
						} else {
							if (yych <= 0x1FCC) {
								if (yych <= 0x1FC1) goto yy3;
							} else {
								if (yych <= 0x1FCF) goto yy3;
								if (yych >= 0x1FDD) goto yy3;
							}
						}
					} else {
						if (yych <= 0x2043) {
							if (yych <= 0x1FEF) {
								if (yych >= 0x1FED) goto yy3;
							} else {
								if (yych <= 0x1FFC) goto yy1;
								if (yych <= 0x1FFE) goto yy3;
							}
						} else {
							if (yych <= 0x2051) {
								if (yych <= 0x2044) goto yy3;
							} else {
								if (yych <= 0x2052) goto yy3;
								if (yych >= 0x207A) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x2109) {
						if (yych <= 0x20FF) {
							if (yych <= 0x208C) {
								if (yych >= 0x208A) goto yy3;
							} else {
								if (yych <= 0x209F) goto yy1;
								if (yych <= 0x20BD) goto yy3;
							}
						} else {
							if (yych <= 0x2102) {
								if (yych <= 0x2101) goto yy3;
							} else {
								if (yych != 0x2107) goto yy3;
							}
						}
					} else {
						if (yych <= 0x211D) {
							if (yych <= 0x2114) {
								if (yych >= 0x2114) goto yy3;
							} else {
								if (yych <= 0x2115) goto yy1;
								if (yych <= 0x2118) goto yy3;
							}
						} else {
							if (yych <= 0x2124) {
								if (yych <= 0x2123) goto yy3;
							} else {
								if (yych != 0x2126) goto yy3;
							}
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0x3229) {
			if (yych <= 0x2B73) {
				if (yych <= 0x23FF) {
					if (yych <= 0x2149) {
						if (yych <= 0x212E) {
							if (yych == 0x2129) goto yy3;
							if (yych >= 0x212E) goto yy3;
						} else {
							if (yych <= 0x213B) {
								if (yych >= 0x213A) goto yy3;
							} else {
								if (yych <= 0x213F) goto yy1;
								if (yych <= 0x2144) goto yy3;
							}
						}
					} else {
						if (yych <= 0x2307) {
							if (yych <= 0x214E) {
								if (yych <= 0x214D) goto yy3;
							} else {
								if (yych <= 0x214F) goto yy3;
								if (yych >= 0x2190) goto yy3;
							}
						} else {
							if (yych <= 0x2328) {
								if (yych >= 0x230C) goto yy3;
							} else {
								if (yych <= 0x232A) goto yy1;
								if (yych <= 0x23FA) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x27C4) {
						if (yych <= 0x249B) {
							if (yych <= 0x2426) goto yy3;
							if (yych <= 0x243F) goto yy1;
							if (yych <= 0x244A) goto yy3;
						} else {
							if (yych <= 0x24FF) {
								if (yych <= 0x24E9) goto yy3;
							} else {
								if (yych <= 0x2767) goto yy3;
								if (yych >= 0x2794) goto yy3;
							}
						}
					} else {
						if (yych <= 0x2998) {
							if (yych <= 0x27E5) {
								if (yych >= 0x27C7) goto yy3;
							} else {
								if (yych <= 0x27EF) goto yy1;
								if (yych <= 0x2982) goto yy3;
							}
						} else {
							if (yych <= 0x29DB) {
								if (yych <= 0x29D7) goto yy3;
							} else {
								if (yych <= 0x29FB) goto yy3;
								if (yych >= 0x29FE) goto yy3;
							}
						}
					}
				}
			} else {
				if (yych <= 0x3003) {
					if (yych <= 0x2CE4) {
						if (yych <= 0x2BB9) {
							if (yych <= 0x2B75) goto yy1;
							if (yych <= 0x2B95) goto yy3;
							if (yych >= 0x2B98) goto yy3;
						} else {
							if (yych <= 0x2BC8) {
								if (yych >= 0x2BBD) goto yy3;
							} else {
								if (yych <= 0x2BC9) goto yy1;
								if (yych <= 0x2BD1) goto yy3;
							}
						}
					} else {
						if (yych <= 0x2EF3) {
							if (yych <= 0x2E7F) {
								if (yych <= 0x2CEA) goto yy3;
							} else {
								if (yych != 0x2E9A) goto yy3;
							}
						} else {
							if (yych <= 0x2FD5) {
								if (yych >= 0x2F00) goto yy3;
							} else {
								if (yych <= 0x2FEF) goto yy1;
								if (yych <= 0x2FFB) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0x309A) {
						if (yych <= 0x3020) {
							if (yych <= 0x3011) {
								if (yych <= 0x3004) goto yy3;
							} else {
								if (yych <= 0x3013) goto yy3;
								if (yych >= 0x3020) goto yy3;
							}
						} else {
							if (yych <= 0x3037) {
								if (yych >= 0x3036) goto yy3;
							} else {
								if (yych <= 0x303D) goto yy1;
								if (yych <= 0x303F) goto yy3;
							}
						}
					} else {
						if (yych <= 0x319F) {
							if (yych <= 0x318F) {
								if (yych <= 0x309C) goto yy3;
							} else {
								if (yych <= 0x3191) goto yy3;
								if (yych >= 0x3196) goto yy3;
							}
						} else {
							if (yych <= 0x31E3) {
								if (yych >= 0x31C0) goto yy3;
							} else {
								if (yych <= 0x31FF) goto yy1;
								if (yych <= 0x321E) goto yy3;
							}
						}
					}
				}
			}
		} else {
			if (yych <= 0xD834) {
				if (yych <= 0xA721) {
					if (yych <= 0x32FE) {
						if (yych <= 0x325F) {
							if (yych <= 0x3247) goto yy3;
							if (yych == 0x3250) goto yy3;
						} else {
							if (yych <= 0x3289) {
								if (yych <= 0x327F) goto yy3;
							} else {
								if (yych <= 0x32B0) goto yy3;
								if (yych >= 0x32C0) goto yy3;
							}
						}
					} else {
						if (yych <= 0xA48F) {
							if (yych <= 0x33FF) {
								if (yych >= 0x3300) goto yy3;
							} else {
								if (yych <= 0x4DBF) goto yy1;
								if (yych <= 0x4DFF) goto yy3;
							}
						} else {
							if (yych <= 0xA6FF) {
								if (yych <= 0xA4C6) goto yy3;
							} else {
								if (yych <= 0xA716) goto yy3;
								if (yych >= 0xA720) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0xAB5B) {
						if (yych <= 0xA835) {
							if (yych <= 0xA78A) {
								if (yych >= 0xA789) goto yy3;
							} else {
								if (yych <= 0xA827) goto yy1;
								if (yych <= 0xA82B) goto yy3;
							}
						} else {
							if (yych <= 0xAA76) {
								if (yych <= 0xA839) goto yy3;
							} else {
								if (yych <= 0xAA79) goto yy3;
								if (yych >= 0xAB5B) goto yy3;
							}
						}
					} else {
						if (yych <= 0xD819) {
							if (yych <= 0xD800) {
								if (yych >= 0xD800) goto yy4;
							} else {
								if (yych == 0xD802) goto yy5;
							}
						} else {
							if (yych <= 0xD82E) {
								if (yych <= 0xD81A) goto yy6;
							} else {
								if (yych <= 0xD82F) goto yy7;
								if (yych >= 0xD834) goto yy8;
							}
						}
					}
				}
			} else {
				if (yych <= 0xFF03) {
					if (yych <= 0xFBB1) {
						if (yych <= 0xD83C) {
							if (yych <= 0xD835) goto yy9;
							if (yych <= 0xD83A) goto yy1;
							if (yych <= 0xD83B) goto yy10;
							goto yy11;
						} else {
							if (yych <= 0xD83E) {
								if (yych <= 0xD83D) goto yy12;
								goto yy13;
							} else {
								if (yych == 0xFB29) goto yy3;
							}
						}
					} else {
						if (yych <= 0xFE62) {
							if (yych <= 0xFDFB) {
								if (yych <= 0xFBC1) goto yy3;
							} else {
								if (yych <= 0xFDFD) goto yy3;
								if (yych >= 0xFE62) goto yy3;
							}
						} else {
							if (yych <= 0xFE66) {
								if (yych >= 0xFE64) goto yy3;
							} else {
								if (yych == 0xFE69) goto yy3;
							}
						}
					}
				} else {
					if (yych <= 0xFF5B) {
						if (yych <= 0xFF1E) {
							if (yych <= 0xFF0A) {
								if (yych <= 0xFF04) goto yy3;
							} else {
								if (yych <= 0xFF0B) goto yy3;
								if (yych >= 0xFF1C) goto yy3;
							}
						} else {
							if (yych <= 0xFF3E) {
								if (yych >= 0xFF3E) goto yy3;
							} else {
								if (yych == 0xFF40) goto yy3;
							}
						}
					} else {
						if (yych <= 0xFFE6) {
							if (yych <= 0xFF5D) {
								if (yych <= 0xFF5C) goto yy3;
							} else {
								if (yych <= 0xFF5E) goto yy3;
								if (yych >= 0xFFE0) goto yy3;
							}
						} else {
							if (yych <= 0xFFEE) {
								if (yych >= 0xFFE8) goto yy3;
							} else {
								if (yych <= 0xFFFB) goto yy1;
								if (yych <= 0xFFFD) goto yy3;
							}
						}
					}
				}
			}
		}
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_S_x_encoding_policy_substitute.re"
	{ return YYCURSOR == limit; }
#line 544 "encodings/unicode_group_S_x_encoding_policy_substitute.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_S_x_encoding_policy_substitute.re"
	{ goto S; }
#line 549 "encodings/unicode_group_S_x_encoding_policy_substitute.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDD8C) {
		if (yych <= 0xDD78) {
			if (yych <= 0xDD36) goto yy2;
			if (yych <= 0xDD3F) goto yy3;
			goto yy2;
		} else {
			if (yych <= 0xDD89) goto yy3;
			if (yych <= 0xDD8B) goto yy2;
			goto yy3;
		}
	} else {
		if (yych <= 0xDD9F) {
			if (yych <= 0xDD8F) goto yy2;
			if (yych <= 0xDD9B) goto yy3;
			goto yy2;
		} else {
			if (yych <= 0xDDA0) goto yy3;
			if (yych <= 0xDDCF) goto yy2;
			if (yych <= 0xDDFC) goto yy3;
			goto yy2;
		}
	}
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0xDC76) goto yy2;
	if (yych <= 0xDC78) goto yy3;
	if (yych == 0xDEC8) goto yy3;
	goto yy2;
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDF3B) goto yy2;
	if (yych <= 0xDF3F) goto yy3;
	if (yych == 0xDF45) goto yy3;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	if (yych == 0xDC9C) goto yy3;
	goto yy2;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDD84) {
		if (yych <= 0xDD28) {
			if (yych <= 0xDCF5) {
				if (yych <= 0xDBFF) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDCFF) goto yy2;
				if (yych <= 0xDD26) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDD69) {
				if (yych <= 0xDD64) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDD6C) goto yy3;
				if (yych <= 0xDD82) goto yy2;
				goto yy3;
			}
		}
	} else {
		if (yych <= 0xDDFF) {
			if (yych <= 0xDDA9) {
				if (yych <= 0xDD8B) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDDAD) goto yy2;
				if (yych <= 0xDDDD) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDE45) {
				if (yych <= 0xDE41) goto yy3;
				if (yych <= 0xDE44) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDEFF) goto yy2;
				if (yych <= 0xDF56) goto yy3;
				goto yy2;
			}
		}
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDF35) {
		if (yych <= 0xDEFA) {
			if (yych <= 0xDEC1) {
				if (yych <= 0xDEC0) goto yy2;
				goto yy3;
			} else {
				if (yych == 0xDEDB) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDF14) {
				if (yych <= 0xDEFB) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDF15) goto yy3;
				if (yych <= 0xDF34) goto yy2;
				goto yy3;
			}
		}
	} else {
		if (yych <= 0xDF88) {
			if (yych <= 0xDF4F) {
				if (yych <= 0xDF4E) goto yy2;
				goto yy3;
			} else {
				if (yych == 0xDF6F) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDFA9) {
				if (yych <= 0xDF89) goto yy3;
				if (yych <= 0xDFA8) goto yy2;
				goto yy3;
			} else {
				if (yych == 0xDFC3) goto yy3;
				goto yy2;
			}
		}
	}
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDEEF) goto yy2;
	if (yych <= 0xDEF1) goto yy3;
	goto yy2;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0xDD6F) {
		if (yych <= 0xDCBF) {
			if (yych <= 0xDC93) {
				if (yych <= 0xDBFF) goto yy2;
				if (yych <= 0xDC2B) goto yy3;
				if (yych <= 0xDC2F) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDC9F) goto yy2;
				if (yych <= 0xDCAE) goto yy3;
				if (yych <= 0xDCB0) goto yy2;
				goto yy3;
			}
		} else {
			if (yych <= 0xDCF5) {
				if (yych <= 0xDCC0) goto yy2;
				if (yych == 0xDCD0) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDD2E) {
					if (yych <= 0xDD0F) goto yy2;
					goto yy3;
				} else {
					if (yych <= 0xDD2F) goto yy2;
					if (yych <= 0xDD6B) goto yy3;
					goto yy2;
				}
			}
		}
	} else {
		if (yych <= 0xDE51) {
			if (yych <= 0xDE0F) {
				if (yych <= 0xDD9A) goto yy3;
				if (yych <= 0xDDE5) goto yy2;
				if (yych <= 0xDE02) goto yy3;
				goto yy2;
			} else {
				if (yych <= 0xDE3F) {
					if (yych <= 0xDE3A) goto yy3;
					goto yy2;
				} else {
					if (yych <= 0xDE48) goto yy3;
					if (yych <= 0xDE4F) goto yy2;
					goto yy3;
				}
			}
		} else {
			if (yych <= 0xDF7D) {
				if (yych <= 0xDEFF) goto yy2;
				if (yych <= 0xDF2C) goto yy3;
				if (yych <= 0xDF2F) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDFCE) {
					if (yych <= 0xDF7F) goto yy2;
					goto yy3;
				} else {
					if (yych <= 0xDFD3) goto yy2;
					if (yych <= 0xDFF7) goto yy3;
					goto yy2;
				}
			}
		}
	}
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0xDE42) {
		if (yych <= 0xDD4F) {
			if (yych <= 0xDCFE) {
				if (yych <= 0xDBFF) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDCFF) goto yy2;
				if (yych <= 0xDD4A) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDD7A) {
				if (yych <= 0xDD79) goto yy3;
				goto yy2;
			} else {
				if (yych == 0xDDA4) goto yy2;
				goto yy3;
			}
		}
	} else {
		if (yych <= 0xDEEF) {
			if (yych <= 0xDECF) {
				if (yych <= 0xDE44) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDEDF) goto yy2;
				if (yych <= 0xDEEC) goto yy3;
				goto yy2;
			}
		} else {
			if (yych <= 0xDF73) {
				if (yych <= 0xDEF3) goto yy3;
				if (yych <= 0xDEFF) goto yy2;
				goto yy3;
			} else {
				if (yych <= 0xDF7F) goto yy2;
				if (yych <= 0xDFD4) goto yy3;
				goto yy2;
			}
		}
	}
yy13:
	yych = *++YYCURSOR;
	if (yych <= 0xDC4F) {
		if (yych <= 0xDC0B) {
			if (yych <= 0xDBFF) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDC0F) goto yy2;
			if (yych <= 0xDC47) goto yy3;
			goto yy2;
		}
	} else {
		if (yych <= 0xDC87) {
			if (yych <= 0xDC59) goto yy3;
			if (yych <= 0xDC5F) goto yy2;
			goto yy3;
		} else {
			if (yych <= 0xDC8F) goto yy2;
			if (yych <= 0xDCAD) goto yy3;
			goto yy2;
		}
	}
}
#line 15 "encodings/unicode_group_S_x_encoding_policy_substitute.re"

}
static const unsigned int chars_S [] = {0x24,0x24,  0x2b,0x2b,  0x3c,0x3e,  0x5e,0x5e,  0x60,0x60,  0x7c,0x7c,  0x7e,0x7e,  0xa2,0xa6,  0xa8,0xa9,  0xac,0xac,  0xae,0xb1,  0xb4,0xb4,  0xb8,0xb8,  0xd7,0xd7,  0xf7,0xf7,  0x2c2,0x2c5,  0x2d2,0x2df,  0x2e5,0x2eb,  0x2ed,0x2ed,  0x2ef,0x2ff,  0x375,0x375,  0x384,0x385,  0x3f6,0x3f6,  0x482,0x482,  0x58d,0x58f,  0x606,0x608,  0x60b,0x60b,  0x60e,0x60f,  0x6de,0x6de,  0x6e9,0x6e9,  0x6fd,0x6fe,  0x7f6,0x7f6,  0x9f2,0x9f3,  0x9fa,0x9fb,  0xaf1,0xaf1,  0xb70,0xb70,  0xbf3,0xbfa,  0xc7f,0xc7f,  0xd79,0xd79,  0xe3f,0xe3f,  0xf01,0xf03,  0xf13,0xf13,  0xf15,0xf17,  0xf1a,0xf1f,  0xf34,0xf34,  0xf36,0xf36,  0xf38,0xf38,  0xfbe,0xfc5,  0xfc7,0xfcc,  0xfce,0xfcf,  0xfd5,0xfd8,  0x109e,0x109f,  0x1390,0x1399,  0x17db,0x17db,  0x1940,0x1940,  0x19de,0x19ff,  0x1b61,0x1b6a,  0x1b74,0x1b7c,  0x1fbd,0x1fbd,  0x1fbf,0x1fc1,  0x1fcd,0x1fcf,  0x1fdd,0x1fdf,  0x1fed,0x1fef,  0x1ffd,0x1ffe,  0x2044,0x2044,  0x2052,0x2052,  0x207a,0x207c,  0x208a,0x208c,  0x20a0,0x20bd,  0x2100,0x2101,  0x2103,0x2106,  0x2108,0x2109,  0x2114,0x2114,  0x2116,0x2118,  0x211e,0x2123,  0x2125,0x2125,  0x2127,0x2127,  0x2129,0x2129,  0x212e,0x212e,  0x213a,0x213b,  0x2140,0x2144,  0x214a,0x214d,  0x214f,0x214f,  0x2190,0x2307,  0x230c,0x2328,  0x232b,0x23fa,  0x2400,0x2426,  0x2440,0x244a,  0x249c,0x24e9,  0x2500,0x2767,  0x2794,0x27c4,  0x27c7,0x27e5,  0x27f0,0x2982,  0x2999,0x29d7,  0x29dc,0x29fb,  0x29fe,0x2b73,  0x2b76,0x2b95,  0x2b98,0x2bb9,  0x2bbd,0x2bc8,  0x2bca,0x2bd1,  0x2ce5,0x2cea,  0x2e80,0x2e99,  0x2e9b,0x2ef3,  0x2f00,0x2fd5,  0x2ff0,0x2ffb,  0x3004,0x3004,  0x3012,0x3013,  0x3020,0x3020,  0x3036,0x3037,  0x303e,0x303f,  0x309b,0x309c,  0x3190,0x3191,  0x3196,0x319f,  0x31c0,0x31e3,  0x3200,0x321e,  0x322a,0x3247,  0x3250,0x3250,  0x3260,0x327f,  0x328a,0x32b0,  0x32c0,0x32fe,  0x3300,0x33ff,  0x4dc0,0x4dff,  0xa490,0xa4c6,  0xa700,0xa716,  0xa720,0xa721,  0xa789,0xa78a,  0xa828,0xa82b,  0xa836,0xa839,  0xaa77,0xaa79,  0xab5b,0xab5b,  0xfb29,0xfb29,  0xfbb2,0xfbc1,  0xfdfc,0xfdfd,  0xfe62,0xfe62,  0xfe64,0xfe66,  0xfe69,0xfe69,  0xff04,0xff04,  0xff0b,0xff0b,  0xff1c,0xff1e,  0xff3e,0xff3e,  0xff40,0xff40,  0xff5c,0xff5c,  0xff5e,0xff5e,  0xffe0,0xffe6,  0xffe8,0xffee,  0xfffc,0xfffd,  0x10137,0x1013f,  0x10179,0x10189,  0x1018c,0x1018c,  0x10190,0x1019b,  0x101a0,0x101a0,  0x101d0,0x101fc,  0x10877,0x10878,  0x10ac8,0x10ac8,  0x16b3c,0x16b3f,  0x16b45,0x16b45,  0x1bc9c,0x1bc9c,  0x1d000,0x1d0f5,  0x1d100,0x1d126,  0x1d129,0x1d164,  0x1d16a,0x1d16c,  0x1d183,0x1d184,  0x1d18c,0x1d1a9,  0x1d1ae,0x1d1dd,  0x1d200,0x1d241,  0x1d245,0x1d245,  0x1d300,0x1d356,  0x1d6c1,0x1d6c1,  0x1d6db,0x1d6db,  0x1d6fb,0x1d6fb,  0x1d715,0x1d715,  0x1d735,0x1d735,  0x1d74f,0x1d74f,  0x1d76f,0x1d76f,  0x1d789,0x1d789,  0x1d7a9,0x1d7a9,  0x1d7c3,0x1d7c3,  0x1eef0,0x1eef1,  0x1f000,0x1f02b,  0x1f030,0x1f093,  0x1f0a0,0x1f0ae,  0x1f0b1,0x1f0bf,  0x1f0c1,0x1f0cf,  0x1f0d1,0x1f0f5,  0x1f110,0x1f12e,  0x1f130,0x1f16b,  0x1f170,0x1f19a,  0x1f1e6,0x1f202,  0x1f210,0x1f23a,  0x1f240,0x1f248,  0x1f250,0x1f251,  0x1f300,0x1f32c,  0x1f330,0x1f37d,  0x1f380,0x1f3ce,  0x1f3d4,0x1f3f7,  0x1f400,0x1f4fe,  0x1f500,0x1f54a,  0x1f550,0x1f579,  0x1f57b,0x1f5a3,  0x1f5a5,0x1f642,  0x1f645,0x1f6cf,  0x1f6e0,0x1f6ec,  0x1f6f0,0x1f6f3,  0x1f700,0x1f773,  0x1f780,0x1f7d4,  0x1f800,0x1f80b,  0x1f810,0x1f847,  0x1f850,0x1f859,  0x1f860,0x1f887,  0x1f890,0x1f8ad,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_S = new unsigned int [12398];
	YYCTYPE * s = (YYCTYPE *) buffer_S;
	unsigned int buffer_len = encode_utf16 (chars_S, sizeof (chars_S) / sizeof (unsigned int), buffer_S);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_S[i];
	if (!scan (s, s + buffer_len))
		printf("test 'S' failed\n");
	delete [] buffer_S;
	return 0;
}
