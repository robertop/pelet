
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
#define YYLAST   7852

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  469
/* YYNRULES -- Number of states.  */
#define YYNSTATES  936

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
     628,   633,   634,   636,   638,   641,   644,   647,   648,   653,
     655,   659,   661,   663,   667,   672,   676,   677,   679,   681,
     685,   687,   689,   690,   692,   694,   697,   699,   701,   703,
     705,   707,   709,   713,   719,   721,   725,   731,   736,   740,
     742,   743,   745,   749,   751,   754,   756,   761,   765,   768,
     770,   772,   773,   775,   779,   786,   790,   795,   802,   805,
     809,   813,   817,   821,   825,   829,   833,   837,   841,   845,
     849,   852,   855,   858,   861,   865,   869,   873,   877,   881,
     885,   889,   893,   897,   901,   905,   909,   913,   917,   921,
     925,   928,   931,   934,   937,   941,   945,   949,   953,   957,
     961,   965,   969,   973,   977,   979,   984,   990,   995,   997,
    1000,  1003,  1006,  1009,  1012,  1015,  1018,  1021,  1024,  1026,
    1031,  1035,  1039,  1042,  1052,  1063,  1065,  1066,  1071,  1075,
    1080,  1082,  1085,  1086,  1092,  1093,  1101,  1102,  1109,  1116,
    1123,  1130,  1137,  1142,  1144,  1146,  1150,  1153,  1155,  1159,
    1162,  1164,  1166,  1171,  1173,  1176,  1177,  1180,  1181,  1184,
    1188,  1189,  1191,  1193,  1194,  1198,  1200,  1202,  1204,  1206,
    1208,  1210,  1212,  1214,  1216,  1218,  1222,  1225,  1227,  1229,
    1233,  1236,  1239,  1242,  1247,  1251,  1253,  1255,  1259,  1261,
    1263,  1265,  1269,  1272,  1274,  1278,  1282,  1284,  1285,  1288,
    1289,  1291,  1297,  1301,  1305,  1307,  1309,  1311,  1313,  1315,
    1317,  1318,  1325,  1327,  1330,  1331,  1335,  1340,  1345,  1349,
    1351,  1353,  1354,  1356,  1359,  1363,  1367,  1369,  1374,  1379,
    1381,  1383,  1385,  1387,  1390,  1392,  1397,  1402,  1404,  1406,
    1411,  1412,  1414,  1416,  1418,  1423,  1428,  1430,  1432,  1436,
    1438,  1441,  1445,  1447,  1449,  1454,  1455,  1456,  1459,  1465,
    1469,  1473,  1475,  1482,  1487,  1492,  1495,  1498,  1501,  1503,
    1506,  1508,  1513,  1517,  1521,  1528,  1532,  1534,  1536,  1538,
    1543,  1548,  1551,  1554,  1559,  1562,  1565,  1567,  1571,  1575
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
     161,    74,   136,    -1,   168,     8,   136,    13,   277,    -1,
      85,   136,    13,   277,    -1,   169,   170,    -1,    -1,   171,
      -1,   182,    -1,   183,    -1,   115,   149,   150,   151,    -1,
     172,    -1,   136,    26,    -1,   152,   169,   153,    -1,   116,
     149,   283,   150,   171,   212,   214,    -1,   116,   149,   283,
     150,    26,   169,   213,   215,    66,   151,    -1,    -1,   147,
     149,   173,   283,   150,   211,    -1,    -1,    93,   174,   171,
     147,   149,   283,   150,   151,    -1,   109,   149,   252,   151,
     252,   151,   252,   150,   204,    -1,   138,   149,   283,   150,
     208,    -1,    76,   151,    -1,    76,   283,   151,    -1,    87,
     151,    -1,    87,   283,   151,    -1,   134,   151,    -1,   134,
     259,   151,    -1,   134,   287,   151,    -1,   113,   221,   151,
      -1,    72,   223,   151,    -1,    97,   251,   151,    -1,   118,
      -1,   283,   151,    -1,   143,   149,   180,   150,   151,    -1,
     110,   149,   287,    74,   203,   202,   150,   205,    -1,   110,
     149,   259,    74,   287,   202,   150,   205,    -1,    89,   149,
     207,   150,   206,    -1,   151,    -1,    -1,   142,   152,   169,
     153,    79,   149,   268,   146,   150,   175,   152,   169,   153,
     176,    -1,   139,   283,   151,    -1,   114,   136,   151,    -1,
     177,    -1,    -1,   178,    -1,   177,   178,    -1,    -1,    79,
     149,   268,   146,   150,   179,   152,   169,   153,    -1,   181,
      -1,   180,     8,   181,    -1,   287,    -1,   185,    -1,   188,
      -1,    -1,    31,    -1,    -1,    -1,   260,   184,   136,   186,
     149,   216,   150,   187,   152,   169,   153,    -1,    -1,    -1,
     193,   136,   189,   194,   199,   190,   152,   224,   153,    -1,
      -1,    -1,   196,   136,   191,   197,   192,   152,   224,   153,
      -1,    81,    -1,    71,    81,    -1,   140,    -1,    70,    81,
      -1,    -1,    -1,   107,   195,   268,    -1,   120,    -1,    -1,
      -1,   107,   198,   201,    -1,    -1,    -1,   117,   200,   201,
      -1,   268,    -1,   201,     8,   268,    -1,    -1,    96,   203,
      -1,   287,    -1,    31,   287,    -1,   171,    -1,    26,   169,
     101,   151,    -1,   171,    -1,    26,   169,   102,   151,    -1,
     171,    -1,    26,   169,   100,   151,    -1,   136,    13,   277,
      -1,   207,     8,   136,    13,   277,    -1,   152,   209,   153,
      -1,   152,   151,   209,   153,    -1,    26,   209,   104,   151,
      -1,    26,   151,   209,   104,   151,    -1,    -1,   209,    78,
     283,   210,   169,    -1,   209,    90,   210,   169,    -1,    26,
      -1,   151,    -1,   171,    -1,    26,   169,   105,   151,    -1,
      -1,   212,    64,   149,   283,   150,   171,    -1,    -1,   213,
      64,   149,   283,   150,    26,   169,    -1,    -1,    65,   171,
      -1,    -1,    65,    26,   169,    -1,   217,    -1,    -1,   218,
     146,    -1,   218,    31,   146,    -1,   218,    31,   146,    13,
     277,    -1,   218,   146,    13,   277,    -1,   217,     8,   218,
     146,    -1,   217,     8,   218,    31,   146,    -1,   217,     8,
     218,    31,   146,    13,   277,    -1,   217,     8,   218,   146,
      13,   277,    -1,    -1,    73,    -1,    77,    -1,   268,    -1,
     220,    -1,    -1,   259,    -1,   287,    -1,    31,   285,    -1,
     220,     8,   259,    -1,   220,     8,   287,    -1,   220,     8,
      31,   285,    -1,   221,     8,   222,    -1,   222,    -1,   146,
      -1,   154,   284,    -1,   154,   152,   283,   153,    -1,   223,
       8,   146,    -1,   223,     8,   146,    13,   277,    -1,   146,
      -1,   146,    13,   277,    -1,   224,   225,    -1,    -1,   245,
     249,   151,    -1,   250,   151,    -1,   228,    -1,    -1,    -1,
     246,   260,   184,   136,   226,   149,   216,   150,   227,   244,
      -1,    -1,   144,   229,   230,   232,    -1,   268,    -1,    -1,
     230,     8,   231,   268,    -1,   151,    -1,    -1,   152,   233,
     234,   153,    -1,    -1,   235,    -1,   236,    -1,   235,   236,
      -1,   237,   151,    -1,   242,   151,    -1,    -1,   241,   119,
     238,   239,    -1,   268,    -1,   239,     8,   268,    -1,   136,
      -1,   241,    -1,   268,   133,   136,    -1,   240,    74,   243,
     136,    -1,   240,    74,   248,    -1,    -1,   248,    -1,   151,
      -1,   152,   169,   153,    -1,   247,    -1,   145,    -1,    -1,
     247,    -1,   248,    -1,   247,   248,    -1,    67,    -1,    68,
      -1,    69,    -1,    72,    -1,    71,    -1,    70,    -1,   249,
       8,   146,    -1,   249,     8,   146,    13,   277,    -1,   146,
      -1,   146,    13,   277,    -1,   250,     8,   136,    13,   277,
      -1,    85,   136,    13,   277,    -1,   251,     8,   283,    -1,
     283,    -1,    -1,   253,    -1,   253,     8,   283,    -1,   283,
      -1,   254,   290,    -1,   290,    -1,   255,    61,   302,   155,
      -1,    61,   302,   155,    -1,   255,   254,    -1,   255,    -1,
     254,    -1,    -1,   256,    -1,    63,   269,   275,    -1,   123,
     149,   307,   150,    13,   283,    -1,   287,    13,   283,    -1,
     287,    13,    31,   287,    -1,   287,    13,    31,    63,   269,
     275,    -1,    62,   283,    -1,   287,    24,   283,    -1,   287,
      23,   283,    -1,   287,    22,   283,    -1,   287,    21,   283,
      -1,   287,    20,   283,    -1,   287,    19,   283,    -1,   287,
      18,   283,    -1,   287,    17,   283,    -1,   287,    16,   283,
      -1,   287,    15,   283,    -1,   287,    14,   283,    -1,   286,
      60,    -1,    60,   286,    -1,   286,    59,    -1,    59,   286,
      -1,   283,    27,   283,    -1,   283,    28,   283,    -1,   283,
       9,   283,    -1,   283,    11,   283,    -1,   283,    10,   283,
      -1,   283,    29,   283,    -1,   283,    31,   283,    -1,   283,
      30,   283,    -1,   283,    44,   283,    -1,   283,    42,   283,
      -1,   283,    43,   283,    -1,   283,    45,   283,    -1,   283,
      46,   283,    -1,   283,    47,   283,    -1,   283,    41,   283,
      -1,   283,    40,   283,    -1,    42,   283,    -1,    43,   283,
      -1,    48,   283,    -1,    50,   283,    -1,   283,    33,   283,
      -1,   283,    32,   283,    -1,   283,    35,   283,    -1,   283,
      34,   283,    -1,   283,    36,   283,    -1,   283,    39,   283,
      -1,   283,    37,   283,    -1,   283,    38,   283,    -1,   283,
      49,   269,    -1,   149,   283,   150,    -1,   258,    -1,   149,
     258,   150,   257,    -1,   283,    25,   283,    26,   283,    -1,
     283,    25,    26,   283,    -1,   314,    -1,    58,   283,    -1,
      57,   283,    -1,    56,   283,    -1,    55,   283,    -1,    54,
     283,    -1,    53,   283,    -1,    52,   283,    -1,   106,   273,
      -1,    51,   283,    -1,   279,    -1,    73,   149,   309,   150,
      -1,    61,   309,   155,    -1,   156,   274,   156,    -1,    12,
     283,    -1,   260,   184,   149,   216,   150,   261,   152,   169,
     153,    -1,    72,   260,   184,   149,   216,   150,   261,   152,
     169,   153,    -1,   112,    -1,    -1,   144,   149,   262,   150,
      -1,   262,     8,   146,    -1,   262,     8,    31,   146,    -1,
     146,    -1,    31,   146,    -1,    -1,   161,   149,   264,   219,
     150,    -1,    -1,   126,   128,   161,   149,   265,   219,   150,
      -1,    -1,   128,   161,   149,   266,   219,   150,    -1,   267,
     133,   136,   149,   219,   150,    -1,   267,   133,   294,   149,
     219,   150,    -1,   296,   133,   136,   149,   219,   150,    -1,
     296,   133,   294,   149,   219,   150,    -1,   294,   149,   219,
     150,    -1,    72,    -1,   161,    -1,   126,   128,   161,    -1,
     128,   161,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   267,    -1,   270,    -1,   299,   130,   303,   271,
      -1,   299,    -1,   271,   272,    -1,    -1,   130,   303,    -1,
      -1,   149,   150,    -1,   149,   283,   150,    -1,    -1,    99,
      -1,   311,    -1,    -1,   149,   219,   150,    -1,   124,    -1,
      92,    -1,    86,    -1,   122,    -1,   108,    -1,    91,    -1,
     141,    -1,   125,    -1,   111,    -1,   127,    -1,   135,    99,
     103,    -1,   135,   103,    -1,   276,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,    42,   277,    -1,    43,
     277,    -1,    73,   149,   280,   150,    -1,    61,   280,   155,
      -1,   278,    -1,    82,    -1,   267,   133,   136,    -1,   137,
      -1,   316,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   276,    -1,   157,   311,   157,    -1,   135,   311,
     103,    -1,    82,    -1,    -1,   282,   281,    -1,    -1,     8,
      -1,   282,     8,   277,    96,   277,    -1,   282,     8,   277,
      -1,   277,    96,   277,    -1,   277,    -1,   284,    -1,   259,
      -1,   287,    -1,   287,    -1,   287,    -1,    -1,   298,   130,
     303,   293,   288,   289,    -1,   298,    -1,   289,   290,    -1,
      -1,   130,   303,   293,    -1,   291,    61,   302,   155,    -1,
     292,    61,   302,   155,    -1,   149,   219,   150,    -1,   292,
      -1,   291,    -1,    -1,   300,    -1,   306,   300,    -1,   267,
     133,   294,    -1,   296,   133,   294,    -1,   300,    -1,   297,
      61,   302,   155,    -1,   263,    61,   302,   155,    -1,   299,
      -1,   297,    -1,   263,    -1,   300,    -1,   306,   300,    -1,
     295,    -1,   300,    61,   302,   155,    -1,   300,   152,   283,
     153,    -1,   301,    -1,   146,    -1,   154,   152,   283,   153,
      -1,    -1,   283,    -1,   304,    -1,   294,    -1,   304,    61,
     302,   155,    -1,   304,   152,   283,   153,    -1,   305,    -1,
     136,    -1,   152,   283,   153,    -1,   154,    -1,   306,   154,
      -1,   307,     8,   308,    -1,   308,    -1,   287,    -1,   123,
     149,   307,   150,    -1,    -1,    -1,   310,   281,    -1,   310,
       8,   283,    96,   283,    -1,   310,     8,   283,    -1,   283,
      96,   283,    -1,   283,    -1,   310,     8,   283,    96,    31,
     285,    -1,   310,     8,    31,   285,    -1,   283,    96,    31,
     285,    -1,    31,   285,    -1,   311,   312,    -1,   311,    99,
      -1,   312,    -1,    99,   312,    -1,   146,    -1,   146,    61,
     313,   155,    -1,   146,   130,   136,    -1,    95,   283,   153,
      -1,    95,   137,    61,   283,   155,   153,    -1,    88,   287,
     153,    -1,   136,    -1,   129,    -1,   146,    -1,   121,   149,
     315,   150,    -1,    98,   149,   287,   150,    -1,     7,   283,
      -1,     6,   283,    -1,     5,   149,   283,   150,    -1,     4,
     283,    -1,     3,   283,    -1,   287,    -1,   315,     8,   287,
      -1,   267,   133,   136,    -1,   296,   133,   136,    -1
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
     561,   566,   568,   572,   573,   577,   578,   582,   582,   587,
     588,   592,   593,   597,   601,   602,   605,   607,   611,   612,
     616,   617,   620,   622,   626,   627,   631,   632,   633,   634,
     635,   636,   640,   641,   642,   643,   647,   649,   653,   654,
     658,   660,   664,   665,   669,   670,   674,   675,   679,   680,
     681,   684,   686,   690,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   749,   751,   752,
     753,   754,   755,   756,   757,   758,   759,   760,   761,   762,
     763,   764,   765,   766,   768,   773,   776,   778,   782,   783,
     784,   785,   789,   789,   792,   791,   794,   794,   796,   798,
     800,   802,   804,   809,   810,   811,   812,   816,   817,   818,
     822,   823,   827,   830,   834,   835,   839,   842,   844,   845,
     848,   850,   851,   854,   856,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   888,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   903,   905,   908,
     910,   914,   915,   916,   917,   921,   922,   927,   932,   936,
     942,   940,   944,   948,   949,   953,   958,   959,   963,   967,
     968,   969,   973,   974,   978,   979,   983,   987,   988,   992,
     993,   994,   998,   999,  1000,  1004,  1005,  1006,  1010,  1011,
    1014,  1016,  1020,  1021,  1025,  1026,  1027,  1031,  1032,  1036,
    1037,  1041,  1042,  1046,  1047,  1048,  1051,  1053,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1068,  1069,  1070,  1071,
    1075,  1076,  1077,  1078,  1079,  1080,  1084,  1085,  1086,  1090,
    1091,  1092,  1093,  1094,  1095,  1096,  1100,  1101,  1105,  1106
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
  "trait_adaptation_statement", "trait_precedence", "$@22",
  "trait_reference_list", "trait_method_reference",
  "trait_method_reference_fully_qualified", "trait_alias",
  "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@23", "$@24", "$@25", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@26",
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
     232,   234,   234,   235,   235,   236,   236,   238,   237,   239,
     239,   240,   240,   241,   242,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   254,   254,   255,   255,   256,   256,
     256,   257,   257,   258,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   260,   261,   261,   262,   262,
     262,   262,   264,   263,   265,   263,   266,   263,   263,   263,
     263,   263,   263,   267,   267,   267,   267,   268,   268,   268,
     269,   269,   270,   270,   271,   271,   272,   273,   273,   273,
     274,   274,   274,   275,   275,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   278,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   280,   280,   281,
     281,   282,   282,   282,   282,   283,   283,   284,   285,   286,
     288,   287,   287,   289,   289,   290,   291,   291,   292,   293,
     293,   293,   294,   294,   295,   295,   296,   297,   297,   298,
     298,   298,   299,   299,   299,   300,   300,   300,   301,   301,
     302,   302,   303,   303,   304,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   308,   309,   309,   310,   310,
     310,   310,   310,   310,   310,   310,   311,   311,   311,   311,
     312,   312,   312,   312,   312,   312,   313,   313,   313,   314,
     314,   314,   314,   314,   314,   314,   315,   315,   316,   316
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
       4,     0,     1,     1,     2,     2,     2,     0,     4,     1,
       3,     1,     1,     3,     4,     3,     0,     1,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     3,     1,     2,     1,     4,     3,     2,     1,
       1,     0,     1,     3,     6,     3,     4,     6,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     5,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       3,     3,     2,     9,    10,     1,     0,     4,     3,     4,
       1,     2,     0,     5,     0,     7,     0,     6,     6,     6,
       6,     6,     4,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     4,     1,     2,     0,     2,     0,     2,     3,
       0,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     3,
       2,     2,     2,     4,     3,     1,     1,     3,     1,     1,
       1,     3,     2,     1,     3,     3,     1,     0,     2,     0,
       1,     5,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     6,     1,     2,     0,     3,     4,     4,     3,     1,
       1,     0,     1,     2,     3,     3,     1,     4,     4,     1,
       1,     1,     1,     2,     1,     4,     4,     1,     1,     4,
       0,     1,     1,     1,     4,     4,     1,     1,     3,     1,
       2,     3,     1,     1,     4,     0,     0,     2,     5,     3,
       3,     1,     6,     4,     4,     2,     2,     2,     1,     2,
       1,     4,     3,     3,     6,     3,     1,     1,     1,     4,
       4,     2,     2,     4,     2,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   436,     0,     0,     0,     0,   323,
       0,     0,    87,   376,     0,   347,     0,     0,   350,   346,
      40,     0,     0,   337,   349,     0,     0,   353,   305,     0,
       0,     0,     0,    54,    94,     0,   348,     0,   345,   352,
       0,   354,     0,     0,     0,     5,   368,     0,     0,    89,
     351,     0,     0,     0,   418,     0,     0,    60,    28,   429,
     340,     0,   370,     3,     0,     7,    33,     8,     9,    74,
      75,     0,     0,   284,   386,    76,   411,     0,   373,   298,
       0,   385,     0,   387,     0,   414,     0,   410,   392,   409,
     412,   417,     0,   288,   369,   323,     0,     5,    76,   465,
     464,     0,   462,   461,   302,   270,   271,   272,   273,   297,
     295,   294,   293,   292,   291,   290,   289,   323,     0,     0,
     324,     0,   253,   389,     0,   251,     0,   441,     0,   379,
     238,     0,     0,   324,   330,   343,   331,     0,   333,   412,
       0,    90,    88,   163,     0,    76,   436,    44,     0,     0,
      46,     0,     0,     0,     0,   219,     0,     0,   296,   220,
       0,   158,     0,     0,   157,     0,     0,     0,     0,   435,
       0,    14,     0,   372,    48,   386,     0,   387,     0,     0,
       0,   356,   450,     0,   448,    34,     0,     0,    28,     0,
       0,    21,    18,    20,    38,   284,     0,     0,     0,   341,
       0,   342,     0,     0,     0,   312,     0,    17,    81,    84,
      77,     0,   420,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   252,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,   420,     0,   420,
       0,   430,   413,     0,     0,     0,   326,     0,     0,   445,
     388,     0,   300,   380,   437,     0,   326,     0,   149,   233,
       0,     0,   413,     0,     0,    52,     0,     0,    45,     0,
      47,     0,     0,     0,     0,    53,     0,   338,     0,     0,
     221,   223,   386,   387,     0,   159,   387,     0,    51,    64,
       0,     0,   466,     0,     0,   433,     0,   432,   371,     4,
      11,    12,   316,    49,    50,     0,   368,     0,   355,   449,
       0,     0,   447,   375,   446,     0,    63,     0,     0,    71,
      73,    23,     0,    16,     0,     0,   231,   283,     0,    35,
      27,    29,    30,    31,     0,   301,   374,     6,   149,     0,
      91,    95,    78,   144,   421,     0,   468,   404,   402,     0,
     256,   258,   257,     0,     0,   254,   255,   259,   261,   260,
     275,   274,   277,   276,   278,   280,   281,   279,   269,   268,
     263,   264,   262,   265,   266,   267,   282,     0,   235,   249,
     248,   247,   246,   245,   244,   243,   242,   241,   240,   239,
       0,     0,   148,   386,   387,   469,   405,     0,   427,     0,
     423,   401,   422,   426,     0,     0,   463,   325,     0,     0,
       0,   440,     0,   439,   325,   404,     0,   405,   335,     0,
       0,   377,     0,   366,     0,     0,     0,   358,     0,   357,
     164,   365,   161,   144,   299,    26,     0,     0,     0,     0,
     218,   460,   339,   220,     0,     0,     0,     0,   156,    10,
       0,     0,   459,   435,   435,     0,   314,     0,     4,   149,
     455,     0,   453,   457,   456,   458,     0,   452,     0,     0,
       0,     0,     0,    22,     0,     0,   420,     0,   230,   229,
     232,   285,   225,     0,   419,     0,     0,    92,    98,    96,
      85,     0,   145,   146,     0,     0,   327,     0,   134,     0,
     147,   408,   149,   149,   403,   287,     0,     0,   236,   152,
     322,     0,   149,   149,   407,     0,   149,   400,   399,   390,
     420,     0,   415,   416,   444,   443,     0,   344,   332,   361,
     362,   384,     0,   379,   377,     0,   360,     0,     0,     0,
       0,   113,     0,    28,   111,    59,     0,     0,   222,   103,
       0,   103,   105,   160,    28,   126,   467,     0,   431,     0,
     149,    15,     0,     0,     0,   451,   119,   119,    43,     0,
      72,    56,    24,    19,     0,     0,   401,   224,   420,   228,
       0,   313,    25,     0,    99,    82,     0,     0,   144,     0,
     329,   306,   144,     0,   136,     0,     0,   286,   343,     0,
     386,   387,     0,     0,   428,     0,   420,   420,   394,     0,
       0,     0,   438,     0,   334,     0,   364,   380,   378,     0,
     359,   367,   162,   306,     0,     0,     0,   220,     0,     0,
     106,     0,   128,   130,   434,   234,     0,    13,   317,     0,
     119,     0,   119,     0,     0,    28,   124,    39,   227,   395,
       0,    32,    93,     0,     0,    97,   101,   166,     0,   328,
       0,     0,     0,   137,     0,   318,   319,   237,   155,   320,
     321,   398,     0,     0,   391,   424,   425,   442,   336,   383,
     382,   363,     0,   114,     0,     0,     0,   104,     0,     0,
     132,     0,     0,    36,   315,   454,     0,     0,     0,     0,
       0,   115,     0,     0,   226,   100,   166,     0,   202,    79,
       0,    28,     0,   140,     0,   139,   396,   397,   393,     0,
      28,   112,    41,     0,    28,   109,    58,    57,     0,     0,
       0,     0,   131,     0,     0,   122,   123,    28,   117,   116,
       0,     0,   202,   102,   206,   207,   208,   211,   210,   209,
       0,   173,   201,    86,   165,   169,     0,     0,   200,   204,
       0,     0,     0,   310,     0,     0,   141,     0,   138,   381,
       0,    28,   107,    42,     0,     0,    28,     0,     0,   118,
      28,   121,    61,   125,    83,     0,     0,   214,     0,    76,
     205,     0,   168,    28,   311,     0,   307,   303,     0,   143,
     304,     0,     0,     0,   133,    37,     0,   120,     0,     0,
       0,   175,     0,     0,   167,     0,     0,     0,     0,   308,
     142,     0,   110,     0,   127,    28,   217,   176,   178,   179,
     174,   215,   212,   170,     0,    80,   309,   108,    28,     0,
       0,   181,     0,     0,   216,   129,    66,   177,     5,     0,
     182,   183,     0,     0,   192,     0,     0,   213,   144,     0,
      62,    65,    67,   180,   184,   185,   196,   187,   186,     0,
       0,     0,    68,     0,   195,     0,   193,   171,     0,   194,
     188,   189,     0,     0,     0,   198,    28,   172,    69,   190,
       0,     0,   199,    28,     0,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   498,   339,   212,   364,   213,
      84,   217,   370,   371,    86,   365,   173,   848,   900,   901,
     902,   931,   358,   359,   372,   373,   231,    89,   531,   801,
      90,   380,   694,   381,   627,    91,   528,   623,    92,   530,
     626,   625,   693,   695,   669,   591,   813,   766,   585,   312,
     608,   681,   777,   687,   673,   730,   733,   770,   537,   538,
     539,   431,   432,   183,   184,   164,   748,   794,   883,   922,
     795,   826,   850,   880,   870,   881,   889,   890,   891,   892,
     915,   920,   893,   894,   895,   913,   927,   796,   797,   798,
     799,   828,   800,   174,   319,   320,   518,   519,   520,   521,
      93,    94,   118,   701,   804,    96,   378,   600,   499,    97,
     540,   155,   156,   568,   654,   178,   220,   299,    98,   571,
     471,    99,   572,   294,   573,   100,   101,   289,   102,   103,
     648,   714,   522,   557,   558,   559,   104,   105,   106,   107,
     108,   109,   110,   111,   385,   441,   442,   443,   112,   336,
     337,   148,   149,   203,   204,   506,   113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -774
static const yytype_int16 yypact[] =
{
    -774,    70,  1881,  -774,  6499,  6499,   -53,  6499,  6499,  6499,
    6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,
    6499,  6499,   308,   308,  4981,  6499,   417,    17,    44,   -51,
      27,  5107,  -774,  -774,    85,  -774,  5233,    33,  -774,  -774,
    -774,  6499,    42,    57,  -774,    67,   107,  -774,  -774,   -52,
     130,   124,   149,  -774,  -774,   160,  -774,   197,  -774,  -774,
     -59,  -774,   220,  5359,   255,   121,  -774,   217,  6499,  -774,
    -774,     5,   230,    66,  -774,   232,  6499,  -774,  -774,    14,
     115,   265,   178,  -774,    16,  -774,  -774,  -774,  -774,  -774,
    -774,   251,   269,  -774,  -774,   360,   356,   290,  -774,  -774,
    7098,  -774,   263,  1064,   294,  -774,   318,   394,   330,  -774,
       1,  -774,    82,  -774,  -774,   352,   344,  -774,   360,  7763,
    7763,  6499,  7763,  7763,  2022,  -774,  -774,   426,  -774,  -774,
    -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,   368,   220,
     -29,   359,  -774,  -774,   374,  -774,   308,  7638,   345,   504,
    -774,   386,   220,   390,   387,   376,  -774,   396,   400,    -4,
      82,  -774,  -774,   531,    21,   360,  4981,  -774,  7141,   535,
    -774,  7182,   413,  4826,    23,  7763,   308,  5485,  -774,  6499,
    6499,  -774,   266,    24,  -774,   399,   401,  6499,   308,   126,
     220,  -774,   185,   260,  -774,   407,  7763,   464,   308,  6625,
     135,  -774,   -33,   364,  -774,  -774,  6499,  7223,  -774,   308,
     220,    77,   409,  -774,  -774,   402,  7266,  2036,  6499,   -36,
     405,   362,   -36,   125,   429,  -774,   432,  -774,  -774,  -774,
    -774,   -81,  6499,   205,  6499,  6499,  6499,  5611,  6499,  6499,
    6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,
    6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,  6499,   417,
    -774,  -774,  -774,  5738,  6499,  6499,  6499,  6499,  6499,  6499,
    6499,  6499,  6499,  6499,  6499,  5865,   292,  6499,   367,  6499,
    6499,    14,    48,   420,  7307,   220,   -27,   322,   410,  -774,
    -774,  5992,  -774,  6119,  -774,   220,   390,   131,  5865,  -774,
     131,   367,    12,  1337,   427,  -774,   428,   439,  -774,  1337,
    -774,   563,    11,   443,  6499,  -774,   449,  -774,  7348,   451,
     603,  7763,   540,   962,  6499,  -774,  -774,   -52,  -774,  -774,
     462,  7390,  -774,    30,   468,  -774,    31,  -774,   288,  -774,
    -774,  -774,  -774,  -774,  -774,   463,   559,  6799,  -774,  -774,
     122,   486,  -774,  -774,  -774,  7431,  -774,  2191,    35,  -774,
    -774,    80,   487,  -774,   616,  6499,    10,  -774,   476,  -774,
    -774,  -774,  -774,  -774,  6840,  -774,  -774,  -774,  5865,   613,
     522,   523,  -774,   272,  7763,   477,   485,   489,    12,    82,
    7803,  1870,  2022,  6499,  7722,  2331,  2485,  2639,  1718,  1552,
    2792,  2792,  2792,  2792,  1196,  1196,  1196,  1196,   539,   539,
     380,   380,   380,   426,   426,   426,  -774,    -5,  2022,  2022,
    2022,  2022,  2022,  2022,  2022,  2022,  2022,  2022,  2022,  2022,
     308,   490,   628,    36,    68,   492,   493,   484,  -774,  6499,
    -774,   496,    13,  -774,   491,  6887,  -774,    55,   485,   492,
     308,  7763,   308,  7679,   390,  -774,   497,  -774,  -774,  1337,
    1337,  1337,   500,  -774,   528,   220,   193,   -28,   517,  -774,
    -774,  -774,   638,   272,  -774,  -774,  1337,   518,  4051,   509,
    7763,  -774,  -774,  6499,  6499,   308,    83,  6928,  -774,  -774,
    4206,   308,  -774,   126,   126,   646,  -774,  1571,  -774,  5865,
    -774,  6499,  -774,  -774,  -774,  -774,   507,  -774,    -6,   586,
     308,   515,   542,  -774,    66,  7472,  6499,   367,   537,    54,
    -774,  -774,  -774,   525,  -774,   529,  1337,  -774,   564,  -774,
    -774,   527,  -774,  -774,   552,   220,   390,   533,   677,    -8,
    -774,  -774,  5865,  5865,    12,  2177,  6499,   417,  -774,  -774,
    -774,  6246,  5865,  5865,  -774,  6969,  5865,   632,   633,  -774,
    6499,  6499,  -774,  -774,  -774,  -774,  6373,  -774,   568,  -774,
    -774,   593,   544,   693,  1337,   220,   -17,   599,   567,  1337,
     554,  -774,   692,  -774,  -774,  -774,  6499,   556,  7763,   612,
     308,   612,  -774,  -774,  -774,  -774,  -774,    37,  -774,  6499,
    5865,  -774,  1726,   560,  6758,  -774,   558,   562,  -774,   565,
    -774,  -774,  -774,  -774,  4361,   561,   496,  -774,  6499,   537,
     566,  -774,  -774,   216,  -774,  -774,   216,   569,   272,   220,
     390,   571,   158,   572,   698,   573,   574,  2177,   376,   308,
      38,   354,   575,   576,  -774,   578,  6499,  6499,  -774,   580,
    7014,   308,  7763,   367,  -774,  1337,  -774,  1337,  -774,   579,
      84,  -774,  -774,   571,  1337,  2346,  7514,  6499,    83,   581,
    -774,   583,  3896,   261,  -774,  2022,   587,  -774,  -774,   589,
    -774,    40,  -774,   -18,   216,  -774,  -774,  -774,  -774,  -774,
     585,  -774,  -774,   216,   570,   735,  -774,  -774,   596,   390,
     601,   600,    -1,   740,  1337,  -774,  -774,  -774,  -774,  -774,
    -774,  -774,   602,   604,   537,  -774,  -774,  -774,  -774,  -774,
     658,  -774,   606,  -774,   605,   609,   614,  -774,  4516,  4516,
     331,   617,  4826,  -774,  -774,  -774,   163,  6499,    -9,   611,
      46,  -774,   619,  2501,  -774,   735,  -774,   216,   175,  -774,
       6,  -774,   622,   742,  1337,  -774,  -774,  -774,  -774,  1337,
    -774,  -774,  -774,  4671,  -774,  -774,  -774,  -774,   620,   737,
     704,  6499,  -774,   625,  7057,  -774,  -774,  -774,  -774,  -774,
     621,   626,   262,  -774,  -774,  -774,  -774,  -774,  -774,  -774,
     637,  -774,  -774,  -774,  -774,  -774,   634,   352,   467,  -774,
      26,   627,   635,  -774,    43,  2656,   765,  1337,  -774,  -774,
    2811,  -774,  -774,  -774,  2966,  6499,  -774,   639,  7555,  -774,
    -774,  3896,  -774,  -774,  -774,   770,   216,   771,    28,   360,
    -774,   650,  -774,  -774,  -774,    49,  -774,  -774,  1337,  -774,
    -774,  3121,   640,  7596,  3896,  -774,  4826,  3896,   636,  1337,
       7,  -774,  1337,   643,  -774,   656,   780,  3276,   648,  -774,
    -774,   645,  -774,   772,  -774,  -774,  -774,  -774,  -774,  -774,
    -774,  -774,   786,  -774,  1337,  -774,  -774,  -774,  -774,  3431,
     216,   365,  1337,   651,  -774,  3896,   722,  -774,   728,   654,
     365,  -774,   653,   736,   690,   660,   680,  -774,   272,   665,
    -774,   722,  -774,  -774,  -774,  -774,   526,  -774,  -774,   679,
     666,   216,  -774,   681,   684,   216,  -774,  -774,   675,  -774,
     814,  -774,   252,   673,   216,  -774,  -774,  -774,  -774,  -774,
    3586,   672,  -774,  -774,  3741,  -774
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -774,  -774,  -325,   -20,  -774,  -774,  -774,  -774,  -774,   311,
    -774,  -159,  -774,    19,  -774,  -774,  -774,  -774,  -774,  -774,
     -75,  -774,  -774,   317,     2,     8,  -117,  -774,  -774,  -774,
    -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,
    -774,  -774,  -774,   137,   237,   165,  -774,   102,  -774,  -774,
    -774,  -543,    60,  -774,  -774,  -774,  -774,  -774,  -465,  -774,
     204,  -235,  -774,  -774,   510,  -774,    92,  -774,  -774,  -774,
    -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,   -49,  -774,
    -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,  -774,
    -773,  -774,  -774,  -774,  -471,  -774,   324,  -774,  -774,  -774,
     768,   144,    -2,   183,  -774,  -774,  -774,  -774,  -774,    81,
    -576,  -237,  -774,  -774,  -774,  -774,  -774,   209,   685,   -77,
    -774,  -774,   274,   276,  -774,   933,   668,  -417,   425,   852,
    -774,  -774,  -513,  -774,  -774,   235,  -222,  -774,   867,  -774,
    -774,   -19,     0,  -774,  -261,  -292,  -774,  -774,    15,   363,
     358,   687,  -774,   389,   469,  -774,  -774,  -774,  -774
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -407
static const yytype_int16 yytable[] =
{
      95,   283,   140,   140,    87,   617,   153,   158,   580,   458,
      88,   387,   587,   549,   497,   867,   437,   775,   444,   477,
     606,    85,   416,   633,   226,   830,   159,   165,   350,   304,
     752,   314,   327,   564,   831,   565,   853,   802,   491,   494,
     192,   160,   193,   510,  -150,   494,  -153,   692,   306,   357,
     696,   835,   198,   211,   436,   382,   440,   279,   547,   199,
     737,    48,   279,   456,   683,   387,   436,   137,   383,   190,
       3,   516,   738,   279,   560,   455,  -151,   117,   457,   440,
     858,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   191,   181,   163,   121,   351,   161,   224,
     224,   224,   182,   141,   141,  -324,   617,   154,   742,   279,
     202,   224,   282,   165,   590,   618,  -326,   696,   737,   286,
     225,   138,   342,   139,   737,   162,   140,  -389,  -389,  -406,
     738,   117,   296,   914,  -406,   741,   738,   736,   634,   740,
     517,    74,   776,   525,   739,   753,   607,   205,   280,    79,
    -402,   362,   803,   280,   512,   137,   140,   208,   868,   869,
     302,   478,   140,   698,   280,   561,   218,   227,   140,   140,
     338,   783,   305,   602,   315,   328,   166,   832,   140,   854,
     492,   495,   172,   224,   517,   511,  -150,   674,  -153,   140,
     361,   176,   313,   836,   210,   859,   726,  -403,   137,   779,
     280,   758,   117,   198,   496,   224,   177,   195,   224,   138,
     199,   139,   224,   198,   219,    95,   179,  -325,  -151,   117,
     199,   169,   708,   198,   352,   616,   470,   141,    74,    74,
     199,   532,   475,   388,   717,   533,   281,    79,   348,   153,
     158,   737,   784,   785,   786,   787,   788,   789,   389,   334,
     851,   503,   138,   738,   139,   615,   180,   141,   504,   159,
     790,   202,   117,   141,   603,   447,   185,   773,   505,   141,
     141,   202,    74,   186,   160,   454,   388,    74,   388,   141,
      79,   202,   376,   467,   534,    79,   535,   388,   388,   467,
     141,   389,   577,   389,   117,   440,   201,   388,   187,   649,
     388,   388,   389,   389,   887,   896,   224,   635,   636,   188,
     638,  -324,   389,   224,   896,   389,   389,   642,   643,   791,
     792,   645,   261,   262,   322,   731,   732,   225,   793,   784,
     785,   786,   787,   788,   789,   918,   340,   341,   137,   921,
     154,   386,   534,   198,   535,   532,   189,   790,   929,   533,
     199,    74,   117,   198,   200,    95,   117,   690,   201,    79,
     199,   718,  -154,   536,   222,   676,   206,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   209,
     137,   214,   569,   570,   468,   712,   713,   228,   224,   544,
     468,   230,   138,  -326,   139,   768,   769,   140,   534,   581,
     535,   202,   117,   925,   926,   229,   791,   792,   117,   342,
     140,   202,    74,  -389,  -389,   824,   224,   232,   324,   433,
      79,  -325,  -135,   233,   665,   256,   257,   258,   435,   259,
     140,   440,   140,   910,   138,   672,   139,   496,    74,   467,
     467,   467,   433,   275,   117,   576,    79,   142,   145,   622,
     198,   276,   198,   536,    74,   277,   467,   199,   448,   199,
     278,   352,    79,   352,    48,   140,   140,   353,    74,   221,
     223,   140,   190,   140,   140,   259,    79,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   137,
     140,   534,   287,   535,   211,    95,   285,   584,   141,    87,
     292,   888,   662,   438,  -154,    88,   467,   288,   202,   595,
     202,   141,   293,    74,   295,   630,    85,   388,   224,   439,
     297,    79,   433,  -389,  -389,   298,   743,   153,   158,   300,
     301,   141,   389,   141,   784,   785,   786,   787,   788,   789,
     468,   468,   468,   151,   303,   152,   449,   159,   309,   311,
     329,   330,   366,   117,   467,   660,    74,   468,   343,   467,
     363,   375,   160,    74,    79,   377,   141,   141,   379,   383,
     140,    79,   141,   472,   141,   141,   476,   473,   719,  -203,
     720,   253,   254,   255,   256,   257,   258,   723,   259,   474,
     479,   141,   805,   784,   785,   786,   787,   788,   789,   481,
      95,   810,   483,   536,    87,   814,   536,   468,   536,   699,
      88,   484,   536,   489,   485,   344,   500,   493,   821,   140,
     501,    85,   507,   513,   514,   523,   526,   755,   154,   527,
     529,   140,   541,   686,   542,   467,   551,   467,   543,   554,
     550,   552,   553,   433,   467,   556,   562,   567,   140,   574,
     578,   579,   841,   388,   582,   468,   575,   844,   586,   599,
     468,   847,   605,    95,   536,   609,   611,   517,   389,   349,
      95,   141,   354,   536,   857,   620,   628,   808,   612,   621,
     629,   624,   809,   631,   467,   632,   433,   433,   349,   655,
     354,   349,   354,   646,   647,   640,   433,   433,   653,   656,
     433,   657,   348,   661,   663,   664,   879,   667,   668,   680,
     678,   704,   855,   682,   684,   700,   688,   691,   703,   885,
     141,   697,   746,   705,   706,   709,   710,   536,   711,   721,
     839,   728,   141,   729,   467,   715,   468,   734,   468,   467,
     744,    95,   735,   747,   433,   468,   749,   765,   765,   141,
     750,   772,   751,   754,   759,   807,   761,   756,   760,   757,
     762,   860,   778,   816,   763,   780,   771,   930,   806,   815,
     817,   822,   866,   825,   934,   871,   819,   823,   838,   833,
     827,   834,   812,   849,   852,   468,   856,   467,   865,   872,
     845,   862,   873,   874,   876,   829,   877,   884,   878,   882,
     898,   899,  -191,    95,   905,   897,   536,   903,    95,   907,
     906,   908,    95,   909,   911,   916,   917,   919,   467,    95,
    -197,   923,   924,   928,   933,   613,   912,   610,   671,   467,
     745,   767,   467,   727,   820,   468,   702,   488,   782,    95,
     468,   904,    95,   619,   215,    95,   722,   707,   659,   658,
     325,   689,   598,   307,   467,    95,   597,     0,     0,     0,
     536,   536,   467,     0,     0,   864,     0,     0,     0,     0,
     536,     0,     0,     0,   143,   143,     0,    95,   536,     0,
       0,     0,     0,    95,     0,     0,     0,     0,   468,   144,
     144,   536,     0,   157,     0,   536,     0,     0,     0,     0,
       0,     0,     0,     0,   536,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,   468,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
     468,     0,    95,   468,     0,     0,     0,   119,   120,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   468,     0,   147,   150,     0,
       0,     0,     0,   468,   168,     0,     0,     0,     0,   171,
       0,     0,     0,     0,   175,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,   469,     0,
       0,     0,     0,     0,   469,     0,   196,     0,   290,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,  -389,  -389,     0,     0,     0,     0,     0,   316,     0,
       0,     0,   323,     0,   326,     0,   486,     0,     0,     0,
     332,   335,     0,   144,     0,     0,     0,     0,     0,   144,
     345,     0,     0,     0,   284,   144,   144,     0,     0,     0,
       0,   360,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   321,   196,     0,     0,     0,     0,     0,     0,
     331,     0,     0,  -389,  -389,     0,   157,   434,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,   355,
       0,     0,     0,     0,   469,   469,   469,     0,     0,     0,
     434,   374,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,   384,     0,   390,   391,   392,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,     0,     0,     0,     0,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   196,     0,
     384,   469,   384,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,     0,   453,     0,     0,     0,
     434,   196,  -407,  -407,  -407,  -407,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,     0,   469,
       0,     0,     0,     0,   469,     0,     0,     0,     0,   548,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   515,     0,
       0,     0,   290,     0,   290,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,   144,     0,   144,
       0,     0,     0,     0,     0,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   589,   592,     0,
     469,     0,   469,   596,     0,   335,   335,     0,     0,   469,
       0,   434,   144,   144,     0,     0,     0,     0,   144,     0,
     144,   144,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,     0,     0,     0,     0,   144,     0,   459,
     460,     0,     0,     0,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,   434,   434,     0,     0,   461,     0,
       0,     0,     0,   641,   434,   434,     0,     0,   434,   137,
     462,     0,     0,     0,   157,     0,   321,   588,     0,   463,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,   196,     0,   604,     0,     0,     0,     0,   469,
       0,     0,   670,     0,   469,    44,     0,     0,    47,   384,
       0,     0,   434,     0,     0,     0,     0,   144,     0,    56,
       0,    58,    59,   464,    61,   465,     0,     0,     0,     0,
       0,     0,   466,   117,     0,   196,   196,     0,    70,   637,
       0,     0,     0,     0,   196,   196,   196,     0,     0,   196,
       0,   290,   469,   384,   650,     0,     0,     0,     0,   652,
       0,     0,     0,   290,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   666,
     592,     0,     0,   469,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   196,   469,   144,     0,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   384,     0,     0,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,   384,
     384,     0,     0,     9,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     321,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,    34,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
     774,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,   818,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,     0,    77,    78,   601,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   843,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,    34,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,     0,    77,    78,   677,
      79,   236,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,    34,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,   237,     9,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,   369,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,   509,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,   724,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,   781,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,   837,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,  -407,  -407,  -407,  -407,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,   840,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,   842,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,   861,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,   875,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,   886,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,   932,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   368,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,   935,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   368,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   594,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,    31,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,     0,    52,     0,    53,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   685,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,    31,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,     0,    52,     0,    53,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,    78,     0,    79,     0,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,    31,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,     0,    52,     0,    53,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,    78,     0,
      79,     0,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
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
      76,     0,     0,     0,     0,    79,     0,    80,    81,     0,
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
       0,     0,     0,    74,     0,     0,    76,     0,   167,     0,
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
       0,     0,    76,     0,   170,     0,     0,    79,     0,    80,
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
      70,     0,     0,     0,     0,    74,     0,     0,    76,     0,
     194,     0,     0,    79,     0,    80,    81,     0,     0,     0,
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
       0,    74,     0,     0,    76,   317,     0,   393,     0,    79,
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
       0,     4,     5,     6,     7,     8,    64,   117,    66,     0,
       9,     0,    70,     0,     0,     0,     0,    74,     0,     0,
      76,     0,     0,     0,     0,    79,     0,    80,    81,   417,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     4,     5,
       6,     7,     8,    64,   117,    66,     0,     9,     0,    70,
       0,     0,     0,     0,    74,     0,     0,    76,     0,     0,
       0,     0,    79,     0,    80,    81,   430,     0,     0,     0,
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
       0,    80,    81,   450,     0,     0,     0,     0,     0,     0,
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
     452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    79,     0,    80,    81,   639,     0,     0,
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
      79,     0,    80,    81,   651,     0,     0,     0,     0,     0,
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
      55,    56,    57,    58,    59,   116,    61,    62,     4,     5,
       6,     7,     8,     0,    64,   117,    66,     9,     0,     0,
      70,     0,     0,     0,     0,    74,     0,     0,    76,     0,
       0,     0,     0,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,     0,
      64,   117,   346,     0,     0,     0,    70,   234,   235,   236,
       0,    74,     0,     0,    76,     0,     0,     0,     0,    79,
       0,    80,    81,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   679,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   502,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   524,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     563,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   593,   237,   775,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   644,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   716,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   776,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   260,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   308,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   310,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   356,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   367,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   446,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   482,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     490,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   508,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   614,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   725,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   846,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,   234,   235,   236,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   863,   237,   546,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,   566,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,   118,    22,    23,     2,   518,    26,    26,   473,   301,
       2,   233,   483,   430,   339,     8,   277,    26,   279,     8,
      26,     2,   259,    31,     8,   798,    26,    29,    61,     8,
      31,     8,     8,   450,     8,   452,     8,    31,     8,     8,
      60,    26,    62,     8,     8,     8,     8,   623,   165,   208,
     626,     8,    88,    73,   276,   136,   278,    61,    63,    95,
      78,   112,    61,   298,   607,   287,   288,    72,   149,   128,
       0,    61,    90,    61,    61,   297,     8,   136,   300,   301,
      31,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   152,   146,   146,   149,   130,    81,   128,
     128,   128,   154,    22,    23,   133,   619,    26,   684,    61,
     146,   128,   112,   115,    31,    61,   133,   693,    78,   139,
     149,   126,   149,   128,    78,    81,   146,    59,    60,   133,
      90,   136,   152,   906,   133,   153,    90,   680,   146,   682,
     130,   146,   151,   378,   104,   146,   152,    26,   152,   154,
     149,    74,   146,   152,    74,    72,   176,   152,   151,   152,
     160,   150,   182,   628,   152,   152,   152,   151,   188,   189,
     190,   747,   151,   498,   151,   151,   149,   151,   198,   151,
     150,   150,   149,   128,   130,   150,   150,   150,   150,   209,
     210,   149,   173,   150,   128,   146,   667,   149,    72,   153,
     152,   714,   136,    88,   149,   128,   149,    63,   128,   126,
      95,   128,   128,    88,    99,   217,   149,   133,   150,   136,
      95,   136,   639,    88,    99,   517,   303,   146,   146,   146,
      95,    73,   309,   233,   651,    77,   154,   154,   103,   259,
     259,    78,    67,    68,    69,    70,    71,    72,   233,   123,
     826,   129,   126,    90,   128,   516,   149,   176,   136,   259,
      85,   146,   136,   182,   499,   285,   136,   104,   146,   188,
     189,   146,   146,   149,   259,   295,   276,   146,   278,   198,
     154,   146,   157,   303,   126,   154,   128,   287,   288,   309,
     209,   276,    99,   278,   136,   517,   103,   297,   149,   560,
     300,   301,   287,   288,   880,   881,   128,   542,   543,   149,
     547,   133,   297,   128,   890,   300,   301,   552,   553,   144,
     145,   556,    59,    60,   180,    64,    65,   149,   153,    67,
      68,    69,    70,    71,    72,   911,   151,   152,    72,   915,
     259,   136,   126,    88,   128,    73,   149,    85,   924,    77,
      95,   146,   136,    88,    99,   357,   136,   618,   103,   154,
      95,   653,     8,   383,    99,   600,   149,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   149,
      72,   149,   459,   460,   303,   646,   647,   136,   128,   389,
     309,    31,   126,   133,   128,    64,    65,   417,   126,   476,
     128,   146,   136,   151,   152,   136,   144,   145,   136,   149,
     430,   146,   146,    59,    60,   153,   128,    61,   152,   275,
     154,   133,   150,   133,   583,    45,    46,    47,   136,    49,
     450,   653,   452,   898,   126,   594,   128,   149,   146,   459,
     460,   461,   298,   149,   136,   465,   154,    22,    23,   526,
      88,   133,    88,   473,   146,    61,   476,    95,   136,    95,
     130,    99,   154,    99,   112,   485,   486,   103,   146,    80,
      81,   491,   128,   493,   494,    49,   154,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    72,
     510,   126,   133,   128,   514,   497,   128,   478,   417,   497,
     155,   136,   579,   136,   150,   497,   526,   133,   146,   490,
     146,   430,     8,   146,   128,   535,   497,   517,   128,   152,
     133,   154,   378,    59,    60,   149,   685,   547,   547,   133,
     130,   450,   517,   452,    67,    68,    69,    70,    71,    72,
     459,   460,   461,   126,    13,   128,   136,   547,    13,   136,
     151,   150,   150,   136,   574,   575,   146,   476,   151,   579,
     151,   156,   547,   146,   154,   136,   485,   486,   136,   149,
     590,   154,   491,   146,   493,   494,    13,   149,   655,   112,
     657,    42,    43,    44,    45,    46,    47,   664,    49,   150,
     147,   510,   751,    67,    68,    69,    70,    71,    72,   150,
     602,   760,   151,   623,   602,   764,   626,   526,   628,   629,
     602,     8,   632,   151,    74,   151,   153,   149,   777,   639,
      61,   602,   136,   136,     8,   149,    13,   704,   547,   107,
     107,   651,   155,   614,   149,   655,     8,   657,   149,   155,
     150,   149,   149,   499,   664,   149,   155,   150,   668,   149,
     133,    13,   811,   653,   136,   574,   128,   816,   149,    13,
     579,   820,   155,   665,   684,    79,   151,   130,   653,   200,
     672,   590,   203,   693,   833,   150,   149,   754,   136,   150,
     128,   117,   759,   150,   704,     8,   542,   543,   219,    96,
     221,   222,   223,    61,    61,   551,   552,   553,   130,   155,
     556,     8,   103,   136,   150,    13,   865,   151,    96,   151,
     150,    13,   829,   151,   149,   144,   155,   151,   146,   878,
     639,   152,   152,   150,   150,   150,   150,   747,   150,   150,
     807,   150,   651,   150,   754,   155,   655,   150,   657,   759,
     155,   743,   153,     8,   600,   664,   150,   728,   729,   668,
     149,   732,   152,    13,    96,    13,   151,   155,   152,   155,
     151,   838,   151,    26,   150,   146,   149,   926,   146,   149,
      66,   150,   849,   136,   933,   852,   151,   151,    13,   152,
     146,   146,   763,    13,    13,   704,   136,   807,   152,   146,
     151,   151,   136,    13,   146,   797,   151,   874,    26,    13,
     149,    79,    74,   805,   151,   882,   826,   153,   810,   119,
      74,   151,   814,   133,   149,   136,   150,   136,   838,   821,
     136,   146,     8,   150,   152,   514,   901,   510,   591,   849,
     693,   729,   852,   668,   774,   754,   632,   327,   746,   841,
     759,   890,   844,   519,    76,   847,   663,   638,   574,   573,
     182,   616,   494,   166,   874,   857,   493,    -1,    -1,    -1,
     880,   881,   882,    -1,    -1,   846,    -1,    -1,    -1,    -1,
     890,    -1,    -1,    -1,    22,    23,    -1,   879,   898,    -1,
      -1,    -1,    -1,   885,    -1,    -1,    -1,    -1,   807,    22,
      23,   911,    -1,    26,    -1,   915,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,   838,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   930,    -1,
     849,    -1,   934,   852,    -1,    -1,    -1,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   874,    -1,    24,    25,    -1,
      -1,    -1,    -1,   882,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,   303,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    63,    -1,   146,    -1,
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
      -1,    -1,    -1,    -1,   459,   460,   461,    -1,    -1,    -1,
     298,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   476,    -1,    -1,    -1,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
     277,   526,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   291,    -1,   293,    -1,    -1,    -1,
     378,   298,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,   314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   574,
      -1,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,   365,    -1,
      -1,    -1,   450,    -1,   452,    -1,    -1,    -1,    -1,    -1,
      -1,   378,    -1,    -1,    -1,    -1,    -1,   450,    -1,   452,
      -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,   486,    -1,
     655,    -1,   657,   491,    -1,   493,   494,    -1,    -1,   664,
      -1,   499,   485,   486,    -1,    -1,    -1,    -1,   491,    -1,
     493,   494,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   439,    -1,    -1,    -1,    -1,   510,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   704,
      -1,    -1,    -1,    -1,   542,   543,    -1,    -1,    61,    -1,
      -1,    -1,    -1,   551,   552,   553,    -1,    -1,   556,    72,
      73,    -1,    -1,    -1,   547,    -1,   483,   484,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,   499,    -1,   501,    -1,    -1,    -1,    -1,   754,
      -1,    -1,   590,    -1,   759,   108,    -1,    -1,   111,   516,
      -1,    -1,   600,    -1,    -1,    -1,    -1,   590,    -1,   122,
      -1,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   542,   543,    -1,   141,   546,
      -1,    -1,    -1,    -1,   551,   552,   553,    -1,    -1,   556,
      -1,   639,   807,   560,   561,    -1,    -1,    -1,    -1,   566,
      -1,    -1,    -1,   651,    -1,    -1,   639,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,   586,
     668,    -1,    -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   599,   600,   849,   668,    -1,   852,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   874,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   882,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,   646,
     647,    -1,    -1,    12,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     667,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
     737,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,   771,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   815,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,    11,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    25,    12,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
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
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
     151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,   149,   150,    -1,    26,    -1,   154,
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
      -1,     3,     4,     5,     6,     7,   135,   136,   137,    -1,
      12,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,     3,     4,
       5,     6,     7,   135,   136,   137,    -1,    12,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    31,    -1,    -1,    -1,
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
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,    -1,   141,     9,    10,    11,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   155,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   151,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   151,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   151,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
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
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
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
     188,   193,   196,   258,   259,   260,   263,   267,   276,   279,
     283,   284,   286,   287,   294,   295,   296,   297,   298,   299,
     300,   301,   306,   314,   316,    72,   126,   136,   260,   283,
     283,   149,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,    72,   126,   128,
     161,   267,   286,   287,   296,   286,    31,   283,   309,   310,
     283,   126,   128,   161,   267,   269,   270,   296,   299,   300,
     306,    81,    81,   146,   223,   260,   149,   151,   283,   136,
     151,   283,   149,   174,   251,   283,   149,   149,   273,   149,
     149,   146,   154,   221,   222,   136,   149,   149,   149,   149,
     128,   152,   161,   161,   151,   259,   283,   287,    88,    95,
      99,   103,   146,   311,   312,    26,   149,   283,   152,   149,
     128,   161,   165,   167,   149,   258,   283,   169,   152,    99,
     274,   311,    99,   311,   128,   149,     8,   151,   136,   136,
      31,   184,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     151,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   133,    61,   130,    61,
     152,   154,   300,   184,   283,   128,   161,   133,   133,   285,
     287,    96,   155,     8,   281,   128,   161,   133,   149,   275,
     133,   130,   300,    13,     8,   151,   184,   309,   151,    13,
     151,   136,   207,   171,     8,   151,   287,   150,   283,   252,
     253,   283,   259,   287,   152,   284,   287,     8,   151,   151,
     150,   283,   287,   315,   123,   287,   307,   308,   161,   164,
     151,   152,   149,   151,   151,   287,   137,   283,   103,   312,
      61,   130,    99,   103,   312,   283,   151,   169,   180,   181,
     287,   161,    74,   151,   166,   173,   150,   150,   115,   153,
     170,   171,   182,   183,   283,   156,   157,   136,   264,   136,
     189,   191,   136,   149,   283,   302,   136,   294,   300,   306,
     283,   283,   283,    26,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   269,    31,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
      31,   219,   220,   259,   287,   136,   294,   302,   136,   152,
     294,   303,   304,   305,   302,   283,   150,   161,   136,   136,
      31,   283,    31,   283,   161,   294,   219,   294,   303,    42,
      43,    61,    73,    82,   126,   128,   135,   161,   267,   276,
     277,   278,   146,   149,   150,   277,    13,     8,   150,   147,
     283,   150,   150,   151,     8,    74,    74,   283,   222,   151,
     150,     8,   150,   149,     8,   150,   149,   160,   163,   266,
     153,    61,   153,   129,   136,   146,   313,   136,   150,   153,
       8,   150,    74,   136,     8,   283,    61,   130,   254,   255,
     256,   257,   290,   149,   153,   219,    13,   107,   194,   107,
     197,   186,    73,    77,   126,   128,   161,   216,   217,   218,
     268,   155,   149,   149,   300,   283,    26,    63,   287,   285,
     150,     8,   149,   149,   155,   283,   149,   291,   292,   293,
      61,   152,   155,   153,   285,   285,    96,   150,   271,   277,
     277,   277,   280,   282,   149,   128,   161,    99,   133,    13,
     216,   277,   136,    26,   171,   206,   149,   252,   283,   287,
      31,   203,   287,   153,    26,   171,   287,   307,   308,    13,
     265,   153,   160,   219,   283,   155,    26,   152,   208,    79,
     181,   151,   136,   167,   150,   302,   303,   290,    61,   254,
     150,   150,   277,   195,   117,   199,   198,   192,   149,   128,
     161,   150,     8,    31,   146,   219,   219,   283,   269,    31,
     259,   287,   219,   219,   153,   219,    61,    61,   288,   302,
     283,    31,   283,   130,   272,    96,   155,     8,   281,   280,
     161,   136,   277,   150,    13,   169,   283,   151,    96,   202,
     287,   202,   169,   212,   150,   283,   219,   153,   150,   155,
     151,   209,   151,   209,   149,    26,   171,   211,   155,   293,
     302,   151,   268,   200,   190,   201,   268,   152,   216,   161,
     144,   261,   218,   146,    13,   150,   150,   275,   285,   150,
     150,   150,   302,   302,   289,   155,   153,   285,   303,   277,
     277,   150,   261,   277,   100,   150,   252,   203,   150,   150,
     213,    64,    65,   214,   150,   153,   209,    78,    90,   104,
     209,   153,   268,   169,   155,   201,   152,     8,   224,   150,
     149,   152,    31,   146,    13,   277,   155,   155,   290,    96,
     152,   151,   151,   150,    26,   171,   205,   205,    64,    65,
     215,   149,   171,   104,   283,    26,   151,   210,   151,   153,
     146,   105,   224,   268,    67,    68,    69,    70,    71,    72,
      85,   144,   145,   153,   225,   228,   245,   246,   247,   248,
     250,   187,    31,   146,   262,   169,   146,    13,   277,   277,
     169,    26,   171,   204,   169,   149,    26,    66,   283,   151,
     210,   169,   150,   151,   153,   136,   229,   146,   249,   260,
     248,     8,   151,   152,   146,     8,   150,   153,    13,   277,
     153,   169,   102,   283,   169,   151,   150,   169,   175,    13,
     230,   268,    13,     8,   151,   184,   136,   169,    31,   146,
     277,   101,   151,   150,   171,   152,   277,     8,   151,   152,
     232,   277,   146,   136,    13,   153,   146,   151,    26,   169,
     231,   233,    13,   226,   277,   169,   153,   268,   136,   234,
     235,   236,   237,   240,   241,   242,   268,   277,   149,    79,
     176,   177,   178,   153,   236,   151,    74,   119,   151,   133,
     216,   149,   178,   243,   248,   238,   136,   150,   268,   136,
     239,   268,   227,   146,     8,   151,   152,   244,   150,   268,
     169,   179,   153,   152,   169,   153
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

    { observers.NamespaceSetCurrent(); observers.NamespaceDeclarationFound(); ;}
    break;

  case 12:

    { observers.NamespaceSetCurrent(); observers.NamespaceDeclarationFound(); ;}
    break;

  case 14:

    { observers.NamespaceSetToGlobal(); observers.NamespaceDeclarationFound(); ;}
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

    { observers.ClassEnd(analyzer.GetLineNumber(), (yyvsp[(9) - (9)])); ;}
    break;

  case 84:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 85:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 86:

    { observers.ClassEnd(analyzer.GetLineNumber(), (yyvsp[(8) - (8)])); ;}
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

  case 178:

    { observers.QualifiedNameClear(); ;}
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

    { observers.QualifiedNameClear(); ;}
    break;

  case 188:

    { observers.TraitInsteadOfFound(); ;}
    break;

  case 189:

    { observers.TraitAddInsteadOf(); observers.QualifiedNameClear(); ;}
    break;

  case 190:

    { observers.TraitAddInsteadOf(); observers.QualifiedNameClear(); ;}
    break;

  case 191:

    { observers.TraitAliasMethod((yyvsp[(1) - (1)])); ;}
    break;

  case 193:

    { observers.TraitAliasMethodFromQualifiedName((yyvsp[(3) - (3)])); ;}
    break;

  case 194:

    { observers.TraitAliasFound(&(yyvsp[(4) - (4)])); ;}
    break;

  case 195:

    { observers.TraitAliasFound(NULL); ;}
    break;

  case 198:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 199:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 201:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 206:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 207:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 208:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 209:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 210:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 211:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 212:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 213:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 214:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 215:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 216:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 217:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 233:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 235:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 236:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 237:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 238:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 283:

    { /* no need to push here as this is recursive */ ;}
    break;

  case 286:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 287:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 288:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
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

  case 294:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 299:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 300:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (3)])); ;}
    break;

  case 301:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 303:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 304:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (10)])); ;}
    break;

  case 312:

    { observers.FunctionCallStart(); ;}
    break;

  case 313:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 314:

    { observers.FunctionCallStart(); ;}
    break;

  case 315:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 316:

    { observers.QualifiedNameMakeAbsolute(); observers.FunctionCallStart(); ;}
    break;

  case 317:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 326:

    { observers.QualifiedNameMakeAbsolute(); ;}
    break;

  case 329:

    { observers.QualifiedNameMakeAbsolute(); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 355:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 356:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 366:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 385:

    { observers.ExpressionFound(); ;}
    break;

  case 386:

    { observers.ExpressionFound(); ;}
    break;

  case 390:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 395:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 396:

    { observers.ExpressionPop(); ;}
    break;

  case 397:

    { observers.ExpressionPop(); ;}
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 399:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 400:

    { (yyval).Token = 0; ;}
    break;

  case 401:

    { (yyval).Token = 0; ;}
    break;

  case 404:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 407:

    { observers.ExpressionPop(); ;}
    break;

  case 408:

    { observers.ExpressionPop(); ;}
    break;

  case 410:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 411:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 418:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 433:

    { observers.ForeachVariableFound(); ;}
    break;

  case 461:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 462:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 464:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 465:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 468:

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




