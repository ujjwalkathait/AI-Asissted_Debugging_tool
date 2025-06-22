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

#include "header.h"
#include "lex.yy.c"

using namespace std;

extern int yylineno;
/*Solve warning: implicit declaration*/
int yyerror(const char* msg);
TreeNode * root;


#line 84 "cpp_syntax.tab.c"

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

#include "cpp_syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD_ASSIGN = 3,                 /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 4,                 /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 5,                 /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 6,                 /* DIV_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 7,                 /* AND_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 8,                 /* MOD_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 9,                 /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 10,                 /* OR_ASSIGN  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_AND_OP = 13,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 14,                     /* OR_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_RIGHT_ASSIGN = 17,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 18,               /* LEFT_ASSIGN  */
  YYSYMBOL_LOG_NOT_OP = 19,                /* LOG_NOT_OP  */
  YYSYMBOL_BIT_NOT_OP = 20,                /* BIT_NOT_OP  */
  YYSYMBOL_READ = 21,                      /* READ  */
  YYSYMBOL_WRITE = 22,                     /* WRITE  */
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_ID = 24,                        /* ID  */
  YYSYMBOL_SEMI = 25,                      /* SEMI  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_TYPE = 27,                      /* TYPE  */
  YYSYMBOL_LP = 28,                        /* LP  */
  YYSYMBOL_RP = 29,                        /* RP  */
  YYSYMBOL_LB = 30,                        /* LB  */
  YYSYMBOL_RB = 31,                        /* RB  */
  YYSYMBOL_LC = 32,                        /* LC  */
  YYSYMBOL_RC = 33,                        /* RC  */
  YYSYMBOL_STRUCT = 34,                    /* STRUCT  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_CONT = 39,                      /* CONT  */
  YYSYMBOL_FOR = 40,                       /* FOR  */
  YYSYMBOL_DOT = 41,                       /* DOT  */
  YYSYMBOL_ASSIGN = 42,                    /* ASSIGN  */
  YYSYMBOL_IF_NO_ELSE = 43,                /* IF_NO_ELSE  */
  YYSYMBOL_ELSE_AFTER_IF = 44,             /* ELSE_AFTER_IF  */
  YYSYMBOL_BIT_OR_OP = 45,                 /* BIT_OR_OP  */
  YYSYMBOL_BIT_XOR_OP = 46,                /* BIT_XOR_OP  */
  YYSYMBOL_BIT_AND_OP = 47,                /* BIT_AND_OP  */
  YYSYMBOL_GE_OP = 48,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 49,                     /* LE_OP  */
  YYSYMBOL_GT_OP = 50,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 51,                     /* LT_OP  */
  YYSYMBOL_PLUS_OP = 52,                   /* PLUS_OP  */
  YYSYMBOL_MINUS_OP = 53,                  /* MINUS_OP  */
  YYSYMBOL_PRODUCT_OP = 54,                /* PRODUCT_OP  */
  YYSYMBOL_DIV_OP = 55,                    /* DIV_OP  */
  YYSYMBOL_MOD_OP = 56,                    /* MOD_OP  */
  YYSYMBOL_INC_OP = 57,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 58,                    /* DEC_OP  */
  YYSYMBOL_UNARY = 59,                     /* UNARY  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_PROGRAM = 61,                   /* PROGRAM  */
  YYSYMBOL_EXTDEFS = 62,                   /* EXTDEFS  */
  YYSYMBOL_EXTDEF = 63,                    /* EXTDEF  */
  YYSYMBOL_SEXTVARS = 64,                  /* SEXTVARS  */
  YYSYMBOL_EXTVARS = 65,                   /* EXTVARS  */
  YYSYMBOL_STSPEC = 66,                    /* STSPEC  */
  YYSYMBOL_FUNC = 67,                      /* FUNC  */
  YYSYMBOL_PARAS = 68,                     /* PARAS  */
  YYSYMBOL_STMTBLOCK = 69,                 /* STMTBLOCK  */
  YYSYMBOL_STMTS = 70,                     /* STMTS  */
  YYSYMBOL_STMT = 71,                      /* STMT  */
  YYSYMBOL_DEFS = 72,                      /* DEFS  */
  YYSYMBOL_SDEFS = 73,                     /* SDEFS  */
  YYSYMBOL_SDECS = 74,                     /* SDECS  */
  YYSYMBOL_DECS = 75,                      /* DECS  */
  YYSYMBOL_VAR = 76,                       /* VAR  */
  YYSYMBOL_INIT = 77,                      /* INIT  */
  YYSYMBOL_EXP = 78,                       /* EXP  */
  YYSYMBOL_EXPS = 79,                      /* EXPS  */
  YYSYMBOL_ARRS = 80,                      /* ARRS  */
  YYSYMBOL_ARGS = 81,                      /* ARGS  */
  YYSYMBOL_UNARYOP = 82                    /* UNARYOP  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    58,    62,    67,    71,    74,    80,    83,
      86,    91,    95,    99,   102,   105,   110,   114,   118,   123,
     129,   132,   136,   141,   144,   145,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   160,   161,   162,   165,
     166,   169,   170,   173,   174,   175,   176,   179,   180,   183,
     184,   187,   188,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   228,   229,
     232,   233,   236,   237,   238,   239,   240,   241
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
  "\"end of file\"", "error", "\"invalid token\"", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "MOD_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "AND_OP", "OR_OP",
  "EQ_OP", "NE_OP", "RIGHT_ASSIGN", "LEFT_ASSIGN", "LOG_NOT_OP",
  "BIT_NOT_OP", "READ", "WRITE", "INT", "ID", "SEMI", "COMMA", "TYPE",
  "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF", "ELSE",
  "BREAK", "CONT", "FOR", "DOT", "ASSIGN", "IF_NO_ELSE", "ELSE_AFTER_IF",
  "BIT_OR_OP", "BIT_XOR_OP", "BIT_AND_OP", "GE_OP", "LE_OP", "GT_OP",
  "LT_OP", "PLUS_OP", "MINUS_OP", "PRODUCT_OP", "DIV_OP", "MOD_OP",
  "INC_OP", "DEC_OP", "UNARY", "$accept", "PROGRAM", "EXTDEFS", "EXTDEF",
  "SEXTVARS", "EXTVARS", "STSPEC", "FUNC", "PARAS", "STMTBLOCK", "STMTS",
  "STMT", "DEFS", "SDEFS", "SDECS", "DECS", "VAR", "INIT", "EXP", "EXPS",
  "ARRS", "ARGS", "UNARYOP", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    -1,    -6,    22,  -176,    -2,    28,    32,    41,    42,
     -14,    44,    50,  -176,  -176,    52,    54,    53,    58,  -176,
       0,  -176,    59,   614,    50,    64,    49,    28,  -176,    65,
      61,    62,    59,    28,   565,    93,  -176,  -176,  -176,  -176,
     -11,   628,   628,  -176,  -176,  -176,  -176,    98,   527,   628,
      92,   100,   102,  -176,  -176,   103,  -176,  -176,   106,   -13,
     109,   108,   110,   628,   111,   112,   115,   113,  -176,    95,
     565,   117,   527,   628,   628,   123,  -176,   149,  -176,   203,
     135,    59,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,  -176,  -176,    64,    50,    53,     0,    59,   614,     0,
     628,   628,   257,   628,  -176,  -176,   628,  -176,  -176,  -176,
     140,   311,  -176,  -176,   628,  -176,  -176,   527,   527,   527,
     527,   527,   527,   527,   527,    17,    17,   285,    -5,   235,
     235,   527,   527,   527,   133,   501,   336,     3,     3,     3,
       3,   -18,   -18,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,   144,  -176,   365,   419,  -176,   473,   146,  -176,  -176,
    -176,    59,   147,   148,   592,   628,  -176,  -176,  -176,   137,
     150,   592,   628,  -176,   161,   592,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    15,     0,     0,     2,     4,    10,    47,     0,     0,
      11,    18,    40,     1,     3,     8,     0,    22,     0,     5,
      38,     7,    15,     0,    40,     0,     0,    10,     6,     0,
       0,     0,     0,    10,    25,    47,    12,    95,    94,    87,
      89,     0,    52,    92,    93,    96,    97,    13,    49,     0,
       0,    42,     0,    17,     9,    21,    19,    48,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      25,     0,    51,    52,     0,     0,    85,     0,    91,    51,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    16,     0,    40,    22,    38,     0,     0,    38,
       0,     0,     0,     0,    33,    32,    52,    23,    24,    26,
       0,     0,    86,    83,    52,    50,    14,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    53,    54,    57,
      58,    70,    71,    59,    81,    80,    74,    56,    55,    79,
      78,    72,    73,    75,    76,    77,    41,    39,    20,    36,
      44,    46,    37,     0,     0,    28,     0,     0,    84,    88,
      90,     0,     0,     0,    52,    52,    45,    34,    35,    29,
       0,    52,    52,    30,     0,    52,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,   171,  -176,     6,   -17,    63,  -176,    77,   168,
     152,  -175,   -95,   -23,    80,  -114,   -30,   105,   -42,    12,
    -176,   -69,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    16,     8,    33,     9,    30,    68,
      69,    70,    34,    26,    52,    58,    10,    47,    71,    72,
      76,    80,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    50,    59,   170,   130,    36,    90,    91,    92,   189,
      94,    95,    22,   117,    90,    91,   193,    73,    11,    74,
     196,   169,    13,     7,   172,     1,    12,    32,    23,   118,
      75,    78,     2,    54,     2,    48,   108,   109,   110,    60,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    15,    77,    79,   106,   107,   108,   109,   110,
      17,   111,    18,     6,   136,   180,    19,   186,     6,   106,
     107,   108,   109,   110,    20,   122,    24,    25,    27,    28,
      29,    31,    53,    35,   177,    79,   131,    59,    51,    55,
      56,   167,    78,    57,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    18,    81,   112,   113,   114,   127,   115,
      48,   116,   173,   174,   119,   176,   120,   124,   121,   123,
     125,   126,   129,   190,    90,    91,    79,   132,    94,    95,
     194,    59,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   135,   178,
     181,   185,   187,   188,   191,   192,    14,    21,   133,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     195,    98,   168,   166,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   128,   171,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    90,    91,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,     0,   175,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,    90,    91,     0,    98,
      94,    95,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   179,     0,     0,     0,     0,    90,    91,     0,
       0,    94,    95,    98,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    98,    94,    95,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    37,    38,    61,    62,    39,    40,
     -52,     0,     0,    41,     0,     0,     0,    20,     0,     0,
      63,    64,     0,    65,    66,    67,     0,     0,     0,     0,
       0,    37,    38,    61,    62,    39,    40,    43,    44,     0,
      41,     0,    45,    46,    20,     0,     0,    63,    64,     0,
      65,    66,    67,    37,    38,     0,     0,    39,    40,     0,
       0,     0,    41,     0,    43,    44,    42,    37,    38,    45,
      46,    39,    40,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,     0,     0,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
      43,    44,     0,     0,     0,    45,    46
};

static const yytype_int16 yycheck[] =
{
      42,    24,    32,   117,    73,    22,    11,    12,    13,   184,
      15,    16,    26,    26,    11,    12,   191,    28,    24,    30,
     195,   116,     0,    24,   119,    27,    32,    27,    42,    42,
      41,    73,    34,    27,    34,    23,    54,    55,    56,    33,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    24,    41,    42,    52,    53,    54,    55,    56,
      28,    49,    30,     0,    81,   134,    25,   181,     5,    52,
      53,    54,    55,    56,    32,    63,    32,    27,    26,    25,
      27,    23,    33,    24,   126,    73,    74,   117,    24,    24,
      29,   114,   134,    31,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    30,    26,    33,    26,    25,    33,    26,
     118,    25,   120,   121,    25,   123,    28,    25,    28,    28,
      25,    28,    25,   185,    11,    12,   134,    24,    15,    16,
     192,   181,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    33,    29,
      26,    25,    25,    25,    37,    25,     5,     9,    29,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      29,    42,   115,   113,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    70,   118,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    11,    12,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    11,    12,    -1,    42,
      15,    16,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    31,    -1,    -1,    -1,    -1,    11,    12,    -1,
      -1,    15,    16,    42,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    42,    15,    16,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    52,    53,    -1,
      28,    -1,    57,    58,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    19,    20,    -1,    -1,    23,    24,    -1,
      -1,    -1,    28,    -1,    52,    53,    32,    19,    20,    57,
      58,    23,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    34,    61,    62,    63,    66,    24,    65,    67,
      76,    24,    32,     0,    62,    24,    64,    28,    30,    25,
      32,    69,    26,    42,    32,    27,    73,    26,    25,    27,
      68,    23,    27,    66,    72,    24,    65,    19,    20,    23,
      24,    28,    32,    52,    53,    57,    58,    77,    79,    82,
      73,    24,    74,    33,    64,    24,    29,    31,    75,    76,
      64,    21,    22,    35,    36,    38,    39,    40,    69,    70,
      71,    78,    79,    28,    30,    41,    80,    79,    78,    79,
      81,    26,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    42,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    79,    33,    26,    25,    26,    25,    26,    42,    25,
      28,    28,    79,    28,    25,    25,    28,    33,    70,    25,
      81,    79,    24,    29,    26,    33,    65,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    74,    73,    68,    72,
      75,    77,    72,    79,    79,    25,    79,    78,    29,    31,
      81,    26,    29,    29,    29,    25,    75,    25,    25,    71,
      78,    37,    25,    71,    78,    29,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      68,    68,    68,    69,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    82,    82,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     3,     1,     3,
       0,     1,     3,     3,     5,     0,     5,     4,     2,     4,
       4,     2,     0,     4,     2,     0,     2,     1,     3,     5,
       7,     9,     2,     2,     5,     5,     4,     4,     0,     4,
       0,     3,     1,     1,     3,     5,     3,     1,     4,     1,
       3,     1,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     2,     3,     1,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1
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
  case 2: /* PROGRAM: EXTDEFS  */
#line 52 "cpp_syntax.y"
                                                {
								root = (yyval.node) = createNodeIns(yylineno,"PROGRAM","PROGRAM: EXTDEFS",1,(yyvsp[0].node));
							}
#line 1382 "cpp_syntax.tab.c"
    break;

  case 3: /* EXTDEFS: EXTDEF EXTDEFS  */
#line 58 "cpp_syntax.y"
                                        {
								(yyval.node) = createNodeIns(yylineno,"EXTDEFS","EXTDEFS: EXTDEF EXTDEFS",2,(yyvsp[-1].node),(yyvsp[0].node));
							}
#line 1390 "cpp_syntax.tab.c"
    break;

  case 4: /* EXTDEFS: %empty  */
#line 62 "cpp_syntax.y"
                                                {
								(yyval.node) = createNodeIns(yylineno,"EXTDEFS", "EXTDEFS:null", 0);
							}
#line 1398 "cpp_syntax.tab.c"
    break;

  case 5: /* EXTDEF: TYPE EXTVARS SEMI  */
#line 67 "cpp_syntax.y"
                                                { 
										(yyval.node) = createNodeIns(yylineno,"EXTDEF", "EXTDEF: TYPE EXTVARS ;", 2, createNodeIns(yylineno,"TYPE", (yyvsp[-2].string), 0),(yyvsp[-1].node));
									}
#line 1406 "cpp_syntax.tab.c"
    break;

  case 6: /* EXTDEF: STSPEC SEXTVARS SEMI  */
#line 71 "cpp_syntax.y"
                                        { 
										(yyval.node) = createNodeIns(yylineno, "EXTDEF","EXTDEF: STSPEC SEXTVARS ;", 2, (yyvsp[-2].node),(yyvsp[-1].node)); 
									}
#line 1414 "cpp_syntax.tab.c"
    break;

  case 7: /* EXTDEF: TYPE FUNC STMTBLOCK  */
#line 74 "cpp_syntax.y"
                                                {
										(yyval.node) = createNodeIns(yylineno,"EXTDEF", "EXTDEF: TYPE FUNC STMTBLOCK", 3, createNodeIns(yylineno,"TYPE", (yyvsp[-2].string), 0),(yyvsp[-1].node),(yyvsp[0].node)); 
									}
#line 1422 "cpp_syntax.tab.c"
    break;

  case 8: /* SEXTVARS: ID  */
#line 80 "cpp_syntax.y"
                                                                { 
										(yyval.node) = createNodeIns(yylineno,"SEXTVARS", "SEXTVARS: ID",1,createNodeIns(yylineno,"ID",(yyvsp[0].string),0));
									}
#line 1430 "cpp_syntax.tab.c"
    break;

  case 9: /* SEXTVARS: ID COMMA SEXTVARS  */
#line 83 "cpp_syntax.y"
                                                        { 	
										(yyval.node) = createNodeIns(yylineno, "SEXTVARS", "SEXTVARS: ID , SEXTVARS", 2, createNodeIns(yylineno,"ID", (yyvsp[-2].string), 0),(yyvsp[0].node));
									}
#line 1438 "cpp_syntax.tab.c"
    break;

  case 10: /* SEXTVARS: %empty  */
#line 86 "cpp_syntax.y"
                                                                {
										(yyval.node) = createNodeIns(yylineno,"SEXTVARS", "SEXTVARS: null", 0);
									}
#line 1446 "cpp_syntax.tab.c"
    break;

  case 11: /* EXTVARS: VAR  */
#line 91 "cpp_syntax.y"
                                                                { 	
											(yyval.node) = createNodeIns(yylineno,"EXTVARS", "EXTVARS: VAR", 1, (yyvsp[0].node));
										}
#line 1454 "cpp_syntax.tab.c"
    break;

  case 12: /* EXTVARS: VAR COMMA EXTVARS  */
#line 95 "cpp_syntax.y"
                                                                {	
											(yyval.node) = createNodeIns(yylineno,"EXTVARS", "EXTVARS:VAR , EXTVARS", 2, (yyvsp[-2].node),(yyvsp[0].node));
										}
#line 1462 "cpp_syntax.tab.c"
    break;

  case 13: /* EXTVARS: VAR ASSIGN INIT  */
#line 99 "cpp_syntax.y"
                                                                {
											(yyval.node) = createNodeIns(yylineno,"EXTVARS", "EXTVARS:VAR ASSIGN INIT", 3, (yyvsp[-2].node),createNodeIns(yylineno,"ASSIGN",(yyvsp[-1].string),0),(yyvsp[0].node)); 
										}
#line 1470 "cpp_syntax.tab.c"
    break;

  case 14: /* EXTVARS: VAR ASSIGN INIT COMMA EXTVARS  */
#line 102 "cpp_syntax.y"
                                                        { 
												(yyval.node) = createNodeIns(yylineno,"EXTVARS", "EXTVARS:VAR ASSIGN INIT , EXTVARS", 4, (yyvsp[-4].node),createNodeIns(yylineno,"ASSIGN",(yyvsp[-3].string),0),(yyvsp[-2].node),(yyvsp[0].node));
											}
#line 1478 "cpp_syntax.tab.c"
    break;

  case 15: /* EXTVARS: %empty  */
#line 105 "cpp_syntax.y"
                                                                        {
											(yyval.node) = createNodeIns(yylineno,"EXTVARS", "EXTVARS:null", 0);
										}
#line 1486 "cpp_syntax.tab.c"
    break;

  case 16: /* STSPEC: STRUCT ID LC SDEFS RC  */
#line 110 "cpp_syntax.y"
                                                {
											(yyval.node) = createNodeIns(yylineno,"STSPEC", "STSPEC: STRUCT ID { SDEFS }", 3, createNodeIns(yylineno,"STRUCT",(yyvsp[-4].string),0),createNodeIns(yylineno,"ID", (yyvsp[-3].string), 0),(yyvsp[-1].node));
										}
#line 1494 "cpp_syntax.tab.c"
    break;

  case 17: /* STSPEC: STRUCT LC SDEFS RC  */
#line 114 "cpp_syntax.y"
                                                                { 	
											(yyval.node) = createNodeIns(yylineno, "STSPEC","STSPEC: STRUCT { SDEFS }", 2, createNodeIns(yylineno,"STRUCT",(yyvsp[-3].string),0),(yyvsp[-1].node)); 
										}
#line 1502 "cpp_syntax.tab.c"
    break;

  case 18: /* STSPEC: STRUCT ID  */
#line 118 "cpp_syntax.y"
                                                                        { 	
											(yyval.node) = createNodeIns(yylineno, "STSPEC","STSPEC: STRUCT ID", 2, createNodeIns(yylineno,"STRUCT",(yyvsp[-1].string),0),createNodeIns(yylineno,"ID", (yyvsp[0].string), 0));
										}
#line 1510 "cpp_syntax.tab.c"
    break;

  case 19: /* FUNC: ID LP PARAS RP  */
#line 123 "cpp_syntax.y"
                                                        { 
											(yyval.node) = createNodeIns(yylineno, "FUNC","FUNC: ID ( PARAS )", 2, createNodeIns(yylineno,"ID" ,(yyvsp[-3].string), 0),(yyvsp[-1].node));
										}
#line 1518 "cpp_syntax.tab.c"
    break;

  case 20: /* PARAS: TYPE ID COMMA PARAS  */
#line 129 "cpp_syntax.y"
                                                        { 
											(yyval.node) = createNodeIns(yylineno,"PARAS", "PARAS: TYPE ID , PARAS", 3, createNodeIns(yylineno,"TYPE", (yyvsp[-3].string), 0), createNodeIns(yylineno,"ID", (yyvsp[-2].string), 0),(yyvsp[0].node)); 
										}
#line 1526 "cpp_syntax.tab.c"
    break;

  case 21: /* PARAS: TYPE ID  */
#line 132 "cpp_syntax.y"
                                                                        { 
											(yyval.node) = createNodeIns(yylineno, "PARAS","PARAS: TYPE ID", 2, createNodeIns(yylineno,"TYPE", (yyvsp[-1].string), 0), createNodeIns(yylineno,"ID", (yyvsp[0].string), 0)); 
										}
#line 1534 "cpp_syntax.tab.c"
    break;

  case 22: /* PARAS: %empty  */
#line 136 "cpp_syntax.y"
                                                                        {
											(yyval.node) = createNodeIns(yylineno, "PARAS","PARAS: null", 0);
										}
#line 1542 "cpp_syntax.tab.c"
    break;

  case 23: /* STMTBLOCK: LC DEFS STMTS RC  */
#line 141 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno,"STMTBLOCK", "STMTBLOCK: { DEFS STMTS }", 2, (yyvsp[-2].node),(yyvsp[-1].node)); }
#line 1548 "cpp_syntax.tab.c"
    break;

  case 24: /* STMTS: STMT STMTS  */
#line 144 "cpp_syntax.y"
                                                                { (yyval.node) = createNodeIns(yylineno, "STMTS","STMTS: STMT STMTS", 2, (yyvsp[-1].node),(yyvsp[0].node)); }
#line 1554 "cpp_syntax.tab.c"
    break;

  case 25: /* STMTS: %empty  */
#line 145 "cpp_syntax.y"
                                                                        { (yyval.node) = createNodeIns(yylineno,"STMTS", "STMTS: null", 0);}
#line 1560 "cpp_syntax.tab.c"
    break;

  case 26: /* STMT: EXP SEMI  */
#line 148 "cpp_syntax.y"
                                                                { (yyval.node) = createNodeIns(yylineno,"STMT", "STMT: EXP ;", 1, (yyvsp[-1].node)); }
#line 1566 "cpp_syntax.tab.c"
    break;

  case 27: /* STMT: STMTBLOCK  */
#line 149 "cpp_syntax.y"
                                                                        { (yyval.node) = createNodeIns(yylineno,"STMT", "STMT: STMTBLOCK", 1, (yyvsp[0].node)); }
#line 1572 "cpp_syntax.tab.c"
    break;

  case 28: /* STMT: RETURN EXPS SEMI  */
#line 150 "cpp_syntax.y"
                                                                { (yyval.node) = createNodeIns(yylineno,"STMT" ,"STMT: RETURN EXPS ;", 2, createNodeIns(yylineno,"RETURN", (yyvsp[-2].string), 0),(yyvsp[-1].node)); }
#line 1578 "cpp_syntax.tab.c"
    break;

  case 29: /* STMT: IF LP EXPS RP STMT  */
#line 151 "cpp_syntax.y"
                                                            { (yyval.node) = createNodeIns(yylineno,"STMT" ,"STMT: if ( EXPS ) STMT", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1584 "cpp_syntax.tab.c"
    break;

  case 30: /* STMT: IF LP EXPS RP STMT ELSE STMT  */
#line 152 "cpp_syntax.y"
                                                                         { (yyval.node) = createNodeIns(yylineno,"STMT", "STMT: if ( EXPS ) STMT else STMT", 3, (yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1590 "cpp_syntax.tab.c"
    break;

  case 31: /* STMT: FOR LP EXP SEMI EXP SEMI EXP RP STMT  */
#line 153 "cpp_syntax.y"
                                                             { (yyval.node) = createNodeIns(yylineno, "STMT","STMT: for ( EXP ; EXP ; EXP ) STMT", 4, (yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1596 "cpp_syntax.tab.c"
    break;

  case 32: /* STMT: CONT SEMI  */
#line 154 "cpp_syntax.y"
                                                                        { (yyval.node) = createNodeIns(yylineno,"STMT", "STMT: CONT ;", 1, createNodeIns(yylineno, "CONT",(yyvsp[-1].string), 0)); }
#line 1602 "cpp_syntax.tab.c"
    break;

  case 33: /* STMT: BREAK SEMI  */
#line 155 "cpp_syntax.y"
                                                                        { (yyval.node) = createNodeIns(yylineno, "STMT","STMT: BREAK ;", 1, createNodeIns(yylineno, "BREAK",(yyvsp[-1].string), 0)); }
#line 1608 "cpp_syntax.tab.c"
    break;

  case 34: /* STMT: READ LP EXPS RP SEMI  */
#line 156 "cpp_syntax.y"
                                                        {(yyval.node) = createNodeIns(yylineno,"STMT", "STMT: read ( EXPS )",1, (yyvsp[-2].node));}
#line 1614 "cpp_syntax.tab.c"
    break;

  case 35: /* STMT: WRITE LP EXPS RP SEMI  */
#line 157 "cpp_syntax.y"
                                                        {(yyval.node) = createNodeIns(yylineno,"STMT", "STMT: write ( EXPS )",1, (yyvsp[-2].node));}
#line 1620 "cpp_syntax.tab.c"
    break;

  case 36: /* DEFS: TYPE DECS SEMI DEFS  */
#line 160 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno,"DEFS", "DEFS: TYPE DECS ; DEFS", 3, createNodeIns(yylineno,"TYPE", (yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1626 "cpp_syntax.tab.c"
    break;

  case 37: /* DEFS: STSPEC SEXTVARS SEMI DEFS  */
#line 161 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "DEFS","DEFS: STSPEC SEXTVARS ; DEFS", 3, (yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1632 "cpp_syntax.tab.c"
    break;

  case 38: /* DEFS: %empty  */
#line 162 "cpp_syntax.y"
                                                                        {(yyval.node) = createNodeIns(yylineno, "DEFS","DEFS: null", 0);}
#line 1638 "cpp_syntax.tab.c"
    break;

  case 39: /* SDEFS: TYPE SDECS SEMI SDEFS  */
#line 165 "cpp_syntax.y"
                                { (yyval.node) = createNodeIns(yylineno, "SDEFS","SDEFS: TYPE SDECS ; SDEFS", 3, createNodeIns(yylineno, "TYPE",(yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1644 "cpp_syntax.tab.c"
    break;

  case 40: /* SDEFS: %empty  */
#line 166 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "SDEFS", "SDEFS: null", 0);}
#line 1650 "cpp_syntax.tab.c"
    break;

  case 41: /* SDECS: ID COMMA SDECS  */
#line 169 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno,"SDECS", "SDECS: ID , SDECS", 2, createNodeIns(yylineno, "ID",(yyvsp[-2].string), 0),(yyvsp[0].node)); }
#line 1656 "cpp_syntax.tab.c"
    break;

  case 42: /* SDECS: ID  */
#line 170 "cpp_syntax.y"
                                                                { (yyval.node) = createNodeIns(yylineno,"SDECS", "SDECS: ID ", 1,createNodeIns(yylineno,"ID",(yyvsp[0].string),0)); }
#line 1662 "cpp_syntax.tab.c"
    break;

  case 43: /* DECS: VAR  */
#line 173 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "DECS", "DECS: VAR", 1, (yyvsp[0].node)); }
#line 1668 "cpp_syntax.tab.c"
    break;

  case 44: /* DECS: VAR COMMA DECS  */
#line 174 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "DECS", "DECS: VAR, DECS", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1674 "cpp_syntax.tab.c"
    break;

  case 45: /* DECS: VAR ASSIGN INIT COMMA DECS  */
#line 175 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "DECS", "DECS: VAR ASSIGN INIT, DECS", 4, (yyvsp[-4].node),createNodeIns(yylineno,"ASSIGN", (yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1680 "cpp_syntax.tab.c"
    break;

  case 46: /* DECS: VAR ASSIGN INIT  */
#line 176 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "DECS", "DECS: VAR ASSIGN INIT", 3, (yyvsp[-2].node),createNodeIns(yylineno,"ASSIGN", (yyvsp[-1].string), 0),(yyvsp[0].node)); }
#line 1686 "cpp_syntax.tab.c"
    break;

  case 47: /* VAR: ID  */
#line 179 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "VAR", "VAR: ID", 1,createNodeIns(yylineno,"ID", (yyvsp[0].string), 0)); }
#line 1692 "cpp_syntax.tab.c"
    break;

  case 48: /* VAR: ID LB INT RB  */
#line 180 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "VAR",  "VAR: ID [ INT ]", 2, createNodeIns(yylineno,"ID", (yyvsp[-3].string), 0) ,createNodeIns(yylineno,"INT", (yyvsp[-1].string), 0)); }
#line 1698 "cpp_syntax.tab.c"
    break;

  case 49: /* INIT: EXPS  */
#line 183 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "INIT", "INIT: EXPS", 1, (yyvsp[0].node)); }
#line 1704 "cpp_syntax.tab.c"
    break;

  case 50: /* INIT: LC ARGS RC  */
#line 184 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "INIT", "INIT: { ARGS }", 1, (yyvsp[-1].node)); }
#line 1710 "cpp_syntax.tab.c"
    break;

  case 51: /* EXP: EXPS  */
#line 187 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXP", "EXP: EXPS", 1, (yyvsp[0].node)); }
#line 1716 "cpp_syntax.tab.c"
    break;

  case 52: /* EXP: %empty  */
#line 188 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "EXP", "EXP: null", 0); }
#line 1722 "cpp_syntax.tab.c"
    break;

  case 53: /* EXPS: EXPS AND_OP EXPS  */
#line 191 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1728 "cpp_syntax.tab.c"
    break;

  case 54: /* EXPS: EXPS OR_OP EXPS  */
#line 192 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1734 "cpp_syntax.tab.c"
    break;

  case 55: /* EXPS: EXPS LE_OP EXPS  */
#line 193 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1740 "cpp_syntax.tab.c"
    break;

  case 56: /* EXPS: EXPS GE_OP EXPS  */
#line 194 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1746 "cpp_syntax.tab.c"
    break;

  case 57: /* EXPS: EXPS EQ_OP EXPS  */
#line 195 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1752 "cpp_syntax.tab.c"
    break;

  case 58: /* EXPS: EXPS NE_OP EXPS  */
#line 196 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1758 "cpp_syntax.tab.c"
    break;

  case 59: /* EXPS: EXPS ASSIGN EXPS  */
#line 197 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1764 "cpp_syntax.tab.c"
    break;

  case 60: /* EXPS: EXPS ADD_ASSIGN EXPS  */
#line 198 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1770 "cpp_syntax.tab.c"
    break;

  case 61: /* EXPS: EXPS SUB_ASSIGN EXPS  */
#line 199 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1776 "cpp_syntax.tab.c"
    break;

  case 62: /* EXPS: EXPS MUL_ASSIGN EXPS  */
#line 200 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1782 "cpp_syntax.tab.c"
    break;

  case 63: /* EXPS: EXPS DIV_ASSIGN EXPS  */
#line 201 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1788 "cpp_syntax.tab.c"
    break;

  case 64: /* EXPS: EXPS AND_ASSIGN EXPS  */
#line 202 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1794 "cpp_syntax.tab.c"
    break;

  case 65: /* EXPS: EXPS MOD_ASSIGN EXPS  */
#line 203 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1800 "cpp_syntax.tab.c"
    break;

  case 66: /* EXPS: EXPS XOR_ASSIGN EXPS  */
#line 204 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1806 "cpp_syntax.tab.c"
    break;

  case 67: /* EXPS: EXPS OR_ASSIGN EXPS  */
#line 205 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1812 "cpp_syntax.tab.c"
    break;

  case 68: /* EXPS: EXPS RIGHT_OP EXPS  */
#line 206 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1818 "cpp_syntax.tab.c"
    break;

  case 69: /* EXPS: EXPS LEFT_OP EXPS  */
#line 207 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1824 "cpp_syntax.tab.c"
    break;

  case 70: /* EXPS: EXPS RIGHT_ASSIGN EXPS  */
#line 208 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1830 "cpp_syntax.tab.c"
    break;

  case 71: /* EXPS: EXPS LEFT_ASSIGN EXPS  */
#line 209 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1836 "cpp_syntax.tab.c"
    break;

  case 72: /* EXPS: EXPS PLUS_OP EXPS  */
#line 210 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1842 "cpp_syntax.tab.c"
    break;

  case 73: /* EXPS: EXPS MINUS_OP EXPS  */
#line 211 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1848 "cpp_syntax.tab.c"
    break;

  case 74: /* EXPS: EXPS BIT_AND_OP EXPS  */
#line 212 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1854 "cpp_syntax.tab.c"
    break;

  case 75: /* EXPS: EXPS PRODUCT_OP EXPS  */
#line 213 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1860 "cpp_syntax.tab.c"
    break;

  case 76: /* EXPS: EXPS DIV_OP EXPS  */
#line 214 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1866 "cpp_syntax.tab.c"
    break;

  case 77: /* EXPS: EXPS MOD_OP EXPS  */
#line 215 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1872 "cpp_syntax.tab.c"
    break;

  case 78: /* EXPS: EXPS LT_OP EXPS  */
#line 216 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1878 "cpp_syntax.tab.c"
    break;

  case 79: /* EXPS: EXPS GT_OP EXPS  */
#line 217 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1884 "cpp_syntax.tab.c"
    break;

  case 80: /* EXPS: EXPS BIT_XOR_OP EXPS  */
#line 218 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1890 "cpp_syntax.tab.c"
    break;

  case 81: /* EXPS: EXPS BIT_OR_OP EXPS  */
#line 219 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", (yyvsp[-1].string), 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1896 "cpp_syntax.tab.c"
    break;

  case 82: /* EXPS: UNARYOP EXPS  */
#line 220 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", "EXPS: UNARYOP EXPS", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1902 "cpp_syntax.tab.c"
    break;

  case 83: /* EXPS: LP EXPS RP  */
#line 221 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", "EXPS: ( EXPS )", 1, (yyvsp[-1].node)); }
#line 1908 "cpp_syntax.tab.c"
    break;

  case 84: /* EXPS: ID LP ARGS RP  */
#line 222 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", "EXPS: ID ( ARGS )", 2, createNodeIns(yylineno,"ID", (yyvsp[-3].string), 0),(yyvsp[-1].node)); }
#line 1914 "cpp_syntax.tab.c"
    break;

  case 85: /* EXPS: ID ARRS  */
#line 223 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "EXPS", "EXPS: ID ARRS", 2, createNodeIns(yylineno,"ID", (yyvsp[-1].string), 0),(yyvsp[0].node)); }
#line 1920 "cpp_syntax.tab.c"
    break;

  case 86: /* EXPS: ID DOT ID  */
#line 224 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "EXPS", "EXPS: ID DOT ID", 3, createNodeIns(yylineno,"ID", (yyvsp[-2].string), 0),createNodeIns(yylineno,"DOT", (yyvsp[-1].string), 0),createNodeIns(yylineno, "ID",(yyvsp[0].string), 0)); }
#line 1926 "cpp_syntax.tab.c"
    break;

  case 87: /* EXPS: INT  */
#line 225 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "INT",  (yyvsp[0].string), 0); }
#line 1932 "cpp_syntax.tab.c"
    break;

  case 88: /* ARRS: LB EXPS RB  */
#line 228 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno, "ARRS", "ARRS: [ EXPS ]", 1, (yyvsp[-1].node)); }
#line 1938 "cpp_syntax.tab.c"
    break;

  case 89: /* ARRS: %empty  */
#line 229 "cpp_syntax.y"
                                                                { (yyval.node) = createNodeIns(yylineno, "ARRS", "ARRS: null", 0);}
#line 1944 "cpp_syntax.tab.c"
    break;

  case 90: /* ARGS: EXPS COMMA ARGS  */
#line 232 "cpp_syntax.y"
                                        { (yyval.node) = createNodeIns(yylineno,"ARGS",  "ARGS: EXPS, ARGS", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1950 "cpp_syntax.tab.c"
    break;

  case 91: /* ARGS: EXP  */
#line 233 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno,"ARGS", "args", 1, (yyvsp[0].node)); }
#line 1956 "cpp_syntax.tab.c"
    break;

  case 92: /* UNARYOP: PLUS_OP  */
#line 236 "cpp_syntax.y"
                                                { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1962 "cpp_syntax.tab.c"
    break;

  case 93: /* UNARYOP: MINUS_OP  */
#line 237 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1968 "cpp_syntax.tab.c"
    break;

  case 94: /* UNARYOP: BIT_NOT_OP  */
#line 238 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1974 "cpp_syntax.tab.c"
    break;

  case 95: /* UNARYOP: LOG_NOT_OP  */
#line 239 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1980 "cpp_syntax.tab.c"
    break;

  case 96: /* UNARYOP: INC_OP  */
#line 240 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1986 "cpp_syntax.tab.c"
    break;

  case 97: /* UNARYOP: DEC_OP  */
#line 241 "cpp_syntax.y"
                                                        { (yyval.node) = createNodeIns(yylineno, "UNARYOP", (yyvsp[0].string), 0); }
#line 1992 "cpp_syntax.tab.c"
    break;


#line 1996 "cpp_syntax.tab.c"

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

#line 244 "cpp_syntax.y"


#include "header.h"
#include "syntax_tree.h"

int yyerror(const char *msg)
{
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno);
	fprintf(stderr, "Parser does not expect '%s\n'",yytext);
}


int main(int argc, char const *argv[])
{
	if (argc == 1){
		fprintf(stderr, "\n%s\n", "Please write your code in the shell. Input <CTRL-D> to exit.");
		fprintf(stderr, "%s\n", "Or you can specify the source code path. \nExample --> $./parser InputFile OutputFile\n");
	}
	else if (argc == 2){
		FILE* fin = freopen(argv[1], "r", stdin);
		if (!fin) { 
			return fprintf (stderr, "Error: Input file %s does not exist!\n", argv[1]);
		}
		fprintf(stderr,"InputFile --> %s\n",argv[1]);
	}
	else if (argc == 3){
		FILE* fin = freopen(argv[1], "r", stdin);
		FILE* fout = freopen(argv[2], "w", stdout);
		if (!fin) { 
			return fprintf (stderr, "Error: Input file %s does not exist!\n", argv[1]);
		}
		fprintf(stderr,"-------------------\n");
		fprintf(stderr,"InputFile -> %s\n",argv[1]);
	}
	else {
		return fprintf (stderr, "Error: Invalid parameter number!\n");
	}

	clock_t start,end;
	double total_time_spent;

	start = clock();

	if(!yyparse()){
		fprintf(stderr,"Parsing Complete!\n");
        root->CodePrint();
        fprintf(stderr,"Translation Complete!\n");
	}
	else{
		return fprintf(stderr, "Error: Parsing failed\n\n");
	}

	end = clock();
	total_time_spent = (double)(end - start)* 1000 / CLOCKS_PER_SEC;
	fprintf(stderr, "Total time spent: %.2fms\n\n",total_time_spent );

	return 0;
}

int yywrap()
{
	return 1;
}
