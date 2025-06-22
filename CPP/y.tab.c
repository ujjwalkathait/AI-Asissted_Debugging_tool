/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cpp_syntax.y"


#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
#include "SymbolTable.cpp"


using namespace std;

int yyparse(void);
int yylex(void);



FILE *fp;
FILE *errors=fopen("error.txt","w");
FILE *logs= fopen("logs.txt","w");
int line_count=1;
int error_count=0;
int labelCount = 0;
int tempCount = 0;
extern FILE *yyin;

SymbolTable* symbolTable = new SymbolTable(logs,10);
string tempType;
vector<string> tempParameterList;
vector<string> tempParameterTypeList;
vector<string> ASM_varlist;
vector< pair<string,string> > ASM_arrlist;
vector< pair<string,string> > tempDeclareList;
vector<SymbolInfo*> tempArgList;
string tempCode = "";
string tempFuncName;
bool isPrintln = false;

string printlnCode =
 "PRINT_FUNC PROC  \n\
 	PUSH AX \n\ 
    PUSH BX \n\ 
    PUSH CX \n\ 
    PUSH DX  \n\ 
    CMP AX,0 \n\ 
    JGE BEGIN \n\ 
    PUSH AX \n\ 
    MOV DL,'-' \n\ 
    MOV AH,2 \n\ 
    INT 21H \n\ 
    POP AX \n\ 
    NEG AX \n\ 
    \n\ 
    BEGIN: \n\ 
    XOR CX,CX \n\ 
    MOV BX,10 \n\ 
    \n\ 
    REPEAT: \n\ 
    XOR DX,DX \n\ 
    DIV BX \n\ 
    PUSH DX \n\ 
    INC CX \n\ 
    OR AX,AX \n\ 
    JNE REPEAT \n\ 
    MOV AH,2 \n\ 
    \n\ 
    PRINT_LOOP: \n\ 
    POP DX \n\ 
    ADD DL,30H \n\ 
    INT 21H \n\ 
    LOOP PRINT_LOOP \n\ 
    \n\    
    MOV AH,2\n\
    MOV DL,10\n\
    INT 21H\n\
    \n\
    MOV DL,13\n\
    INT 21H\n\
	\n\
    POP DX \n\ 
    POP CX \n\ 
    POP BX \n\ 
    POP AX \n\ 
    ret \n\ 
    PRINT_FUNC ENDP \n\ ";

string newLabel()
{
	char *label= new char[8];
	strcpy(label,"Label");
	char buffer[3];
	sprintf(buffer,"%d", labelCount);
	labelCount++;
	strcat(label,buffer);
	return string(label);
}

string newTemp()
{
	char *temp= new char[4];
	strcpy(temp,"T");
	char buffer[3];
	sprintf(buffer,"%d", tempCount);
	tempCount++;
	strcat(temp,buffer);
	return  temp ;
}



void yyerror(char *s)
{
	//write your code
	fprintf(errors,"Line no %d : %s",line_count,s);
}



string refactor(string str)
{
	int ii=0; string temp;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==',')
		{
			str[i] = ' ';
		}
		if(str[i]!='\t' && str[i] != '\n' && str[i] != '\0')
		{
			str[ii++] = str[i];
		}
		
		
	}
	str[ii] = '\0';
	return str;
}


bool compare_line(string lhs,string rhs)
{
	bool ans = true;
	string one = refactor(lhs);
	string two = refactor(rhs);

	vector <string> tokens1;
	vector <string> tokens2;

	// stringstream class check1
	stringstream check1(one);

	string intermediate1;

	// Tokenizing w.r.t. space ' '
	while(getline(check1, intermediate1, ' '))
	{
	
		tokens1.push_back(intermediate1);
	}

	
	stringstream check2(two);

	string intermediate2;

	// Tokenizing w.r.t. space ' '
	while(getline(check2, intermediate2, ' '))
	{
		tokens2.push_back(intermediate2);
	}

	if(tokens1.size()==3 && tokens2.size()==3)
	{
		//cout <<"*"<< tokens1[1] <<"*"<< tokens2[2] <<"*" << tokens1[2] <<"*" << tokens2[1] <<"*" << endl;
		if(tokens1[0]=="MOV" && tokens2[0]=="MOV"  )
		{
			for(int i=0;i<2;i++)
			{
				if(tokens1[1][i]==tokens2[2][i] && tokens2[1][i]==tokens1[2][i])
				{
					//ans = true;
				}
				else 
					ans = false;
			}
		}
		else ans = false;

	}
	else ans = false;

	
	return ans;


}



#line 271 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 412 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_BREAK = 8,                      /* BREAK  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_PRINTLN = 11,                   /* PRINTLN  */
  YYSYMBOL_INT = 12,                       /* INT  */
  YYSYMBOL_FLOAT = 13,                     /* FLOAT  */
  YYSYMBOL_CHAR = 14,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 15,                    /* DOUBLE  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_DEFAULT = 20,                   /* DEFAULT  */
  YYSYMBOL_CONTINUE = 21,                  /* CONTINUE  */
  YYSYMBOL_CONST_INT = 22,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 23,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 24,                /* CONST_CHAR  */
  YYSYMBOL_ADDOP = 25,                     /* ADDOP  */
  YYSYMBOL_MULOP = 26,                     /* MULOP  */
  YYSYMBOL_INCOP = 27,                     /* INCOP  */
  YYSYMBOL_RELOP = 28,                     /* RELOP  */
  YYSYMBOL_ASSIGNOP = 29,                  /* ASSIGNOP  */
  YYSYMBOL_LOGICOP = 30,                   /* LOGICOP  */
  YYSYMBOL_BITOP = 31,                     /* BITOP  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_DECOP = 33,                     /* DECOP  */
  YYSYMBOL_LPAREN = 34,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 35,                    /* RPAREN  */
  YYSYMBOL_LCURL = 36,                     /* LCURL  */
  YYSYMBOL_RCURL = 37,                     /* RCURL  */
  YYSYMBOL_LTHIRD = 38,                    /* LTHIRD  */
  YYSYMBOL_RTHIRD = 39,                    /* RTHIRD  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_LOWER_THAN_ELSE = 42,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_start = 44,                     /* start  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_unit = 46,                      /* unit  */
  YYSYMBOL_func_declaration = 47,          /* func_declaration  */
  YYSYMBOL_func_definition = 48,           /* func_definition  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_parameter_list = 51,            /* parameter_list  */
  YYSYMBOL_compound_statement = 52,        /* compound_statement  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_var_declaration = 55,           /* var_declaration  */
  YYSYMBOL_type_specifier = 56,            /* type_specifier  */
  YYSYMBOL_declaration_list = 57,          /* declaration_list  */
  YYSYMBOL_statements = 58,                /* statements  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_expression_statement = 60,      /* expression_statement  */
  YYSYMBOL_variable = 61,                  /* variable  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_logic_expression = 63,          /* logic_expression  */
  YYSYMBOL_rel_expression = 64,            /* rel_expression  */
  YYSYMBOL_simple_expression = 65,         /* simple_expression  */
  YYSYMBOL_term = 66,                      /* term  */
  YYSYMBOL_unary_expression = 67,          /* unary_expression  */
  YYSYMBOL_factor = 68,                    /* factor  */
  YYSYMBOL_argument_list = 69              /* argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   222,   222,   305,   313,   325,   334,   343,   353,   394,
     427,   427,   519,   519,   596,   610,   623,   637,   652,   652,
     667,   667,   682,   722,   730,   738,   747,   758,   770,   781,
     794,   807,   815,   826,   837,   845,   853,   879,   899,   923,
     945,   965,   982,   990,  1004,  1020,  1043,  1054,  1100,  1111,
    1166,  1176,  1229,  1240,  1274,  1285,  1349,  1369,  1386,  1400,
    1429,  1479,  1490,  1504,  1519,  1548,  1582,  1593
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "WHILE", "DO", "BREAK", "STRING", "ID", "PRINTLN", "INT", "FLOAT",
  "CHAR", "DOUBLE", "VOID", "RETURN", "SWITCH", "CASE", "DEFAULT",
  "CONTINUE", "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "ADDOP", "MULOP",
  "INCOP", "RELOP", "ASSIGNOP", "LOGICOP", "BITOP", "NOT", "DECOP",
  "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "COMMA",
  "SEMICOLON", "LOWER_THAN_ELSE", "$accept", "start", "program", "unit",
  "func_declaration", "func_definition", "$@1", "$@2", "parameter_list",
  "compound_statement", "$@3", "$@4", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-21)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -74,   -74,   -74,     9,    68,   -74,   -74,   -74,   -74,
       1,   -74,   -74,    -2,   -21,    39,    34,    11,   -74,    26,
     -12,    58,    48,    49,    31,   -74,    42,    50,    68,   -74,
     -74,   -74,    71,    53,   -74,   -74,    42,    85,    59,    97,
      62,   -74,   -74,   -74,    70,    72,    77,    41,    81,   102,
     -74,   -74,   102,   102,   102,   -74,   -74,   -74,    95,    60,
     -74,   -74,    20,    75,   -74,    87,    61,    92,   -74,   -74,
     -74,   102,    -8,   102,   102,   102,   111,    82,   -11,   -74,
     -74,    91,    90,   -74,   -74,   -74,   102,   -74,   -74,   102,
     102,   102,   102,   100,    -8,   104,   -74,     4,    93,   105,
     -74,   -74,   -74,   -74,    92,   112,   -74,    97,   102,    97,
     -74,   102,   -74,    89,   137,   107,   -74,   -74,   -74,    97,
      97,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    23,    24,    25,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    28,     0,     0,     0,     0,    22,    12,
       0,    17,     0,     0,    26,     9,     0,    10,     0,    16,
      29,    30,     0,    18,    13,     8,     0,    15,     0,     0,
       0,    11,    14,    27,     0,     0,     0,    44,     0,     0,
      62,    63,     0,     0,     0,    42,    35,    33,     0,     0,
      31,    34,    59,     0,    46,    48,    50,    52,    54,    58,
      21,     0,     0,     0,     0,     0,     0,     0,    59,    56,
      57,     0,    28,    19,    32,    64,     0,    65,    43,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
      41,    61,    47,    49,    53,    51,    55,     0,     0,     0,
      60,     0,    45,     0,    37,     0,    39,    66,    40,     0,
       0,    38,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   138,   -74,   -74,   -74,   -74,   -74,   -18,
     -74,   -74,    54,    30,   -74,   -74,   -59,   -60,   -49,   -44,
     -73,    55,    56,    63,   -46,   -74,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    36,    26,    20,    56,
      39,    40,    57,    58,    14,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      84,    96,    47,    78,    78,    77,    79,    80,    34,    11,
      81,    13,    94,   102,    50,    51,    85,    52,    41,    17,
      18,    24,    87,    27,    53,    78,    54,    93,    28,    95,
      10,    98,    15,    55,   108,    10,    16,    78,   117,   110,
      78,    78,    78,    78,   111,    21,   106,    85,   114,    86,
     116,     1,     2,    87,     9,     3,    22,    23,    37,     9,
     121,   122,    78,    44,   115,    45,    46,    25,    29,    32,
      47,    48,     1,     2,    19,    74,     3,    49,    33,    75,
       1,     2,    50,    51,     3,    52,    90,    30,    31,    91,
     -20,    35,    53,    38,    54,    42,    33,    83,    43,    70,
      44,    55,    45,    46,    71,    82,    72,    47,    48,     1,
       2,    73,    47,     3,    49,    76,    88,    89,    92,    50,
      51,    99,    52,   100,    50,    51,   101,    52,    16,    53,
     118,    54,   112,    33,    53,   107,    54,    90,    55,   109,
     113,   119,   120,    12,   103,     0,     0,   105,     0,     0,
       0,     0,     0,   104
};

static const yytype_int8 yycheck[] =
{
      59,    74,    10,    52,    53,    49,    52,    53,    26,     0,
      54,    10,    72,    86,    22,    23,    27,    25,    36,    40,
      41,    10,    33,    35,    32,    74,    34,    71,    40,    73,
       0,    75,    34,    41,    94,     5,    38,    86,   111,    35,
      89,    90,    91,    92,    40,    15,    92,    27,   107,    29,
     109,    12,    13,    33,     0,    16,    22,    23,    28,     5,
     119,   120,   111,     3,   108,     5,     6,    41,    10,    38,
      10,    11,    12,    13,    35,    34,    16,    17,    36,    38,
      12,    13,    22,    23,    16,    25,    25,    39,    39,    28,
      37,    41,    32,    22,    34,    10,    36,    37,    39,    37,
       3,    41,     5,     6,    34,    10,    34,    10,    11,    12,
      13,    34,    10,    16,    17,    34,    41,    30,    26,    22,
      23,    10,    25,    41,    22,    23,    35,    25,    38,    32,
      41,    34,    39,    36,    32,    35,    34,    25,    41,    35,
      35,     4,    35,     5,    89,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    13,    16,    44,    45,    46,    47,    48,    55,
      56,     0,    46,    10,    57,    34,    38,    40,    41,    35,
      51,    56,    22,    23,    10,    41,    50,    35,    40,    10,
      39,    39,    38,    36,    52,    41,    49,    56,    22,    53,
      54,    52,    10,    39,     3,     5,     6,    10,    11,    17,
      22,    23,    25,    32,    34,    41,    52,    55,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      37,    34,    34,    34,    34,    38,    34,    62,    61,    67,
      67,    62,    10,    37,    59,    27,    29,    33,    41,    30,
      25,    28,    26,    62,    60,    62,    63,    69,    62,    10,
      41,    35,    63,    64,    66,    65,    67,    35,    60,    35,
      35,    40,    39,    35,    59,    62,    59,    63,    41,     4,
      35,    59,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      49,    48,    50,    48,    51,    51,    51,    51,    53,    52,
      54,    52,    55,    56,    56,    56,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    69,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     5,
       0,     7,     0,     6,     4,     3,     2,     1,     0,     4,
       0,     3,     3,     1,     1,     1,     3,     6,     1,     4,
       4,     1,     2,     1,     1,     1,     7,     5,     7,     5,
       5,     3,     1,     2,     1,     4,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     2,     2,     1,     1,
       4,     3,     1,     1,     2,     2,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: program  */
#line 223 "cpp_syntax.y"
        {

	ofstream fout;
	fout.open("code.asm");
	ofstream ffout;
	ffout.open("optimized_code.asm");

	string outputCODE = "";
	
	outputCODE += ".MODEL SMALL \n.STACK 100H \n.DATA \n";
	
	

	for( int i=0; i< ASM_varlist.size() ; i++)
	{
		outputCODE += ASM_varlist[i]+" DW ? \n";
	}

	for(int i=0;i< ASM_arrlist.size();i++){
		outputCODE += ASM_arrlist[i].first+" dw "+ASM_arrlist[i].second+" dup(?)\n";
	}
	

	outputCODE += ".CODE\n";

	outputCODE += (yyvsp[0].s)->getASMcode();

	if(isPrintln==true)
		outputCODE += printlnCode;

	outputCODE += "END MAIN\n";



	fout << outputCODE << endl;


	outputCODE = "";

	/////////////// optimization ////////////////
	vector<string> code_lines;
	std::ifstream input( "code.asm" );

	for( std::string line; getline( input, line ); )
	{
    	code_lines.push_back(line);
	}

	int total_lines = code_lines.size();

	bool isOpt[total_lines];

	for(int i=0;i<total_lines;i++)
	{
		isOpt[i] = true;
	}

	for(int i=0;i<total_lines-1;i++)
	{
		
		if(compare_line(code_lines[i],code_lines[i+1])==true)
		{	
			cout << i+1 << " optimization "<< endl;
			isOpt[i+1] = false;
		}
	}

	for(int i=0;i<total_lines;i++)
	{
		if(isOpt[i])
			outputCODE += code_lines[i]+"\n";
	}

	ffout << outputCODE;

}
#line 1624 "y.tab.c"
    break;

  case 3: /* program: program unit  */
#line 306 "cpp_syntax.y"
          { 
	  	(yyval.s) = new SymbolInfo();
		fprintf(logs,"Line at %d : program->program unit\n\n",line_count);
		fprintf(logs,"%s %s\n\n",(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName()) ;
		(yyval.s)->setASMcode((yyvsp[-1].s)->getASMcode()+(yyvsp[0].s)->getASMcode());
	  }
#line 1636 "y.tab.c"
    break;

  case 4: /* program: unit  */
#line 314 "cpp_syntax.y"
          {
		(yyval.s)=new SymbolInfo(); 
		fprintf(logs,"Line at %d : program->unit\n\n",line_count);
		fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
		(yyval.s)->setName((yyvsp[0].s)->getName());
		(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
		
	  }
#line 1649 "y.tab.c"
    break;

  case 5: /* unit: var_declaration  */
#line 326 "cpp_syntax.y"
          {
		(yyval.s)=new SymbolInfo(); 
		fprintf(logs,"Line at %d : unit->var_declaration\n\n",line_count);
		fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[0].s)->getName()+"\n");
		
	  }
#line 1661 "y.tab.c"
    break;

  case 6: /* unit: func_declaration  */
#line 335 "cpp_syntax.y"
          {
	  	(yyval.s)=new SymbolInfo();
	  	fprintf(logs,"Line at %d : unit->func_declaration\n\n",line_count);
	 	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[0].s)->getName()+"\n");
		
	  }
#line 1673 "y.tab.c"
    break;

  case 7: /* unit: func_definition  */
#line 344 "cpp_syntax.y"
         {
		(yyval.s)=new SymbolInfo(); 
		fprintf(logs,"Line at %d : unit->func_definition\n\n",line_count);
	 	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
		(yyval.s)->setName((yyvsp[0].s)->getName()+"\n");
		(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
		}
#line 1685 "y.tab.c"
    break;

  case 8: /* func_declaration: type_specifier ID LPAREN parameter_list RPAREN SEMICOLON  */
#line 355 "cpp_syntax.y"
                {
		(yyval.s)=new SymbolInfo();
		fprintf(logs,"Line at %d : func_declaration->type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n",line_count);
		fprintf(logs,"%s %s(%s);\n\n",(yyvsp[-5].s)->getName().c_str(),(yyvsp[-4].s)->getName().c_str(),(yyvsp[-2].s)->getName().c_str());
	
		if(symbolTable->lookup_global((yyvsp[-4].s)->getName())==true)
		{
			SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-4].s)->getName());
			if(ss->isFunction()){
			error_count++;
			fprintf(errors,"Error at Line No.%d:  Multiple defination of function \n\n",line_count);
			}

			if(ss->isDeclared())
			{
			error_count++;
			fprintf(errors,"Error at Line No.%d:  Function declared more than one \n\n",line_count);
			
			}
		}
		else
		{
			SymbolInfo* ss = symbolTable->InsertIntoFunction((yyvsp[-4].s)->getName(),(yyvsp[-5].s)->getName());
			ss->declared = true;

			for(int i=0;i<tempParameterTypeList.size();i++) {
				ss->ptypes.push_back(tempParameterTypeList[i]);
			}

			

		}
	
		(yyval.s)->setName((yyvsp[-5].s)->getName()+" "+(yyvsp[-4].s)->getName()+"("+(yyvsp[-2].s)->getName()+");");
			
		}
#line 1726 "y.tab.c"
    break;

  case 9: /* func_declaration: type_specifier ID LPAREN RPAREN SEMICOLON  */
#line 395 "cpp_syntax.y"
                {
		(yyval.s)=new SymbolInfo();
		fprintf(logs,"Line at %d : func_declaration->type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n",line_count);
		fprintf(logs,"%s %s();\n\n",(yyvsp[-4].s)->getName().c_str(),(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());
		
			if(symbolTable->lookup_global((yyvsp[-3].s)->getName())==true)
			{

				SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-3].s)->getName());
				if(ss->isFunction()){
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Multiple declaration of function \n\n",line_count);
				}

				
			}
			else
			{
				SymbolInfo* ss = symbolTable->InsertIntoFunction((yyvsp[-3].s)->getName(),(yyvsp[-4].s)->getName());
				ss->declared = true;

			}


		(yyval.s)->setName((yyvsp[-4].s)->getName()+" "+(yyvsp[-3].s)->getName()+"();");
		}
#line 1757 "y.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 427 "cpp_syntax.y"
                                                                 {tempFuncName = (yyvsp[-3].s)->getName(); }
#line 1763 "y.tab.c"
    break;

  case 11: /* func_definition: type_specifier ID LPAREN parameter_list RPAREN $@1 compound_statement  */
#line 428 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo(); 
			tempCode = "";
			fprintf(logs,"Line at %d : func_definition->type_specifier ID LPAREN parameter_list RPAREN compound_statement\n\n",line_count);
			fprintf(logs,"%s %s(%s) %s\n\n",(yyvsp[-6].s)->getName().c_str(),(yyvsp[-5].s)->getName().c_str(),(yyvsp[-3].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
		
		if(symbolTable->lookup_global((yyvsp[-5].s)->getName())==true )
		{
			
			SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-5].s)->getName());

			if(ss->isDefined())
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Multiple defination of function \n\n",line_count);
				
			}
		

			if(ss->isDeclared()==true && (ss->ptypes.size() != tempParameterTypeList.size()) )
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Invalid number of parameters as declared \n\n",line_count);
				
			}


			for(int i=0;i<tempParameterTypeList.size();i++){
					if(tempParameterTypeList[i] != ss->ptypes[i]) {
								error_count++;
								fprintf(errors,"Error at Line No.%d: Parameter Type Mismatch (%s,%s) \n\n",line_count,tempParameterTypeList[i],ss->ptypes[i]);
								break;
					}
			}

			if((yyvsp[-6].s)->getName() != ss->returnType) {
					error_count++;
					fprintf(errors,"Error at Line No.%d: Return Type Mismatch \n\n",line_count);
					
			}
			


		}
		else
		{

			SymbolInfo* ss = symbolTable->InsertIntoFunction((yyvsp[-5].s)->getName(),(yyvsp[-6].s)->getName());
			ss->defined = true;

			for(int i=0;i<tempParameterList.size();i++) {
				ss->parameters.push_back(tempParameterList[i]);
				ss->ptypes.push_back(tempParameterTypeList[i]);
			}

			
			
			
			
		}

		
		(yyval.s)->setName((yyvsp[-6].s)->getName()+" "+(yyvsp[-5].s)->getName()+"("+(yyvsp[-3].s)->getName()+")"+(yyvsp[0].s)->getName());

			tempCode += (yyvsp[-5].s)->getName()+" PROC\n" ;
			tempCode += "\tPUSH AX\n\tPUSH BX \n\tPUSH CX \n\tPUSH DX\n";

		for(int i=0;i<tempParameterList.size();i++)
		{
			tempCode += "\tPUSH "+tempParameterList[i]+symbolTable->getScopeId()+"\n";
			ASM_varlist.push_back(tempParameterList[i]+symbolTable->getScopeId());
		}

		tempCode += (yyvsp[0].s)->getASMcode();
		tempCode += "LReturn"+(yyvsp[-5].s)->getName()+":\n";
		for(int i=tempParameterList.size()-1;i>=0;i--)
		{
			tempCode += "\tPOP "+tempParameterList[i]+symbolTable->getScopeId()+"\n";
		}

		tempCode +="\tPOP DX\n\tPOP CX\n\tPOP BX\n\tPOP AX\n\tret\n";
													
		(yyval.s)->setASMcode(tempCode+(yyvsp[-5].s)->getName()+" ENDP\n");

	
		ASM_varlist.push_back("return_"+(yyvsp[-5].s)->getName());
		tempParameterTypeList.clear();
		tempParameterList.clear();
	
		}
#line 1858 "y.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 519 "cpp_syntax.y"
                                                  {tempFuncName = (yyvsp[-2].s)->getName(); }
#line 1864 "y.tab.c"
    break;

  case 13: /* func_definition: type_specifier ID LPAREN RPAREN $@2 compound_statement  */
#line 519 "cpp_syntax.y"
                                                                                                         {
 			(yyval.s)=new SymbolInfo(); 
 			tempCode = "";

			fprintf(logs,"Line at %d : func_definition->type_specifier ID LPAREN RPAREN compound_statement\n\n",line_count);
			fprintf(logs,"%s %s() %s\n\n",(yyvsp[-5].s)->getName().c_str(),(yyvsp[-4].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			

			if(symbolTable->lookup_global((yyvsp[-4].s)->getName())==true )
			{
			
			SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-4].s)->getName());

			if(ss->isDefined())
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Multiple defination of function \n\n",line_count);
				
			}
		

			if(ss->isDeclared()==true && (ss->ptypes.size() != tempParameterTypeList.size()) )
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Invalid number of parameters as declared (%d != %d) \n\n",line_count,ss->ptypes.size(),tempParameterTypeList.size());
				
			}



			

			if((yyvsp[-5].s)->getName() != ss->returnType) {
					error_count++;
					fprintf(errors,"Error at Line No.%d: Return Type Mismatch \n\n",line_count);
					
			}
			


		}
		else
		{
			SymbolInfo* ss = symbolTable->InsertIntoFunction((yyvsp[-4].s)->getName(),(yyvsp[-5].s)->getName());
			ss->defined = true;
			
		}

		(yyval.s)->setName((yyvsp[-5].s)->getName()+" "+(yyvsp[-4].s)->getName()+"()"+(yyvsp[0].s)->getName());

			tempCode += (yyvsp[-4].s)->getName()+" PROC\n" ;

			if((yyvsp[-4].s)->getName() != "main") { // for other functions
			tempCode += "\tPUSH AX\n\tPUSH BX \n\tPUSH CX \n\tPUSH DX\n";
			tempCode += (yyvsp[0].s)->getASMcode();

			tempCode += "LReturn"+(yyvsp[-4].s)->getName()+":\n";
			tempCode += "\tPOP DX\n\tPOP CX\n\tPOP BX\n\tPOP AX\n\tret\n";
			(yyval.s)->setASMcode(tempCode + (yyvsp[-4].s)->getName()+" ENDP\n");
			}
			else // for only main function
			{
				
				tempCode += (yyvsp[0].s)->getASMcode();
				tempCode += "LReturn"+(yyvsp[-4].s)->getName()+":\n";
				tempCode += "\tMOV AH,4CH\n\tINT 21H\n";
				(yyval.s)->setASMcode(tempCode);
			}

			ASM_varlist.push_back("return_"+(yyvsp[-4].s)->getName());
			tempParameterTypeList.clear();
			tempParameterList.clear();
		//	symbolTable->Exit_Scope();
 		}
#line 1943 "y.tab.c"
    break;

  case 14: /* parameter_list: parameter_list COMMA type_specifier ID  */
#line 597 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : parameter_list->parameter_list COMMA type_specifier ID\n\n",line_count);
			fprintf(logs,"%s,%s %s\n\n",(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());


			tempParameterList.push_back((yyvsp[0].s)->getName());
			tempParameterTypeList.push_back((yyvsp[-1].s)->getName());
			(yyvsp[0].s)->setSymbolId((yyvsp[0].s)->getName()+symbolTable->getScopeId());

			(yyval.s)->setName((yyvsp[-3].s)->getName()+","+(yyvsp[-1].s)->getName()+" "+(yyvsp[0].s)->getName());			
												 
		}
#line 1961 "y.tab.c"
    break;

  case 15: /* parameter_list: parameter_list COMMA type_specifier  */
#line 611 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo();
 			fprintf(logs,"Line at %d : parameter_list->parameter_list COMMA type_specifier\n\n",line_count);
			fprintf(logs,"%s,%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());

			tempParameterList.push_back("");
			tempParameterTypeList.push_back((yyvsp[0].s)->getName());


			(yyval.s)->setName((yyvsp[-2].s)->getName()+","+(yyvsp[0].s)->getName());
			
 		}
#line 1978 "y.tab.c"
    break;

  case 16: /* parameter_list: type_specifier ID  */
#line 624 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo(); 
			fprintf(logs,"Line at %d : parameter_list->type_specifier ID\n\n",line_count);
		 	fprintf(logs,"%s %s\n\n",(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			
			tempParameterList.push_back((yyvsp[0].s)->getName());
			tempParameterTypeList.push_back((yyvsp[-1].s)->getName());

			//ASM_varlist.push_back($<s>2->getName()+symbolTable->getScopeId());

		 	(yyval.s)->setName((yyvsp[-1].s)->getName()+" "+(yyvsp[0].s)->getName());
		 	(yyvsp[0].s)->setSymbolId((yyvsp[0].s)->getName()+symbolTable->getScopeId());
		}
#line 1996 "y.tab.c"
    break;

  case 17: /* parameter_list: type_specifier  */
#line 638 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo();
 			fprintf(logs,"Line at %d : parameter_list->type_specifier\n\n",line_count);
			fprintf(logs,"%s \n\n",(yyvsp[0].s)->getName().c_str());

			
			tempParameterTypeList.push_back((yyvsp[0].s)->getName());

			(yyval.s)->setName((yyvsp[0].s)->getName()+" ");
			
 		}
#line 2012 "y.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 652 "cpp_syntax.y"
                           { symbolTable->Enter_Scope(); }
#line 2018 "y.tab.c"
    break;

  case 19: /* compound_statement: LCURL $@3 statements RCURL  */
#line 653 "cpp_syntax.y"
                    {
 		    	
 		    	(yyval.s)=new SymbolInfo(); 
 		    	fprintf(logs,"Line at %d : compound_statement->LCURL statements RCURL\n\n",line_count);
				fprintf(logs,"{%s}\n\n",(yyvsp[-1].s)->getName().c_str());
				

				symbolTable->print_all();
				

				(yyval.s)->setName("{\n"+(yyvsp[-1].s)->getName()+"\n}");
				(yyval.s)->setASMcode((yyvsp[-1].s)->getASMcode());

 		    }
#line 2037 "y.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 667 "cpp_syntax.y"
                            { symbolTable->Enter_Scope(); }
#line 2043 "y.tab.c"
    break;

  case 21: /* compound_statement: LCURL $@4 RCURL  */
#line 668 "cpp_syntax.y"
                    {
 		    	symbolTable->Enter_Scope();
 		    	(yyval.s)=new SymbolInfo(); 
 		    	fprintf(logs,"Line at %d : compound_statement->LCURL RCURL\n\n",line_count);
			 	fprintf(logs,"{}\n\n");
			 	
			 	symbolTable->print_all();
			 

			 	(yyval.s)->setName("{}");
			 	
 		    }
#line 2060 "y.tab.c"
    break;

  case 22: /* var_declaration: type_specifier declaration_list SEMICOLON  */
#line 683 "cpp_syntax.y"
                 {
 		 	(yyval.s)=new SymbolInfo(); 
 		 	fprintf(logs,"Line at %d : var_declaration->type_specifier declaration_list SEMICOLON\n\n",line_count);
			fprintf(logs,"%s %s;\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());
			
			tempType = (yyvsp[-2].s)->getName();

			if((yyvsp[-2].s)->getName().compare("void ")==0)
			{
			error_count++;
			fprintf(errors,"Error at Line No.%d: Type specifier can not be void \n\n",line_count);
			}

			

			for(int i=0;i<tempDeclareList.size();i++)
			{
				if(symbolTable->lookup_current(tempDeclareList[i].second)==true)
				{
					fprintf(errors,"Error at Line No.%d:  Multiple Declaration of %s \n\n",line_count,tempDeclareList[i].second.c_str());
					error_count++;
					}
				else
				{

					symbolTable->InsertInto(tempDeclareList[i].second, (yyvsp[-2].s)->getName()); 
					ASM_varlist.push_back(tempDeclareList[i].second+symbolTable->getScopeId());
					tempDeclareList.push_back(make_pair(tempDeclareList[i].first,tempDeclareList[i].second));

				}
			}

			//tempDeclareList.clear();

			(yyval.s)->setName((yyvsp[-2].s)->getName()+" "+(yyvsp[-1].s)->getName()+";");		
										
 		 }
#line 2102 "y.tab.c"
    break;

  case 23: /* type_specifier: INT  */
#line 723 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
 			fprintf(logs,"Line at %d : type_specifier	: INT\n\n",line_count);fprintf(logs,"int \n\n");
			(yyval.s)->setName("int ");

			
 		}
#line 2114 "y.tab.c"
    break;

  case 24: /* type_specifier: FLOAT  */
#line 731 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
 			fprintf(logs,"Line at %d : type_specifier	: FLOAT\n\n",line_count);fprintf(logs,"float \n\n");
		 	(yyval.s)->setName("float ");
		 	

 		}
#line 2126 "y.tab.c"
    break;

  case 25: /* type_specifier: VOID  */
#line 739 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
 			fprintf(logs,"Line at %d : type_specifier	: VOID\n\n",line_count);fprintf(logs,"void \n\n");
		 	(yyval.s)->setName("void ");
		 	
 		}
#line 2137 "y.tab.c"
    break;

  case 26: /* declaration_list: declaration_list COMMA ID  */
#line 748 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
 			fprintf(logs,"Line at %d : declaration_list->declaration_list COMMA ID\n\n",line_count);
			fprintf(logs,"%s,%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			
			tempDeclareList.push_back(make_pair(tempType,(yyvsp[0].s)->getName().c_str()));

			(yyval.s)->setName((yyvsp[-2].s)->getName()+","+(yyvsp[0].s)->getName());
			
 		}
#line 2152 "y.tab.c"
    break;

  case 27: /* declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  */
#line 759 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo(); 
			fprintf(logs,"Line at %d : declaration_list->declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n",line_count);
		   	fprintf(logs,"%s,%s[%s]\n\n",(yyvsp[-5].s)->getName().c_str(),(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());
			//tempDeclareList.push_back(make_pair(tempType,$<s>3->getName().c_str()));
			ASM_arrlist.push_back(make_pair((yyvsp[-3].s)->getName()+symbolTable->getScopeId(),(yyvsp[-1].s)->getName()));
			(yyvsp[-3].s)->isArray = true;
			(yyval.s)->setName((yyvsp[-5].s)->getName()+","+(yyvsp[-3].s)->getName()+"["+(yyvsp[-1].s)->getName()+"]");	
															
 		}
#line 2167 "y.tab.c"
    break;

  case 28: /* declaration_list: ID  */
#line 771 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
 			fprintf(logs,"Line at %d : declaration_list->ID\n\n",line_count);
		   	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
		   	tempDeclareList.push_back(make_pair(tempType,(yyvsp[0].s)->getName().c_str()));

		   	(yyval.s)->setName((yyvsp[0].s)->getName());
		   	//ASM_varlist.push_back($<s>1->getName()+symbolTable->getScopeId()); 
		   
 		}
#line 2182 "y.tab.c"
    break;

  case 29: /* declaration_list: ID LTHIRD CONST_INT RTHIRD  */
#line 782 "cpp_syntax.y"
                {

 		  (yyval.s)=new SymbolInfo(); 
 		  fprintf(logs,"Line at %d : declaration_list->ID LTHIRD CONST_INT RTHIRD\n\n",line_count);
		  fprintf(logs,"%s[%s]\n\n",(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());
		  tempDeclareList.push_back(make_pair(tempType,(yyvsp[-3].s)->getName().c_str()));

		  (yyval.s)->setName((yyvsp[-3].s)->getName()+"["+(yyvsp[-1].s)->getName()+"]");
		 // ASM_varlist.push_back($<s>1->getName()+symbolTable->getScopeId()); 
		  
 		}
#line 2198 "y.tab.c"
    break;

  case 30: /* declaration_list: ID LTHIRD CONST_FLOAT RTHIRD  */
#line 795 "cpp_syntax.y"
                {
 			(yyval.s)=new SymbolInfo(); 
			//fprintf(logs,"Line at %d : declaration_list->declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n",line_count);
		   	//fprintf(logs,"%s,%s[%s]\n\n",$<s>1->getName().c_str(),$<s>3->getName().c_str(),$<s>5->getName().c_str());

			(yyval.s)->setName((yyvsp[-3].s)->getName()+"["+(yyvsp[-1].s)->getName()+"]");
 			fprintf(errors,"Error at Line No.%d: Array size can not be a float \n\n",line_count);
			error_count++;
 		}
#line 2212 "y.tab.c"
    break;

  case 31: /* statements: statement  */
#line 808 "cpp_syntax.y"
           {
			(yyval.s)=new SymbolInfo(); fprintf(logs,"Line at %d : statements->statement\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
			(yyval.s)->setName((yyvsp[0].s)->getName());
			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			//cout << $<s>s->getASMcode();
	   }
#line 2224 "y.tab.c"
    break;

  case 32: /* statements: statements statement  */
#line 816 "cpp_syntax.y"
           {
	   	(yyval.s)=new SymbolInfo(); 
	   	fprintf(logs,"Line at %d : statements->statements statement\n\n",line_count);
	   	fprintf(logs,"%s %s\n\n",(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[-1].s)->getName()+"\n"+(yyvsp[0].s)->getName());
		(yyval.s)->setASMcode((yyvsp[-1].s)->getASMcode()+(yyvsp[0].s)->getASMcode());
		//cout << $<s>s->getASMcode();
	   }
#line 2237 "y.tab.c"
    break;

  case 33: /* statement: var_declaration  */
#line 827 "cpp_syntax.y"
          {
		(yyval.s)=new SymbolInfo();
		fprintf(logs,"Line at %d : statement -> var_declaration\n\n",line_count);
		fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
		(yyval.s)->setName((yyvsp[0].s)->getName()); 
		// lagbe na karon agei declare korsi

		(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());

	  }
#line 2252 "y.tab.c"
    break;

  case 34: /* statement: expression_statement  */
#line 838 "cpp_syntax.y"
          {
		(yyval.s)=new SymbolInfo();
		fprintf(logs,"Line at %d : statement -> expression_statement\n\n",line_count);
	  	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[0].s)->getName()); 
		(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
	  }
#line 2264 "y.tab.c"
    break;

  case 35: /* statement: compound_statement  */
#line 846 "cpp_syntax.y"
          {
	  	(yyval.s)=new SymbolInfo();
	  	fprintf(logs,"Line at %d : statement->compound_statement\n\n",line_count);
	  	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
		(yyval.s)->setName((yyvsp[0].s)->getName()); 
		(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
	  }
#line 2276 "y.tab.c"
    break;

  case 36: /* statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 854 "cpp_syntax.y"
          {
	  	tempCode = "";
		(yyval.s)=new SymbolInfo();
		fprintf(logs,"Line at %d : statement ->FOR LPAREN expression_statement expression_statement expression RPAREN statement\n\n",line_count);
	  	fprintf(logs,"for(%s %s %s)\n%s \n\n",(yyvsp[-4].s)->getName().c_str(),(yyvsp[-3].s)->getName().c_str(),(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
		string label1 = newLabel();
		string label2 = newLabel();																	
		tempCode += (yyvsp[-4].s)->getASMcode();
		tempCode += label1 + ":\n";
		tempCode += (yyvsp[-3].s)->getASMcode();
		tempCode += "\tMOV AX," + (yyvsp[-3].s)->getSymbolId()+"\n";
		tempCode += "\tCMP AX,0\n";
		tempCode += "\tJE "+label1+"\n";
		tempCode += (yyvsp[0].s)->getASMcode();
		tempCode += (yyvsp[-2].s)->getASMcode();
		tempCode += "\tJMP "+label1+"\n";
		tempCode += label2 +":\n";
		(yyval.s)->setASMcode(tempCode);


		(yyval.s)->setName("for("+(yyvsp[-4].s)->getName()+(yyvsp[-3].s)->getName()+(yyvsp[-2].s)->getName()+")\n"+(yyvsp[-2].s)->getName()); 
		
	  }
#line 2304 "y.tab.c"
    break;

  case 37: /* statement: IF LPAREN expression RPAREN statement  */
#line 880 "cpp_syntax.y"
          {
	  	(yyval.s)=new SymbolInfo();
	  	fprintf(logs,"Line at %d : statement->IF LPAREN expression RPAREN statement\n\n",line_count);
	  	fprintf(logs,"if(%s)\n%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
		
	  	tempCode += (yyvsp[-2].s)->getASMcode();
		string label1 = newLabel();
		tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
		tempCode += "\tCMP AX,0\n";
		tempCode += "\tJE " + label1 +"\n";
		tempCode += (yyvsp[0].s)->getASMcode();
		tempCode += label1+":\n";
		(yyval.s)->setASMcode(tempCode);

	  	(yyval.s)->setName("if("+(yyvsp[-2].s)->getName()+")\n"+(yyvsp[0].s)->getName());
	  	
	  	(yyval.s)->setName("if("+(yyvsp[-2].s)->getName()+")\n"+(yyvsp[0].s)->getName()); 
	  	
		}
#line 2328 "y.tab.c"
    break;

  case 38: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 900 "cpp_syntax.y"
          {
	  	tempCode = "";
	  	(yyval.s)=new SymbolInfo();
	  	fprintf(logs,"Line at %d : statement->IF LPAREN expression RPAREN statement ELSE statement\n\n",line_count);
	  	fprintf(logs,"if(%s)\n%s\n else \n %s\n\n",(yyvsp[-4].s)->getName().c_str(),(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
		
		tempCode += (yyvsp[-4].s)->getASMcode();
		string label1 = newLabel();
		string label2 = newLabel();
		tempCode += "\tMOV AX,"+(yyvsp[-4].s)->getSymbolId()+"\n";
		tempCode += "\tCMP AX,0\n";
		tempCode += "\tJE "+ label1 +"\n";
		tempCode += (yyvsp[-2].s)->getASMcode();
		tempCode += "\tJMP "+ label2 +"\n";
		tempCode += label1+":\n";
		tempCode += (yyvsp[0].s)->getASMcode();
		tempCode += label2+":\n";
		(yyval.s)->setASMcode(tempCode);

		(yyval.s)->setName("if("+(yyvsp[-4].s)->getName()+")\n"+(yyvsp[-2].s)->getName()+" else \n"+(yyvsp[0].s)->getName());
		
														
	  }
#line 2356 "y.tab.c"
    break;

  case 39: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 924 "cpp_syntax.y"
          {
	  	(yyval.s)=new SymbolInfo();
	  	tempCode = "";
	  	fprintf(logs,"Line at %d : statement->WHILE LPAREN expression RPAREN statement\n\n",line_count);
	  	fprintf(logs,"while(%s)\n%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
												  
		string label1 = newLabel();
		string label2 = newLabel();
		tempCode += label1 +":\n";
		tempCode += (yyvsp[-2].s)->getASMcode();
		tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
		tempCode += "\tCMP AX,0\n";
		tempCode += "\tJE "+ label2 +"\n";
		tempCode += (yyvsp[0].s)->getASMcode();
		tempCode += "\tJMP "+ label1 +"\n";
		tempCode += label2 +":\n";
		(yyval.s)->setASMcode(tempCode);

	  	(yyval.s)->setName("while("+(yyvsp[-2].s)->getName()+")\n"+(yyvsp[0].s)->getName());
	  
	  }
#line 2382 "y.tab.c"
    break;

  case 40: /* statement: PRINTLN LPAREN ID RPAREN SEMICOLON  */
#line 946 "cpp_syntax.y"
          {
	  	(yyval.s)=new SymbolInfo();
	  	tempCode = "";
	  	fprintf(logs,"Line at %d : statement->PRINTLN LPAREN ID RPAREN SEMICOLON\n\n",line_count);
	  	fprintf(logs,"\n println(%s);\n\n",(yyvsp[-2].s)->getName().c_str());
	  	SymbolInfo* ss = symbolTable->getInstanceOf_current((yyvsp[-4].s)->getName());
		if(ss != 0){
			error_count++;
			fprintf(errors,"Error at Line No.%d:  Undeclared Variable: %s \n\n",line_count,(yyvsp[-2].s)->getName().c_str());
		}
		
		tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getName()+symbolTable->getScopeId();
		tempCode += "\n\tCALL PRINT_FUNC\n";

		isPrintln = true;
		(yyval.s)->setASMcode(tempCode); 
		(yyval.s)->setName("\nprintln("+(yyvsp[-2].s)->getName()+")"); 
	
	  }
#line 2406 "y.tab.c"
    break;

  case 41: /* statement: RETURN expression SEMICOLON  */
#line 966 "cpp_syntax.y"
          {
	  	tempCode = "";
	  	(yyval.s)=new SymbolInfo();
	  	fprintf(logs,"Line at %d : statement->RETURN expression SEMICOLON\n\n",line_count);
	  	fprintf(logs,"return %s;\n\n",(yyvsp[-1].s)->getName().c_str());

	  	tempCode += (yyvsp[-1].s)->getASMcode();
		tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"\n";
		tempCode += "\tMOV return_" +tempFuncName	+",AX\n";
		tempCode += "\tJMP LReturn"+ tempFuncName+"\n";
		(yyval.s)->setASMcode(tempCode);
	  	(yyval.s)->setName("return "+(yyvsp[-1].s)->getName()+";"); 
	  	
	  }
#line 2425 "y.tab.c"
    break;

  case 42: /* expression_statement: SEMICOLON  */
#line 983 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : expression_statement->SEMICOLON\n\n",line_count);
			fprintf(logs,";\n\n"); 
			(yyval.s)->setName(";");
			
		}
#line 2437 "y.tab.c"
    break;

  case 43: /* expression_statement: expression SEMICOLON  */
#line 991 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : statement->RETURN expression SEMICOLON\n\n",line_count);
	  		fprintf(logs,"return %s;\n\n",(yyvsp[0].s)->getName().c_str());


	  		(yyval.s)->setName((yyvsp[-1].s)->getName()+";"); 
	  		(yyval.s)->setASMcode((yyvsp[-1].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[-1].s)->getSymbolId());
		}
#line 2452 "y.tab.c"
    break;

  case 44: /* variable: ID  */
#line 1005 "cpp_syntax.y"
                {
	 		(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : variable->ID\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

			SymbolInfo* ss = symbolTable->getInstanceOf_current((yyvsp[0].s)->getName());
			if(ss != 0)
				(yyval.s)->returnType = ss->returnType;

			(yyval.s)->setName((yyvsp[0].s)->getName());
			(yyval.s)->isArray = false;
			(yyvsp[0].s)->setSymbolId((yyvsp[0].s)->getName()+symbolTable->getScopeId());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getName()+symbolTable->getScopeId());
			
	 	}
#line 2472 "y.tab.c"
    break;

  case 45: /* variable: ID LTHIRD expression RTHIRD  */
#line 1021 "cpp_syntax.y"
                {
	 		(yyval.s)=new SymbolInfo();
	 		fprintf(logs,"Line at %d : variable->ID LTHIRD expression RTHIRD\n\n",line_count);
	 		fprintf(logs,"%s[%s]\n\n",(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());
	 		
	 		if((yyvsp[-1].s)->returnType=="float ")
	 		{
	 			error_count++;
	 			fprintf(errors,"Error at Line No.%d:  Array index can not be an floating number \n\n",line_count);
				
	 		}
	 		(yyval.s)->isArray = true;
	 		SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-3].s)->getName());
			if(ss != 0)
				(yyval.s)->returnType = ss->returnType;
	 		(yyval.s)->setName((yyvsp[-3].s)->getName()+"["+(yyvsp[-1].s)->getName()+"]");  
	 		(yyval.s)->setSymbolId((yyvsp[-3].s)->getName()+symbolTable->getScopeId());
	 		(yyvsp[-3].s)->setSymbolId((yyvsp[-3].s)->getName()+symbolTable->getScopeId());
	 	}
#line 2496 "y.tab.c"
    break;

  case 46: /* expression: logic_expression  */
#line 1044 "cpp_syntax.y"
           {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : expression->logic_expression\n\n",line_count);
 			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

 			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
 			(yyval.s)->setName((yyvsp[0].s)->getName()); 
 			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
	   }
#line 2511 "y.tab.c"
    break;

  case 47: /* expression: variable ASSIGNOP logic_expression  */
#line 1055 "cpp_syntax.y"
           {
	   		tempCode = "";
	   		(yyval.s)=new SymbolInfo();
	   		fprintf(logs,"Line at %d : expression->variable ASSIGNOP logic_expression\n\n",line_count);
	   		fprintf(logs,"%s=%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
	   			
	   			SymbolInfo* ss = symbolTable->getInstanceOf_current((yyvsp[-2].s)->getName());
	   		
	   			if(ss == 0)
	   			{
	   				fprintf(errors,"Error at Line No.%d: Undeclared Variable: %s \n\n",line_count,(yyvsp[-2].s)->getName().c_str());
		   			error_count++;
 
	   			}

		   		else if((yyvsp[0].s)->returnType != (yyvsp[-2].s)->returnType)
		   		{
		   		error_count++;
		   		fprintf(errors,"Error at Line No.%d: Type Mismatch [ type : %s != type: %s ] \n\n",line_count,(yyvsp[-2].s)->returnType.c_str(),(yyvsp[0].s)->returnType.c_str());
		   		} 
		   		else
		   		{
		   			//fprintf(errors,"Line No.%d: Type matched ( %s == %s ) \n\n",line_count,$<s>1->returnType.c_str(),$<s>3->returnType.c_str());
		   		
		   		}

		   		tempCode += (yyvsp[-2].s)->getASMcode();
				tempCode += (yyvsp[0].s)->getASMcode();
				tempCode += "\tMOV AX," + (yyvsp[0].s)->getSymbolId()+"\n";

				if((yyvsp[-2].s)->isArray==false)
					tempCode += "\tMOV " + (yyvsp[-2].s)->getSymbolId()+",AX\n";
				else
					tempCode += "\tMOV "+(yyvsp[-2].s)->getSymbolId()+"[BX],AX\n";
				
				(yyval.s)->setASMcode(tempCode);

				(yyval.s)->setSymbolId((yyvsp[-2].s)->getSymbolId());
	   		
	   		

	   		(yyval.s)->setName((yyvsp[-2].s)->getName()+"="+(yyvsp[0].s)->getName());  
	   }
#line 2559 "y.tab.c"
    break;

  case 48: /* logic_expression: rel_expression  */
#line 1101 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : logic_expression->rel_expression\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
			(yyval.s)->setName((yyvsp[0].s)->getName()); 
		}
#line 2574 "y.tab.c"
    break;

  case 49: /* logic_expression: rel_expression LOGICOP rel_expression  */
#line 1112 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : logic_expression->rel_expression LOGICOP rel_expression\n\n",line_count);
		 	fprintf(logs,"%s%s%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			(yyval.s)->returnType = "int ";

			tempCode += (yyvsp[-2].s)->getASMcode();
			tempCode += (yyvsp[0].s)->getASMcode();
			string label1 = newLabel();
			string label2 = newLabel();
			string label3 = newLabel();
			string temp = newTemp();

			if((yyvsp[-1].s)->getName()=="||"){
				tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
				tempCode += "\tCMP AX,0\n";
				tempCode += "\tJNE "+ label2 +"\n";
				tempCode += "\tMOV AX,"+ (yyvsp[0].s)->getSymbolId()+"\n";
				tempCode += "\tCMP AX,0\n";
				tempCode += "\tJNE "+ label2 +"\n";
				tempCode += label1 +":\n";
				tempCode += "\tMOV "+ temp +",0\n";
				tempCode += "\tJMP "+ label3 +"\n";
				tempCode += label2 +":\n";
				tempCode += "\tMOV "+ temp +",1\n";
				tempCode += label3 +":\n";

			}
			else{
				tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
				tempCode += "\tCMP AX,0\n";
				tempCode += "\tJE "+ label2 +"\n";
				tempCode += "\tMOV AX,"+(yyvsp[0].s)->getSymbolId()+"\n";
				tempCode += "\tCMP AX,0\n";
				tempCode += "\tJE "+ label2 +"\n";
				tempCode += label1 + ":\n";
				tempCode += "\tMOV "+ temp +",1\n";
				tempCode += "\tJMP "+ label3 +"\n";
				tempCode += label2 + ":\n";
				tempCode += "\tMOV "+ temp +",0\n";
				tempCode += label3 + ":\n";

			}
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp);
			ASM_varlist.push_back(temp);

	
		 	(yyval.s)->setName((yyvsp[-2].s)->getName()+(yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName()); 
		}
#line 2630 "y.tab.c"
    break;

  case 50: /* rel_expression: simple_expression  */
#line 1167 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : rel_expression->simple_expression\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
			(yyval.s)->setName((yyvsp[0].s)->getName());
		}
#line 2644 "y.tab.c"
    break;

  case 51: /* rel_expression: simple_expression RELOP simple_expression  */
#line 1177 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : rel_expression->simple_expression RELOP simple_expression\n\n",line_count);
			fprintf(logs,"%s%s%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			(yyval.s)->returnType = "int ";

			tempCode += (yyvsp[-2].s)->getASMcode();
			tempCode += (yyvsp[0].s)->getASMcode();
			string temp = newTemp();
			string label1 = newLabel();
			string label2 = newLabel();
			tempCode += "\tMOV AX," + (yyvsp[-2].s)->getSymbolId()+"\n";
			tempCode += "\tCMP AX," + (yyvsp[0].s)->getSymbolId()+"\n";

			if((yyvsp[-1].s)->getName()=="<"){
				tempCode += "\tJL "+ label1 +"\n";

			}
			else if((yyvsp[-1].s)->getName()==">"){
				tempCode += "\tJG "+ label1 +"\n";

			}
			else if((yyvsp[-1].s)->getName()=="<="){
				tempCode += "\tJLE "+ label1 +"\n";

			}
			else if((yyvsp[-1].s)->getName()==">="){
				tempCode += "\tJGE "+ label1 +"\n";

			}
			else if((yyvsp[-1].s)->getName()=="=="){
				tempCode += "\tJE "+ label1 +"\n";

			}
			else if((yyvsp[-1].s)->getName()=="!="){
				tempCode += "\tJNE "+ label1 +"\n";

			}
			tempCode += "\tMOV "+ temp +",0\n";
			tempCode += "\tJMP "+ label2 +"\n";
			tempCode +=  label1 +":\n";
			tempCode += "\tMOV "+ temp +",1\n";
			tempCode +=  label2 +":\n";
			ASM_varlist.push_back(temp);
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp);

			(yyval.s)->setName((yyvsp[-2].s)->getName()+(yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName());											
		}
#line 2699 "y.tab.c"
    break;

  case 52: /* simple_expression: term  */
#line 1230 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : simple_expression->term\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
			(yyval.s)->setName((yyvsp[0].s)->getName());
			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
		}
#line 2714 "y.tab.c"
    break;

  case 53: /* simple_expression: simple_expression ADDOP term  */
#line 1241 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo(); 
		  	fprintf(logs,"Line at %d : simple_expression->simple_expression ADDOP term\n\n",line_count);
		  	fprintf(logs,"%s%s%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			
		  	if((yyvsp[-2].s)->returnType=="float " || (yyvsp[0].s)->returnType=="float ")
     			(yyval.s)->returnType = "float ";
     		else
     			(yyval.s)->returnType = "int ";

     		tempCode += (yyvsp[-2].s)->getASMcode()+(yyvsp[0].s)->getASMcode();

			tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
			string temp=newTemp();

			if((yyvsp[-1].s)->getName()=="+"){
				tempCode += "\tADD AX,"+(yyvsp[0].s)->getSymbolId()+"\n";
			}
			else{
				tempCode +="\tSUB AX,"+(yyvsp[0].s)->getSymbolId()+"\n";

			}
			tempCode += "\tMOV "+ temp +",AX\n";
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp);
			ASM_varlist.push_back(temp);

			(yyval.s)->setName((yyvsp[-2].s)->getName()+(yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName()); 
		}
#line 2749 "y.tab.c"
    break;

  case 54: /* term: unary_expression  */
#line 1275 "cpp_syntax.y"
        {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : term->unary_expression\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

			(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
			(yyval.s)->setName((yyvsp[0].s)->getName());
     	}
#line 2764 "y.tab.c"
    break;

  case 55: /* term: term MULOP unary_expression  */
#line 1286 "cpp_syntax.y"
        {
     		tempCode = "";
     		string temp = newTemp();
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : term->term MULOP unary_expression\n\n",line_count);
	 		fprintf(logs,"%s%s%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());


     		if((yyvsp[-1].s)->getName()=="%"){
				 if((yyvsp[-2].s)->returnType!="int " || (yyvsp[0].s)->returnType!="int "){
					error_count++;
					fprintf(errors,"Error at Line No.%d:  Integer operand on modulus operator  \n\n",line_count);
				 }
				 else 
				 	(yyval.s)->returnType = "int ";

				 tempCode += (yyvsp[-2].s)->getASMcode()+(yyvsp[0].s)->getASMcode();
				 tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
				 tempCode += "\tMOV BX,"+(yyvsp[0].s)->getSymbolId()+"\n";
				 tempCode += "\tMOV DX,0\n";
				 tempCode += "\tDIV BX\n";
				 tempCode += "\tMOV "+ temp +", DX\n";
				


			} 
			else if((yyvsp[-1].s)->getName()=="/")
			{
					if((yyvsp[-2].s)->returnType=="int " && (yyvsp[0].s)->returnType=="int ")
						(yyval.s)->returnType = "int "; 
					else 
						(yyval.s)->returnType = "float "; 

					 tempCode += (yyvsp[-2].s)->getASMcode()+(yyvsp[0].s)->getASMcode();
					 tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
					 tempCode += "\tMOV BX,"+(yyvsp[0].s)->getSymbolId()+"\n";
					 tempCode += "\tDIV BX\n";
					 tempCode += "\tMOV "+ temp +", AX\n";
			}

			else if((yyvsp[-1].s)->getName()=="*"){

					if((yyvsp[-2].s)->returnType=="float " || (yyvsp[0].s)->returnType=="float ")
						(yyval.s)->returnType = "float "; 
					else 
						(yyval.s)->returnType = "int ";

				 tempCode += (yyvsp[-2].s)->getASMcode()+(yyvsp[0].s)->getASMcode();
				 tempCode += "\tMOV AX,"+(yyvsp[-2].s)->getSymbolId()+"\n";
				 tempCode += "\tMOV BX,"+(yyvsp[0].s)->getSymbolId()+"\n";
				 tempCode += "\tMUL BX\n";
				 tempCode += "\tMOV "+string(temp)+", AX\n";


			}

			 (yyval.s)->setASMcode(tempCode);
			 (yyval.s)->setSymbolId(temp);
			 ASM_varlist.push_back(temp);
	 		 (yyval.s)->setName((yyvsp[-2].s)->getName()+(yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName());
     	}
#line 2830 "y.tab.c"
    break;

  case 56: /* unary_expression: ADDOP unary_expression  */
#line 1350 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo(); 
			fprintf(logs,"Line at %d : unary_expression->ADDOP unary_expression\n\n",line_count);
			fprintf(logs,"%s%s\n\n",(yyvsp[-1].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());

			tempCode += (yyvsp[0].s)->getASMcode();
			if((yyvsp[-1].s)->getName()=="-"){
				tempCode += "\tMOV AX,"+(yyvsp[0].s)->getSymbolId()+"\n";
				tempCode += "\tNEG AX\n";
				tempCode += "\tMOV "+(yyvsp[0].s)->getSymbolId()+",AX\n";
			}

			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());	
			(yyval.s)->returnType = (yyvsp[0].s)->returnType;
			(yyval.s)->setName((yyvsp[-1].s)->getName()+(yyvsp[0].s)->getName());
											
		}
#line 2854 "y.tab.c"
    break;

  case 57: /* unary_expression: NOT unary_expression  */
#line 1370 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : unary_expression->NOT unary_expression\n\n",line_count);
			fprintf(logs,"!%s\n\n",(yyvsp[0].s)->getName().c_str());

			tempCode += (yyvsp[0].s)->getASMcode();
			tempCode += "\tMOV AX," + (yyvsp[0].s)->getSymbolId()+"\n";
			tempCode += "\tNOT AX\n";
			tempCode += "\tMOV " + (yyvsp[0].s)->getSymbolId()+",AX\n";

			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
			(yyval.s)->returnType = "int ";
			(yyval.s)->setName("!"+(yyvsp[0].s)->getName()); 
		}
#line 2875 "y.tab.c"
    break;

  case 58: /* unary_expression: factor  */
#line 1388 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : unary_expression->factor\n\n",line_count);
		 	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

		 	(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
			(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
		 	(yyval.s)->returnType = (yyvsp[0].s)->returnType;
		 	(yyval.s)->setName((yyvsp[0].s)->getName()); 
		}
#line 2890 "y.tab.c"
    break;

  case 59: /* factor: variable  */
#line 1401 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : factor->variable\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());

			SymbolInfo* ss = symbolTable->getInstanceOf_current((yyvsp[0].s)->getName());
			if(ss != 0){
				(yyval.s)->returnType = ss->returnType;

				tempCode += (yyvsp[0].s)->getASMcode();
				if(ss->isArray==true)
				{	
					string temp=newTemp();
					tempCode += "\tMOV AX,"+(yyvsp[0].s)->getSymbolId()+"[BX]\n";
					tempCode += "\tMOV "+ temp +",AX\n";
					ASM_varlist.push_back(temp);
					(yyval.s)->setSymbolId(temp);
				}
				else{
					(yyval.s)->setSymbolId((yyvsp[0].s)->getSymbolId());
				}
			}


			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setName((yyvsp[0].s)->getName());
		}
#line 2923 "y.tab.c"
    break;

  case 60: /* factor: ID LPAREN argument_list RPAREN  */
#line 1430 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo(); 
			fprintf(logs,"Line at %d : factor->ID LPAREN argument_list RPAREN\n\n",line_count);
			fprintf(logs,"%s(%s)\n\n",(yyvsp[-3].s)->getName().c_str(),(yyvsp[-1].s)->getName().c_str());

			SymbolInfo* ss = symbolTable->getInstanceOf_global((yyvsp[-3].s)->getName());

			if(ss != 0) 
			 	(yyval.s)->returnType = ss->returnType;

			if(ss == 0 )
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Undefined Function \n\n",line_count);
			}
			else if(ss->isFunction()==false)
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Not a function \n\n",line_count);
			}
			else if(tempArgList.size() != ss->ptypes.size())
			{
				error_count++;
				fprintf(errors,"Error at Line No.%d:  Invalid number of arguments %d and %d \n\n",line_count,tempArgList.size(),ss->ptypes.size());

			}

			for(int i=0;i<tempArgList.size();i++){
				tempCode += "\tMOV AX,"+tempArgList[i]->getSymbolId()+"\n";
				//tempCode += "\tMOV "+para_list[i]+",AX\n";
			
			}
			
			tempCode += "\tCALL "+(yyvsp[-3].s)->getName()+"\n";
		
			tempCode += "\tMOV AX, return_"+(yyvsp[-3].s)->getName()+"\n";
			string temp = newTemp();
			tempCode += "\tMOV "+ temp+",AX\n";
			
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp);
			(yyvsp[-3].s)->setSymbolId(temp);
			ASM_varlist.push_back(temp);


			(yyval.s)->setName((yyvsp[-3].s)->getName()+"("+(yyvsp[-1].s)->getName()+")"); 
			tempArgList.clear();
		}
#line 2977 "y.tab.c"
    break;

  case 61: /* factor: LPAREN expression RPAREN  */
#line 1480 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : factor->LPAREN expression RPAREN\n\n",line_count);
			fprintf(logs,"(%s)\n\n",(yyvsp[-1].s)->getName().c_str()); 

			(yyval.s)->setSymbolId((yyvsp[-1].s)->getSymbolId());
			(yyval.s)->setASMcode((yyvsp[-1].s)->getASMcode());
			(yyval.s)->returnType = (yyvsp[-1].s)->returnType;
			(yyval.s)->setName("("+(yyvsp[-1].s)->getName()+")");
		}
#line 2992 "y.tab.c"
    break;

  case 62: /* factor: CONST_INT  */
#line 1491 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : factor->CONST_INT\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str());
			string temp = newTemp();
			(yyval.s)->returnType = "int ";
			(yyval.s)->setName((yyvsp[0].s)->getName());
			tempCode += "\tMOV "+ temp +"," +(yyvsp[0].s)->getName()+"\n";
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp); 
			ASM_varlist.push_back(temp);
		}
#line 3010 "y.tab.c"
    break;

  case 63: /* factor: CONST_FLOAT  */
#line 1505 "cpp_syntax.y"
                {
			tempCode = "";
			(yyval.s)=new SymbolInfo();
			fprintf(logs,"Line at %d : factor->CONST_FLOAT\n\n",line_count);
			fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 
			
			string temp = newTemp();
			(yyval.s)->returnType = "float ";
			(yyval.s)->setName((yyvsp[0].s)->getName());
			tempCode += "\tMOV "+ temp +"," +(yyvsp[0].s)->getName()+"\n";
			(yyval.s)->setASMcode(tempCode);
			(yyval.s)->setSymbolId(temp); 
			ASM_varlist.push_back(temp);
		}
#line 3029 "y.tab.c"
    break;

  case 64: /* factor: variable INCOP  */
#line 1520 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			string temp = newTemp();
			tempCode = "";
			fprintf(logs,"Line at %d : factor->variable INCOP\n\n",line_count);
			fprintf(logs,"%s++\n\n",(yyvsp[-1].s)->getName().c_str()); 

			if((yyvsp[-1].s)->isArray==true)
				tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"[BX]\n";
			else
				tempCode += "\tMOV AX," + (yyvsp[-1].s)->getSymbolId()+"\n";
			
			tempCode += "\tMOV "+ temp +",AX\n";
					
			if((yyvsp[-1].s)->isArray==true){
				tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"[BX]\n";
				tempCode += "\tINC AX\n";
				tempCode += "\tMOV "+(yyvsp[-1].s)->getSymbolId()+"[BX],AX\n";
			}
			else
				tempCode += "\tINC "+(yyvsp[-1].s)->getSymbolId()+"\n";
			
			ASM_varlist.push_back(temp);
			(yyval.s)->setASMcode(tempCode); 
			(yyval.s)->setSymbolId(temp);
			(yyval.s)->returnType = (yyvsp[-1].s)->returnType;
			(yyval.s)->setName((yyvsp[-1].s)->getName()+"++"); 
		}
#line 3062 "y.tab.c"
    break;

  case 65: /* factor: variable DECOP  */
#line 1549 "cpp_syntax.y"
                {
			(yyval.s)=new SymbolInfo();
			string temp = newTemp();
			tempCode = "";
			fprintf(logs,"Line at %d : factor->variable DECOP\n\n",line_count);
			fprintf(logs,"%s--\n\n",(yyvsp[-1].s)->getName().c_str());


			if((yyvsp[-1].s)->isArray==true)
				tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"[BX]\n";
			else
				tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"\n";
					
			tempCode += "\tMOV "+ temp +",AX\n";
			
			if((yyvsp[-1].s)->isArray==true){
				tempCode += "\tMOV AX,"+(yyvsp[-1].s)->getSymbolId()+"[BX]\n";
				tempCode += "\tDEC AX\n";
				tempCode += "\tMOV "+(yyvsp[-1].s)->getSymbolId()+"[BX],AX\n";
			}
			else
				tempCode += "\tDEC "+(yyvsp[-1].s)->getSymbolId()+"\n";

			ASM_varlist.push_back(temp);
			(yyval.s)->setASMcode(tempCode); 
			(yyval.s)->setSymbolId(temp);


			(yyval.s)->returnType = (yyvsp[-1].s)->returnType;
			(yyval.s)->setName((yyvsp[-1].s)->getName()+"--"); 
		}
#line 3098 "y.tab.c"
    break;

  case 66: /* argument_list: argument_list COMMA logic_expression  */
#line 1583 "cpp_syntax.y"
            {
	    	(yyval.s)=new SymbolInfo();
	    	fprintf(logs,"Line at %d : argument_list->arguments COMMA logic_expression \n\n",line_count);
			fprintf(logs,"%s,%s\n\n",(yyvsp[-2].s)->getName().c_str(),(yyvsp[0].s)->getName().c_str());
			
			tempArgList.push_back((yyvsp[-2].s));
			(yyval.s)->setName((yyvsp[-2].s)->getName()+","+(yyvsp[0].s)->getName());
			(yyval.s)->setASMcode((yyvsp[-2].s)->getASMcode()+(yyvsp[0].s)->getASMcode());
											
	    }
#line 3113 "y.tab.c"
    break;

  case 67: /* argument_list: logic_expression  */
#line 1594 "cpp_syntax.y"
            {
			(yyval.s)=new SymbolInfo();
		  	fprintf(logs,"Line at %d :  argument_list->logic_expression  \n\n",line_count);
		  	fprintf(logs,"%s\n\n",(yyvsp[0].s)->getName().c_str()); 

		  	tempArgList.push_back((yyvsp[0].s));
		  	(yyval.s)->setName((yyvsp[0].s)->getName());
		  	(yyval.s)->setASMcode((yyvsp[0].s)->getASMcode());
		 
	    }
#line 3128 "y.tab.c"
    break;


#line 3132 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1615 "cpp_syntax.y"

int main(int argc,char *argv[])
{

	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}




	yyin=fp;
	yyparse();
	fclose(fp);
	fprintf(logs,"Total Line : %d \nTotal errors : %d  \n\n",line_count,error_count);
	fprintf(errors,"Total Line : %d \nTotal errors : %d  \n\n",line_count,error_count);
	
	fclose(errors);
	fclose(logs);
	
	
	return 0;
}
