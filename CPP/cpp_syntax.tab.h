/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CPP_SYNTAX_TAB_H_INCLUDED
# define YY_YY_CPP_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PREPROCESSOR = 258,            /* PREPROCESSOR  */
    KEYWORD = 259,                 /* KEYWORD  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    NUMBER = 261,                  /* NUMBER  */
    HEXADECIMAL = 262,             /* HEXADECIMAL  */
    BINARY = 263,                  /* BINARY  */
    OCTAL = 264,                   /* OCTAL  */
    FLOAT = 265,                   /* FLOAT  */
    STRING_LITERAL = 266,          /* STRING_LITERAL  */
    CHAR_LITERAL = 267,            /* CHAR_LITERAL  */
    RELATIONAL_OP = 268,           /* RELATIONAL_OP  */
    ARITHMETIC_OP = 269,           /* ARITHMETIC_OP  */
    ASSIGNMENT_OP = 270,           /* ASSIGNMENT_OP  */
    LOGICAL_OP = 271,              /* LOGICAL_OP  */
    BITWISE_OP = 272,              /* BITWISE_OP  */
    LPAREN = 273,                  /* LPAREN  */
    RPAREN = 274,                  /* RPAREN  */
    LBRACE = 275,                  /* LBRACE  */
    RBRACE = 276,                  /* RBRACE  */
    LBRACKET = 277,                /* LBRACKET  */
    RBRACKET = 278,                /* RBRACKET  */
    SEMICOLON = 279,               /* SEMICOLON  */
    COMMA = 280,                   /* COMMA  */
    COLON = 281,                   /* COLON  */
    SCOPE_RESOLUTION = 282,        /* SCOPE_RESOLUTION  */
    TERNARY = 283,                 /* TERNARY  */
    ELLIPSIS = 284,                /* ELLIPSIS  */
    SYMBOL = 285,                  /* SYMBOL  */
    DOT_OP = 286,                  /* DOT_OP  */
    ARROW_OP = 287,                /* ARROW_OP  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    WHILE = 290,                   /* WHILE  */
    FOR = 291,                     /* FOR  */
    RETURN = 292                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CPP_SYNTAX_TAB_H_INCLUDED  */
