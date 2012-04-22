
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         php54parse
#define yylex           php54lex
#define yyerror         php54error
#define yylval          php54lval
#define yychar          php54char
#define yydebug         php54debug
#define yynerrs         php54nerrs


/* Copy the first part of user declarations.  */


	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
 
#define YYSTYPE pelet::SemanticValueClass

// so that both bison parses call the same lex function
#define php54lex NextSemanticValue

// so that both bison parses call the same error function
#define php54error GrammarError




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     T_END = 0,
     T_REQUIRE_ONCE = 605,
     T_REQUIRE = 604,
     T_EVAL = 549,
     T_INCLUDE_ONCE = 565,
     T_INCLUDE = 564,
     T_LOGICAL_OR = 582,
     T_LOGICAL_XOR = 583,
     T_LOGICAL_AND = 581,
     T_PRINT = 600,
     T_SR_EQUAL = 610,
     T_SL_EQUAL = 608,
     T_XOR_EQUAL = 628,
     T_OR_EQUAL = 597,
     T_AND_EQUAL = 503,
     T_MOD_EQUAL = 586,
     T_CONCAT_EQUAL = 521,
     T_DIV_EQUAL = 530,
     T_MUL_EQUAL = 587,
     T_MINUS_EQUAL = 585,
     T_PLUS_EQUAL = 599,
     T_BOOLEAN_OR = 510,
     T_BOOLEAN_AND = 509,
     T_IS_NOT_IDENTICAL = 575,
     T_IS_IDENTICAL = 573,
     T_IS_NOT_EQUAL = 574,
     T_IS_EQUAL = 571,
     T_IS_GREATER_OR_EQUAL = 572,
     T_IS_SMALLER_OR_EQUAL = 577,
     T_SR = 609,
     T_SL = 607,
     T_INSTANCEOF = 567,
     T_UNSET_CAST = 622,
     T_BOOL_CAST = 508,
     T_OBJECT_CAST = 593,
     T_ARRAY_CAST = 505,
     T_STRING_CAST = 614,
     T_DOUBLE_CAST = 536,
     T_INT_CAST = 569,
     T_DEC = 526,
     T_INC = 563,
     T_CLONE = 518,
     T_NEW = 589,
     T_ELSEIF = 539,
     T_ELSE = 538,
     T_ENDIF = 546,
     T_PUBLIC = 603,
     T_PROTECTED = 602,
     T_PRIVATE = 601,
     T_FINAL = 553,
     T_ABSTRACT = 502,
     T_STATIC = 612,
     T_ARRAY = 504,
     T_AS = 506,
     T_BAD_CHARACTER = 507,
     T_BREAK = 511,
     T_CALLABLE = 512,
     T_CASE = 513,
     T_CATCH = 514,
     T_CHARACTER = 515,
     T_CLASS = 516,
     T_CLASS_C = 517,
     T_CLOSE_TAG = 519,
     T_COMMENT = 520,
     T_CONST = 522,
     T_CONSTANT_ENCAPSED_STRING = 523,
     T_CONTINUE = 524,
     T_CURLY_OPEN = 525,
     T_DECLARE = 527,
     T_DEFAULT = 528,
     T_DIR = 529,
     T_DNUMBER = 531,
     T_DO = 532,
     T_DOC_COMMENT = 533,
     T_DOLLAR_OPEN_CURLY_BRACES = 534,
     T_DOUBLE_ARROW = 535,
     T_ECHO = 537,
     T_EMPTY = 540,
     T_ENCAPSED_AND_WHITESPACE = 541,
     T_ENDDECLARE = 542,
     T_ENDFOR = 543,
     T_ENDFOREACH = 544,
     T_END_HEREDOC = 545,
     T_ENDSWITCH = 547,
     T_ENDWHILE = 548,
     T_EXIT = 550,
     T_EXTENDS = 551,
     T_FILE = 552,
     T_FOR = 554,
     T_FOREACH = 555,
     T_FUNC_C = 556,
     T_FUNCTION = 557,
     T_GLOBAL = 558,
     T_GOTO = 559,
     T_HALT_COMPILER = 560,
     T_IF = 561,
     T_IMPLEMENTS = 562,
     T_INLINE_HTML = 566,
     T_INSTEADOF = 568,
     T_INTERFACE = 570,
     T_ISSET = 576,
     T_LINE = 578,
     T_LIST = 579,
     T_LNUMBER = 580,
     T_METHOD_C = 584,
     T_NAMESPACE = 588,
     T_NS_C = 590,
     T_NS_SEPARATOR = 591,
     T_NUM_STRING = 592,
     T_OBJECT_OPERATOR = 594,
     T_OPEN_TAG = 595,
     T_OPEN_TAG_WITH_ECHO = 596,
     T_PAAMAYIM_NEKUDOTAYIM = 598,
     T_RETURN = 606,
     T_START_HEREDOC = 611,
     T_STRING = 613,
     T_STRING_VARNAME = 615,
     T_SWITCH = 616,
     T_THROW = 617,
     T_TRAIT = 618,
     T_TRAIT_C = 619,
     T_TRY = 620,
     T_UNSET = 621,
     T_USE = 623,
     T_VAR = 624,
     T_VARIABLE = 625,
     T_WHILE = 626,
     T_WHITESPACE = 627
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7786

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  158
/* YYNRULES -- Number of rules.  */
#define YYNRULES  468
/* YYNRULES -- Number of states.  */
#define YYNSTATES  935

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   629

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   157,     2,   154,    47,    31,     2,
     149,   150,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   151,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   155,    30,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   152,    29,   153,    50,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,    71,    18,    73,    55,    74,    75,    53,    28,
      27,    76,    77,    78,    79,    80,    81,    82,    62,    83,
      84,    20,    85,    86,    87,    88,    59,    89,    90,    91,
      21,    92,    93,    94,    95,    96,    57,    97,    65,    64,
      98,    99,   100,   101,   102,   103,    66,   104,   105,     5,
     106,   107,   108,    70,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    60,     7,     6,   118,    49,   119,    58,
     120,    35,    38,    33,    34,    32,   121,    39,   122,   123,
     124,    11,     9,    10,   125,    23,    19,    22,   126,    63,
     127,   128,   129,    54,   130,   131,   132,    17,   133,    24,
      12,    69,    68,    67,     4,     3,   134,    41,    15,    40,
      14,   135,    72,   136,    56,   137,   138,   139,   140,   141,
     142,   143,    52,   144,   145,   146,   147,   148,    16,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    52,    53,
      58,    60,    62,    66,    69,    74,    80,    85,    88,    89,
      91,    93,    95,   100,   102,   105,   109,   117,   128,   129,
     136,   137,   146,   156,   162,   165,   169,   172,   176,   179,
     183,   187,   191,   195,   199,   201,   204,   210,   219,   228,
     234,   236,   237,   252,   256,   260,   262,   263,   265,   268,
     269,   279,   281,   285,   287,   289,   291,   292,   294,   295,
     296,   308,   309,   310,   320,   321,   322,   331,   333,   336,
     338,   341,   342,   343,   347,   349,   350,   351,   355,   356,
     357,   361,   363,   367,   368,   371,   373,   376,   378,   383,
     385,   390,   392,   397,   401,   407,   411,   416,   421,   427,
     428,   434,   439,   441,   443,   445,   450,   451,   458,   459,
     467,   468,   471,   472,   476,   478,   479,   482,   486,   492,
     497,   502,   508,   516,   523,   524,   526,   528,   530,   532,
     533,   535,   537,   540,   544,   548,   553,   557,   559,   561,
     564,   569,   573,   579,   581,   585,   588,   589,   593,   596,
     598,   599,   600,   611,   612,   617,   619,   620,   625,   627,
     628,   633,   634,   636,   638,   641,   644,   647,   651,   653,
     657,   659,   661,   665,   670,   674,   675,   677,   679,   683,
     685,   687,   688,   690,   692,   695,   697,   699,   701,   703,
     705,   707,   711,   717,   719,   723,   729,   734,   738,   740,
     741,   743,   747,   749,   752,   754,   759,   763,   766,   768,
     770,   771,   773,   777,   784,   788,   793,   800,   803,   807,
     811,   815,   819,   823,   827,   831,   835,   839,   843,   847,
     850,   853,   856,   859,   863,   867,   871,   875,   879,   883,
     887,   891,   895,   899,   903,   907,   911,   915,   919,   923,
     926,   929,   932,   935,   939,   943,   947,   951,   955,   959,
     963,   967,   971,   975,   977,   982,   988,   993,   995,   998,
    1001,  1004,  1007,  1010,  1013,  1016,  1019,  1022,  1024,  1029,
    1033,  1037,  1040,  1050,  1061,  1063,  1064,  1069,  1073,  1078,
    1080,  1083,  1084,  1090,  1091,  1099,  1100,  1107,  1114,  1121,
    1128,  1135,  1140,  1142,  1144,  1148,  1151,  1153,  1157,  1160,
    1162,  1164,  1169,  1171,  1174,  1175,  1178,  1179,  1182,  1186,
    1187,  1189,  1191,  1192,  1196,  1198,  1200,  1202,  1204,  1206,
    1208,  1210,  1212,  1214,  1216,  1220,  1223,  1225,  1227,  1231,
    1234,  1237,  1240,  1245,  1249,  1251,  1253,  1257,  1259,  1261,
    1263,  1267,  1270,  1272,  1276,  1280,  1282,  1283,  1286,  1287,
    1289,  1295,  1299,  1303,  1305,  1307,  1309,  1311,  1313,  1315,
    1316,  1323,  1325,  1328,  1329,  1333,  1338,  1343,  1347,  1349,
    1351,  1352,  1354,  1357,  1361,  1365,  1367,  1372,  1377,  1379,
    1381,  1383,  1385,  1388,  1390,  1395,  1400,  1402,  1404,  1409,
    1410,  1412,  1414,  1416,  1421,  1426,  1428,  1430,  1434,  1436,
    1439,  1443,  1445,  1447,  1452,  1453,  1454,  1457,  1463,  1467,
    1471,  1473,  1480,  1485,  1490,  1493,  1496,  1499,  1501,  1504,
    1506,  1511,  1515,  1519,  1526,  1530,  1532,  1534,  1536,  1541,
    1546,  1549,  1552,  1557,  1560,  1563,  1565,  1569,  1573
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   171,    -1,   182,    -1,   183,
      -1,   115,   149,   150,   151,    -1,   126,   161,   151,    -1,
      -1,   126,   161,   152,   163,   160,   153,    -1,    -1,   126,
     152,   164,   160,   153,    -1,   144,   165,   151,    -1,   168,
     151,    -1,    -1,   165,   166,     8,   167,    -1,   167,    -1,
     161,    -1,   161,    74,   136,    -1,   128,   161,    -1,   128,
     161,    74,   136,    -1,   168,     8,   136,    13,   276,    -1,
      85,   136,    13,   276,    -1,   169,   170,    -1,    -1,   171,
      -1,   182,    -1,   183,    -1,   115,   149,   150,   151,    -1,
     172,    -1,   136,    26,    -1,   152,   169,   153,    -1,   116,
     149,   282,   150,   171,   212,   214,    -1,   116,   149,   282,
     150,    26,   169,   213,   215,    66,   151,    -1,    -1,   147,
     149,   173,   282,   150,   211,    -1,    -1,    93,   174,   171,
     147,   149,   282,   150,   151,    -1,   109,   149,   251,   151,
     251,   151,   251,   150,   204,    -1,   138,   149,   282,   150,
     208,    -1,    76,   151,    -1,    76,   282,   151,    -1,    87,
     151,    -1,    87,   282,   151,    -1,   134,   151,    -1,   134,
     258,   151,    -1,   134,   286,   151,    -1,   113,   221,   151,
      -1,    72,   223,   151,    -1,    97,   250,   151,    -1,   118,
      -1,   282,   151,    -1,   143,   149,   180,   150,   151,    -1,
     110,   149,   286,    74,   203,   202,   150,   205,    -1,   110,
     149,   258,    74,   286,   202,   150,   205,    -1,    89,   149,
     207,   150,   206,    -1,   151,    -1,    -1,   142,   152,   169,
     153,    79,   149,   267,   146,   150,   175,   152,   169,   153,
     176,    -1,   139,   282,   151,    -1,   114,   136,   151,    -1,
     177,    -1,    -1,   178,    -1,   177,   178,    -1,    -1,    79,
     149,   267,   146,   150,   179,   152,   169,   153,    -1,   181,
      -1,   180,     8,   181,    -1,   286,    -1,   185,    -1,   188,
      -1,    -1,    31,    -1,    -1,    -1,   259,   184,   136,   186,
     149,   216,   150,   187,   152,   169,   153,    -1,    -1,    -1,
     193,   136,   189,   194,   199,   190,   152,   224,   153,    -1,
      -1,    -1,   196,   136,   191,   197,   192,   152,   224,   153,
      -1,    81,    -1,    71,    81,    -1,   140,    -1,    70,    81,
      -1,    -1,    -1,   107,   195,   267,    -1,   120,    -1,    -1,
      -1,   107,   198,   201,    -1,    -1,    -1,   117,   200,   201,
      -1,   267,    -1,   201,     8,   267,    -1,    -1,    96,   203,
      -1,   286,    -1,    31,   286,    -1,   171,    -1,    26,   169,
     101,   151,    -1,   171,    -1,    26,   169,   102,   151,    -1,
     171,    -1,    26,   169,   100,   151,    -1,   136,    13,   276,
      -1,   207,     8,   136,    13,   276,    -1,   152,   209,   153,
      -1,   152,   151,   209,   153,    -1,    26,   209,   104,   151,
      -1,    26,   151,   209,   104,   151,    -1,    -1,   209,    78,
     282,   210,   169,    -1,   209,    90,   210,   169,    -1,    26,
      -1,   151,    -1,   171,    -1,    26,   169,   105,   151,    -1,
      -1,   212,    64,   149,   282,   150,   171,    -1,    -1,   213,
      64,   149,   282,   150,    26,   169,    -1,    -1,    65,   171,
      -1,    -1,    65,    26,   169,    -1,   217,    -1,    -1,   218,
     146,    -1,   218,    31,   146,    -1,   218,    31,   146,    13,
     276,    -1,   218,   146,    13,   276,    -1,   217,     8,   218,
     146,    -1,   217,     8,   218,    31,   146,    -1,   217,     8,
     218,    31,   146,    13,   276,    -1,   217,     8,   218,   146,
      13,   276,    -1,    -1,    73,    -1,    77,    -1,   267,    -1,
     220,    -1,    -1,   258,    -1,   286,    -1,    31,   284,    -1,
     220,     8,   258,    -1,   220,     8,   286,    -1,   220,     8,
      31,   284,    -1,   221,     8,   222,    -1,   222,    -1,   146,
      -1,   154,   283,    -1,   154,   152,   282,   153,    -1,   223,
       8,   146,    -1,   223,     8,   146,    13,   276,    -1,   146,
      -1,   146,    13,   276,    -1,   224,   225,    -1,    -1,   244,
     248,   151,    -1,   249,   151,    -1,   228,    -1,    -1,    -1,
     245,   259,   184,   136,   226,   149,   216,   150,   227,   243,
      -1,    -1,   144,   229,   230,   232,    -1,   267,    -1,    -1,
     230,     8,   231,   267,    -1,   151,    -1,    -1,   152,   233,
     234,   153,    -1,    -1,   235,    -1,   236,    -1,   235,   236,
      -1,   237,   151,    -1,   241,   151,    -1,   240,   119,   238,
      -1,   267,    -1,   238,     8,   267,    -1,   136,    -1,   240,
      -1,   267,   133,   136,    -1,   239,    74,   242,   136,    -1,
     239,    74,   247,    -1,    -1,   247,    -1,   151,    -1,   152,
     169,   153,    -1,   246,    -1,   145,    -1,    -1,   246,    -1,
     247,    -1,   246,   247,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   248,     8,   146,
      -1,   248,     8,   146,    13,   276,    -1,   146,    -1,   146,
      13,   276,    -1,   249,     8,   136,    13,   276,    -1,    85,
     136,    13,   276,    -1,   250,     8,   282,    -1,   282,    -1,
      -1,   252,    -1,   252,     8,   282,    -1,   282,    -1,   253,
     289,    -1,   289,    -1,   254,    61,   301,   155,    -1,    61,
     301,   155,    -1,   254,   253,    -1,   254,    -1,   253,    -1,
      -1,   255,    -1,    63,   268,   274,    -1,   123,   149,   306,
     150,    13,   282,    -1,   286,    13,   282,    -1,   286,    13,
      31,   286,    -1,   286,    13,    31,    63,   268,   274,    -1,
      62,   282,    -1,   286,    24,   282,    -1,   286,    23,   282,
      -1,   286,    22,   282,    -1,   286,    21,   282,    -1,   286,
      20,   282,    -1,   286,    19,   282,    -1,   286,    18,   282,
      -1,   286,    17,   282,    -1,   286,    16,   282,    -1,   286,
      15,   282,    -1,   286,    14,   282,    -1,   285,    60,    -1,
      60,   285,    -1,   285,    59,    -1,    59,   285,    -1,   282,
      27,   282,    -1,   282,    28,   282,    -1,   282,     9,   282,
      -1,   282,    11,   282,    -1,   282,    10,   282,    -1,   282,
      29,   282,    -1,   282,    31,   282,    -1,   282,    30,   282,
      -1,   282,    44,   282,    -1,   282,    42,   282,    -1,   282,
      43,   282,    -1,   282,    45,   282,    -1,   282,    46,   282,
      -1,   282,    47,   282,    -1,   282,    41,   282,    -1,   282,
      40,   282,    -1,    42,   282,    -1,    43,   282,    -1,    48,
     282,    -1,    50,   282,    -1,   282,    33,   282,    -1,   282,
      32,   282,    -1,   282,    35,   282,    -1,   282,    34,   282,
      -1,   282,    36,   282,    -1,   282,    39,   282,    -1,   282,
      37,   282,    -1,   282,    38,   282,    -1,   282,    49,   268,
      -1,   149,   282,   150,    -1,   257,    -1,   149,   257,   150,
     256,    -1,   282,    25,   282,    26,   282,    -1,   282,    25,
      26,   282,    -1,   313,    -1,    58,   282,    -1,    57,   282,
      -1,    56,   282,    -1,    55,   282,    -1,    54,   282,    -1,
      53,   282,    -1,    52,   282,    -1,   106,   272,    -1,    51,
     282,    -1,   278,    -1,    73,   149,   308,   150,    -1,    61,
     308,   155,    -1,   156,   273,   156,    -1,    12,   282,    -1,
     259,   184,   149,   216,   150,   260,   152,   169,   153,    -1,
      72,   259,   184,   149,   216,   150,   260,   152,   169,   153,
      -1,   112,    -1,    -1,   144,   149,   261,   150,    -1,   261,
       8,   146,    -1,   261,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   149,   263,   219,   150,    -1,
      -1,   126,   128,   161,   149,   264,   219,   150,    -1,    -1,
     128,   161,   149,   265,   219,   150,    -1,   266,   133,   136,
     149,   219,   150,    -1,   266,   133,   293,   149,   219,   150,
      -1,   295,   133,   136,   149,   219,   150,    -1,   295,   133,
     293,   149,   219,   150,    -1,   293,   149,   219,   150,    -1,
      72,    -1,   161,    -1,   126,   128,   161,    -1,   128,   161,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     266,    -1,   269,    -1,   298,   130,   302,   270,    -1,   298,
      -1,   270,   271,    -1,    -1,   130,   302,    -1,    -1,   149,
     150,    -1,   149,   282,   150,    -1,    -1,    99,    -1,   310,
      -1,    -1,   149,   219,   150,    -1,   124,    -1,    92,    -1,
      86,    -1,   122,    -1,   108,    -1,    91,    -1,   141,    -1,
     125,    -1,   111,    -1,   127,    -1,   135,    99,   103,    -1,
     135,   103,    -1,   275,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,    42,   276,    -1,    43,   276,    -1,
      73,   149,   279,   150,    -1,    61,   279,   155,    -1,   277,
      -1,    82,    -1,   266,   133,   136,    -1,   137,    -1,   315,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     275,    -1,   157,   310,   157,    -1,   135,   310,   103,    -1,
      82,    -1,    -1,   281,   280,    -1,    -1,     8,    -1,   281,
       8,   276,    96,   276,    -1,   281,     8,   276,    -1,   276,
      96,   276,    -1,   276,    -1,   283,    -1,   258,    -1,   286,
      -1,   286,    -1,   286,    -1,    -1,   297,   130,   302,   292,
     287,   288,    -1,   297,    -1,   288,   289,    -1,    -1,   130,
     302,   292,    -1,   290,    61,   301,   155,    -1,   291,    61,
     301,   155,    -1,   149,   219,   150,    -1,   291,    -1,   290,
      -1,    -1,   299,    -1,   305,   299,    -1,   266,   133,   293,
      -1,   295,   133,   293,    -1,   299,    -1,   296,    61,   301,
     155,    -1,   262,    61,   301,   155,    -1,   298,    -1,   296,
      -1,   262,    -1,   299,    -1,   305,   299,    -1,   294,    -1,
     299,    61,   301,   155,    -1,   299,   152,   282,   153,    -1,
     300,    -1,   146,    -1,   154,   152,   282,   153,    -1,    -1,
     282,    -1,   303,    -1,   293,    -1,   303,    61,   301,   155,
      -1,   303,   152,   282,   153,    -1,   304,    -1,   136,    -1,
     152,   282,   153,    -1,   154,    -1,   305,   154,    -1,   306,
       8,   307,    -1,   307,    -1,   286,    -1,   123,   149,   306,
     150,    -1,    -1,    -1,   309,   280,    -1,   309,     8,   282,
      96,   282,    -1,   309,     8,   282,    -1,   282,    96,   282,
      -1,   282,    -1,   309,     8,   282,    96,    31,   284,    -1,
     309,     8,    31,   284,    -1,   282,    96,    31,   284,    -1,
      31,   284,    -1,   310,   311,    -1,   310,    99,    -1,   311,
      -1,    99,   311,    -1,   146,    -1,   146,    61,   312,   155,
      -1,   146,   130,   136,    -1,    95,   282,   153,    -1,    95,
     137,    61,   282,   155,   153,    -1,    88,   286,   153,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   149,   314,   150,
      -1,    98,   149,   286,   150,    -1,     7,   282,    -1,     6,
     282,    -1,     5,   149,   282,   150,    -1,     4,   282,    -1,
       3,   282,    -1,   286,    -1,   314,     8,   286,    -1,   266,
     133,   136,    -1,   295,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   195,   195,   199,   200,   204,   205,   209,   210,   211,
     212,   213,   214,   214,   216,   216,   218,   219,   223,   223,
     225,   229,   230,   231,   232,   236,   237,   241,   242,   247,
     248,   249,   250,   255,   256,   260,   261,   262,   263,   263,
     264,   264,   265,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   292,   296,
     297,   301,   298,   304,   305,   310,   311,   315,   316,   321,
     321,   327,   328,   332,   336,   340,   345,   346,   351,   352,
     351,   357,   358,   357,   360,   361,   360,   366,   367,   368,
     369,   372,   374,   374,   379,   382,   384,   384,   388,   390,
     390,   395,   396,   399,   401,   405,   406,   410,   411,   416,
     417,   422,   423,   428,   429,   434,   435,   436,   437,   441,
     443,   444,   449,   450,   455,   456,   459,   461,   464,   466,
     469,   471,   474,   476,   480,   481,   485,   486,   487,   488,
     489,   490,   491,   492,   496,   497,   498,   499,   503,   504,
     508,   509,   510,   511,   512,   513,   517,   518,   522,   523,
     524,   528,   529,   530,   531,   535,   536,   540,   541,   542,
     543,   544,   543,   549,   549,   554,   555,   555,   560,   561,
     561,   566,   568,   572,   573,   577,   578,   582,   586,   587,
     591,   592,   596,   600,   601,   604,   606,   610,   611,   615,
     616,   619,   621,   625,   626,   630,   631,   632,   633,   634,
     635,   639,   640,   641,   642,   646,   648,   652,   653,   657,
     659,   663,   664,   668,   669,   673,   674,   678,   679,   680,
     683,   685,   689,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   748,   750,   751,   752,
     753,   754,   755,   756,   757,   758,   759,   760,   761,   762,
     763,   764,   765,   767,   772,   775,   777,   781,   782,   783,
     784,   788,   788,   791,   790,   793,   793,   795,   797,   799,
     801,   803,   808,   809,   810,   811,   815,   816,   817,   821,
     822,   826,   829,   833,   834,   838,   841,   843,   844,   847,
     849,   850,   853,   855,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   887,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   902,   904,   907,   909,
     913,   914,   915,   916,   920,   921,   926,   931,   935,   941,
     939,   943,   947,   948,   952,   957,   958,   962,   966,   967,
     968,   972,   973,   977,   978,   982,   986,   987,   991,   992,
     993,   997,   998,   999,  1003,  1004,  1005,  1009,  1010,  1013,
    1015,  1019,  1020,  1024,  1025,  1026,  1030,  1031,  1035,  1036,
    1040,  1041,  1045,  1046,  1047,  1050,  1052,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1067,  1068,  1069,  1070,  1074,
    1075,  1076,  1077,  1078,  1079,  1083,  1084,  1085,  1089,  1090,
    1091,  1092,  1093,  1094,  1095,  1099,  1100,  1104,  1105
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_PUBLIC", "T_PROTECTED",
  "T_PRIVATE", "T_FINAL", "T_ABSTRACT", "T_STATIC", "T_ARRAY", "T_AS",
  "T_BAD_CHARACTER", "T_BREAK", "T_CALLABLE", "T_CASE", "T_CATCH",
  "T_CHARACTER", "T_CLASS", "T_CLASS_C", "T_CLOSE_TAG", "T_COMMENT",
  "T_CONST", "T_CONSTANT_ENCAPSED_STRING", "T_CONTINUE", "T_CURLY_OPEN",
  "T_DECLARE", "T_DEFAULT", "T_DIR", "T_DNUMBER", "T_DO", "T_DOC_COMMENT",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_DOUBLE_ARROW", "T_ECHO", "T_EMPTY",
  "T_ENCAPSED_AND_WHITESPACE", "T_ENDDECLARE", "T_ENDFOR", "T_ENDFOREACH",
  "T_END_HEREDOC", "T_ENDSWITCH", "T_ENDWHILE", "T_EXIT", "T_EXTENDS",
  "T_FILE", "T_FOR", "T_FOREACH", "T_FUNC_C", "T_FUNCTION", "T_GLOBAL",
  "T_GOTO", "T_HALT_COMPILER", "T_IF", "T_IMPLEMENTS", "T_INLINE_HTML",
  "T_INSTEADOF", "T_INTERFACE", "T_ISSET", "T_LINE", "T_LIST", "T_LNUMBER",
  "T_METHOD_C", "T_NAMESPACE", "T_NS_C", "T_NS_SEPARATOR", "T_NUM_STRING",
  "T_OBJECT_OPERATOR", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO",
  "T_PAAMAYIM_NEKUDOTAYIM", "T_RETURN", "T_START_HEREDOC", "T_STRING",
  "T_STRING_VARNAME", "T_SWITCH", "T_THROW", "T_TRAIT", "T_TRAIT_C",
  "T_TRY", "T_UNSET", "T_USE", "T_VAR", "T_VARIABLE", "T_WHILE",
  "T_WHITESPACE", "'('", "')'", "';'", "'{'", "'}'", "'$'", "']'", "'`'",
  "'\"'", "$accept", "start", "top_statement_list", "namespace_name",
  "top_statement", "$@1", "$@2", "use_declarations", "$@3",
  "use_declaration", "constant_declaration", "inner_statement_list",
  "inner_statement", "statement", "unticked_statement", "$@4", "$@5",
  "$@6", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "$@7", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@8", "$@9",
  "unticked_class_declaration_statement", "$@10", "$@11", "$@12", "$@13",
  "class_entry_type", "extends_from", "$@14", "interface_entry",
  "interface_extends_list", "$@15", "implements_list", "$@16",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@17", "$@18", "trait_use_statement", "$@19",
  "trait_list", "$@20", "trait_adaptations", "$@21",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@22", "$@23", "$@24", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@25",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   629,   605,   604,   549,   565,   564,    44,   582,
     583,   581,   600,    61,   610,   608,   628,   597,   503,   586,
     521,   530,   587,   585,   599,    63,    58,   510,   509,   124,
      94,    38,   575,   573,   574,   571,    60,    62,   572,   577,
     609,   607,    43,    45,    46,    42,    47,    37,    33,   567,
     126,    64,   622,   508,   593,   505,   614,   536,   569,   526,
     563,    91,   518,   589,   539,   538,   546,   603,   602,   601,
     553,   502,   612,   504,   506,   507,   511,   512,   513,   514,
     515,   516,   517,   519,   520,   522,   523,   524,   525,   527,
     528,   529,   531,   532,   533,   534,   535,   537,   540,   541,
     542,   543,   544,   545,   547,   548,   550,   551,   552,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   566,   568,
     570,   576,   578,   579,   580,   584,   588,   590,   591,   592,
     594,   595,   596,   598,   606,   611,   613,   615,   616,   617,
     618,   619,   620,   621,   623,   624,   625,   626,   627,    40,
      41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   162,   163,   162,   164,   162,   162,   162,   166,   165,
     165,   167,   167,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   170,   171,   171,   172,   172,   172,   173,   172,
     174,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   175,   172,   172,   172,   176,   176,   177,   177,   179,
     178,   180,   180,   181,   182,   183,   184,   184,   186,   187,
     185,   189,   190,   188,   191,   192,   188,   193,   193,   193,
     193,   194,   195,   194,   196,   197,   198,   197,   199,   200,
     199,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   208,   208,   209,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   217,   217,
     217,   217,   217,   217,   218,   218,   218,   218,   219,   219,
     220,   220,   220,   220,   220,   220,   221,   221,   222,   222,
     222,   223,   223,   223,   223,   224,   224,   225,   225,   225,
     226,   227,   225,   229,   228,   230,   231,   230,   232,   233,
     232,   234,   234,   235,   235,   236,   236,   237,   238,   238,
     239,   239,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   247,   247,   247,
     247,   248,   248,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   255,
     256,   256,   257,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   259,   260,   260,   261,   261,   261,
     261,   263,   262,   264,   262,   265,   262,   262,   262,   262,
     262,   262,   266,   266,   266,   266,   267,   267,   267,   268,
     268,   269,   269,   270,   270,   271,   272,   272,   272,   273,
     273,   273,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   277,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   279,   279,   280,   280,
     281,   281,   281,   281,   282,   282,   283,   284,   285,   287,
     286,   286,   288,   288,   289,   290,   290,   291,   292,   292,
     292,   293,   293,   294,   294,   295,   296,   296,   297,   297,
     297,   298,   298,   298,   299,   299,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   304,   304,   305,   305,
     306,   306,   307,   307,   307,   308,   308,   309,   309,   309,
     309,   309,   309,   309,   309,   310,   310,   310,   310,   311,
     311,   311,   311,   311,   311,   312,   312,   312,   313,   313,
     313,   313,   313,   313,   313,   314,   314,   315,   315
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     0,     4,
       1,     1,     3,     2,     4,     5,     4,     2,     0,     1,
       1,     1,     4,     1,     2,     3,     7,    10,     0,     6,
       0,     8,     9,     5,     2,     3,     2,     3,     2,     3,
       3,     3,     3,     3,     1,     2,     5,     8,     8,     5,
       1,     0,    14,     3,     3,     1,     0,     1,     2,     0,
       9,     1,     3,     1,     1,     1,     0,     1,     0,     0,
      11,     0,     0,     9,     0,     0,     8,     1,     2,     1,
       2,     0,     0,     3,     1,     0,     0,     3,     0,     0,
       3,     1,     3,     0,     2,     1,     2,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       5,     4,     1,     1,     1,     4,     0,     6,     0,     7,
       0,     2,     0,     3,     1,     0,     2,     3,     5,     4,
       4,     5,     7,     6,     0,     1,     1,     1,     1,     0,
       1,     1,     2,     3,     3,     4,     3,     1,     1,     2,
       4,     3,     5,     1,     3,     2,     0,     3,     2,     1,
       0,     0,    10,     0,     4,     1,     0,     4,     1,     0,
       4,     0,     1,     1,     2,     2,     2,     3,     1,     3,
       1,     1,     3,     4,     3,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     3,     1,     2,     1,     4,     3,     2,     1,     1,
       0,     1,     3,     6,     3,     4,     6,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     4,     3,
       3,     2,     9,    10,     1,     0,     4,     3,     4,     1,
       2,     0,     5,     0,     7,     0,     6,     6,     6,     6,
       6,     4,     1,     1,     3,     2,     1,     3,     2,     1,
       1,     4,     1,     2,     0,     2,     0,     2,     3,     0,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     3,     2,
       2,     2,     4,     3,     1,     1,     3,     1,     1,     1,
       3,     2,     1,     3,     3,     1,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       6,     1,     2,     0,     3,     4,     4,     3,     1,     1,
       0,     1,     2,     3,     3,     1,     4,     4,     1,     1,
       1,     1,     2,     1,     4,     4,     1,     1,     4,     0,
       1,     1,     1,     4,     4,     1,     1,     3,     1,     2,
       3,     1,     1,     4,     0,     0,     2,     5,     3,     3,
       1,     6,     4,     4,     2,     2,     2,     1,     2,     1,
       4,     3,     3,     6,     3,     1,     1,     1,     4,     4,
       2,     2,     4,     2,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,   322,
       0,     0,    87,   375,     0,   346,     0,     0,   349,   345,
      40,     0,     0,   336,   348,     0,     0,   352,   304,     0,
       0,     0,     0,    54,    94,     0,   347,     0,   344,   351,
       0,   353,     0,     0,     0,     5,   367,     0,     0,    89,
     350,     0,     0,     0,   417,     0,     0,    60,    28,   428,
     339,     0,   369,     3,     0,     7,    33,     8,     9,    74,
      75,     0,     0,   283,   385,    76,   410,     0,   372,   297,
       0,   384,     0,   386,     0,   413,     0,   409,   391,   408,
     411,   416,     0,   287,   368,   322,     0,     5,    76,   464,
     463,     0,   461,   460,   301,   269,   270,   271,   272,   296,
     294,   293,   292,   291,   290,   289,   288,   322,     0,     0,
     323,     0,   252,   388,     0,   250,     0,   440,     0,   378,
     237,     0,     0,   323,   329,   342,   330,     0,   332,   411,
       0,    90,    88,   163,     0,    76,   435,    44,     0,     0,
      46,     0,     0,     0,     0,   218,     0,     0,   295,   219,
       0,   158,     0,     0,   157,     0,     0,     0,     0,   434,
       0,    14,     0,   371,    48,   385,     0,   386,     0,     0,
       0,   355,   449,     0,   447,    34,     0,     0,    28,     0,
       0,    21,    18,    20,    38,   283,     0,     0,     0,   340,
       0,   341,     0,     0,     0,   311,     0,    17,    81,    84,
      77,     0,   419,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   251,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,   419,     0,   419,
       0,   429,   412,     0,     0,     0,   325,     0,     0,   444,
     387,     0,   299,   379,   436,     0,   325,     0,   149,   232,
       0,     0,   412,     0,     0,    52,     0,     0,    45,     0,
      47,     0,     0,     0,     0,    53,     0,   337,     0,     0,
     220,   222,   385,   386,     0,   159,   386,     0,    51,    64,
       0,     0,   465,     0,     0,   432,     0,   431,   370,     4,
      11,    12,   315,    49,    50,     0,   367,     0,   354,   448,
       0,     0,   446,   374,   445,     0,    63,     0,     0,    71,
      73,    23,     0,    16,     0,     0,   230,   282,     0,    35,
      27,    29,    30,    31,     0,   300,   373,     6,   149,     0,
      91,    95,    78,   144,   420,     0,   467,   403,   401,     0,
     255,   257,   256,     0,     0,   253,   254,   258,   260,   259,
     274,   273,   276,   275,   277,   279,   280,   278,   268,   267,
     262,   263,   261,   264,   265,   266,   281,     0,   234,   248,
     247,   246,   245,   244,   243,   242,   241,   240,   239,   238,
       0,     0,   148,   385,   386,   468,   404,     0,   426,     0,
     422,   400,   421,   425,     0,     0,   462,   324,     0,     0,
       0,   439,     0,   438,   324,   403,     0,   404,   334,     0,
       0,   376,     0,   365,     0,     0,     0,   357,     0,   356,
     164,   364,   161,   144,   298,    26,     0,     0,     0,     0,
     217,   459,   338,   219,     0,     0,     0,     0,   156,    10,
       0,     0,   458,   434,   434,     0,   313,     0,     4,   149,
     454,     0,   452,   456,   455,   457,     0,   451,     0,     0,
       0,     0,     0,    22,     0,     0,   419,     0,   229,   228,
     231,   284,   224,     0,   418,     0,     0,    92,    98,    96,
      85,     0,   145,   146,     0,     0,   326,     0,   134,     0,
     147,   407,   149,   149,   402,   286,     0,     0,   235,   152,
     321,     0,   149,   149,   406,     0,   149,   399,   398,   389,
     419,     0,   414,   415,   443,   442,     0,   343,   331,   360,
     361,   383,     0,   378,   376,     0,   359,     0,     0,     0,
       0,   113,     0,    28,   111,    59,     0,     0,   221,   103,
       0,   103,   105,   160,    28,   126,   466,     0,   430,     0,
     149,    15,     0,     0,     0,   450,   119,   119,    43,     0,
      72,    56,    24,    19,     0,     0,   400,   223,   419,   227,
       0,   312,    25,     0,    99,    82,     0,     0,   144,     0,
     328,   305,   144,     0,   136,     0,     0,   285,   342,     0,
     385,   386,     0,     0,   427,     0,   419,   419,   393,     0,
       0,     0,   437,     0,   333,     0,   363,   379,   377,     0,
     358,   366,   162,   305,     0,     0,     0,   219,     0,     0,
     106,     0,   128,   130,   433,   233,     0,    13,   316,     0,
     119,     0,   119,     0,     0,    28,   124,    39,   226,   394,
       0,    32,    93,     0,     0,    97,   101,   166,     0,   327,
       0,     0,     0,   137,     0,   317,   318,   236,   155,   319,
     320,   397,     0,     0,   390,   423,   424,   441,   335,   382,
     381,   362,     0,   114,     0,     0,     0,   104,     0,     0,
     132,     0,     0,    36,   314,   453,     0,     0,     0,     0,
       0,   115,     0,     0,   225,   100,   166,     0,   201,    79,
       0,    28,     0,   140,     0,   139,   395,   396,   392,     0,
      28,   112,    41,     0,    28,   109,    58,    57,     0,     0,
       0,     0,   131,     0,     0,   122,   123,    28,   117,   116,
       0,     0,   201,   102,   205,   206,   207,   210,   209,   208,
       0,   173,   200,    86,   165,   169,     0,     0,   199,   203,
       0,     0,     0,   309,     0,     0,   141,     0,   138,   380,
       0,    28,   107,    42,     0,     0,    28,     0,     0,   118,
      28,   121,    61,   125,    83,     0,     0,   213,     0,    76,
     204,     0,   168,    28,   310,     0,   306,   302,     0,   143,
     303,     0,     0,     0,   133,    37,     0,   120,     0,     0,
       0,   175,     0,     0,   167,     0,     0,     0,     0,   307,
     142,     0,   110,     0,   127,    28,   216,   176,   178,   179,
     174,   214,   211,   170,     0,    80,   308,   108,    28,     0,
       0,   181,     0,     0,   215,   129,    66,   177,     5,     0,
     182,   183,     0,     0,   191,     0,     0,   212,   144,     0,
      62,    65,    67,   180,   184,   185,   195,     0,   186,     0,
       0,     0,    68,     0,   194,   187,   188,   192,   171,     0,
     193,     0,     0,     0,   189,   197,    28,   172,    69,     0,
       0,   198,    28,     0,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   498,   339,   212,   364,   213,
      84,   217,   370,   371,    86,   365,   173,   848,   900,   901,
     902,   930,   358,   359,   372,   373,   231,    89,   531,   801,
      90,   380,   694,   381,   627,    91,   528,   623,    92,   530,
     626,   625,   693,   695,   669,   591,   813,   766,   585,   312,
     608,   681,   777,   687,   673,   730,   733,   770,   537,   538,
     539,   431,   432,   183,   184,   164,   748,   794,   883,   922,
     795,   826,   850,   880,   870,   881,   889,   890,   891,   892,
     915,   893,   894,   895,   913,   927,   796,   797,   798,   799,
     828,   800,   174,   319,   320,   518,   519,   520,   521,    93,
      94,   118,   701,   804,    96,   378,   600,   499,    97,   540,
     155,   156,   568,   654,   178,   220,   299,    98,   571,   471,
      99,   572,   294,   573,   100,   101,   289,   102,   103,   648,
     714,   522,   557,   558,   559,   104,   105,   106,   107,   108,
     109,   110,   111,   385,   441,   442,   443,   112,   336,   337,
     148,   149,   203,   204,   506,   113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -782
static const yytype_int16 yypact[] =
{
    -782,    70,  1815,  -782,  6433,  6433,   -38,  6433,  6433,  6433,
    6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,
    6433,  6433,   192,   192,  4915,  6433,   513,    84,   121,   -52,
      95,  5041,  -782,  -782,   115,  -782,  5167,   104,  -782,  -782,
    -782,  6433,   135,   137,  -782,   176,   212,  -782,  -782,    87,
     136,   216,   244,  -782,  -782,   253,  -782,   256,  -782,  -782,
     110,  -782,   275,  5293,   108,   394,  -782,   274,  6433,  -782,
    -782,   284,   306,   -60,  -782,   308,  6433,  -782,  -782,   309,
     148,   161,   180,  -782,    16,  -782,  -782,  -782,  -782,  -782,
    -782,   327,   343,  -782,  -782,   456,   428,   369,  -782,  -782,
    7032,  -782,    12,  1064,   344,  -782,   371,   444,   378,  -782,
      72,  -782,   213,  -782,  -782,   398,   384,  -782,   456,  7697,
    7697,  6433,  7697,  7697,  1801,  -782,  -782,   464,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   386,   275,
     133,   390,  -782,  -782,   396,  -782,   192,  7572,   375,   529,
    -782,   416,   275,   425,   406,   409,  -782,   427,   431,     1,
     213,  -782,  -782,   550,    25,   456,  4915,  -782,  7075,   552,
    -782,  7116,   432,  4760,    26,  7697,   192,  5419,  -782,  6433,
    6433,  -782,   323,    28,  -782,   420,   423,  6433,   192,   324,
     275,  -782,   170,   259,  -782,   429,  7697,   356,   192,  6559,
     248,  -782,   -33,   113,  -782,  -782,  6433,  7157,  -782,   192,
     275,   -10,   430,  -782,  -782,   426,  7200,  1970,  6433,   125,
     433,   242,   125,   193,   447,  -782,   448,  -782,  -782,  -782,
    -782,   109,  6433,   283,  6433,  6433,  6433,  5545,  6433,  6433,
    6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,
    6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,  6433,   513,
    -782,  -782,  -782,  5672,  6433,  6433,  6433,  6433,  6433,  6433,
    6433,  6433,  6433,  6433,  6433,  5799,   292,  6433,   165,  6433,
    6433,   309,   -29,   438,  7241,   275,   205,   318,   322,  -782,
    -782,  5926,  -782,  6053,  -782,   275,   425,   237,  5799,  -782,
     237,   165,    -4,  1150,   442,  -782,   441,   443,  -782,  1150,
    -782,   581,    11,   449,  6433,  -782,   451,  -782,  7282,   446,
     590,  7697,   525,   962,  6433,  -782,  -782,    87,  -782,  -782,
     459,  7324,  -782,    35,   453,  -782,    36,  -782,   285,  -782,
    -782,  -782,  -782,  -782,  -782,   458,   561,  6733,  -782,  -782,
     -30,   491,  -782,  -782,  -782,  7365,  -782,  2125,    37,  -782,
    -782,   124,   494,  -782,   617,  6433,    99,  -782,   487,  -782,
    -782,  -782,  -782,  -782,  6774,  -782,  -782,  -782,  5799,   627,
     536,   539,  -782,    78,  7697,   495,   503,   504,    -4,   213,
    7737,  1649,  1801,  6433,  7656,  2110,  2264,  2418,  2572,  2726,
    2881,  2881,  2881,  2881,  1117,  1117,  1117,  1117,   571,   571,
     489,   489,   489,   464,   464,   464,  -782,   281,  1801,  1801,
    1801,  1801,  1801,  1801,  1801,  1801,  1801,  1801,  1801,  1801,
     192,   506,   646,    38,    69,   508,   509,   510,  -782,  6433,
    -782,   512,     0,  -782,   511,  6821,  -782,   240,   503,   508,
     192,  7697,   192,  7613,   425,  -782,   519,  -782,  -782,  1150,
    1150,  1150,   523,  -782,   546,   275,   224,   -32,   542,  -782,
    -782,  -782,   664,    78,  -782,  -782,  1150,   543,  3985,   531,
    7697,  -782,  -782,  6433,  6433,   192,   206,  6862,  -782,  -782,
    4140,   192,  -782,   324,   324,   665,  -782,  1505,  -782,  5799,
    -782,  6433,  -782,  -782,  -782,  -782,   527,  -782,    -3,   606,
     192,   535,   551,  -782,   -60,  7406,  6433,   165,   560,   105,
    -782,  -782,  -782,   541,  -782,   544,  1150,  -782,   575,  -782,
    -782,   562,  -782,  -782,   565,   275,   425,   559,   692,   -11,
    -782,  -782,  5799,  5799,    -4,  1956,  6433,   513,  -782,  -782,
    -782,  6180,  5799,  5799,  -782,  6903,  5799,   640,   649,  -782,
    6433,  6433,  -782,  -782,  -782,  -782,  6307,  -782,   583,  -782,
    -782,   618,   563,   707,  1150,   275,   -28,   613,   586,  1150,
     567,  -782,   706,  -782,  -782,  -782,  6433,   572,  7697,   628,
     192,   628,  -782,  -782,  -782,  -782,  -782,    43,  -782,  6433,
    5799,  -782,  1660,   578,  6692,  -782,   574,   579,  -782,   582,
    -782,  -782,  -782,  -782,  4295,   580,   512,  -782,  6433,   560,
     591,  -782,  -782,   230,  -782,  -782,   230,   600,    78,   275,
     425,   589,   -14,   597,   740,   604,   605,  1956,   409,   192,
      44,   123,   607,   608,  -782,   609,  6433,  6433,  -782,   601,
    6948,   192,  7697,   165,  -782,  1150,  -782,  1150,  -782,   611,
      89,  -782,  -782,   589,  1150,  2280,  7448,  6433,   206,   614,
    -782,   615,  3830,    93,  -782,  1801,   616,  -782,  -782,   610,
    -782,    -9,  -782,   -23,   230,  -782,  -782,  -782,  -782,  -782,
     612,  -782,  -782,   230,   620,   760,  -782,  -782,   619,   425,
     624,   623,     8,   763,  1150,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,   622,   629,   560,  -782,  -782,  -782,  -782,  -782,
     682,  -782,   631,  -782,   635,   637,   641,  -782,  4450,  4450,
     335,   630,  4760,  -782,  -782,  -782,    20,  6433,    -1,   639,
      31,  -782,   647,  2435,  -782,   760,  -782,   230,   479,  -782,
      18,  -782,   648,   779,  1150,  -782,  -782,  -782,  -782,  1150,
    -782,  -782,  -782,  4605,  -782,  -782,  -782,  -782,   650,   771,
     732,  6433,  -782,   651,  6991,  -782,  -782,  -782,  -782,  -782,
     655,   656,   636,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
     673,  -782,  -782,  -782,  -782,  -782,   654,   398,   413,  -782,
      29,   658,   667,  -782,    50,  2590,   788,  1150,  -782,  -782,
    2745,  -782,  -782,  -782,  2900,  6433,  -782,   660,  7489,  -782,
    -782,  3830,  -782,  -782,  -782,   801,   230,   802,    30,   456,
    -782,   680,  -782,  -782,  -782,    49,  -782,  -782,  1150,  -782,
    -782,  3055,   666,  7530,  3830,  -782,  4760,  3830,   668,  1150,
      22,  -782,  1150,   675,  -782,   686,   810,  3210,   678,  -782,
    -782,   674,  -782,   800,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,   814,  -782,  1150,  -782,  -782,  -782,  -782,  3365,
     230,   360,  1150,   679,  -782,  3830,   751,  -782,   757,   681,
     360,  -782,   685,   759,   718,   687,   708,  -782,    78,   694,
    -782,   751,  -782,  -782,  -782,  -782,   450,   230,  -782,   710,
     697,   230,  -782,   712,   713,   836,  -782,  -782,  -782,   704,
    -782,   230,   291,   701,  -782,  -782,  -782,  -782,  -782,  3520,
     700,  -782,  -782,  3675,  -782
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -782,  -782,  -326,   -20,  -782,  -782,  -782,  -782,  -782,   339,
    -782,  -182,  -782,    19,  -782,  -782,  -782,  -782,  -782,  -782,
     -45,  -782,  -782,   347,     2,     3,  -117,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,   166,   267,   195,  -782,   138,  -782,  -782,
    -782,  -448,    90,  -782,  -782,  -782,  -782,  -782,  -465,  -782,
     234,  -276,  -782,  -782,   545,  -782,   122,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   -21,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -781,
    -782,  -782,  -782,  -468,  -782,   352,  -782,  -782,  -782,   797,
     146,    -2,   217,  -782,  -782,  -782,  -782,  -782,    81,  -576,
    -247,  -782,  -782,  -782,  -782,  -782,   238,  -112,   -78,  -782,
    -782,   305,   311,  -782,   933,   699,  -421,    51,   852,  -782,
    -782,  -504,  -782,  -782,   266,  -222,  -782,   867,  -782,  -782,
     -19,    15,  -782,  -261,  -291,  -782,  -782,     9,   392,   400,
     720,  -782,   411,   203,  -782,  -782,  -782,  -782
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -406
static const yytype_int16 yytable[] =
{
      95,   283,   140,   140,    87,    88,   153,   158,   580,   549,
     458,   387,   416,   497,   617,   587,   437,   830,   444,   477,
     633,    85,   456,   606,   226,   775,   357,   165,   350,   564,
     867,   565,   279,   304,   314,   160,   327,   831,   853,   752,
     192,   159,   193,   491,   494,   510,  -150,   692,   306,   802,
     696,   494,  -153,   211,   436,   737,   440,   279,   835,   532,
      48,   560,   279,   533,   362,   387,   436,   738,   210,   737,
       3,   261,   262,   142,   145,   455,   117,  -151,   457,   440,
     858,   738,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   163,   739,   224,   351,   737,   503,
     224,  -323,   525,   141,   141,  -325,   504,   154,   742,   737,
     738,   121,   534,   165,   535,   617,   505,   696,   224,   286,
    -402,   738,   117,   280,   773,   914,   140,   282,  -388,  -388,
     741,  -154,   296,   279,  -405,   634,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   280,   607,
     776,   532,   561,   280,   753,   533,   140,   731,   732,   683,
     516,   478,   140,   698,   803,   161,   618,   227,   140,   140,
     338,   783,   602,   868,   869,   302,   305,   315,   140,   328,
     832,   854,  -388,  -388,   779,   492,   495,   511,  -150,   140,
     361,   469,   313,   674,  -153,   859,   198,   469,   512,   726,
     836,   198,   162,   199,   534,  -405,   535,   200,   199,   195,
     758,   201,   352,   198,   117,    95,   353,   224,   708,  -151,
     199,  -401,  -324,   603,   280,   470,   616,   141,  -135,   517,
     717,   475,   736,   181,   740,   517,   198,   590,   190,   153,
     158,   182,   389,   199,   166,   382,   117,   219,   388,   198,
     851,   169,   224,   172,   202,   615,   199,   141,   383,   202,
     222,   224,   191,   141,   137,   447,   635,   636,   160,   141,
     141,   202,   185,  -154,   159,   454,   642,   643,   137,   141,
     645,   198,   225,   467,   176,   389,   177,   389,   199,   467,
     141,   388,   352,   388,   202,   440,   389,   389,   224,   649,
     638,   438,   388,   388,   887,   896,   389,   202,   224,   389,
     389,    74,   388,  -323,   896,   388,   388,   439,   138,    79,
     139,   340,   341,   577,   676,   179,   322,   201,   117,   225,
     198,   916,   138,   224,   139,   919,   198,   199,    74,   202,
     154,   352,   117,   199,   547,   924,    79,   469,   469,   469,
     376,   348,    74,   137,   342,    95,   534,   690,   535,    74,
      79,   180,   718,   536,   469,   186,   117,   281,   224,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   569,   570,    74,   468,   712,   713,   224,   202,   496,
     468,    79,  -325,   187,   202,   137,   137,   140,   581,   768,
     769,   665,   188,   349,   544,   189,   354,   138,   342,   139,
     140,   117,   672,   224,   469,  -388,  -388,   117,  -324,   386,
     205,   433,   349,   206,   354,   349,   354,    74,   435,    74,
     140,   440,   140,   910,   496,    79,   208,    79,    74,   467,
     467,   467,   925,   926,   433,   576,    79,   334,   622,   138,
     138,   139,   139,   536,   448,   209,   467,   214,   449,   117,
     117,   218,   469,   228,    74,   140,   140,   469,    74,    74,
      74,   140,    79,   140,   140,   324,    79,    79,    79,   229,
     784,   785,   786,   787,   788,   789,   534,   230,   535,   232,
     140,   221,   223,   275,   211,    95,   888,   584,   141,    87,
      88,   662,   233,   743,   276,   277,   467,   344,   278,   595,
      48,   141,   190,   259,   285,   630,    85,   784,   785,   786,
     787,   788,   789,   287,   433,  -202,   389,   153,   158,   288,
     292,   141,   388,   141,   256,   257,   258,   293,   259,   297,
     468,   468,   468,   469,   295,   469,   784,   785,   786,   787,
     788,   789,   469,   224,   467,   660,   160,   468,   298,   467,
     300,   301,   159,   303,   790,   309,   141,   141,   311,   805,
     140,   329,   141,   330,   141,   141,   366,   719,   810,   720,
     343,   363,   814,   377,   379,   137,   723,   383,   472,   375,
     473,   141,   469,   474,   476,   821,   479,   483,   484,   485,
      95,   481,   493,   536,    87,    88,   536,   468,   536,   699,
     489,   500,   536,   253,   254,   255,   256,   257,   258,   140,
     259,    85,   501,   791,   792,   514,   755,   507,   154,   841,
     513,   140,   793,   686,   844,   467,   523,   467,   847,   151,
     526,   152,   469,   527,   467,   433,   529,   469,   140,   117,
     541,   857,   542,   543,   551,   468,   550,   552,   553,    74,
     468,   556,   389,    95,   536,   554,   562,    79,   388,   567,
      95,   141,   574,   536,   575,   578,   808,   579,   599,   582,
     586,   809,   605,   879,   467,   609,   611,   612,   433,   433,
     517,   620,   624,   629,   621,   469,   885,   640,   433,   433,
     632,   646,   433,   784,   785,   786,   787,   788,   789,   631,
     647,   628,   855,   653,   655,   657,   348,   663,   656,   664,
     141,   790,   661,   667,   668,   680,   469,   536,   678,   839,
     682,   684,   141,   700,   467,   688,   468,   469,   468,   467,
     469,    95,   691,   703,   929,   468,   433,   765,   765,   141,
     933,   772,   697,   704,   705,   706,   715,   709,   710,   711,
     860,   721,   469,   735,   728,   729,   734,   744,   747,   749,
     469,   866,   746,   750,   871,   751,   754,   756,   759,   771,
     791,   792,   812,   760,   757,   468,   761,   467,   762,   824,
     778,   763,   807,   780,   806,   829,   884,   816,   817,   815,
     827,   838,   819,    95,   897,   822,   536,   823,    95,   825,
     833,   845,    95,   834,   849,   852,   856,   862,   467,    95,
     865,   872,   873,   874,   876,   877,   878,   882,   898,   467,
     899,  -190,   467,   906,   903,   468,   905,   907,   908,    95,
     468,   909,    95,   911,   921,    95,   917,   918,   920,  -196,
     923,   928,   932,   613,   467,    95,   912,   610,   671,   745,
     536,   536,   467,   727,   820,   864,   702,   767,   782,   904,
     536,   619,   488,   215,   143,   143,   707,    95,   536,   659,
     722,   325,   689,    95,   658,   597,   307,   536,   468,   144,
     144,   536,     0,   157,   598,     0,     0,     0,     0,     0,
       0,   536,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
     468,    95,     0,   468,     0,     0,     0,   119,   120,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   468,     0,   147,   150,     0,
       0,     0,     0,   468,   168,     0,     0,     0,     0,   171,
       0,     0,     0,     0,   175,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,   290,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,  -388,  -388,     0,     0,     0,     0,     0,   316,     0,
       0,     0,   323,     0,   326,     0,   486,     0,     0,     0,
     332,   335,     0,   144,     0,     0,     0,     0,     0,   144,
     345,     0,     0,     0,   284,   144,   144,     0,     0,     0,
       0,   360,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   321,   196,     0,     0,     0,     0,     0,     0,
     331,     0,     0,  -388,  -388,     0,   157,   434,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,   374,     0,  -406,  -406,  -406,  -406,   251,   252,   253,
     254,   255,   256,   257,   258,   384,   259,   390,   391,   392,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   459,   460,     0,     0,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   196,     0,
     384,   461,   384,   445,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   462,   451,     0,   453,     0,     0,     0,
     434,   196,   463,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,    44,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,   548,
       0,     0,    56,     0,    58,    59,   464,    61,   465,     0,
       0,     0,   290,     0,   144,   466,   117,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,   144,   515,     0,
       0,     0,   290,     0,   290,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,   144,     0,   144,
       0,     0,     0,     0,     0,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   589,   592,     0,
       0,     0,     0,   596,     0,   335,   335,     0,     0,     0,
       0,   434,   144,   144,     0,     0,     0,     0,   144,     0,
     144,   144,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,     0,     0,     0,     0,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   434,   434,     0,     0,     0,     0,
       0,     0,     0,   641,   434,   434,     0,     0,   434,     0,
       0,     0,     0,     0,   157,     0,   321,   588,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,     0,   604,     0,     0,     0,     0,     0,
       0,     0,   670,     0,     0,     0,     0,     0,     0,   384,
       0,     0,   434,     0,     0,     0,     0,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   196,     0,     0,   637,
       0,     0,     0,     0,   196,   196,   196,     0,     0,   196,
       0,   290,     0,   384,   650,     0,     0,     0,     0,   652,
       0,     0,     0,   290,     0,     0,   144,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   144,   666,
     592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   196,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,   384,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,   384,
     384,    31,     0,     0,     0,     0,    32,    33,     0,     0,
      34,    35,    36,     0,    37,     0,    38,    39,    40,     0,
     321,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,     0,    77,    78,   601,    79,
     236,    80,    81,     4,     5,     6,     7,     8,     0,     0,
     774,     0,     9,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,    10,    11,   818,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,    34,    35,    36,   843,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
       0,    77,    78,   677,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,   237,     9,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
      34,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,   369,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,   509,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
     724,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
     781,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,   837,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,   840,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,  -406,  -406,  -406,  -406,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,   842,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,   861,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,   875,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,   886,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,   931,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     368,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,   934,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   368,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   594,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    52,     0,    53,     0,
       0,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   685,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    52,     0,    53,     0,
       0,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   811,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,    78,     0,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    52,     0,    53,     0,
       0,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,    78,     0,    79,     0,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     4,     5,     6,     7,     8,     0,
      64,   117,    66,     9,     0,     0,    70,     0,     0,     0,
       0,    74,     0,     0,    76,     0,     0,     0,     0,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   115,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,   116,    61,    62,
       4,     5,     6,     7,     8,     0,    64,   117,    66,     9,
       0,     0,    70,     0,     0,     0,     0,    74,     0,     0,
      76,     0,   167,     0,     0,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   115,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   116,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   117,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,    76,     0,   170,     0,
       0,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   116,
      61,    62,     4,     5,     6,     7,     8,     0,    64,   117,
      66,     9,     0,     0,    70,     0,     0,     0,     0,    74,
       0,     0,    76,     0,   194,     0,     0,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     4,     5,
       6,     7,     8,     0,    64,   117,    66,     9,     0,     0,
      70,     0,     0,     0,     0,    74,     0,     0,    76,   317,
       0,   393,     0,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     4,     5,     6,     7,     8,
      64,   117,    66,     0,     9,     0,    70,     0,     0,     0,
       0,    74,     0,     0,    76,     0,     0,     0,     0,    79,
       0,    80,    81,   417,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   116,    61,
      62,     0,     4,     5,     6,     7,     8,    64,   117,    66,
       0,     9,     0,    70,     0,     0,     0,     0,    74,     0,
       0,    76,     0,     0,     0,     0,    79,     0,    80,    81,
     430,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     4,
       5,     6,     7,     8,    64,   117,    66,     0,     9,     0,
      70,     0,     0,     0,     0,    74,     0,     0,    76,     0,
       0,     0,     0,    79,     0,    80,    81,   450,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     4,     5,     6,     7,
       8,    64,   117,    66,     0,     9,     0,    70,     0,     0,
       0,     0,    74,     0,     0,    76,     0,     0,     0,     0,
      79,     0,    80,    81,   452,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     4,     5,     6,     7,     8,    64,   117,
      66,     0,     9,     0,    70,     0,     0,     0,     0,    74,
       0,     0,    76,     0,     0,     0,     0,    79,     0,    80,
      81,   639,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   115,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       4,     5,     6,     7,     8,    64,   117,    66,     0,     9,
       0,    70,     0,     0,     0,     0,    74,     0,     0,    76,
       0,     0,     0,     0,    79,     0,    80,    81,   651,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   115,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   116,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   117,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,    76,     0,     0,     0,
       0,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   116,
      61,    62,     4,     5,     6,     7,     8,     0,    64,   117,
      66,     9,     0,     0,    70,     0,     0,     0,     0,    74,
       0,     0,    76,     0,     0,     0,     0,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,     0,    64,   117,   346,     0,     0,     0,
      70,   234,   235,   236,     0,    74,     0,     0,    76,     0,
       0,     0,     0,    79,     0,    80,    81,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   679,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   502,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   524,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   563,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   593,   237,   775,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   644,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   716,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   776,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   260,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   308,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   310,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   356,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     367,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   446,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   482,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   490,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   508,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   614,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   725,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   846,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   234,   235,   236,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     863,   237,   546,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,   566,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,   118,    22,    23,     2,     2,    26,    26,   473,   430,
     301,   233,   259,   339,   518,   483,   277,   798,   279,     8,
      31,     2,   298,    26,     8,    26,   208,    29,    61,   450,
       8,   452,    61,     8,     8,    26,     8,     8,     8,    31,
      60,    26,    62,     8,     8,     8,     8,   623,   165,    31,
     626,     8,     8,    73,   276,    78,   278,    61,     8,    73,
     112,    61,    61,    77,    74,   287,   288,    90,   128,    78,
       0,    59,    60,    22,    23,   297,   136,     8,   300,   301,
      31,    90,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   146,   104,   128,   130,    78,   129,
     128,   133,   378,    22,    23,   133,   136,    26,   684,    78,
      90,   149,   126,   115,   128,   619,   146,   693,   128,   139,
     149,    90,   136,   152,   104,   906,   146,   112,    59,    60,
     153,     8,   152,    61,   133,   146,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   152,   152,
     151,    73,   152,   152,   146,    77,   176,    64,    65,   607,
      61,   150,   182,   628,   146,    81,    61,   151,   188,   189,
     190,   747,   498,   151,   152,   160,   151,   151,   198,   151,
     151,   151,    59,    60,   153,   150,   150,   150,   150,   209,
     210,   303,   173,   150,   150,   146,    88,   309,    74,   667,
     150,    88,    81,    95,   126,   133,   128,    99,    95,    63,
     714,   103,    99,    88,   136,   217,   103,   128,   639,   150,
      95,   149,   133,   499,   152,   303,   517,   146,   150,   130,
     651,   309,   680,   146,   682,   130,    88,    31,   128,   259,
     259,   154,   233,    95,   149,   136,   136,    99,   233,    88,
     826,   136,   128,   149,   146,   516,    95,   176,   149,   146,
      99,   128,   152,   182,    72,   285,   542,   543,   259,   188,
     189,   146,   136,   150,   259,   295,   552,   553,    72,   198,
     556,    88,   149,   303,   149,   276,   149,   278,    95,   309,
     209,   276,    99,   278,   146,   517,   287,   288,   128,   560,
     547,   136,   287,   288,   880,   881,   297,   146,   128,   300,
     301,   146,   297,   133,   890,   300,   301,   152,   126,   154,
     128,   151,   152,    99,   600,   149,   180,   103,   136,   149,
      88,   907,   126,   128,   128,   911,    88,    95,   146,   146,
     259,    99,   136,    95,    63,   921,   154,   459,   460,   461,
     157,   103,   146,    72,   149,   357,   126,   618,   128,   146,
     154,   149,   653,   383,   476,   149,   136,   154,   128,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   459,   460,   146,   303,   646,   647,   128,   146,   149,
     309,   154,   133,   149,   146,    72,    72,   417,   476,    64,
      65,   583,   149,   200,   389,   149,   203,   126,   149,   128,
     430,   136,   594,   128,   526,    59,    60,   136,   133,   136,
      26,   275,   219,   149,   221,   222,   223,   146,   136,   146,
     450,   653,   452,   898,   149,   154,   152,   154,   146,   459,
     460,   461,   151,   152,   298,   465,   154,   123,   526,   126,
     126,   128,   128,   473,   136,   149,   476,   149,   136,   136,
     136,   152,   574,   136,   146,   485,   486,   579,   146,   146,
     146,   491,   154,   493,   494,   152,   154,   154,   154,   136,
      67,    68,    69,    70,    71,    72,   126,    31,   128,    61,
     510,    80,    81,   149,   514,   497,   136,   478,   417,   497,
     497,   579,   133,   685,   133,    61,   526,   151,   130,   490,
     112,   430,   128,    49,   128,   535,   497,    67,    68,    69,
      70,    71,    72,   133,   378,   112,   517,   547,   547,   133,
     155,   450,   517,   452,    45,    46,    47,     8,    49,   133,
     459,   460,   461,   655,   128,   657,    67,    68,    69,    70,
      71,    72,   664,   128,   574,   575,   547,   476,   149,   579,
     133,   130,   547,    13,    85,    13,   485,   486,   136,   751,
     590,   151,   491,   150,   493,   494,   150,   655,   760,   657,
     151,   151,   764,   136,   136,    72,   664,   149,   146,   156,
     149,   510,   704,   150,    13,   777,   147,   151,     8,    74,
     602,   150,   149,   623,   602,   602,   626,   526,   628,   629,
     151,   153,   632,    42,    43,    44,    45,    46,    47,   639,
      49,   602,    61,   144,   145,     8,   704,   136,   547,   811,
     136,   651,   153,   614,   816,   655,   149,   657,   820,   126,
      13,   128,   754,   107,   664,   499,   107,   759,   668,   136,
     155,   833,   149,   149,     8,   574,   150,   149,   149,   146,
     579,   149,   653,   665,   684,   155,   155,   154,   653,   150,
     672,   590,   149,   693,   128,   133,   754,    13,    13,   136,
     149,   759,   155,   865,   704,    79,   151,   136,   542,   543,
     130,   150,   117,   128,   150,   807,   878,   551,   552,   553,
       8,    61,   556,    67,    68,    69,    70,    71,    72,   150,
      61,   149,   829,   130,    96,     8,   103,   150,   155,    13,
     639,    85,   136,   151,    96,   151,   838,   747,   150,   807,
     151,   149,   651,   144,   754,   155,   655,   849,   657,   759,
     852,   743,   151,   146,   926,   664,   600,   728,   729,   668,
     932,   732,   152,    13,   150,   150,   155,   150,   150,   150,
     838,   150,   874,   153,   150,   150,   150,   155,     8,   150,
     882,   849,   152,   149,   852,   152,    13,   155,    96,   149,
     144,   145,   763,   152,   155,   704,   151,   807,   151,   153,
     151,   150,    13,   146,   146,   797,   874,    26,    66,   149,
     146,    13,   151,   805,   882,   150,   826,   151,   810,   136,
     152,   151,   814,   146,    13,    13,   136,   151,   838,   821,
     152,   146,   136,    13,   146,   151,    26,    13,   149,   849,
      79,    74,   852,    74,   153,   754,   151,   119,   151,   841,
     759,   133,   844,   149,     8,   847,   136,   150,   136,   136,
     146,   150,   152,   514,   874,   857,   901,   510,   591,   693,
     880,   881,   882,   668,   774,   846,   632,   729,   746,   890,
     890,   519,   327,    76,    22,    23,   638,   879,   898,   574,
     663,   182,   616,   885,   573,   493,   166,   907,   807,    22,
      23,   911,    -1,    26,   494,    -1,    -1,    -1,    -1,    -1,
      -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,   838,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   929,    -1,    -1,
     849,   933,    -1,   852,    -1,    -1,    -1,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   874,    -1,    24,    25,    -1,
      -1,    -1,    -1,   882,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,   146,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,   180,    -1,   182,    -1,    74,    -1,    -1,    -1,
     188,   189,    -1,   176,    -1,    -1,    -1,    -1,    -1,   182,
     198,    -1,    -1,    -1,   121,   188,   189,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    59,    60,    -1,   259,   275,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,   218,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   232,    49,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,    42,    43,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
     277,    61,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,   291,    -1,   293,    -1,    -1,    -1,
     378,   298,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,   122,    -1,   124,   125,   126,   127,   128,    -1,
      -1,    -1,   430,    -1,   417,   135,   136,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,   430,   365,    -1,
      -1,    -1,   450,    -1,   452,    -1,    -1,    -1,    -1,    -1,
      -1,   378,    -1,    -1,    -1,    -1,    -1,   450,    -1,   452,
      -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,   486,    -1,
      -1,    -1,    -1,   491,    -1,   493,   494,    -1,    -1,    -1,
      -1,   499,   485,   486,    -1,    -1,    -1,    -1,   491,    -1,
     493,   494,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   439,    -1,    -1,    -1,    -1,   510,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   542,   543,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   551,   552,   553,    -1,    -1,   556,    -1,
      -1,    -1,    -1,    -1,   547,    -1,   483,   484,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   499,    -1,   501,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   590,    -1,    -1,    -1,    -1,    -1,    -1,   516,
      -1,    -1,   600,    -1,    -1,    -1,    -1,   590,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   542,   543,    -1,    -1,   546,
      -1,    -1,    -1,    -1,   551,   552,   553,    -1,    -1,   556,
      -1,   639,    -1,   560,   561,    -1,    -1,    -1,    -1,   566,
      -1,    -1,    -1,   651,    -1,    -1,   639,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,   651,   586,
     668,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   599,   600,    -1,   668,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,   618,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,   646,
     647,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
     667,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      11,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
     737,    -1,    12,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    42,    43,   771,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,    86,    87,   815,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    -1,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    25,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,
     149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,   149,    -1,   151,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,   136,
     137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,    -1,   149,    -1,   151,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,   150,
      -1,    26,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,     3,     4,     5,     6,     7,
     135,   136,   137,    -1,    12,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,     3,     4,     5,     6,     7,   135,   136,   137,
      -1,    12,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,     3,
       4,     5,     6,     7,   135,   136,   137,    -1,    12,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,     3,     4,     5,     6,
       7,   135,   136,   137,    -1,    12,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,     3,     4,     5,     6,     7,   135,   136,
     137,    -1,    12,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
       3,     4,     5,     6,     7,   135,   136,   137,    -1,    12,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,   136,
     137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,
     141,     9,    10,    11,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   155,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   153,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   151,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   151,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    70,    71,    72,
      73,    76,    81,    82,    85,    86,    87,    89,    91,    92,
      93,    97,    98,   106,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   118,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   146,   147,   149,   151,   152,   154,
     156,   157,   161,   162,   168,   171,   172,   182,   183,   185,
     188,   193,   196,   257,   258,   259,   262,   266,   275,   278,
     282,   283,   285,   286,   293,   294,   295,   296,   297,   298,
     299,   300,   305,   313,   315,    72,   126,   136,   259,   282,
     282,   149,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,    72,   126,   128,
     161,   266,   285,   286,   295,   285,    31,   282,   308,   309,
     282,   126,   128,   161,   266,   268,   269,   295,   298,   299,
     305,    81,    81,   146,   223,   259,   149,   151,   282,   136,
     151,   282,   149,   174,   250,   282,   149,   149,   272,   149,
     149,   146,   154,   221,   222,   136,   149,   149,   149,   149,
     128,   152,   161,   161,   151,   258,   282,   286,    88,    95,
      99,   103,   146,   310,   311,    26,   149,   282,   152,   149,
     128,   161,   165,   167,   149,   257,   282,   169,   152,    99,
     273,   310,    99,   310,   128,   149,     8,   151,   136,   136,
      31,   184,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     151,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   133,    61,   130,    61,
     152,   154,   299,   184,   282,   128,   161,   133,   133,   284,
     286,    96,   155,     8,   280,   128,   161,   133,   149,   274,
     133,   130,   299,    13,     8,   151,   184,   308,   151,    13,
     151,   136,   207,   171,     8,   151,   286,   150,   282,   251,
     252,   282,   258,   286,   152,   283,   286,     8,   151,   151,
     150,   282,   286,   314,   123,   286,   306,   307,   161,   164,
     151,   152,   149,   151,   151,   286,   137,   282,   103,   311,
      61,   130,    99,   103,   311,   282,   151,   169,   180,   181,
     286,   161,    74,   151,   166,   173,   150,   150,   115,   153,
     170,   171,   182,   183,   282,   156,   157,   136,   263,   136,
     189,   191,   136,   149,   282,   301,   136,   293,   299,   305,
     282,   282,   282,    26,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   268,    31,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
      31,   219,   220,   258,   286,   136,   293,   301,   136,   152,
     293,   302,   303,   304,   301,   282,   150,   161,   136,   136,
      31,   282,    31,   282,   161,   293,   219,   293,   302,    42,
      43,    61,    73,    82,   126,   128,   135,   161,   266,   275,
     276,   277,   146,   149,   150,   276,    13,     8,   150,   147,
     282,   150,   150,   151,     8,    74,    74,   282,   222,   151,
     150,     8,   150,   149,     8,   150,   149,   160,   163,   265,
     153,    61,   153,   129,   136,   146,   312,   136,   150,   153,
       8,   150,    74,   136,     8,   282,    61,   130,   253,   254,
     255,   256,   289,   149,   153,   219,    13,   107,   194,   107,
     197,   186,    73,    77,   126,   128,   161,   216,   217,   218,
     267,   155,   149,   149,   299,   282,    26,    63,   286,   284,
     150,     8,   149,   149,   155,   282,   149,   290,   291,   292,
      61,   152,   155,   153,   284,   284,    96,   150,   270,   276,
     276,   276,   279,   281,   149,   128,   161,    99,   133,    13,
     216,   276,   136,    26,   171,   206,   149,   251,   282,   286,
      31,   203,   286,   153,    26,   171,   286,   306,   307,    13,
     264,   153,   160,   219,   282,   155,    26,   152,   208,    79,
     181,   151,   136,   167,   150,   301,   302,   289,    61,   253,
     150,   150,   276,   195,   117,   199,   198,   192,   149,   128,
     161,   150,     8,    31,   146,   219,   219,   282,   268,    31,
     258,   286,   219,   219,   153,   219,    61,    61,   287,   301,
     282,    31,   282,   130,   271,    96,   155,     8,   280,   279,
     161,   136,   276,   150,    13,   169,   282,   151,    96,   202,
     286,   202,   169,   212,   150,   282,   219,   153,   150,   155,
     151,   209,   151,   209,   149,    26,   171,   211,   155,   292,
     301,   151,   267,   200,   190,   201,   267,   152,   216,   161,
     144,   260,   218,   146,    13,   150,   150,   274,   284,   150,
     150,   150,   301,   301,   288,   155,   153,   284,   302,   276,
     276,   150,   260,   276,   100,   150,   251,   203,   150,   150,
     213,    64,    65,   214,   150,   153,   209,    78,    90,   104,
     209,   153,   267,   169,   155,   201,   152,     8,   224,   150,
     149,   152,    31,   146,    13,   276,   155,   155,   289,    96,
     152,   151,   151,   150,    26,   171,   205,   205,    64,    65,
     215,   149,   171,   104,   282,    26,   151,   210,   151,   153,
     146,   105,   224,   267,    67,    68,    69,    70,    71,    72,
      85,   144,   145,   153,   225,   228,   244,   245,   246,   247,
     249,   187,    31,   146,   261,   169,   146,    13,   276,   276,
     169,    26,   171,   204,   169,   149,    26,    66,   282,   151,
     210,   169,   150,   151,   153,   136,   229,   146,   248,   259,
     247,     8,   151,   152,   146,     8,   150,   153,    13,   276,
     153,   169,   102,   282,   169,   151,   150,   169,   175,    13,
     230,   267,    13,     8,   151,   184,   136,   169,    31,   146,
     276,   101,   151,   150,   171,   152,   276,     8,   151,   152,
     232,   276,   146,   136,    13,   153,   146,   151,    26,   169,
     231,   233,    13,   226,   276,   169,   153,   267,   136,   234,
     235,   236,   237,   239,   240,   241,   267,   276,   149,    79,
     176,   177,   178,   153,   236,   151,    74,   119,   151,   133,
     216,   149,   178,   242,   247,   238,   267,   136,   150,   267,
     136,     8,   227,   146,   267,   151,   152,   243,   150,   169,
     179,   153,   152,   169,   153
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
      yyerror (analyzer, observers, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, analyzer, observers)
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
		  Type, Value, analyzer, observers); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ObserverQuadClass& observers;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
  YYUSE (observers);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ObserverQuadClass& observers;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ObserverQuadClass& observers;
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
		       		       , analyzer, observers);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, analyzer, observers); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ObserverQuadClass& observers;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);
  YYUSE (observers);

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
int yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





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
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ObserverQuadClass& observers;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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

    { observers.QualifiedNameGrabNameAndComment((yyvsp[(1) - (1)])); ;}
    break;

  case 6:

    { observers.QualifiedNameAddName((yyvsp[(3) - (3)])); ;}
    break;

  case 7:

    { observers.ClearExpressions(); ;}
    break;

  case 11:

    { observers.NamespaceSetCurrent(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); ;}
    break;

  case 12:

    { observers.NamespaceSetCurrent(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); ;}
    break;

  case 14:

    { observers.NamespaceSetToGlobal(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); ;}
    break;

  case 18:

    { observers.QualifiedNameClear(); ;}
    break;

  case 19:

    { observers.QualifiedNameClear(); ;}
    break;

  case 20:

    { observers.QualifiedNameClear(); ;}
    break;

  case 21:

    { observers.NamespaceUse(); ;}
    break;

  case 22:

    { observers.NamespaceUseAlias((yyvsp[(3) - (3)])); ;}
    break;

  case 23:

    { observers.NamespaceUseAbsolute(); ;}
    break;

  case 24:

    { observers.NamespaceUseAbsoluteAlias((yyvsp[(3) - (4)])); ;}
    break;

  case 29:

    { observers.ClearExpressions(); ;}
    break;

  case 38:

    {;}
    break;

  case 40:

    {;}
    break;

  case 61:

    { observers.ExceptionCatchFound((yyvsp[(8) - (9)])); ;}
    break;

  case 69:

    { observers.ExceptionCatchFound((yyvsp[(4) - (5)])); ;}
    break;

  case 76:

    { (yyval).Token = 0; ;}
    break;

  case 77:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 78:

    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 79:

    { observers.FunctionFound(analyzer.GetLineNumber()); ;}
    break;

  case 80:

    { observers.FunctionEnd((yyvsp[(11) - (11)])); ;}
    break;

  case 81:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 82:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 83:

    { observers.ClassEnd(analyzer.GetLineNumber()); ;}
    break;

  case 84:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 85:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 86:

    { observers.ClassEnd(analyzer.GetLineNumber()); ;}
    break;

  case 87:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, false); ;}
    break;

  case 88:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false, false); ;}
    break;

  case 89:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, true); ;}
    break;

  case 90:

    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false, false); ;}
    break;

  case 92:

    { observers.QualifiedNameClear(); ;}
    break;

  case 93:

    { observers.ClassSetExtends(); ;}
    break;

  case 94:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true, false); ;}
    break;

  case 96:

    { observers.QualifiedNameClear(); ;}
    break;

  case 99:

    { observers.QualifiedNameClear(); ;}
    break;

  case 101:

    { observers.ClassAddToImplements(); ;}
    break;

  case 102:

    { observers.ClassAddToImplements(); ;}
    break;

  case 105:

    { observers.ForeachVariableFound(); ;}
    break;

  case 106:

    { observers.ForeachVariableFound(); ;}
    break;

  case 136:

    { observers.ParametersListSetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 137:

    { observers.ParametersListSetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 138:

    { observers.ParametersListSetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 139:

    { observers.ParametersListSetName((yyvsp[(2) - (4)]), false); ;}
    break;

  case 140:

    { observers.ParametersListSetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 141:

    { observers.ParametersListSetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 142:

    { observers.ParametersListSetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 143:

    { observers.ParametersListSetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 144:

    { observers.ParametersListCreate(); ;}
    break;

  case 145:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 146:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 147:

    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 150:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 151:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 152:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 153:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 154:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 155:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 158:

    { observers.GlobalVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 161:

    { observers.StaticVariableFound((yyvsp[(3) - (3)])); ;}
    break;

  case 162:

    { observers.StaticVariableFound((yyvsp[(3) - (5)])); ;}
    break;

  case 163:

    { observers.StaticVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 164:

    { observers.StaticVariableFound((yyvsp[(1) - (3)])); ;}
    break;

  case 167:

    { observers.ClassMemberClear(); ;}
    break;

  case 168:

    { observers.ClassMemberClear(); ;}
    break;

  case 170:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 171:

    { observers.ClassMemberFound(false, analyzer.GetLineNumber()); ;}
    break;

  case 172:

    { observers.ClassMemberClear(); ;}
    break;

  case 173:

    { observers.QualifiedNameClear(); ;}
    break;

  case 175:

    { observers.TraitUseFound(); ;}
    break;

  case 176:

    { observers.QualifiedNameClear(); ;}
    break;

  case 177:

    { observers.TraitUseFound(); ;}
    break;

  case 179:

    { observers.QualifiedNameClear(); ;}
    break;

  case 183:

    { observers.TraitClearAdaptation(); observers.QualifiedNameClear(); ;}
    break;

  case 184:

    { observers.TraitClearAdaptation(); observers.QualifiedNameClear(); ;}
    break;

  case 187:

    { observers.TraitPrecedenceFound(); ;}
    break;

  case 190:

    { observers.TraitAliasMethod((yyvsp[(1) - (1)])); ;}
    break;

  case 192:

    { observers.TraitAliasMethodFromQualifiedName((yyvsp[(3) - (3)])); ;}
    break;

  case 193:

    { observers.TraitAliasFound(&(yyvsp[(4) - (4)])); ;}
    break;

  case 194:

    { observers.TraitAliasFound(NULL); ;}
    break;

  case 197:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 198:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 200:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 205:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 206:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 207:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 208:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 209:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 210:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 211:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 212:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 213:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 214:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 215:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 216:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 232:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 234:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 235:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 236:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 237:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 238:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 239:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 240:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 241:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 242:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 243:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 244:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 247:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 248:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 249:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 250:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 251:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 252:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 253:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 254:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 255:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 256:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 257:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 258:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 259:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 260:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 261:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 262:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 263:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 264:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 265:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 266:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 267:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 268:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 269:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 270:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 271:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 272:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 273:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 274:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 275:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 276:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 277:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 278:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 279:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 280:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 281:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 282:

    { /* no need to push here as this is recursive */ ;}
    break;

  case 285:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 286:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 287:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 288:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 289:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 290:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 291:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 292:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 293:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 298:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 299:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (3)])); ;}
    break;

  case 300:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 302:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 303:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (10)])); ;}
    break;

  case 311:

    { observers.FunctionCallStart(); ;}
    break;

  case 312:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 313:

    { observers.FunctionCallStart(); ;}
    break;

  case 314:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 315:

    { observers.QualifiedNameMakeAbsolute(); observers.FunctionCallStart(); ;}
    break;

  case 316:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 325:

    { observers.QualifiedNameMakeAbsolute(); ;}
    break;

  case 328:

    { observers.QualifiedNameMakeAbsolute(); ;}
    break;

  case 344:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 345:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 346:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 347:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 348:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 349:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 350:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 351:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 352:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 353:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 354:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 355:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 365:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 384:

    { observers.ExpressionFound(); ;}
    break;

  case 385:

    { observers.ExpressionFound(); ;}
    break;

  case 389:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 394:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 395:

    { observers.ExpressionPop(); ;}
    break;

  case 396:

    { observers.ExpressionPop(); ;}
    break;

  case 397:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 399:

    { (yyval).Token = 0; ;}
    break;

  case 400:

    { (yyval).Token = 0; ;}
    break;

  case 403:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 406:

    { observers.ExpressionPop(); ;}
    break;

  case 407:

    { observers.ExpressionPop(); ;}
    break;

  case 409:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 410:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 417:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 432:

    { observers.ForeachVariableFound(); ;}
    break;

  case 460:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 461:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 463:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 464:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 467:

    { observers.CurrentExpressionPushAsClassConstant((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;



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
      yyerror (analyzer, observers, YY_("syntax error"));
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
	    yyerror (analyzer, observers, yymsg);
	  }
	else
	  {
	    yyerror (analyzer, observers, YY_("syntax error"));
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
		      yytoken, &yylval, analyzer, observers);
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
		  yystos[yystate], yyvsp, analyzer, observers);
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
  yyerror (analyzer, observers, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, analyzer, observers);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, analyzer, observers);
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




