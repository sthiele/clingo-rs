/* Generated by re2c 1.1.1 on Fri Jan  4 16:18:37 2019 */
#line 1 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
// {{{ MIT License

// Copyright 2017 Roland Kaminski

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

// }}}

#define YYCTYPE     char
#define YYCURSOR    cursor()
#define YYLIMIT     limit()
#define YYMARKER    marker()
#define YYCTXMARKER ctxmarker()
#define YYFILL(n)   {fill(n);}

#line 44 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"


int Gringo::Input::GroundTermParser::lex_impl(void *pValue, Logger &log) {
start:
    start();
    auto &value = *static_cast<Gringo::Input::GroundTermGrammar::parser::semantic_type*>(pValue);
    
#line 43 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy4;
	case '\n':	goto yy7;
	case '"':	goto yy9;
	case '#':	goto yy10;
	case '&':	goto yy11;
	case '\'':
	case '_':	goto yy13;
	case '(':	goto yy14;
	case ')':	goto yy16;
	case '*':	goto yy18;
	case '+':	goto yy20;
	case ',':	goto yy22;
	case '-':	goto yy24;
	case '/':	goto yy26;
	case '0':	goto yy28;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy30;
	case '?':	goto yy32;
	case '\\':	goto yy34;
	case '^':	goto yy36;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	case '|':	goto yy41;
	case '~':	goto yy43;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 74 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ lexerError(string(), log); goto start; }
#line 114 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 51 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ goto start; }
#line 128 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy7:
	++YYCURSOR;
#line 52 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ if(eof()) return 0; step(); goto start; }
#line 133 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy9:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy3;
	default:	goto yy46;
	}
yy10:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'i':	goto yy51;
	case 's':	goto yy52;
	default:	goto yy3;
	}
yy11:
	++YYCURSOR;
#line 68 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::AND; }
#line 153 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy13:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\'':
	case '_':	goto yy53;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy3;
	}
yy14:
	++YYCURSOR;
#line 60 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::LPAREN; }
#line 192 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy16:
	++YYCURSOR;
#line 61 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::RPAREN; }
#line 197 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':	goto yy55;
	default:	goto yy19;
	}
yy19:
#line 66 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::MUL; }
#line 207 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy20:
	++YYCURSOR;
#line 62 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::ADD; }
#line 212 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy22:
	++YYCURSOR;
#line 72 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::COMMA; }
#line 217 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy24:
	++YYCURSOR;
#line 63 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SUB; }
#line 222 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy26:
	++YYCURSOR;
#line 67 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SLASH; }
#line 227 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy28:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':	goto yy57;
	case 'o':	goto yy58;
	case 'x':	goto yy59;
	default:	goto yy29;
	}
yy29:
#line 57 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ value.num = integer(); return GroundTermGrammar::parser::token::NUMBER; }
#line 240 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy30:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy30;
	default:	goto yy29;
	}
yy32:
	++YYCURSOR;
#line 71 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::QUESTION; }
#line 262 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy34:
	++YYCURSOR;
#line 65 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::MOD; }
#line 267 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy36:
	++YYCURSOR;
#line 69 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::XOR; }
#line 272 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy38:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy40;
	}
yy40:
#line 56 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ value.str = String(string()).c_str(); return GroundTermGrammar::parser::token::IDENTIFIER; }
#line 347 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy41:
	++YYCURSOR;
#line 73 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::VBAR; }
#line 352 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy43:
	++YYCURSOR;
#line 70 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::BNOT; }
#line 357 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy45:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy46:
	switch (yych) {
	case '\n':	goto yy47;
	case '"':	goto yy48;
	case '\\':	goto yy50;
	default:	goto yy45;
	}
yy47:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy3;
	case 1: 	goto yy29;
	case 2: 	goto yy69;
	default:	goto yy71;
	}
yy48:
	++YYCURSOR;
#line 58 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ value.str = String(unquote(string(1, 1)).c_str()).c_str(); return GroundTermGrammar::parser::token::STRING; }
#line 381 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy50:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\\':
	case 'n':	goto yy45;
	default:	goto yy47;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy60;
	default:	goto yy47;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy61;
	default:	goto yy47;
	}
yy53:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\'':
	case '_':	goto yy53;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy47;
	}
yy55:
	++YYCURSOR;
#line 64 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::POW; }
#line 443 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':	goto yy62;
	default:	goto yy47;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy64;
	default:	goto yy47;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy66;
	default:	goto yy47;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'f':	goto yy68;
	default:	goto yy47;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'p':	goto yy70;
	default:	goto yy47;
	}
yy62:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':	goto yy62;
	default:	goto yy29;
	}
yy64:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy64;
	default:	goto yy29;
	}
yy66:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy66;
	default:	goto yy29;
	}
yy68:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'i':	goto yy72;
	default:	goto yy69;
	}
yy69:
#line 53 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::INFIMUM; }
#line 564 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy70:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'r':	goto yy73;
	default:	goto yy71;
	}
yy71:
#line 54 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SUPREMUM; }
#line 575 "/home/sthiele/Projects/clingo/mybuild/libgringo//src/input/groundtermlexer.hh"
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy74;
	default:	goto yy47;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy75;
	default:	goto yy47;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy76;
	default:	goto yy47;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy77;
	default:	goto yy47;
	}
yy76:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy78;
	default:	goto yy47;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy79;
	default:	goto yy47;
	}
yy78:
	++YYCURSOR;
	goto yy69;
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy80;
	default:	goto yy47;
	}
yy80:
	++YYCURSOR;
	goto yy71;
}
#line 75 "/home/sthiele/Projects/clingo/libgringo//src/input/groundtermlexer.xh"

    assert(false);
    return 0;
}

#undef YYCTYPE
#undef YYCURSOR
#undef YYLIMIT
#undef YYMARKER
#undef YYFILL
