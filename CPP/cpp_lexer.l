%option noyywrap

%{
// DEFINATIONS
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include "SymbolTable.cpp"
#include "cpp_syntax.tab.h"
#define YYSTYPE yylval

using namespace std;

extern int error_count ;
extern int line_count ;
extern  FILE *errors;
//extern FILE *fp;



void IncLine()
{
	line_count++;
}

void IncError()
{
	error_count++;
}






%}


Letter [a-zA-Z]
Digit [0-9]
Newline [\n]
Char [ -~]{-}['\\]
WhiteSpace [ \t\f\r\v]

%%



{WhiteSpace}+ {
	// ignore white space
}

{Newline} {
	IncLine();
}

 



"if"		{
			 return IF;
		}
"else"		{
			return ELSE;
		}
"for"		{
			return FOR;
		}
"while"		{
			return WHILE;
		}
"do"		{
			return DO;
		}
"break"		{
			return BREAK;
		}
"int"		{
			return INT;
		}
"char"		{
			return CHAR;
		}
"float"		{ 
			return FLOAT;
		}
"double"		{
			return DOUBLE;
		}
"void"		{ 
			return VOID;
		}
"return"		{
			return RETURN;
		}
"switch"		{
			return SWITCH;
		}
"case"		{
			return CASE;
		}
"default"		{
			return DEFAULT;
		}
"continue"	{
			return CONTINUE;
		}

"println"	{
			return PRINTLN;
		}



"+" |
"-"	{
			SymbolInfo *ss = new  SymbolInfo(yytext, "ADDOP");
			yylval.s = ss;
			return ADDOP;
		}

[*/%]		{
			SymbolInfo *ss = new  SymbolInfo(yytext, "MULOP");
			yylval.s = ss;
			return MULOP;
		}

("++")		{
			return INCOP;
		}
"--"	 	{
			return DECOP;
		}

("<=")|[<>]|(">=")|("==")|("!=")		{
			SymbolInfo *ss = new  SymbolInfo(yytext, "RELOP");
			yylval.s = ss;
			return RELOP;
		}

[=]		{
			return ASSIGNOP;
		}
("&&")|("||")		{
			SymbolInfo *ss = new  SymbolInfo(yytext, "LOGICOP");
			yylval.s = ss;
			return LOGICOP;
		}


"!"		{return NOT; }
"(" 	{return LPAREN;}
")" 	{return RPAREN;}
"{" 	{return LCURL;}
"}" 	{return RCURL;}
"[" 	{return LTHIRD;}
"]" 	{return RTHIRD;}

","		{
			return COMMA;
		}
";"		{
			return SEMICOLON;
		}






{Digit}+ 	{
				SymbolInfo *ss = new  SymbolInfo(yytext, "CONST_INT");
				yylval.s = ss;
				return CONST_INT;
	}

{Digit}*"."({Digit}+([E][-]?{Digit}+)?) {
				SymbolInfo *ss = new  SymbolInfo(yytext, "CONST_FLOAT");
				yylval.s = ss;
				return CONST_FLOAT;		
}

"'"{Char}"'" {
				SymbolInfo *ss = new  SymbolInfo(yytext, "CONST_CHAR");
				yylval.s = ss;
				return CONST_CHAR;
	
}






({Letter}|_)({Letter}|{Digit}|_)*	{
				SymbolInfo *ss = new  SymbolInfo(yytext, "ID");
				yylval.s = ss;
				return ID;
}




%%
