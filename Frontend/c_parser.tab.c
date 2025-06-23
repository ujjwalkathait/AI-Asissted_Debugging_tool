
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "c_parser.y"

	int yylineno;
	char data_type[200];


/* Line 189 of yacc.c  */
#line 79 "c_parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NO_ELSE = 258,
     ELSE = 259,
     NE_OP = 260,
     EQ_OP = 261,
     LE_OP = 262,
     GE_OP = 263,
     IDENTIFIER = 264,
     CONSTANT = 265,
     STRING_LITERAL = 266,
     SIZEOF = 267,
     PTR_OP = 268,
     INC_OP = 269,
     DEC_OP = 270,
     LEFT_OP = 271,
     RIGHT_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     DEFINE = 285,
     TYPEDEF = 286,
     EXTERN = 287,
     STATIC = 288,
     AUTO = 289,
     REGISTER = 290,
     CHAR = 291,
     SHORT = 292,
     INT = 293,
     LONG = 294,
     SIGNED = 295,
     UNSIGNED = 296,
     FLOAT = 297,
     DOUBLE = 298,
     CONST = 299,
     VOLATILE = 300,
     VOID = 301,
     STRUCT = 302,
     UNION = 303,
     ENUM = 304,
     CASE = 305,
     DEFAULT = 306,
     IF = 307,
     SWITCH = 308,
     WHILE = 309,
     DO = 310,
     FOR = 311,
     GOTO = 312,
     CONTINUE = 313,
     BREAK = 314,
     RETURN = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "c_parser.y"

	char str[1000];



/* Line 214 of yacc.c  */
#line 181 "c_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "c_parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   908

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  282

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    16,    18,     2,
      71,    72,    14,    12,    76,    13,    75,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    82,
       5,     7,     6,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    17,    84,    77,     2,     2,     2,
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
       8,     9,    10,    11,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    17,    21,
      23,    25,    30,    34,    39,    43,    47,    50,    53,    55,
      59,    61,    64,    67,    70,    73,    78,    80,    82,    84,
      86,    88,    90,    92,    97,    99,   103,   107,   111,   113,
     117,   121,   123,   127,   131,   133,   137,   141,   145,   149,
     151,   155,   159,   161,   165,   167,   171,   173,   177,   179,
     183,   185,   189,   191,   197,   199,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   231,
     233,   236,   240,   242,   245,   247,   250,   252,   256,   258,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   295,   297,   300,   302,
     309,   315,   319,   321,   323,   325,   328,   332,   334,   338,
     341,   343,   345,   349,   354,   358,   363,   368,   372,   374,
     377,   379,   383,   386,   388,   390,   394,   396,   399,   401,
     405,   410,   412,   416,   418,   420,   422,   424,   426,   429,
     433,   437,   442,   444,   447,   449,   452,   454,   457,   463,
     471,   477,   485,   492,   500,   503,   506,   509,   513,   515,
     517,   522,   526,   530
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      86,     0,    -1,   138,    -1,    86,   138,    -1,    88,    86,
      -1,    19,    -1,    20,    -1,    21,    -1,    71,   107,    72,
      -1,    40,    -1,    87,    -1,    89,    73,   107,    74,    -1,
      89,    71,    72,    -1,    89,    71,    90,    72,    -1,    89,
      75,    19,    -1,    89,    23,    19,    -1,    89,    24,    -1,
      89,    25,    -1,   105,    -1,    90,    76,   105,    -1,    89,
      -1,    24,    91,    -1,    25,    91,    -1,    92,    93,    -1,
      22,    91,    -1,    22,    71,   127,    72,    -1,    18,    -1,
      14,    -1,    12,    -1,    13,    -1,    77,    -1,    78,    -1,
      91,    -1,    71,   127,    72,    93,    -1,    93,    -1,    94,
      14,    93,    -1,    94,    15,    93,    -1,    94,    16,    93,
      -1,    94,    -1,    95,    12,    94,    -1,    95,    13,    94,
      -1,    95,    -1,    96,    26,    95,    -1,    96,    27,    95,
      -1,    96,    -1,    97,     5,    96,    -1,    97,     6,    96,
      -1,    97,    10,    96,    -1,    97,    11,    96,    -1,    97,
      -1,    98,     9,    97,    -1,    98,     8,    97,    -1,    98,
      -1,    99,    18,    98,    -1,    99,    -1,   100,    79,    99,
      -1,   100,    -1,   101,    17,   100,    -1,   101,    -1,   102,
      28,   101,    -1,   102,    -1,   103,    29,   102,    -1,   103,
      -1,   103,    80,   107,    81,   104,    -1,   104,    -1,    91,
     106,   105,    -1,     7,    -1,    30,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,   105,    -1,   107,    76,   105,
      -1,   104,    -1,   110,    82,    -1,   110,   111,    82,    -1,
     113,    -1,   113,   110,    -1,   114,    -1,   114,   110,    -1,
     112,    -1,   111,    76,   112,    -1,   121,    -1,   121,     7,
     128,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    56,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    52,    -1,    53,    -1,    50,    -1,    51,    -1,
     116,    -1,   114,   115,    -1,   114,    -1,    54,   115,    -1,
      54,    -1,   117,    19,    83,   118,    84,    82,    -1,   117,
      83,   118,    84,    82,    -1,   117,    19,    82,    -1,    57,
      -1,    58,    -1,   119,    -1,   118,   119,    -1,   115,   120,
      82,    -1,   121,    -1,   120,    76,   121,    -1,   123,   122,
      -1,   122,    -1,    19,    -1,    71,   121,    72,    -1,   122,
      73,   108,    74,    -1,   122,    73,    74,    -1,   122,    71,
     124,    72,    -1,   122,    71,   126,    72,    -1,   122,    71,
      72,    -1,    14,    -1,    14,   123,    -1,   125,    -1,   124,
      76,   125,    -1,   110,   121,    -1,   110,    -1,    19,    -1,
     126,    76,    19,    -1,   115,    -1,   115,   121,    -1,   105,
      -1,    83,   129,    84,    -1,    83,   129,    76,    84,    -1,
     128,    -1,   129,    76,   128,    -1,   131,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,    83,    84,    -1,    83,
     133,    84,    -1,    83,   132,    84,    -1,    83,   132,   133,
      84,    -1,   109,    -1,   132,   109,    -1,   130,    -1,   133,
     130,    -1,    82,    -1,   107,    82,    -1,    62,    71,   107,
      72,   130,    -1,    62,    71,   107,    72,   130,     4,   130,
      -1,    64,    71,   107,    72,   130,    -1,    65,   130,    64,
      71,   107,    72,    82,    -1,    66,    71,   134,   134,    72,
     130,    -1,    66,    71,   134,   134,   107,    72,   130,    -1,
      68,    82,    -1,    69,    82,    -1,    70,    82,    -1,    70,
     107,    82,    -1,   139,    -1,   109,    -1,   110,   121,   132,
     131,    -1,   110,   121,   131,    -1,   121,   132,   131,    -1,
     121,   131,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    38,    39,    40,    41,    45,
      49,    50,    51,    52,    53,    54,    55,    56,    60,    61,
      65,    66,    67,    68,    69,    70,    74,    75,    76,    77,
      78,    79,    83,    84,    88,    89,    90,    91,    95,    96,
      97,   101,   102,   103,   107,   108,   109,   110,   111,   115,
     116,   117,   121,   122,   126,   127,   131,   132,   136,   137,
     141,   142,   146,   147,   151,   152,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   170,   171,   175,
     179,   180,   184,   185,   186,   187,   191,   192,   196,   197,
     201,   202,   203,   204,   205,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   222,   223,   224,   225,   229,
     230,   231,   235,   236,   240,   241,   245,   250,   251,   255,
     256,   260,   261,   262,   263,   264,   265,   266,   270,   271,
     275,   276,   280,   281,   285,   286,   290,   291,   295,   296,
     297,   301,   302,   306,   307,   308,   309,   310,   314,   315,
     316,   317,   321,   322,   326,   327,   331,   332,   336,   337,
     341,   342,   343,   344,   348,   349,   350,   351,   355,   356,
     360,   361,   362,   363
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NO_ELSE", "ELSE", "'<'", "'>'", "'='",
  "NE_OP", "EQ_OP", "LE_OP", "GE_OP", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'|'", "'&'", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "DEFINE", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE", "DEFAULT", "IF",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "'('", "')'", "'['", "']'", "'.'", "','", "'~'", "'!'", "'^'", "'?'",
  "':'", "';'", "'{'", "'}'", "$accept", "begin", "primary_expression",
  "Define", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "external_declaration", "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    60,    62,    61,   260,   261,
     262,   263,    43,    45,    42,    47,    37,   124,    38,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,   126,    33,    94,
      63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    87,    87,    87,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   108,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     6,
       5,     3,     1,     1,     1,     2,     3,     1,     3,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       1,     3,     2,     1,     1,     3,     1,     2,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     7,
       5,     7,     6,     7,     2,     2,     2,     3,     1,     1,
       4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   128,   121,     9,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   102,   103,   100,   101,    95,   112,   113,
       0,     0,     0,   169,     0,    82,    84,   104,     0,     0,
     120,     0,     2,   168,   129,     0,     1,     3,     4,    80,
       0,    86,    88,    83,    85,     0,     0,     0,   152,     0,
     173,     0,     0,     0,   119,   122,     0,    81,     0,   171,
       0,   111,     0,   108,   106,     0,     0,   114,    28,    29,
      27,    26,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,   156,   148,
      10,    20,    32,     0,    34,    38,    41,    44,    49,    52,
      54,    56,    58,    60,    62,    64,    77,     0,   154,   143,
       0,     0,   144,   145,   146,   147,    88,   153,   172,   134,
     127,   133,     0,   130,     0,   124,    32,    79,     0,    87,
       0,   138,    89,   170,     0,   107,   105,     0,   117,     0,
     115,     0,    24,     0,    21,    22,     0,     0,     0,     0,
     164,   165,   166,     0,     0,   136,     0,     0,    16,    17,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   150,     0,   149,
     155,   132,   125,     0,   126,     0,   123,   141,     0,     0,
       0,   116,   110,     0,     0,     0,     0,     0,   167,     8,
     137,     0,    15,    12,     0,    18,     0,    14,    65,    35,
      36,    37,    39,    40,    42,    43,    45,    46,    47,    48,
      51,    50,    53,    55,    57,    59,    61,     0,    78,   151,
     131,   135,     0,   139,   109,   118,    25,     0,     0,     0,
       0,    33,    13,     0,    11,     0,   140,   142,   158,   160,
       0,     0,     0,    19,    63,     0,     0,   162,     0,   159,
     161,   163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    90,    22,    91,   224,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   174,   107,   128,    23,    49,    40,    41,    25,    26,
      65,    27,    28,    66,    67,   137,    29,    30,    31,   122,
     123,   124,   156,   132,   208,   108,   109,    51,   111,   112,
     113,   114,   115,    32,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
     714,     7,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
       1,   422,   714,  -140,    -8,   850,   850,  -140,    -2,   807,
      42,     0,  -140,  -140,  -140,   -60,  -140,  -140,   754,  -140,
     -34,  -140,   114,  -140,  -140,    64,   349,   212,  -140,    -8,
    -140,   807,   789,   537,    42,  -140,     1,  -140,   470,  -140,
     807,  -140,   349,   349,   349,     1,   730,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   647,   661,   661,     6,     9,
     436,    16,   -45,    37,   503,   585,  -140,  -140,  -140,  -140,
    -140,    43,   277,   675,  -140,    79,   141,   180,    97,   202,
      99,    90,   105,   155,    10,  -140,  -140,   -32,  -140,  -140,
     279,   346,  -140,  -140,  -140,  -140,   186,  -140,  -140,  -140,
    -140,     1,   -14,  -140,    24,  -140,  -140,  -140,   121,  -140,
     470,  -140,  -140,  -140,   820,  -140,  -140,   -29,  -140,   122,
    -140,   585,  -140,   675,  -140,  -140,   675,   675,   163,   518,
    -140,  -140,  -140,    -7,    33,     1,   147,   209,  -140,  -140,
     551,   675,   210,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   675,  -140,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,  -140,  -140,   369,  -140,
    -140,  -140,  -140,   850,  -140,   216,  -140,  -140,   -35,   157,
       1,  -140,  -140,   168,    73,    76,   170,   518,  -140,  -140,
    -140,   675,  -140,  -140,   118,  -140,   108,  -140,  -140,  -140,
    -140,  -140,    79,    79,   141,   141,   180,   180,   180,   180,
      97,    97,   202,    99,    90,   105,   155,     8,  -140,  -140,
    -140,  -140,   167,  -140,  -140,  -140,  -140,   436,   436,   675,
     633,  -140,  -140,   675,  -140,   675,  -140,  -140,   238,  -140,
     124,   436,   129,  -140,  -140,   436,   161,  -140,   436,  -140,
    -140,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,   224,  -140,  -140,  -140,  -140,   -53,  -140,   -79,    35,
      36,   -10,    34,    58,    59,    57,    60,    74,  -140,   -52,
     -54,  -140,   -82,  -140,    41,     5,  -140,   215,  -140,   -30,
     -56,  -140,  -140,   204,   -48,  -140,   -11,   241,   272,  -140,
      72,  -140,   138,  -102,  -140,   -55,    31,     4,   175,  -139,
    -140,  -140,  -140,    14,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     126,   127,   153,   154,   131,    24,     1,   135,   136,    35,
     217,     2,    55,    42,   175,     1,    64,    45,   140,     2,
       2,     1,   142,   144,   145,   148,    24,    24,   207,   155,
      43,    44,    64,    64,    64,    37,    64,   150,   116,   193,
     126,   252,    56,    24,   195,   116,    60,   210,    57,   253,
     196,   110,    37,   211,   138,    64,   200,   121,   202,   154,
      50,   154,   203,    20,   214,   215,   157,   158,   159,   195,
      48,    20,    20,    59,    39,   218,   131,   146,   260,   226,
     147,    46,   118,    48,   195,   155,   140,   149,    48,   265,
     194,   133,   117,   176,   177,   178,   204,   229,   230,   231,
     205,   117,   183,   184,    64,   219,   225,   185,   186,   195,
     201,    64,   247,    52,   160,    53,   161,   189,   162,   151,
     228,    58,   191,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   248,   261,   200,   220,   257,    61,    62,   258,   195,
     267,   117,   195,   179,   180,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   126,   190,
      17,    18,    19,   236,   237,   238,   239,   270,   272,    68,
      69,    70,   264,   192,   195,    71,    72,    73,    74,    75,
     262,    76,    77,    58,   263,   206,   276,    47,   131,   255,
     195,   278,   268,   269,   212,   195,   181,   182,   121,   273,
     187,   188,   126,   274,   232,   233,   277,   234,   235,   221,
     279,   240,   241,   281,    68,    69,    70,   216,   222,   227,
      71,    72,    73,    74,    75,   251,    76,    77,    85,   254,
     256,   259,   275,   280,    86,    87,    38,   242,   244,   243,
     130,   266,   245,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   134,   246,    17,    18,
      19,   129,    54,    34,    78,   250,    79,    80,    81,   213,
      82,    83,    84,    85,   163,   198,     0,     0,     0,    86,
      87,    68,    69,    70,    88,    47,    89,    71,    72,    73,
      74,    75,     0,    76,    77,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,    18,    19,     0,     0,
       0,    78,     0,    79,    80,    81,     0,    82,    83,    84,
      85,     0,     0,     0,     0,     0,    86,    87,    68,    69,
      70,    88,    47,   197,    71,    72,    73,    74,    75,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,     0,     0,     0,    71,    72,    73,
      74,    75,     0,    76,    77,     9,    10,    11,    12,    13,
      14,    15,    16,    63,     0,    17,    18,    19,    78,     0,
      79,    80,    81,     0,    82,    83,    84,    85,     0,     0,
       0,     0,    36,    86,    87,     0,     0,     0,    88,    47,
     199,    78,     0,    79,    80,    81,     1,    82,    83,    84,
      85,     2,     0,     0,     0,     0,    86,    87,    68,    69,
      70,    88,    47,   249,    71,    72,    73,    74,    75,     0,
      76,    77,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,    17,    18,
      19,     0,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    20,    76,    77,     0,     0,    78,     0,
      79,    80,    81,     0,    82,    83,    84,    85,     0,     0,
       0,     0,     0,    86,    87,    68,    69,    70,    88,    47,
       0,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      68,    69,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    85,    76,    77,     0,     0,     0,    86,    87,    68,
      69,    70,     0,   130,     0,    71,    72,    73,    74,    75,
       0,    76,    77,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    85,    76,    77,     0,     0,     0,
      86,    87,     0,     0,     0,   152,     0,     0,     0,    85,
       0,     0,     0,     0,     0,    86,    87,    68,    69,    70,
      88,     0,     0,    71,    72,    73,    74,    75,    85,    76,
      77,   125,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    85,   223,     0,     0,     0,     0,    86,    87,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    63,
       0,    17,    18,    19,     0,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    85,    76,    77,    68,
      69,    70,    86,    87,     0,    71,    72,    73,    74,    75,
       0,    76,    77,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,     0,    76,    77,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,     0,    76,
      77,     0,     0,     0,    85,   271,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     1,     0,
       0,     0,   143,     2,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     1,     0,
      17,    18,    19,     2,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    63,    20,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   119,     0,
      17,    18,    19,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,    18,    19,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   120,     0,    17,    18,    19,     9,    10,    11,    12,
      13,    14,    15,    16,    63,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   209,     0,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      53,    53,    84,    85,    58,     0,    14,    63,    64,    20,
     149,    19,    72,    24,    93,    14,    46,    19,    66,    19,
      19,    14,    75,    76,    77,    80,    21,    22,   130,    85,
      25,    26,    62,    63,    64,    21,    66,    82,    49,    29,
      93,    76,    76,    38,    76,    56,    42,    76,    82,    84,
      82,    47,    38,    82,    65,    85,   111,    52,    72,   141,
      29,   143,    76,    71,   146,   147,    23,    24,    25,    76,
      29,    71,    71,    42,    82,    82,   130,    71,   217,   161,
      71,    83,    51,    42,    76,   141,   134,    71,    47,    81,
      80,    60,    51,    14,    15,    16,    72,   176,   177,   178,
      76,    60,     5,     6,   134,    72,   160,    10,    11,    76,
     121,   141,   194,    71,    71,    73,    73,    18,    75,    82,
     174,     7,    17,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   195,   221,   198,   155,    72,    82,    83,    72,    76,
     252,   110,    76,    12,    13,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   221,    79,
      56,    57,    58,   183,   184,   185,   186,   259,   260,    12,
      13,    14,    74,    28,    76,    18,    19,    20,    21,    22,
      72,    24,    25,     7,    76,    74,    72,    83,   252,   210,
      76,    72,   257,   258,    82,    76,    26,    27,   203,   263,
       8,     9,   265,   265,   179,   180,   271,   181,   182,    72,
     275,   187,   188,   278,    12,    13,    14,    64,    19,    19,
      18,    19,    20,    21,    22,    19,    24,    25,    71,    82,
      72,    71,     4,    82,    77,    78,    22,   189,   191,   190,
      83,    84,   192,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    62,   193,    56,    57,
      58,    56,    31,     1,    62,   203,    64,    65,    66,   141,
      68,    69,    70,    71,     7,   110,    -1,    -1,    -1,    77,
      78,    12,    13,    14,    82,    83,    84,    18,    19,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    -1,    64,    65,    66,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    77,    78,    12,    13,
      14,    82,    83,    84,    18,    19,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    62,    -1,
      64,    65,    66,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,     0,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    62,    -1,    64,    65,    66,    14,    68,    69,    70,
      71,    19,    -1,    -1,    -1,    -1,    77,    78,    12,    13,
      14,    82,    83,    84,    18,    19,    20,    21,    22,    -1,
      24,    25,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    71,    24,    25,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    77,    78,    12,    13,    14,    82,    83,
      -1,    18,    19,    20,    21,    22,    -1,    24,    25,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    71,    24,    25,    -1,    -1,    -1,    77,    78,    12,
      13,    14,    -1,    83,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    71,    24,    25,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    77,    78,    12,    13,    14,
      82,    -1,    -1,    18,    19,    20,    21,    22,    71,    24,
      25,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    77,    78,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    71,    24,    25,    12,
      13,    14,    77,    78,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    24,    25,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    -1,    24,
      25,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    14,    -1,
      -1,    -1,    71,    19,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    77,    78,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    14,    -1,
      56,    57,    58,    19,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    71,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    19,    -1,
      56,    57,    58,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    57,    58,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    72,    -1,    56,    57,    58,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    84,    -1,    56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    19,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    56,    57,    58,
      71,    86,    88,   109,   110,   113,   114,   116,   117,   121,
     122,   123,   138,   139,   123,   121,     0,   138,    86,    82,
     111,   112,   121,   110,   110,    19,    83,    83,   109,   110,
     131,   132,    71,    73,   122,    72,    76,    82,     7,   131,
     132,    82,    83,    54,   114,   115,   118,   119,    12,    13,
      14,    18,    19,    20,    21,    22,    24,    25,    62,    64,
      65,    66,    68,    69,    70,    71,    77,    78,    82,    84,
      87,    89,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   107,   130,   131,
     132,   133,   134,   135,   136,   137,   121,   109,   131,    19,
      72,   110,   124,   125,   126,    74,    91,   104,   108,   112,
      83,   105,   128,   131,   118,   115,   115,   120,   121,    84,
     119,    71,    91,    71,    91,    91,    71,    71,   130,    71,
      82,    82,    82,   107,   107,   115,   127,    23,    24,    25,
      71,    73,    75,     7,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   106,    93,    14,    15,    16,    12,
      13,    26,    27,     5,     6,    10,    11,     8,     9,    18,
      79,    17,    28,    29,    80,    76,    82,    84,   133,    84,
     130,   121,    72,    76,    72,    76,    74,   128,   129,    84,
      76,    82,    82,   127,   107,   107,    64,   134,    82,    72,
     121,    72,    19,    72,    90,   105,   107,    19,   105,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    99,   100,   101,   102,   107,   105,    84,
     125,    19,    76,    84,    82,   121,    72,    72,    72,    71,
     134,    93,    72,    76,    74,    81,    84,   128,   130,   130,
     107,    72,   107,   105,   104,     4,    72,   130,    72,   130,
      82,   130
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 38 "c_parser.y"
    { insertToHash((yyvsp[(1) - (1)].str), data_type , yylineno); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 186 "c_parser.y"
    { strcpy(data_type, (yyvsp[(1) - (1)].str)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1821 "c_parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 365 "c_parser.y"


#include "lex.yy.c"
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	display();
	disp();
	return 0;
}
//extern int lineno;
extern char *yytext;
yyerror(char *s) {
	printf("\nLine %d : %s\n", (yylineno), s);
}         

