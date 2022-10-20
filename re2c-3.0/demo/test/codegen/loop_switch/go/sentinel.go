// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --loop-switch -i
package main

import "testing"

// expect a null-terminated string
func lex(str string) int {
	var cursor int
	count := 0
loop:
	
{
	var yych byte
	yystate := 0
yyl:
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue yyl
			case ' ':
				yystate = 3
				continue yyl
			case 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z':
				yystate = 5
				continue yyl
			default:
				yystate = 2
				continue yyl
			}
		case 1:
			{ return count }
		case 2:
			{ return -1 }
		case 3:
			yych = str[cursor]
			switch (yych) {
			case ' ':
				cursor += 1
				yystate = 3
				continue yyl
			default:
				yystate = 4
				continue yyl
			}
		case 4:
			{ goto loop }
		case 5:
			yych = str[cursor]
			switch (yych) {
			case 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z':
				cursor += 1
				yystate = 5
				continue yyl
			default:
				yystate = 6
				continue yyl
			}
		case 6:
			{ count += 1; goto loop }
		default:
			panic("internal lexer error")
		}
	}
}

}

func TestLex(t *testing.T) {
	var tests = []struct {
		res int
		str string
	}{
		{0, "\000"},
		{3, "one two three\000"},
		{-1, "f0ur\000"},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			res := lex(x.str)
			if res != x.res {
				t.Errorf("got %d, want %d", res, x.res)
			}
		})
	}
}