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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    WHILE = 261,                   /* WHILE  */
    DO = 262,                      /* DO  */
    BREAK = 263,                   /* BREAK  */
    STRING = 264,                  /* STRING  */
    ID = 265,                      /* ID  */
    PRINTLN = 266,                 /* PRINTLN  */
    INT = 267,                     /* INT  */
    FLOAT = 268,                   /* FLOAT  */
    CHAR = 269,                    /* CHAR  */
    DOUBLE = 270,                  /* DOUBLE  */
    VOID = 271,                    /* VOID  */
    RETURN = 272,                  /* RETURN  */
    SWITCH = 273,                  /* SWITCH  */
    CASE = 274,                    /* CASE  */
    DEFAULT = 275,                 /* DEFAULT  */
    CONTINUE = 276,                /* CONTINUE  */
    CONST_INT = 277,               /* CONST_INT  */
    CONST_FLOAT = 278,             /* CONST_FLOAT  */
    CONST_CHAR = 279,              /* CONST_CHAR  */
    ADDOP = 280,                   /* ADDOP  */
    MULOP = 281,                   /* MULOP  */
    INCOP = 282,                   /* INCOP  */
    RELOP = 283,                   /* RELOP  */
    ASSIGNOP = 284,                /* ASSIGNOP  */
    LOGICOP = 285,                 /* LOGICOP  */
    BITOP = 286,                   /* BITOP  */
    NOT = 287,                     /* NOT  */
    DECOP = 288,                   /* DECOP  */
    LPAREN = 289,                  /* LPAREN  */
    RPAREN = 290,                  /* RPAREN  */
    LCURL = 291,                   /* LCURL  */
    RCURL = 292,                   /* RCURL  */
    LTHIRD = 293,                  /* LTHIRD  */
    RTHIRD = 294,                  /* RTHIRD  */
    COMMA = 295,                   /* COMMA  */
    SEMICOLON = 296,               /* SEMICOLON  */
    LOWER_THAN_ELSE = 297          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define STRING 264
#define ID 265
#define PRINTLN 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define DOUBLE 270
#define VOID 271
#define RETURN 272
#define SWITCH 273
#define CASE 274
#define DEFAULT 275
#define CONTINUE 276
#define CONST_INT 277
#define CONST_FLOAT 278
#define CONST_CHAR 279
#define ADDOP 280
#define MULOP 281
#define INCOP 282
#define RELOP 283
#define ASSIGNOP 284
#define LOGICOP 285
#define BITOP 286
#define NOT 287
#define DECOP 288
#define LPAREN 289
#define RPAREN 290
#define LCURL 291
#define RCURL 292
#define LTHIRD 293
#define RTHIRD 294
#define COMMA 295
#define SEMICOLON 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 213 "cpp_syntax.y"

        SymbolInfo* s;

#line 155 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
