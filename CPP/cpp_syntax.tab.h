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
    ADD_ASSIGN = 258,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 259,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 260,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 261,              /* DIV_ASSIGN  */
    AND_ASSIGN = 262,              /* AND_ASSIGN  */
    MOD_ASSIGN = 263,              /* MOD_ASSIGN  */
    XOR_ASSIGN = 264,              /* XOR_ASSIGN  */
    OR_ASSIGN = 265,               /* OR_ASSIGN  */
    RIGHT_OP = 266,                /* RIGHT_OP  */
    LEFT_OP = 267,                 /* LEFT_OP  */
    AND_OP = 268,                  /* AND_OP  */
    OR_OP = 269,                   /* OR_OP  */
    EQ_OP = 270,                   /* EQ_OP  */
    NE_OP = 271,                   /* NE_OP  */
    RIGHT_ASSIGN = 272,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 273,             /* LEFT_ASSIGN  */
    LOG_NOT_OP = 274,              /* LOG_NOT_OP  */
    BIT_NOT_OP = 275,              /* BIT_NOT_OP  */
    READ = 276,                    /* READ  */
    WRITE = 277,                   /* WRITE  */
    INT = 278,                     /* INT  */
    ID = 279,                      /* ID  */
    SEMI = 280,                    /* SEMI  */
    COMMA = 281,                   /* COMMA  */
    TYPE = 282,                    /* TYPE  */
    LP = 283,                      /* LP  */
    RP = 284,                      /* RP  */
    LB = 285,                      /* LB  */
    RB = 286,                      /* RB  */
    LC = 287,                      /* LC  */
    RC = 288,                      /* RC  */
    STRUCT = 289,                  /* STRUCT  */
    RETURN = 290,                  /* RETURN  */
    IF = 291,                      /* IF  */
    ELSE = 292,                    /* ELSE  */
    BREAK = 293,                   /* BREAK  */
    CONT = 294,                    /* CONT  */
    FOR = 295,                     /* FOR  */
    DOT = 296,                     /* DOT  */
    ASSIGN = 297,                  /* ASSIGN  */
    IF_NO_ELSE = 298,              /* IF_NO_ELSE  */
    ELSE_AFTER_IF = 299,           /* ELSE_AFTER_IF  */
    BIT_OR_OP = 300,               /* BIT_OR_OP  */
    BIT_XOR_OP = 301,              /* BIT_XOR_OP  */
    BIT_AND_OP = 302,              /* BIT_AND_OP  */
    GE_OP = 303,                   /* GE_OP  */
    LE_OP = 304,                   /* LE_OP  */
    GT_OP = 305,                   /* GT_OP  */
    LT_OP = 306,                   /* LT_OP  */
    PLUS_OP = 307,                 /* PLUS_OP  */
    MINUS_OP = 308,                /* MINUS_OP  */
    PRODUCT_OP = 309,              /* PRODUCT_OP  */
    DIV_OP = 310,                  /* DIV_OP  */
    MOD_OP = 311,                  /* MOD_OP  */
    INC_OP = 312,                  /* INC_OP  */
    DEC_OP = 313,                  /* DEC_OP  */
    UNARY = 314                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "cpp_syntax.y"

    char* string;
    TreeNode* node;

#line 128 "cpp_syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CPP_SYNTAX_TAB_H_INCLUDED  */
