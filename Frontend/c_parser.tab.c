
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
     COMMA_EXPR = 260,
     COMMA_DECL = 261,
     NE_OP = 262,
     EQ_OP = 263,
     LE_OP = 264,
     GE_OP = 265,
     INCLUDE = 266,
     HEADER = 267,
     IDENTIFIER = 268,
     CONSTANT = 269,
     STRING_LITERAL = 270,
     SIZEOF = 271,
     PTR_OP = 272,
     INC_OP = 273,
     DEC_OP = 274,
     LEFT_OP = 275,
     RIGHT_OP = 276,
     AND_OP = 277,
     OR_OP = 278,
     MUL_ASSIGN = 279,
     DIV_ASSIGN = 280,
     MOD_ASSIGN = 281,
     ADD_ASSIGN = 282,
     SUB_ASSIGN = 283,
     LEFT_ASSIGN = 284,
     RIGHT_ASSIGN = 285,
     AND_ASSIGN = 286,
     XOR_ASSIGN = 287,
     OR_ASSIGN = 288,
     DEFINE = 289,
     TYPEDEF = 290,
     EXTERN = 291,
     STATIC = 292,
     AUTO = 293,
     REGISTER = 294,
     CHAR = 295,
     SHORT = 296,
     INT = 297,
     LONG = 298,
     SIGNED = 299,
     UNSIGNED = 300,
     FLOAT = 301,
     DOUBLE = 302,
     CONST = 303,
     VOLATILE = 304,
     VOID = 305,
     STRUCT = 306,
     UNION = 307,
     ENUM = 308,
     CASE = 309,
     DEFAULT = 310,
     IF = 311,
     SWITCH = 312,
     WHILE = 313,
     DO = 314,
     FOR = 315,
     GOTO = 316,
     CONTINUE = 317,
     BREAK = 318,
     RETURN = 319
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "c_parser.y"

	char str[1000];



/* Line 214 of yacc.c  */
#line 185 "c_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "c_parser.tab.c"

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   969

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  286

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,     2,     2,    18,    20,     2,
      75,    76,    16,    14,    80,    15,    79,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    86,
       7,     9,     8,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    19,    88,    81,     2,     2,     2,
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
       5,     6,    10,    11,    12,    13,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    19,    21,
      23,    27,    29,    31,    36,    40,    45,    49,    53,    56,
      59,    61,    65,    67,    70,    73,    76,    79,    84,    86,
      88,    90,    92,    94,    96,    98,   103,   105,   109,   113,
     117,   119,   123,   127,   129,   133,   137,   139,   143,   147,
     151,   155,   157,   161,   165,   167,   171,   173,   177,   179,
     183,   185,   189,   191,   195,   197,   203,   205,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233,   237,   239,   242,   246,   248,   251,   253,   256,   258,
     262,   264,   268,   270,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   294,   296,   298,   301,   303,
     306,   308,   315,   321,   325,   327,   329,   331,   334,   338,
     340,   344,   347,   349,   351,   355,   360,   364,   369,   374,
     378,   380,   383,   385,   389,   392,   394,   396,   400,   402,
     405,   407,   411,   416,   418,   422,   424,   426,   428,   430,
     432,   435,   439,   443,   448,   450,   453,   455,   458,   460,
     463,   469,   477,   483,   491,   498,   506,   509,   512,   515,
     519,   521,   523,   528,   532,   536
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,   143,    -1,    90,   143,    -1,    93,    90,
      -1,    91,    90,    -1,    21,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    75,   112,    76,    -1,    44,    -1,    92,
      -1,    94,    77,   112,    78,    -1,    94,    75,    76,    -1,
      94,    75,    95,    76,    -1,    94,    79,    23,    -1,    94,
      27,    23,    -1,    94,    28,    -1,    94,    29,    -1,   110,
      -1,    95,    80,   110,    -1,    94,    -1,    28,    96,    -1,
      29,    96,    -1,    97,    98,    -1,    26,    96,    -1,    26,
      75,   132,    76,    -1,    20,    -1,    16,    -1,    14,    -1,
      15,    -1,    81,    -1,    82,    -1,    96,    -1,    75,   132,
      76,    98,    -1,    98,    -1,    99,    16,    98,    -1,    99,
      17,    98,    -1,    99,    18,    98,    -1,    99,    -1,   100,
      14,    99,    -1,   100,    15,    99,    -1,   100,    -1,   101,
      30,   100,    -1,   101,    31,   100,    -1,   101,    -1,   102,
       7,   101,    -1,   102,     8,   101,    -1,   102,    12,   101,
      -1,   102,    13,   101,    -1,   102,    -1,   103,    11,   102,
      -1,   103,    10,   102,    -1,   103,    -1,   104,    20,   103,
      -1,   104,    -1,   105,    83,   104,    -1,   105,    -1,   106,
      19,   105,    -1,   106,    -1,   107,    32,   106,    -1,   107,
      -1,   108,    33,   107,    -1,   108,    -1,   108,    84,   112,
      85,   109,    -1,   109,    -1,    96,   111,   110,    -1,     9,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,   110,    -1,   112,    80,   110,    -1,   109,    -1,   115,
      86,    -1,   115,   116,    86,    -1,   118,    -1,   118,   115,
      -1,   119,    -1,   119,   115,    -1,   117,    -1,   116,    80,
     117,    -1,   126,    -1,   126,     9,   133,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    60,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    56,    -1,
      57,    -1,    54,    -1,    55,    -1,   121,    -1,   119,   120,
      -1,   119,    -1,    58,   120,    -1,    58,    -1,   122,    23,
      87,   123,    88,    86,    -1,   122,    87,   123,    88,    86,
      -1,   122,    23,    86,    -1,    61,    -1,    62,    -1,   124,
      -1,   123,   124,    -1,   120,   125,    86,    -1,   126,    -1,
     125,    80,   126,    -1,   128,   127,    -1,   127,    -1,    23,
      -1,    75,   126,    76,    -1,   127,    77,   113,    78,    -1,
     127,    77,    78,    -1,   127,    75,   129,    76,    -1,   127,
      75,   131,    76,    -1,   127,    75,    76,    -1,    16,    -1,
      16,   128,    -1,   130,    -1,   129,    80,   130,    -1,   115,
     126,    -1,   115,    -1,    23,    -1,   131,    80,    23,    -1,
     120,    -1,   120,   126,    -1,   110,    -1,    87,   134,    88,
      -1,    87,   134,    80,    88,    -1,   133,    -1,   134,    80,
     133,    -1,   136,    -1,   139,    -1,   140,    -1,   141,    -1,
     142,    -1,    87,    88,    -1,    87,   138,    88,    -1,    87,
     137,    88,    -1,    87,   137,   138,    88,    -1,   114,    -1,
     137,   114,    -1,   135,    -1,   138,   135,    -1,    86,    -1,
     112,    86,    -1,    66,    75,   112,    76,   135,    -1,    66,
      75,   112,    76,   135,     4,   135,    -1,    68,    75,   112,
      76,   135,    -1,    69,   135,    68,    75,   112,    76,    86,
      -1,    70,    75,   139,   139,    76,   135,    -1,    70,    75,
     139,   139,   112,    76,   135,    -1,    72,    86,    -1,    73,
      86,    -1,    74,    86,    -1,    74,   112,    86,    -1,   144,
      -1,   114,    -1,   115,   126,   137,   136,    -1,   115,   126,
     136,    -1,   126,   137,   136,    -1,   126,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    51,    67,    68,    69,
      70,    74,    78,    79,    80,    81,    82,    83,    84,    85,
      89,    90,    94,    95,    96,    97,    98,    99,   103,   103,
     103,   103,   103,   103,   107,   108,   112,   113,   114,   115,
     119,   120,   121,   125,   126,   127,   131,   132,   133,   134,
     135,   139,   140,   141,   145,   146,   150,   151,   155,   156,
     160,   161,   165,   166,   170,   171,   175,   176,   180,   180,
     180,   180,   181,   181,   181,   181,   182,   182,   182,   186,
     187,   191,   195,   196,   200,   201,   202,   203,   207,   208,
     212,   213,   217,   217,   217,   217,   217,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   222,   226,   227,   228,
     229,   233,   234,   235,   239,   239,   243,   244,   248,   252,
     253,   257,   258,   262,   263,   264,   265,   266,   267,   268,
     272,   272,   276,   277,   281,   282,   286,   287,   291,   292,
     296,   297,   298,   302,   303,   307,   308,   309,   310,   311,
     315,   316,   317,   318,   322,   323,   327,   328,   332,   333,
     337,   338,   342,   343,   344,   345,   349,   350,   351,   352,
     356,   357,   361,   362,   363,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NO_ELSE", "ELSE", "COMMA_EXPR",
  "COMMA_DECL", "'<'", "'>'", "'='", "NE_OP", "EQ_OP", "LE_OP", "GE_OP",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'|'", "'&'", "INCLUDE", "HEADER",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "DEFINE",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE", "DEFAULT", "IF",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "'('", "')'", "'['", "']'", "'.'", "','", "'~'", "'!'", "'^'", "'?'",
  "':'", "';'", "'{'", "'}'", "$accept", "begin", "preprocessor_directive",
  "primary_expression", "Define", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
       0,   256,   257,   258,   259,   260,   261,    60,    62,    61,
     262,   263,   264,   265,    43,    45,    42,    47,    37,   124,
      38,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
      44,   126,    33,    94,    63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    92,    92,    92,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   141,   142,   142,   142,   142,
     143,   143,   144,   144,   144,   144
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       3,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     6,     5,     3,     1,     1,     1,     2,     3,     1,
       3,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     1,     3,     2,     1,     1,     3,     1,     2,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       2,     3,     3,     4,     1,     2,     1,     2,     1,     2,
       5,     7,     5,     7,     6,     7,     2,     2,     2,     3,
       1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   130,     0,   123,    11,    92,    93,    94,    95,    96,
      98,    99,   100,   101,   104,   105,   102,   103,    97,   114,
     115,     0,     0,     0,     0,   171,     0,    84,    86,   106,
       0,     0,   122,     0,     2,   170,   131,     6,     0,     1,
       3,     5,     4,    82,     0,    88,    90,    85,    87,     0,
       0,     0,   154,     0,   175,     0,     0,     0,   121,   124,
       0,    83,     0,   173,     0,   113,     0,   110,   108,     0,
       0,   116,    30,    31,    29,    28,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,   158,   150,    12,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
      79,     0,   156,   145,     0,     0,   146,   147,   148,   149,
      90,   155,   174,   136,   129,   135,     0,   132,     0,   126,
      34,    81,     0,    89,     0,   140,    91,   172,     0,   109,
     107,     0,   119,     0,   117,     0,    26,     0,    23,    24,
       0,     0,     0,     0,   166,   167,   168,     0,     0,   138,
       0,     0,    18,    19,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,   152,     0,   151,   157,   134,   127,     0,   128,     0,
     125,   143,     0,     0,     0,   118,   112,     0,     0,     0,
       0,     0,   169,    10,   139,     0,    17,    14,     0,    20,
       0,    16,    67,    37,    38,    39,    41,    42,    44,    45,
      47,    48,    49,    50,    53,    52,    55,    57,    59,    61,
      63,     0,    80,   153,   133,   137,     0,   141,   111,   120,
      27,     0,     0,     0,     0,    35,    15,     0,    13,     0,
     142,   144,   160,   162,     0,     0,     0,    21,    65,     0,
       0,   164,     0,   161,   163,   165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    94,    24,    95,   228,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   178,   111,   132,    25,    26,    44,    45,    27,
      28,    69,    29,    30,    70,    71,   141,    31,    32,    33,
     126,   127,   128,   160,   136,   212,   112,   113,    55,   115,
     116,   117,   118,   119,    34,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
     777,     3,    -1,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,    -7,   181,   777,   777,  -147,    -8,   907,   907,  -147,
      12,   850,   144,    29,  -147,  -147,  -147,  -147,   -30,  -147,
    -147,   819,   819,  -147,    31,  -147,    35,  -147,  -147,    87,
     214,   234,  -147,    -8,  -147,   850,   727,   604,   144,  -147,
      -7,  -147,   503,  -147,   850,  -147,   214,   214,   214,    -7,
     863,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,   689,
     715,   715,   -20,    43,   487,    46,    -9,    59,   136,   588,
    -147,  -147,  -147,  -147,  -147,   352,   148,   737,  -147,    91,
     180,   177,   159,   204,   135,    75,   160,   168,   -21,  -147,
    -147,    67,  -147,  -147,   303,   372,  -147,  -147,  -147,  -147,
     243,  -147,  -147,  -147,  -147,    -7,   -33,  -147,   -18,  -147,
    -147,  -147,   183,  -147,   503,  -147,  -147,  -147,   878,  -147,
    -147,    68,  -147,   169,  -147,   588,  -147,   737,  -147,  -147,
     737,   737,   205,   572,  -147,  -147,  -147,    83,    -6,    -7,
     221,   275,  -147,  -147,   652,   737,   276,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,   737,  -147,
     737,   737,   737,   737,   737,   737,   737,   737,   737,   737,
     737,   737,   737,   737,   737,   737,   737,   737,   737,   737,
    -147,  -147,   395,  -147,  -147,  -147,  -147,   907,  -147,   278,
    -147,  -147,   -49,   219,    -7,  -147,  -147,   235,    39,   100,
     237,   572,  -147,  -147,  -147,   737,  -147,  -147,   116,  -147,
     173,  -147,  -147,  -147,  -147,  -147,    91,    91,   180,   180,
     177,   177,   177,   177,   159,   159,   204,   135,    75,   160,
     168,   -51,  -147,  -147,  -147,  -147,   464,  -147,  -147,  -147,
    -147,   487,   487,   737,   673,  -147,  -147,   737,  -147,   737,
    -147,  -147,   306,  -147,   125,   487,   130,  -147,  -147,   487,
     227,  -147,   487,  -147,  -147,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,   201,  -147,  -147,  -147,  -147,  -147,   -57,  -147,   -79,
      56,    92,    57,   101,   121,   131,   129,   134,   137,  -147,
     -56,   -58,  -147,   -86,  -147,     2,   -14,  -147,   273,  -147,
     -40,     4,  -147,  -147,   269,   -65,  -147,   -15,   304,   335,
    -147,   132,  -147,   193,  -114,  -147,   -59,     5,   124,   226,
    -146,  -147,  -147,  -147,    72,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     130,   131,   157,   158,   135,   144,    38,   221,     1,     1,
      68,    46,   197,    47,    48,     3,     3,    53,   179,     1,
     211,    37,   146,   148,   149,   152,    68,    68,    68,   199,
      68,   256,    53,    52,   269,    49,    54,    53,   120,   257,
     130,    53,   125,   206,    62,   120,    59,   207,    52,    68,
      53,    63,     3,    52,   142,   150,   204,   121,   208,   158,
     122,   158,   209,   198,   218,   219,   121,    21,    21,   137,
     223,   139,   140,   144,   199,   264,   135,   154,    43,   230,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   159,    40,    18,    19,    20,    68,    50,
      53,   233,   234,   235,    21,    68,   229,   180,   181,   182,
     205,    60,   251,    40,    40,   261,   121,    61,   151,   199,
     232,   153,    51,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   252,   271,   204,   224,   155,   265,   199,   214,   159,
      72,    73,    74,   200,   215,   193,    75,   167,   194,    76,
      77,    78,    79,   199,    80,    81,   187,   188,   130,   222,
      64,   189,   190,    65,    66,   114,   262,   274,   276,   195,
     199,    39,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   266,   125,   183,   184,   267,     1,   135,   259,
     196,   280,   272,   273,     3,   199,   282,   185,   186,   277,
     199,    89,   130,   278,   191,   192,   281,    90,    91,    56,
     283,    57,   156,   285,    41,    42,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   236,
     237,    18,    19,    20,   240,   241,   242,   243,    72,    73,
      74,   268,    62,   199,    75,   216,    21,    76,    77,    78,
      79,   210,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    17,    67,   220,    18,    19,    20,   238,   239,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   244,   245,    18,    19,    20,   225,   226,   231,
      82,   255,    83,    84,    85,   258,    86,    87,    88,    89,
     279,   260,   263,   284,   246,    90,    91,    72,    73,    74,
      92,    51,    93,    75,   248,   247,    76,    77,    78,    79,
     249,    80,    81,   133,   250,   138,    36,    58,   217,   254,
     202,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,    18,    19,    20,     0,     0,     0,    82,
       0,    83,    84,    85,     0,    86,    87,    88,    89,   161,
     162,   163,     0,     0,    90,    91,    72,    73,    74,    92,
      51,   201,    75,     0,     0,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,     0,     0,     0,    75,     0,     0,    76,    77,
      78,    79,     0,    80,    81,     0,     0,   164,     0,   165,
       0,   166,     0,     0,     0,     0,     0,     0,    82,     0,
      83,    84,    85,     0,    86,    87,    88,    89,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,    92,    51,
     203,    82,     0,    83,    84,    85,     0,    86,    87,    88,
      89,     0,     0,     0,     0,     0,    90,    91,    72,    73,
      74,    92,    51,   253,    75,     0,     0,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,     0,     0,     0,    75,     0,     0,
      76,    77,    78,    79,     0,    80,    81,    72,    73,    74,
       0,     0,     0,    75,     0,     0,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,   134,   270,    82,     0,    83,    84,    85,     0,    86,
      87,    88,    89,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,    92,    51,     0,     0,     0,    89,     0,
       0,     0,     0,     0,    90,    91,    72,    73,    74,     0,
     134,     0,    75,     0,     0,    76,    77,    78,    79,     0,
      80,    81,    72,    73,    74,     0,     0,     0,    75,     0,
       0,    76,    77,    78,    79,     0,    80,    81,    72,    73,
      74,     0,     0,     0,    75,     0,     0,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    67,    89,    18,    19,
      20,     0,     0,    90,    91,     0,     0,     0,    92,     0,
       0,     0,     0,    89,     0,     0,    72,    73,    74,    90,
      91,     0,    75,     0,     0,    76,    77,    78,    79,    89,
      80,    81,   129,     0,     0,    90,    91,    72,    73,    74,
       0,     0,     0,    75,     0,     0,    76,    77,    78,    79,
       0,    80,    81,    72,    73,    74,     0,     0,     0,    75,
       0,     0,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    89,   227,    72,
      73,    74,     0,    90,    91,    75,     0,     0,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,    89,   275,
     123,    72,    73,    74,    90,    91,     0,    75,     0,     0,
      76,    77,    78,    79,   145,    80,    81,     0,     0,     0,
      90,    91,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    18,    19,    20,
     147,     0,     0,     1,     0,     0,    90,    91,     2,     0,
       3,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,     0,    90,    91,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     1,     0,    18,    19,    20,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,     0,
      18,    19,    20,    10,    11,    12,    13,    14,    15,    16,
      17,    67,     0,    18,    19,    20,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    67,    51,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,   213,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
      57,    57,    88,    89,    62,    70,    21,   153,    16,    16,
      50,    26,    33,    27,    28,    23,    23,    31,    97,    16,
     134,    22,    79,    80,    81,    84,    66,    67,    68,    80,
      70,    80,    46,    31,    85,    23,    31,    51,    53,    88,
      97,    55,    56,    76,     9,    60,    76,    80,    46,    89,
      64,    46,    23,    51,    69,    75,   115,    55,    76,   145,
      55,   147,    80,    84,   150,   151,    64,    75,    75,    64,
      76,    67,    68,   138,    80,   221,   134,    86,    86,   165,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    89,    22,    60,    61,    62,   138,    87,
     114,   180,   181,   182,    75,   145,   164,    16,    17,    18,
     125,    80,   198,    41,    42,    76,   114,    86,    75,    80,
     178,    75,    87,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   199,   256,   202,   159,    86,   225,    80,    80,   145,
      14,    15,    16,    86,    86,    20,    20,     9,    83,    23,
      24,    25,    26,    80,    28,    29,     7,     8,   225,    86,
      46,    12,    13,    86,    87,    51,    76,   263,   264,    19,
      80,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    76,   207,    14,    15,    80,    16,   256,   214,
      32,    76,   261,   262,    23,    80,    76,    30,    31,   267,
      80,    75,   269,   269,    10,    11,   275,    81,    82,    75,
     279,    77,    86,   282,    23,    24,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   183,
     184,    60,    61,    62,   187,   188,   189,   190,    14,    15,
      16,    78,     9,    80,    20,    86,    75,    23,    24,    25,
      26,    78,    28,    29,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    68,    60,    61,    62,   185,   186,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   191,   192,    60,    61,    62,    76,    23,    23,
      66,    23,    68,    69,    70,    86,    72,    73,    74,    75,
       4,    76,    75,    86,   193,    81,    82,    14,    15,    16,
      86,    87,    88,    20,   195,   194,    23,    24,    25,    26,
     196,    28,    29,    60,   197,    66,     1,    33,   145,   207,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    72,    73,    74,    75,    27,
      28,    29,    -1,    -1,    81,    82,    14,    15,    16,    86,
      87,    88,    20,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      88,    66,    -1,    68,    69,    70,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    14,    15,
      16,    86,    87,    88,    20,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    87,    88,    66,    -1,    68,    69,    70,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    14,    15,    16,    -1,
      87,    -1,    20,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    14,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    14,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    75,    60,    61,
      62,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    14,    15,    16,    81,
      82,    -1,    20,    -1,    -1,    23,    24,    25,    26,    75,
      28,    29,    78,    -1,    -1,    81,    82,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    14,
      15,    16,    -1,    81,    82,    20,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    -1,    75,    76,
      23,    14,    15,    16,    81,    82,    -1,    20,    -1,    -1,
      23,    24,    25,    26,    75,    28,    29,    -1,    -1,    -1,
      81,    82,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    60,    61,    62,
      75,    -1,    -1,    16,    -1,    -1,    81,    82,    21,    -1,
      23,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    16,    -1,    60,    61,    62,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    61,    62,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    87,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    88,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    21,    23,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    60,    61,
      62,    75,    90,    91,    93,   114,   115,   118,   119,   121,
     122,   126,   127,   128,   143,   144,   128,    22,   126,     0,
     143,    90,    90,    86,   116,   117,   126,   115,   115,    23,
      87,    87,   114,   115,   136,   137,    75,    77,   127,    76,
      80,    86,     9,   136,   137,    86,    87,    58,   119,   120,
     123,   124,    14,    15,    16,    20,    23,    24,    25,    26,
      28,    29,    66,    68,    69,    70,    72,    73,    74,    75,
      81,    82,    86,    88,    92,    94,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   112,   135,   136,   137,   138,   139,   140,   141,   142,
     126,   114,   136,    23,    76,   115,   129,   130,   131,    78,
      96,   109,   113,   117,    87,   110,   133,   136,   123,   120,
     120,   125,   126,    88,   124,    75,    96,    75,    96,    96,
      75,    75,   135,    75,    86,    86,    86,   112,   112,   120,
     132,    27,    28,    29,    75,    77,    79,     9,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   111,    98,
      16,    17,    18,    14,    15,    30,    31,     7,     8,    12,
      13,    10,    11,    20,    83,    19,    32,    33,    84,    80,
      86,    88,   138,    88,   135,   126,    76,    80,    76,    80,
      78,   133,   134,    88,    80,    86,    86,   132,   112,   112,
      68,   139,    86,    76,   126,    76,    23,    76,    95,   110,
     112,    23,   110,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   101,   102,   102,   103,   104,   105,   106,
     107,   112,   110,    88,   130,    23,    80,    88,    86,   126,
      76,    76,    76,    75,   139,    98,    76,    80,    78,    85,
      88,   133,   135,   135,   112,    76,   112,   110,   109,     4,
      76,   135,    76,   135,    86,   135
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
        case 6:

/* Line 1455 of yacc.c  */
#line 52 "c_parser.y"
    {
        /* Strip quotes or angle brackets */
        char *name = (yyvsp[(2) - (2)].str);
        int len = strlen(name);
        if ((name[0] == '<' && name[len-1] == '>') ||
            (name[0] == '"' && name[len-1] == '"')) {
            name[len-1] = '\0';
            name++;
        }
        /* Add to symbol table */
        insertToHash(name, "HEADER", yylineno);
      ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 67 "c_parser.y"
    { insertToHash((yyvsp[(1) - (1)].str), data_type, yylineno); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 202 "c_parser.y"
    { strcpy(data_type, (yyvsp[(1) - (1)].str)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1856 "c_parser.tab.c"
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
#line 367 "c_parser.y"


#include "lex.yy.c"
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if (!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	display();
	disp();
	return 0;
}

extern char *yytext;
void yyerror(char *s) {
	printf("\nLine %d : %s\n", yylineno, s);
}

