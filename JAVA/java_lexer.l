%{
#include <iostream>
#include <cstring>
using namespace std;

void printToken(const char* type, const char* value) 
{
    cout << "<" << type << ", " << value << ">" << endl;
}
%}

%option noyywrap

%%

[ \t\r\n]+                {/* Ignore whitespace */}
"//".*                     {/* Ignore single-line comments */}
"/*"([^*]|\*+[^*/])*\*+"/" {/* Ignore multi-line comments */}



"\"([^\\\n]|(\\.))*?\""   { printToken("STRING_LITERAL", yytext); }
"\'([^\\\n]|(\\.))*?\'"   { printToken("CHAR_LITERAL", yytext); }



"abstract"|"assert"|"boolean"|"break"|"byte"|"case"|"catch"|"char"|"class"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"goto"|"if"|"implements"|"import"|"instanceof"|"int"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"public"|"return"|"short"|"static"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"void"|"volatile"|"while" { printToken("KEYWORD", yytext); }



[_a-zA-Z][_a-zA-Z0-9]*    { printToken("IDENTIFIER", yytext); }


[0-9][0-9_]*              { printToken("NUMBER", yytext); }
0[xX][0-9a-fA-F_]+        { printToken("HEXADECIMAL", yytext); }
0b[01_]+                  { printToken("BINARY", yytext); }
0o[0-7_]+                 { printToken("OCTAL", yytext); }
[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?|\.[0-9]+([eE][-+]?[0-9]+)? { printToken("FLOAT", yytext); }



"=="|"!="|"<="|">="|"<"|">"     { printToken("RELATIONAL OPERATOR", yytext); }
"="|"+="|"-="|"*="|"/="|"%="    { printToken("ASSIGNMENT OPERATOR", yytext); }
"+"|"-"|"*"|"/"|"%"|"**"        { printToken("ARITHMETIC OPERATOR", yytext); }
"&"|"|"|"^"|"~"                 { printToken("BITWISE OPERATOR", yytext); }



"..."        { printToken("ELLIPSIS", yytext); }
":"          { printToken("COLON", yytext); }
"?"          { printToken("TERNARY", yytext); }



"(" | ")" | "{" | "}" | "[" | "]" | ";" | "," | "." { printToken("SPECIAL SYMBOL", yytext); }


. { printToken("UNKNOWN TOKEN", yytext); }

%%

int main() {
    yylex();
    return 0;
}
