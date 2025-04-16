%{
#include "cpp_syntax.tab.h"
#include <stdio.h>

extern int yylval;
extern FILE *yyin;
void yyerror(const char *s);

int yylineno = 1;
%}

%option noyywrap

%%

\n  { yylineno++; }

"alignas"|"alignof"|"and"|"and_eq"|"asm"|"auto"|"bitand"|"bitor"|"bool"|"break"|"case"|"catch"|"char"|"class"|"compl"|"const"|"constexpr"|"const_cast"|"continue"|"decltype"|"default"|"delete"|"do"|"double"|"dynamic_cast"|"else"|"enum"|"explicit"|"export"|"extern"|"false"|"float"|"for"|"friend"|"goto"|"if"|"inline"|"int"|"long"|"mutable"|"namespace"|"new"|"noexcept"|"not"|"not_eq"|"nullptr"|"operator"|"or"|"or_eq"|"private"|"protected"|"public"|"register"|"reinterpret_cast"|"return"|"short"|"signed"|"sizeof"|"static"|"static_assert"|"static_cast"|"struct"|"switch"|"template"|"this"|"thread_local"|"throw"|"true"|"try"|"typedef"|"typeid"|"typename"|"union"|"unsigned"|"using"|"virtual"|"void"|"volatile"|"wchar_t"|"while"|"xor"|"xor_eq" { return KEYWORD; }

"#include"|"#define" { return PREPROCESSOR; }

[a-zA-Z_][a-zA-Z0-9_]*      { return IDENTIFIER; }
[0-9]+                      { return NUMBER; }
0[xX][0-9a-fA-F]+           { return HEXADECIMAL; }
0b[01]+                     { return BINARY; }
\b0[0-7]+[uUlL]*\b          { return OCTAL; }
[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?|\.[0-9]+([eE][-+]?[0-9]+)? { return FLOAT; }

\"([^\\\n]|(\\.))*?\"       { return STRING_LITERAL; }
\'([^\\]|(\\.))\'           { return CHAR_LITERAL; }

"=="|"!="|"<="|">="|"<"|">" { return RELATIONAL_OP; }
"="|"+"|"-"|"*"|"/"|"%"|"++"|"--" { return ARITHMETIC_OP; }
"+="|"-="|"*="|"/="|"%="    { return ASSIGNMENT_OP; }
"&&"|"||"|"!"               { return LOGICAL_OP; }
"&"|"|"|"^"|"~"             { return BITWISE_OP; }
"->"                        { return ARROW_OP; }
"."                         { return DOT_OP; }

"("   { return LPAREN; }
")"   { return RPAREN; }
"{"   { return LBRACE; }
"}"   { return RBRACE; }
"["   { return LBRACKET; }
"]"   { return RBRACKET; }
";"   { return SEMICOLON; }
","   { return COMMA; }
":"   { return COLON; }
"::"  { return SCOPE_RESOLUTION; }
"?"   { return TERNARY; }
"..." { return ELLIPSIS; }

[ \t]+  { }

.  { 
    printf("Lexical error at line %d: Unexpected character '%c'\n", yylineno, yytext[0]);
    return SYMBOL; 
}

%%
