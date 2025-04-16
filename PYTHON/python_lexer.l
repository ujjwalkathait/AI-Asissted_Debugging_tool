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

"#".*                     {/* Ignore single-line comments */}


"\"\"\""(.)*?"\"\"\""     { printToken("STRING_LITERAL", yytext); }
"\'\'\'"(.)*?"\'\'\'"     { printToken("STRING_LITERAL", yytext); }

"False"|"None"|"True"|"and"|"as"|"assert"|"async"|"await"|"break"|"class"|"continue"|"def"|"del"|"elif"|"else"|"except"|"finally"|"for"|"from"|"global"|"if"|"import"|"in"|"is"|"lambda"|"nonlocal"|"not"|"or"|"pass"|"raise"|"return"|"try"|"while"|"with"|"yield"|"match"|"case"|"int"|"float"|"str"|"bool"|"bytes"|"complex"|"dict"|"list"|"set"|"tuple"|"object"|"type"|"super"|"range"|"enumerate"|"filter"|"map"|"zip" { printToken("KEYWORD", yytext); }


"@[a-zA-Z_][a-zA-Z0-9_]*" { printToken("DECORATOR", yytext); }



[_a-zA-Z][_a-zA-Z0-9]*    { printToken("IDENTIFIER", yytext); }
[0-9][0-9_]*              { printToken("NUMBER", yytext); }
0[xX][0-9a-fA-F_]+        { printToken("HEXADECIMAL", yytext); }
0b[01_]+                  { printToken("BINARY", yytext); }
0o[0-7_]+                 { printToken("OCTAL", yytext); }
[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?|\.[0-9]+([eE][-+]?[0-9]+)? { printToken("FLOAT", yytext); }



"f\"([^\\\n]|(\\.))*?\"" | "F\"([^\\\n]|(\\.))*?\"" { printToken("F-STRING", yytext); }
"f\'([^\\\n]|(\\.))*?\'" | "F\'([^\\\n]|(\\.))*?\'" { printToken("F-STRING", yytext); }
\"([^\\\n]|(\\.))*?\"                               { printToken("STRING_LITERAL", yytext); }
\'([^\\\n]|(\\.))*?\'                               { printToken("STRING_LITERAL", yytext); }



"=="|"!="|"<="|">="|"<"|">"         { printToken("RELATIONAL OPERATOR", yytext); }
"="|"+="|"-="|"*="|"/="|"%="        { printToken("ASSIGNMENT OPERATOR", yytext); }
"+"|"-"|"*"|"/"|"%"|"**"            { printToken("ARITHMETIC OPERATOR", yytext); }
"//"                                { printToken("FLOOR DIVISION", yytext); }
"&"|"|"|"^"|"~"                     { printToken("BITWISE OPERATOR", yytext); }



"..."     { printToken("ELLIPSIS", yytext); }
":"       { printToken("COLON", yytext); }
"?"       { printToken("TERNARY", yytext); }


"(" | ")" | "{" | "}" | "[" | "]" | ";" | "," | "." { printToken("SPECIAL SYMBOL", yytext); }

. { printToken("UNKNOWN TOKEN", yytext); }

%%

int main() {
    yylex();
    return 0;
}
