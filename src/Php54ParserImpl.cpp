
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
#define YYLAST   7864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  462
/* YYNRULES -- Number of states.  */
#define YYNSTATES  929

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
      21,    26,    30,    36,    41,    45,    48,    52,    54,    56,
      60,    63,    68,    74,    79,    82,    83,    85,    87,    89,
      94,    96,    99,   103,   111,   122,   123,   130,   131,   140,
     150,   156,   159,   163,   166,   170,   173,   177,   181,   185,
     189,   193,   195,   198,   204,   213,   222,   228,   230,   231,
     246,   250,   254,   256,   257,   259,   262,   263,   273,   275,
     279,   281,   283,   285,   286,   288,   289,   290,   302,   303,
     304,   314,   315,   316,   325,   327,   330,   332,   335,   336,
     337,   341,   343,   344,   345,   349,   350,   351,   355,   357,
     361,   362,   365,   367,   370,   372,   377,   379,   384,   386,
     391,   395,   401,   405,   410,   415,   421,   422,   428,   433,
     435,   437,   439,   444,   445,   452,   453,   461,   462,   465,
     466,   470,   472,   473,   476,   480,   486,   491,   496,   502,
     510,   517,   518,   520,   522,   524,   526,   527,   529,   531,
     534,   538,   542,   547,   551,   553,   555,   558,   563,   567,
     573,   575,   579,   582,   583,   587,   590,   592,   593,   594,
     605,   609,   611,   615,   617,   621,   622,   624,   626,   629,
     632,   635,   639,   641,   645,   647,   649,   653,   658,   662,
     663,   665,   667,   671,   673,   675,   676,   678,   680,   683,
     685,   687,   689,   691,   693,   695,   699,   705,   707,   711,
     717,   722,   726,   728,   729,   731,   735,   737,   740,   742,
     747,   751,   754,   756,   758,   759,   761,   765,   772,   776,
     781,   788,   791,   795,   799,   803,   807,   811,   815,   819,
     823,   827,   831,   835,   838,   841,   844,   847,   851,   855,
     859,   863,   867,   871,   875,   879,   883,   887,   891,   895,
     899,   903,   907,   911,   914,   917,   920,   923,   927,   931,
     935,   939,   943,   947,   951,   955,   959,   963,   965,   966,
     972,   978,   983,   985,   988,   991,   994,   997,  1000,  1003,
    1006,  1009,  1012,  1014,  1019,  1023,  1027,  1030,  1040,  1051,
    1053,  1054,  1059,  1063,  1068,  1070,  1073,  1074,  1080,  1087,
    1093,  1100,  1107,  1114,  1121,  1126,  1128,  1130,  1134,  1137,
    1139,  1143,  1146,  1148,  1150,  1155,  1157,  1160,  1161,  1164,
    1165,  1168,  1172,  1173,  1175,  1177,  1178,  1182,  1184,  1186,
    1188,  1190,  1192,  1194,  1196,  1198,  1200,  1202,  1206,  1209,
    1211,  1213,  1217,  1220,  1223,  1226,  1231,  1235,  1237,  1239,
    1243,  1245,  1247,  1249,  1253,  1256,  1258,  1262,  1266,  1268,
    1269,  1272,  1273,  1275,  1281,  1285,  1289,  1291,  1293,  1295,
    1297,  1299,  1301,  1302,  1309,  1311,  1314,  1315,  1319,  1324,
    1329,  1333,  1335,  1337,  1338,  1340,  1343,  1347,  1351,  1353,
    1358,  1359,  1365,  1367,  1369,  1371,  1373,  1376,  1378,  1383,
    1388,  1390,  1392,  1397,  1398,  1400,  1402,  1404,  1409,  1414,
    1416,  1418,  1422,  1424,  1427,  1431,  1433,  1435,  1440,  1441,
    1442,  1445,  1451,  1455,  1459,  1461,  1468,  1473,  1478,  1481,
    1484,  1487,  1489,  1492,  1494,  1499,  1503,  1507,  1514,  1518,
    1520,  1522,  1524,  1529,  1534,  1537,  1540,  1545,  1548,  1551,
    1553,  1557,  1561
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   168,    -1,   179,    -1,   180,
      -1,   115,   149,   150,   151,    -1,   126,   161,   151,    -1,
     126,   161,   152,   160,   153,    -1,   126,   152,   160,   153,
      -1,   144,   163,   151,    -1,   165,   151,    -1,   163,     8,
     164,    -1,   164,    -1,   161,    -1,   161,    74,   136,    -1,
     128,   161,    -1,   128,   161,    74,   136,    -1,   165,     8,
     136,    13,   269,    -1,    85,   136,    13,   269,    -1,   166,
     167,    -1,    -1,   168,    -1,   179,    -1,   180,    -1,   115,
     149,   150,   151,    -1,   169,    -1,   136,    26,    -1,   152,
     166,   153,    -1,   116,   149,   275,   150,   168,   209,   211,
      -1,   116,   149,   275,   150,    26,   166,   210,   212,    66,
     151,    -1,    -1,   147,   149,   170,   275,   150,   208,    -1,
      -1,    93,   171,   168,   147,   149,   275,   150,   151,    -1,
     109,   149,   245,   151,   245,   151,   245,   150,   201,    -1,
     138,   149,   275,   150,   205,    -1,    76,   151,    -1,    76,
     275,   151,    -1,    87,   151,    -1,    87,   275,   151,    -1,
     134,   151,    -1,   134,   252,   151,    -1,   134,   279,   151,
      -1,   113,   218,   151,    -1,    72,   220,   151,    -1,    97,
     244,   151,    -1,   118,    -1,   275,   151,    -1,   143,   149,
     177,   150,   151,    -1,   110,   149,   279,    74,   200,   199,
     150,   202,    -1,   110,   149,   252,    74,   279,   199,   150,
     202,    -1,    89,   149,   204,   150,   203,    -1,   151,    -1,
      -1,   142,   152,   166,   153,    79,   149,   260,   146,   150,
     172,   152,   166,   153,   173,    -1,   139,   275,   151,    -1,
     114,   136,   151,    -1,   174,    -1,    -1,   175,    -1,   174,
     175,    -1,    -1,    79,   149,   260,   146,   150,   176,   152,
     166,   153,    -1,   178,    -1,   177,     8,   178,    -1,   279,
      -1,   182,    -1,   185,    -1,    -1,    31,    -1,    -1,    -1,
     254,   181,   136,   183,   149,   213,   150,   184,   152,   166,
     153,    -1,    -1,    -1,   190,   136,   186,   191,   196,   187,
     152,   221,   153,    -1,    -1,    -1,   193,   136,   188,   194,
     189,   152,   221,   153,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,    -1,   107,   192,   260,
      -1,   120,    -1,    -1,    -1,   107,   195,   198,    -1,    -1,
      -1,   117,   197,   198,    -1,   260,    -1,   198,     8,   260,
      -1,    -1,    96,   200,    -1,   279,    -1,    31,   279,    -1,
     168,    -1,    26,   166,   101,   151,    -1,   168,    -1,    26,
     166,   102,   151,    -1,   168,    -1,    26,   166,   100,   151,
      -1,   136,    13,   269,    -1,   204,     8,   136,    13,   269,
      -1,   152,   206,   153,    -1,   152,   151,   206,   153,    -1,
      26,   206,   104,   151,    -1,    26,   151,   206,   104,   151,
      -1,    -1,   206,    78,   275,   207,   166,    -1,   206,    90,
     207,   166,    -1,    26,    -1,   151,    -1,   168,    -1,    26,
     166,   105,   151,    -1,    -1,   209,    64,   149,   275,   150,
     168,    -1,    -1,   210,    64,   149,   275,   150,    26,   166,
      -1,    -1,    65,   168,    -1,    -1,    65,    26,   166,    -1,
     214,    -1,    -1,   215,   146,    -1,   215,    31,   146,    -1,
     215,    31,   146,    13,   269,    -1,   215,   146,    13,   269,
      -1,   214,     8,   215,   146,    -1,   214,     8,   215,    31,
     146,    -1,   214,     8,   215,    31,   146,    13,   269,    -1,
     214,     8,   215,   146,    13,   269,    -1,    -1,    73,    -1,
      77,    -1,   260,    -1,   217,    -1,    -1,   252,    -1,   279,
      -1,    31,   277,    -1,   217,     8,   252,    -1,   217,     8,
     279,    -1,   217,     8,    31,   277,    -1,   218,     8,   219,
      -1,   219,    -1,   146,    -1,   154,   276,    -1,   154,   152,
     275,   153,    -1,   220,     8,   146,    -1,   220,     8,   146,
      13,   269,    -1,   146,    -1,   146,    13,   269,    -1,   221,
     222,    -1,    -1,   238,   242,   151,    -1,   243,   151,    -1,
     225,    -1,    -1,    -1,   239,   254,   181,   136,   223,   149,
     213,   150,   224,   237,    -1,   144,   226,   227,    -1,   260,
      -1,   226,     8,   260,    -1,   151,    -1,   152,   228,   153,
      -1,    -1,   229,    -1,   230,    -1,   229,   230,    -1,   231,
     151,    -1,   235,   151,    -1,   234,   119,   232,    -1,   260,
      -1,   232,     8,   260,    -1,   136,    -1,   234,    -1,   260,
     133,   136,    -1,   233,    74,   236,   136,    -1,   233,    74,
     241,    -1,    -1,   241,    -1,   151,    -1,   152,   166,   153,
      -1,   240,    -1,   145,    -1,    -1,   240,    -1,   241,    -1,
     240,   241,    -1,    67,    -1,    68,    -1,    69,    -1,    72,
      -1,    71,    -1,    70,    -1,   242,     8,   146,    -1,   242,
       8,   146,    13,   269,    -1,   146,    -1,   146,    13,   269,
      -1,   243,     8,   136,    13,   269,    -1,    85,   136,    13,
     269,    -1,   244,     8,   275,    -1,   275,    -1,    -1,   246,
      -1,   246,     8,   275,    -1,   275,    -1,   247,   282,    -1,
     282,    -1,   248,    61,   295,   155,    -1,    61,   295,   155,
      -1,   248,   247,    -1,   248,    -1,   247,    -1,    -1,   249,
      -1,    63,   261,   267,    -1,   123,   149,   300,   150,    13,
     275,    -1,   279,    13,   275,    -1,   279,    13,    31,   279,
      -1,   279,    13,    31,    63,   261,   267,    -1,    62,   275,
      -1,   279,    24,   275,    -1,   279,    23,   275,    -1,   279,
      22,   275,    -1,   279,    21,   275,    -1,   279,    20,   275,
      -1,   279,    19,   275,    -1,   279,    18,   275,    -1,   279,
      17,   275,    -1,   279,    16,   275,    -1,   279,    15,   275,
      -1,   279,    14,   275,    -1,   278,    60,    -1,    60,   278,
      -1,   278,    59,    -1,    59,   278,    -1,   275,    27,   275,
      -1,   275,    28,   275,    -1,   275,     9,   275,    -1,   275,
      11,   275,    -1,   275,    10,   275,    -1,   275,    29,   275,
      -1,   275,    31,   275,    -1,   275,    30,   275,    -1,   275,
      44,   275,    -1,   275,    42,   275,    -1,   275,    43,   275,
      -1,   275,    45,   275,    -1,   275,    46,   275,    -1,   275,
      47,   275,    -1,   275,    41,   275,    -1,   275,    40,   275,
      -1,    42,   275,    -1,    43,   275,    -1,    48,   275,    -1,
      50,   275,    -1,   275,    33,   275,    -1,   275,    32,   275,
      -1,   275,    35,   275,    -1,   275,    34,   275,    -1,   275,
      36,   275,    -1,   275,    39,   275,    -1,   275,    37,   275,
      -1,   275,    38,   275,    -1,   275,    49,   261,    -1,   149,
     275,   150,    -1,   251,    -1,    -1,   149,   251,   150,   253,
     250,    -1,   275,    25,   275,    26,   275,    -1,   275,    25,
      26,   275,    -1,   307,    -1,    58,   275,    -1,    57,   275,
      -1,    56,   275,    -1,    55,   275,    -1,    54,   275,    -1,
      53,   275,    -1,    52,   275,    -1,   106,   265,    -1,    51,
     275,    -1,   271,    -1,    73,   149,   302,   150,    -1,    61,
     302,   155,    -1,   156,   266,   156,    -1,    12,   275,    -1,
     254,   181,   149,   213,   150,   255,   152,   166,   153,    -1,
      72,   254,   181,   149,   213,   150,   255,   152,   166,   153,
      -1,   112,    -1,    -1,   144,   149,   256,   150,    -1,   256,
       8,   146,    -1,   256,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   149,   258,   216,   150,    -1,
     126,   128,   161,   149,   216,   150,    -1,   128,   161,   149,
     216,   150,    -1,   259,   133,   136,   149,   216,   150,    -1,
     259,   133,   286,   149,   216,   150,    -1,   288,   133,   136,
     149,   216,   150,    -1,   288,   133,   286,   149,   216,   150,
      -1,   286,   149,   216,   150,    -1,    72,    -1,   161,    -1,
     126,   128,   161,    -1,   128,   161,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,   259,    -1,   262,    -1,
     292,   130,   296,   263,    -1,   292,    -1,   263,   264,    -1,
      -1,   130,   296,    -1,    -1,   149,   150,    -1,   149,   275,
     150,    -1,    -1,    99,    -1,   304,    -1,    -1,   149,   216,
     150,    -1,   124,    -1,    92,    -1,    86,    -1,   122,    -1,
     108,    -1,    91,    -1,   141,    -1,   125,    -1,   111,    -1,
     127,    -1,   135,    99,   103,    -1,   135,   103,    -1,   268,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
      42,   269,    -1,    43,   269,    -1,    73,   149,   272,   150,
      -1,    61,   272,   155,    -1,   270,    -1,    82,    -1,   259,
     133,   136,    -1,   137,    -1,   309,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,   268,    -1,   157,   304,
     157,    -1,   135,   304,   103,    -1,    82,    -1,    -1,   274,
     273,    -1,    -1,     8,    -1,   274,     8,   269,    96,   269,
      -1,   274,     8,   269,    -1,   269,    96,   269,    -1,   269,
      -1,   276,    -1,   252,    -1,   279,    -1,   279,    -1,   279,
      -1,    -1,   291,   130,   296,   285,   280,   281,    -1,   291,
      -1,   281,   282,    -1,    -1,   130,   296,   285,    -1,   283,
      61,   295,   155,    -1,   284,    61,   295,   155,    -1,   149,
     216,   150,    -1,   284,    -1,   283,    -1,    -1,   293,    -1,
     299,   293,    -1,   259,   133,   286,    -1,   288,   133,   286,
      -1,   293,    -1,   289,    61,   295,   155,    -1,    -1,   257,
     290,    61,   295,   155,    -1,   292,    -1,   289,    -1,   257,
      -1,   293,    -1,   299,   293,    -1,   287,    -1,   293,    61,
     295,   155,    -1,   293,   152,   275,   153,    -1,   294,    -1,
     146,    -1,   154,   152,   275,   153,    -1,    -1,   275,    -1,
     297,    -1,   286,    -1,   297,    61,   295,   155,    -1,   297,
     152,   275,   153,    -1,   298,    -1,   136,    -1,   152,   275,
     153,    -1,   154,    -1,   299,   154,    -1,   300,     8,   301,
      -1,   301,    -1,   279,    -1,   123,   149,   300,   150,    -1,
      -1,    -1,   303,   273,    -1,   303,     8,   275,    96,   275,
      -1,   303,     8,   275,    -1,   275,    96,   275,    -1,   275,
      -1,   303,     8,   275,    96,    31,   277,    -1,   303,     8,
      31,   277,    -1,   275,    96,    31,   277,    -1,    31,   277,
      -1,   304,   305,    -1,   304,    99,    -1,   305,    -1,    99,
     305,    -1,   146,    -1,   146,    61,   306,   155,    -1,   146,
     130,   136,    -1,    95,   275,   153,    -1,    95,   137,    61,
     275,   155,   153,    -1,    88,   279,   153,    -1,   136,    -1,
     129,    -1,   146,    -1,   121,   149,   308,   150,    -1,    98,
     149,   279,   150,    -1,     7,   275,    -1,     6,   275,    -1,
       5,   149,   275,   150,    -1,     4,   275,    -1,     3,   275,
      -1,   279,    -1,   308,     8,   279,    -1,   259,   133,   136,
      -1,   288,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   195,   195,   199,   200,   204,   205,   209,   210,   211,
     212,   213,   214,   216,   218,   219,   223,   224,   228,   229,
     230,   231,   235,   236,   240,   241,   246,   247,   248,   249,
     254,   255,   259,   260,   261,   262,   262,   263,   263,   264,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   291,   295,   296,   300,   297,
     303,   304,   309,   310,   314,   315,   320,   320,   326,   327,
     331,   335,   339,   344,   345,   350,   351,   350,   356,   357,
     356,   359,   360,   359,   365,   366,   367,   368,   371,   373,
     373,   378,   381,   383,   383,   387,   389,   389,   394,   395,
     398,   400,   404,   405,   409,   410,   415,   416,   421,   422,
     427,   428,   433,   434,   435,   436,   440,   442,   443,   448,
     449,   454,   455,   460,   462,   466,   468,   472,   474,   478,
     480,   485,   486,   490,   491,   492,   493,   494,   495,   496,
     497,   501,   502,   503,   504,   508,   509,   513,   514,   515,
     516,   517,   518,   522,   523,   527,   528,   529,   533,   534,
     535,   536,   540,   541,   545,   546,   547,   548,   549,   548,
     555,   559,   560,   564,   565,   568,   570,   574,   575,   579,
     580,   584,   588,   589,   593,   594,   598,   602,   603,   606,
     608,   612,   613,   617,   618,   621,   623,   627,   628,   632,
     633,   634,   635,   636,   637,   641,   642,   643,   644,   648,
     650,   654,   655,   659,   661,   665,   666,   673,   674,   678,
     679,   683,   684,   685,   688,   690,   694,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   749,
     751,   754,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   773,   778,
     781,   783,   787,   788,   789,   790,   794,   794,   796,   799,
     801,   803,   805,   807,   809,   814,   815,   816,   817,   821,
     822,   823,   827,   828,   832,   835,   839,   840,   844,   847,
     849,   850,   853,   855,   856,   859,   861,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   893,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   908,
     910,   913,   915,   919,   920,   921,   922,   926,   927,   932,
     937,   941,   947,   945,   949,   953,   954,   958,   964,   965,
     969,   973,   974,   975,   979,   980,   984,   985,   989,   993,
     994,   994,   999,  1000,  1001,  1005,  1006,  1007,  1011,  1012,
    1013,  1017,  1018,  1021,  1023,  1027,  1028,  1032,  1033,  1034,
    1038,  1039,  1043,  1044,  1048,  1049,  1053,  1054,  1055,  1058,
    1060,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1075,
    1076,  1077,  1078,  1082,  1083,  1084,  1085,  1086,  1087,  1091,
    1092,  1093,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1107,
    1108,  1112,  1113
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
  "top_statement", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "$@1", "$@2", "$@3",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "$@4", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@5", "$@6",
  "unticked_class_declaration_statement", "$@7", "$@8", "$@9", "$@10",
  "class_entry_type", "extends_from", "$@11", "interface_entry",
  "interface_extends_list", "$@12", "implements_list", "$@13",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@14", "$@15", "trait_use_statement", "trait_list",
  "trait_adaptations", "trait_adaptation_list",
  "non_empty_trait_adaptation_list", "trait_adaptation_statement",
  "trait_precedence", "trait_reference_list", "trait_method_reference",
  "trait_method_reference_fully_qualified", "trait_alias",
  "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "$@16", "function", "lexical_vars",
  "lexical_var_list", "function_call", "$@17", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@18",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference", "$@19",
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
     162,   162,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   167,
     168,   168,   169,   169,   169,   170,   169,   171,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   172,   169,
     169,   169,   173,   173,   174,   174,   176,   175,   177,   177,
     178,   179,   180,   181,   181,   183,   184,   182,   186,   187,
     185,   188,   189,   185,   190,   190,   190,   190,   191,   192,
     191,   193,   194,   195,   194,   196,   197,   196,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   205,   205,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   215,   215,   216,   216,   217,   217,   217,
     217,   217,   217,   218,   218,   219,   219,   219,   220,   220,
     220,   220,   221,   221,   222,   222,   222,   223,   224,   222,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   232,   232,   233,   233,   234,   235,   235,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   241,
     241,   241,   241,   241,   241,   242,   242,   242,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   249,   250,   250,   251,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   253,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   254,
     255,   255,   256,   256,   256,   256,   258,   257,   257,   257,
     257,   257,   257,   257,   257,   259,   259,   259,   259,   260,
     260,   260,   261,   261,   262,   262,   263,   263,   264,   265,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   272,
     272,   273,   273,   274,   274,   274,   274,   275,   275,   276,
     277,   278,   280,   279,   279,   281,   281,   282,   283,   283,
     284,   285,   285,   285,   286,   286,   287,   287,   288,   289,
     290,   289,   291,   291,   291,   292,   292,   292,   293,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   297,   297,
     298,   298,   299,   299,   300,   300,   301,   301,   301,   302,
     302,   303,   303,   303,   303,   303,   303,   303,   303,   304,
     304,   304,   304,   305,   305,   305,   305,   305,   305,   306,
     306,   306,   307,   307,   307,   307,   307,   307,   307,   308,
     308,   309,   309
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     3,     7,    10,     0,     6,     0,     8,     9,
       5,     2,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     1,     2,     5,     8,     8,     5,     1,     0,    14,
       3,     3,     1,     0,     1,     2,     0,     9,     1,     3,
       1,     1,     1,     0,     1,     0,     0,    11,     0,     0,
       9,     0,     0,     8,     1,     2,     1,     2,     0,     0,
       3,     1,     0,     0,     3,     0,     0,     3,     1,     3,
       0,     2,     1,     2,     1,     4,     1,     4,     1,     4,
       3,     5,     3,     4,     4,     5,     0,     5,     4,     1,
       1,     1,     4,     0,     6,     0,     7,     0,     2,     0,
       3,     1,     0,     2,     3,     5,     4,     4,     5,     7,
       6,     0,     1,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     3,     2,     1,     0,     0,    10,
       3,     1,     3,     1,     3,     0,     1,     1,     2,     2,
       2,     3,     1,     3,     1,     1,     3,     4,     3,     0,
       1,     1,     3,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     3,     5,
       4,     3,     1,     0,     1,     3,     1,     2,     1,     4,
       3,     2,     1,     1,     0,     1,     3,     6,     3,     4,
       6,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     5,
       5,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     3,     3,     2,     9,    10,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     6,     5,
       6,     6,     6,     6,     4,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     4,     1,     2,     0,     2,     0,
       2,     3,     0,     1,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     3,     2,     2,     2,     4,     3,     1,     1,     3,
       1,     1,     1,     3,     2,     1,     3,     3,     1,     0,
       2,     0,     1,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     0,     6,     1,     2,     0,     3,     4,     4,
       3,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       0,     5,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     1,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     4,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     4,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   429,     0,     0,     0,     0,   315,
       0,     0,    84,   368,     0,   339,     0,     0,   342,   338,
      37,     0,     0,   329,   341,     0,     0,   345,   299,     0,
       0,     0,     0,    51,    91,     0,   340,     0,   337,   344,
       0,   346,     0,     0,     0,     5,   360,     0,     0,    86,
     343,     0,     0,     0,   411,     0,     0,    57,    25,   422,
     332,     0,   362,     3,     0,     7,    30,     8,     9,    71,
      72,     0,     0,   277,   378,    73,   404,     0,   365,   292,
       0,   377,     0,   379,     0,   407,     0,   403,   384,   402,
     405,   410,     0,   282,   361,   315,     0,     5,    73,   458,
     457,     0,   455,   454,   296,   263,   264,   265,   266,   291,
     289,   288,   287,   286,   285,   284,   283,   315,     0,     0,
     316,     0,   246,   381,     0,   244,     0,   434,     0,   371,
     231,     0,     0,   316,   322,   335,   323,     0,   325,   405,
       0,    87,    85,   160,     0,    73,   429,    41,     0,     0,
      43,     0,     0,     0,     0,   212,     0,     0,   290,   213,
       0,   155,     0,     0,   154,     0,     0,     0,     0,   428,
       0,     4,     0,   364,    45,   378,     0,   379,     0,     0,
       0,   348,   443,     0,   441,    31,     0,     0,    25,     0,
       0,    18,     0,    17,    35,   277,     0,     0,     0,   333,
       0,   334,     0,     0,     0,   306,     0,    15,    78,    81,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   245,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,   413,     0,   413,
       0,   423,   406,     0,     0,     0,   318,     0,     0,   438,
     380,     0,   294,   372,   430,     0,   318,     0,   146,   226,
       0,     0,   406,     0,     0,    49,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    50,     0,   330,     0,     0,
     214,   216,   378,   379,     0,   156,   379,     0,    48,    61,
       0,     0,   459,     0,     0,   426,     0,   425,   363,     0,
      11,     4,   146,    46,    47,     0,   360,     0,   347,   442,
       0,     0,   440,   367,   439,     0,    60,     0,     0,    68,
      70,    20,     0,     0,    14,     0,   278,   276,     0,    32,
      24,    26,    27,    28,     0,   295,   366,     6,   146,     0,
      88,    92,    75,   141,   413,   461,   396,   394,     0,   249,
     251,   250,     0,     0,   247,   248,   252,   254,   253,   268,
     267,   270,   269,   271,   273,   274,   272,   262,   261,   256,
     257,   255,   258,   259,   260,   275,     0,   228,   242,   241,
     240,   239,   238,   237,   236,   235,   234,   233,   232,     0,
       0,   145,   378,   379,   462,   397,   414,     0,   420,     0,
     416,   393,   415,   419,     0,     0,   456,   317,     0,     0,
       0,   433,     0,   432,   317,   396,     0,   397,   327,     0,
       0,   369,     0,   358,     0,     0,     0,   350,     0,   349,
     161,   357,   158,   141,   293,    23,     0,     0,     0,     0,
     211,   453,   331,   213,     0,     0,     0,     0,   153,    10,
       0,     0,   452,   428,   428,     0,   146,    13,     0,     0,
     448,     0,   446,   450,   449,   451,     0,   445,     0,     0,
       0,     0,     0,    19,    16,     0,   224,     0,   412,     0,
       0,    89,    95,    93,    82,     0,   142,   143,     0,     0,
     319,     0,   131,     0,   144,     0,   146,   146,   395,   281,
       0,     0,   229,   149,   314,     0,   146,   146,   399,     0,
     146,   392,   391,   382,   413,     0,   408,   409,   437,   436,
       0,   336,   324,   353,   354,   376,     0,   371,   369,     0,
     352,     0,     0,     0,     0,   110,     0,    25,   108,    56,
       0,     0,   215,   100,     0,   100,   102,   157,    25,   123,
     460,     0,   424,     0,     0,    12,   309,     0,   444,   116,
     116,    40,     0,    69,    53,    21,     0,   413,     0,   223,
     222,   225,   279,   218,     0,   307,    22,     0,    96,    79,
       0,     0,   141,     0,   321,   300,   141,     0,   133,   401,
       0,     0,   280,   335,     0,   378,   379,     0,     0,   421,
       0,   413,   413,   386,     0,     0,     0,   431,     0,   326,
       0,   356,   372,   370,     0,   351,   359,   159,   300,     0,
       0,     0,   213,     0,     0,   103,     0,   125,   127,   427,
     227,   308,     0,   116,     0,   116,     0,     0,    25,   121,
      36,     0,   393,   217,   413,   221,    29,    90,     0,     0,
      94,    98,   163,     0,   320,     0,     0,     0,   134,     0,
     310,   311,   230,   152,   312,   313,   390,     0,     0,   383,
     417,   418,   435,   328,   375,   374,   355,     0,   111,     0,
       0,     0,   101,     0,     0,   129,     0,     0,    33,   447,
       0,     0,     0,     0,     0,   112,     0,     0,   220,   387,
       0,    97,   163,     0,   195,    76,     0,    25,     0,   137,
       0,   136,   388,   389,   385,     0,    25,   109,    38,     0,
      25,   106,    55,    54,     0,     0,     0,     0,   128,     0,
       0,   119,   120,    25,   114,   113,     0,     0,   219,   195,
      99,   199,   200,   201,   204,   203,   202,     0,     0,   194,
      83,   162,   166,     0,     0,   193,   197,     0,     0,     0,
     304,     0,     0,   138,     0,   135,   373,     0,    25,   104,
      39,     0,     0,    25,     0,     0,   115,    25,   118,    58,
     122,    80,     0,     0,   171,   207,     0,    73,   198,     0,
     165,    25,   305,     0,   301,   297,     0,   140,   298,     0,
       0,     0,   130,    34,     0,   117,     0,     0,     0,   173,
     175,   170,     0,     0,   164,     0,     0,     0,     0,   302,
     139,     0,   107,     0,   124,    25,   210,   172,     5,     0,
     176,   177,     0,     0,   185,     0,     0,   208,   205,   167,
       0,    77,   303,   105,    25,     0,   174,   178,   179,   189,
       0,   180,     0,     0,     0,   209,   126,    63,     0,   188,
     181,   182,   186,   206,   141,     0,    59,    62,    64,   187,
       0,     0,     0,    65,   183,   168,     0,     0,     0,   191,
      25,   169,    66,     0,     0,   192,    25,     0,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   212,   213,    84,   217,   370,
     371,    86,   365,   173,   846,   906,   907,   908,   924,   358,
     359,   372,   373,   231,    89,   525,   798,    90,   380,   689,
     381,   621,    91,   522,   617,    92,   524,   620,   619,   688,
     690,   664,   585,   810,   762,   579,   312,   601,   674,   773,
     680,   668,   725,   728,   766,   531,   532,   533,   430,   431,
     183,   184,   164,   744,   791,   894,   917,   792,   823,   851,
     869,   870,   871,   872,   900,   873,   874,   875,   898,   921,
     793,   794,   795,   796,   826,   797,   174,   319,   320,   609,
     610,   611,   612,    93,    94,   516,   118,   696,   801,    96,
     378,    97,   534,   155,   156,   562,   649,   178,   220,   299,
      98,   565,   471,    99,   566,   294,   567,   100,   101,   289,
     102,   103,   643,   709,   613,   551,   552,   553,   104,   105,
     106,   107,   232,   108,   109,   110,   111,   437,   441,   442,
     443,   112,   336,   337,   148,   149,   203,   204,   506,   113,
     333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -765
static const yytype_int16 yypact[] =
{
    -765,   147,  1895,  -765,  6513,  6513,   -72,  6513,  6513,  6513,
    6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,
    6513,  6513,    85,    85,  4995,  6513,   336,     5,    79,   -41,
       9,  5121,  -765,  -765,    39,  -765,  5247,    41,  -765,  -765,
    -765,  6513,    63,    68,  -765,    99,   146,  -765,  -765,   -26,
     143,   174,   178,  -765,  -765,   184,  -765,   193,  -765,  -765,
     -25,  -765,   227,  5373,   321,   291,  -765,   235,  6513,  -765,
    -765,   251,   236,   135,  -765,   256,  6513,  -765,  -765,   255,
     233,   303,   131,  -765,    12,  -765,  -765,  -765,  -765,  -765,
    -765,   244,   278,  -765,  -765,   388,   370,   320,  -765,  -765,
    7026,  -765,     2,  1322,   285,  -765,   322,   400,   345,  -765,
      -9,  -765,   129,  -765,  -765,   354,   352,  -765,   388,  7775,
    7775,  6513,  7775,  7775,  1881,  -765,  -765,   432,  -765,  -765,
    -765,  -765,  -765,  -765,  -765,  -765,  -765,  -765,   364,   227,
     -40,   362,  -765,  -765,   375,  -765,    85,  7652,   361,   501,
    -765,   389,   227,   395,   393,   378,  -765,   397,   401,   -14,
     129,  -765,  -765,   522,    13,   388,  4995,  -765,  7067,   525,
    -765,  7108,   396,  4840,    15,  7775,    85,  5499,  -765,  6513,
    6513,  -765,   311,    17,  -765,   399,   398,  6513,    85,   379,
     227,  -765,   133,   262,  -765,   402,  7775,  1022,    85,  6639,
     155,  -765,    22,   327,  -765,  -765,  6513,  7151,  -765,    85,
     227,     6,    25,  -765,  -765,   404,  7192,  2050,  6513,   179,
     390,   337,   179,   130,   419,  -765,   422,  -765,  -765,  -765,
    -765,   -76,   510,   304,  6513,  6513,  6513,  5625,  6513,  6513,
    6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,
    6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,  6513,   336,
    -765,  -765,  -765,  5752,  6513,  6513,  6513,  6513,  6513,  6513,
    6513,  6513,  6513,  6513,  6513,  5879,   324,  6513,   198,  6513,
    6513,   255,    71,   423,  7233,   227,   116,   368,   374,  -765,
    -765,  6006,  -765,  6133,  -765,   227,   395,   250,  5879,  -765,
     250,   198,    -6,  7532,   430,  -765,   436,   437,  -765,  7532,
    -765,   573,    20,   441,  6513,  -765,   446,  -765,  7276,   447,
     589,  7775,   527,  1206,  6513,  -765,  -765,   -26,  -765,  -765,
     448,  7318,  -765,    27,   453,  -765,    32,  -765,   264,  1585,
    -765,  -765,  5879,  -765,  -765,   455,   549,  1473,  -765,  -765,
     365,   476,  -765,  -765,  -765,  7359,  -765,  2205,    33,  -765,
    -765,    81,   477,   135,  -765,  6513,  -765,  -765,   466,  -765,
    -765,  -765,  -765,  -765,  6772,  -765,  -765,  -765,  5879,   603,
     511,   514,  -765,   231,  6513,   470,   473,    -6,   129,  7815,
    1729,  1881,  6513,  7734,  2190,  2344,  2498,  2652,  2806,  2961,
    2961,  2961,  2961,   902,   902,   902,   902,   519,   519,   546,
     546,   546,   432,   432,   432,  -765,   228,  1881,  1881,  1881,
    1881,  1881,  1881,  1881,  1881,  1881,  1881,  1881,  1881,    85,
     480,   615,    34,    77,   478,   482,  7775,   481,  -765,  6513,
    -765,   483,    54,  -765,   484,  6813,  -765,   171,   470,   478,
      85,  7775,    85,  7693,   395,  -765,   488,  -765,  -765,  7532,
    7532,  7532,   491,  -765,   515,   227,   211,   -49,   516,  -765,
    -765,  -765,   631,   231,  -765,  -765,  7532,   509,  4065,   498,
    7775,  -765,  -765,  6513,  6513,    85,    -5,  6854,  -765,  -765,
    4220,    85,  -765,   379,   379,   635,  5879,  -765,  1740,   500,
    -765,  6513,  -765,  -765,  -765,  -765,   496,  -765,    -4,   574,
      85,   503,   523,  -765,  -765,  7400,    55,   505,  -765,   513,
    7532,  -765,   544,  -765,  -765,   518,  -765,  -765,   541,   227,
     395,   520,   665,    -7,  -765,   521,  5879,  5879,    -6,  2036,
    6513,   336,  -765,  -765,  -765,  6260,  5879,  5879,  -765,  6899,
    5879,   613,   614,  -765,  6513,  6513,  -765,  -765,  -765,  -765,
    6387,  -765,   548,  -765,  -765,   583,   528,   672,  7532,   227,
      86,   581,   550,  7532,   535,  -765,   675,  -765,  -765,  -765,
    6513,   538,  7775,   594,    85,   594,  -765,  -765,  -765,  -765,
    -765,    38,  -765,  6513,   542,  -765,  -765,  1268,  -765,   540,
     543,  -765,   551,  -765,  -765,  -765,  4375,  6513,   198,   563,
      56,  -765,  -765,  -765,   553,  -765,  -765,   225,  -765,  -765,
     225,   547,   231,   227,   395,   557,   -24,   556,   694,  -765,
     558,   561,  2036,   378,    85,    57,   181,   562,   564,  -765,
     565,  6513,  6513,  -765,   566,  6940,    85,  7775,   198,  -765,
    7532,  -765,  7532,  -765,   567,   232,  -765,  -765,   557,  7532,
    2360,  7442,  6513,    -5,   569,  -765,   570,  3910,   168,  -765,
    1881,  -765,   560,  -765,   -15,  -765,   -39,   225,  -765,  -765,
    -765,   568,   483,  -765,  6513,   563,  -765,  -765,   225,   575,
     708,  -765,  -765,   587,   395,   582,   588,    -1,   726,  7532,
    -765,  -765,  -765,  -765,  -765,  -765,  -765,   586,   590,   563,
    -765,  -765,  -765,  -765,  -765,   646,  -765,   592,  -765,   595,
     598,   600,  -765,  4530,  4530,   313,   602,  4840,  -765,  -765,
     132,  6513,     3,   601,   -20,  -765,   608,  2515,  -765,  -765,
     604,   708,  -765,   225,   185,  -765,     7,  -765,   609,   743,
    7532,  -765,  -765,  -765,  -765,  7532,  -765,  -765,  -765,  4685,
    -765,  -765,  -765,  -765,   612,   731,   692,  6513,  -765,   611,
    6983,  -765,  -765,  -765,  -765,  -765,   617,   618,  -765,   301,
    -765,  -765,  -765,  -765,  -765,  -765,  -765,   627,   225,  -765,
    -765,  -765,  -765,   619,   354,   417,  -765,    28,   616,   624,
    -765,    58,  2670,   759,  7532,  -765,  -765,  2825,  -765,  -765,
    -765,  2980,  6513,  -765,   623,  7483,  -765,  -765,  3910,  -765,
    -765,  -765,   762,    10,  -765,   764,    29,   388,  -765,   642,
    -765,  -765,  -765,    23,  -765,  -765,  7532,  -765,  -765,  3135,
     628,  7524,  3910,  -765,  4840,  3910,   629,  7532,   225,  -765,
     421,  -765,  7532,   634,  -765,   649,   769,  3290,   640,  -765,
    -765,   637,  -765,   763,  -765,  -765,  -765,  -765,   717,   641,
     421,  -765,   644,   719,   678,   647,   666,  -765,   788,  -765,
    7532,  -765,  -765,  -765,  -765,  3445,  -765,  -765,  -765,   512,
     225,  -765,   667,  7532,   653,  -765,  3910,   725,   670,   671,
     800,  -765,  -765,  -765,   231,   661,  -765,   725,  -765,  -765,
     225,   664,   225,  -765,  -765,  -765,   669,    94,   668,  -765,
    -765,  -765,  -765,  3600,   659,  -765,  -765,  3755,  -765
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -765,  -765,  -174,   -17,  -765,  -765,   454,  -765,  -136,  -765,
       1,  -765,  -765,  -765,  -765,  -765,  -765,   -87,  -765,  -765,
     312,     0,     8,  -117,  -765,  -765,  -765,  -765,  -765,  -765,
    -765,  -765,  -765,  -765,  -765,  -765,  -765,  -765,  -765,  -765,
     136,   238,   158,  -765,   101,  -765,  -765,  -765,  -449,    59,
    -765,  -765,  -765,  -765,  -765,  -466,  -765,   200,  -234,  -765,
    -765,   517,  -765,    90,  -765,  -765,  -765,  -765,  -765,  -765,
    -765,  -765,   -43,  -765,  -765,  -765,  -765,  -765,  -765,  -765,
    -765,  -765,  -765,  -764,  -765,  -765,  -765,  -471,  -765,   218,
    -765,  -765,  -765,   760,   434,  -765,    -2,   180,  -765,  -765,
    -765,    84,  -601,  -251,  -765,  -765,  -765,  -765,  -765,   208,
     721,   114,  -765,  -765,   274,   280,  -765,   892,   674,  -418,
     275,   904,  -765,  -765,  -559,  -765,  -765,   166,  -219,  -765,
     212,  -765,  -765,  -765,   -22,    18,  -765,  -266,  -286,  -765,
    -765,    48,   356,   357,   684,  -765,   347,   318,  -765,  -765,
    -765,  -765
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -401
static const yytype_int16 yytable[] =
{
      95,   283,    87,    85,   158,   140,   140,   574,   415,   153,
      88,   543,   581,   444,   386,   458,   687,   339,   848,   691,
     226,   304,   599,   314,   627,   327,   584,   165,   477,   771,
     748,   828,   558,   363,   559,   491,   829,   853,   799,   731,
     494,   510,  -147,   192,   159,   193,   494,   279,   306,   526,
     683,   732,   279,   527,   858,   279,   211,   435,   731,   440,
     382,   261,   262,   731,   456,  -150,   833,   137,   386,   435,
     732,    48,   357,   383,   160,   732,   736,   121,   455,   224,
     362,   457,   440,   350,  -316,  -148,   161,   691,   224,   733,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   528,   190,   529,   163,   141,   141,   499,   225,
     154,   117,   117,   165,   735,   554,   607,   684,   535,  -398,
     181,   138,   286,   139,  -398,   899,   683,   191,   182,   140,
     282,   117,   279,   775,   224,   296,  -381,  -381,   280,   628,
    -394,    74,   780,   280,   519,   749,   280,     3,   600,    79,
     754,   676,   351,   800,   772,   512,   693,   137,   166,   140,
     162,   849,   850,   227,   305,   140,   315,   498,   328,   859,
     478,   140,   140,   338,   313,   169,   364,   492,   302,   830,
     854,   140,   495,   511,  -147,   608,   608,   824,   669,  -151,
     172,   721,   140,   361,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   555,  -150,   834,   224,
     731,   138,   176,   139,   224,    95,   703,   177,   198,  -318,
    -395,   117,   732,   280,   730,   199,   734,  -148,   712,   352,
     141,    74,   726,   727,   144,   144,   769,   158,   157,    79,
    -381,  -381,   153,   198,   224,   919,   920,   867,   179,   876,
     199,   387,   781,   782,   783,   784,   785,   786,   348,   224,
     141,   224,   594,   210,  -316,   342,   141,   198,   447,   876,
     787,   117,   141,   141,   199,    74,   202,   159,   454,   185,
     225,   388,   141,   281,   340,   341,   467,   376,   644,   901,
     633,   541,   467,   141,   387,   180,   387,   142,   145,   224,
     137,   202,   630,   631,   526,   387,   387,   160,   527,   914,
     571,   916,   637,   638,   201,   387,   640,   205,   387,   387,
     496,   198,   682,   186,   388,   202,   388,   187,   199,   788,
     789,  -151,   219,   188,   438,   388,   388,    95,   790,    87,
      85,   681,   189,   154,    74,   388,   211,    88,   388,   388,
     439,   528,    79,   529,   138,    95,   139,   528,   144,   529,
     224,   117,   713,   117,   117,  -317,   530,   117,   781,   782,
     783,   784,   785,   786,    74,   707,   708,   764,   765,   202,
     228,  -132,    79,   137,   206,   209,   787,   468,   144,   440,
     224,   198,   224,   468,   144,  -318,    74,  -317,   199,   140,
     144,   144,   222,   208,    79,   214,   538,   218,   137,   198,
     144,   342,   140,   496,   229,   198,   199,   470,   740,   230,
     200,   144,   199,   475,   201,   198,   352,   221,   223,   440,
     353,  -400,   199,   140,   275,   140,   352,   138,   911,   139,
     385,   660,   467,   467,   467,   788,   789,   117,   570,   202,
      74,   137,   667,   233,   821,   276,   530,    74,    79,   467,
     434,   277,   151,   324,   152,    79,    48,   202,   140,   140,
      74,   157,   117,   202,   140,   278,   140,   140,    79,   578,
     190,   259,    74,   202,   781,   782,   783,   784,   785,   786,
      79,   589,   285,   140,   503,   287,    95,   195,    87,    85,
     141,   504,   334,   467,   448,   138,    88,   139,   288,   293,
     449,   505,   624,   141,    74,   117,   292,   295,   349,   158,
      74,   354,    79,   224,   153,    74,   297,   298,    79,  -196,
     300,   301,   311,    79,   141,   303,   141,   349,   309,   354,
     349,   354,   737,   468,   468,   468,   375,   528,   330,   529,
     329,   467,   655,   343,   366,   377,   467,   868,   379,   159,
     468,   253,   254,   255,   256,   257,   258,   140,   259,   141,
     141,   384,   383,   563,   564,   141,   472,   141,   141,   781,
     782,   783,   784,   785,   786,   473,   476,   474,   479,   160,
     575,   256,   257,   258,   141,   259,   481,   484,   483,   489,
     530,   485,   493,   530,   468,   530,   694,   679,   500,   530,
     501,   802,   507,   513,   322,   517,   520,   140,   521,   536,
     807,   523,   537,   545,   811,   154,   387,   546,   144,   140,
     544,   547,   550,   467,   616,   467,   548,   818,   561,   556,
     568,   144,   467,   569,   573,   576,   140,   580,   593,   572,
     596,   598,   468,   602,   604,   614,   388,   468,    95,   605,
     530,   618,   144,   615,   144,    95,   387,   622,   141,   623,
     625,   530,   839,   626,   641,   642,   629,   842,   648,   650,
     652,   845,   467,   651,   348,   658,   656,   657,   659,   662,
     663,   673,   671,   608,   675,   857,   388,   144,   144,   692,
     677,   695,   698,   144,   686,   144,   144,   699,   700,   432,
     855,   701,   704,   729,   705,   706,   743,   716,   141,   723,
     724,   710,   144,   738,   761,   761,   530,   742,   768,   885,
     141,   746,   432,   467,   468,    95,   468,   745,   467,   750,
     747,   752,   755,   468,   756,   753,   757,   141,   896,   758,
     759,   767,   774,   157,   776,   803,   804,   813,   814,   778,
     809,   812,   816,   822,   714,   825,   715,   819,   831,   820,
     832,   530,   836,   718,   843,   847,   432,   852,   856,   862,
     878,   865,   880,   468,   923,   879,   882,   467,   883,   884,
     927,  -184,   827,   889,   886,   888,   144,   890,   891,   892,
      95,   893,   904,   902,   905,    95,   909,  -190,   910,    95,
     912,   926,   432,   751,   915,   918,    95,   514,   922,   467,
     913,   722,   603,   666,   741,   763,   697,   887,   685,   817,
     467,   530,   779,   530,   468,   467,   215,    95,   717,   468,
      95,   702,   654,    95,   488,   864,   144,   653,   739,   591,
     307,   592,     0,   530,     0,    95,   325,     0,   144,     0,
       0,     0,     0,   467,   805,     0,     0,     0,     0,   806,
       0,     0,     0,   530,     0,   144,   467,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,   530,   468,     0,
       0,     0,     0,   530,    95,   530,   119,   120,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,     0,   147,   150,   837,     0,
     468,    95,     0,   168,     0,    95,   143,   143,   171,     0,
     432,   468,     0,   175,     0,     0,   468,     0,  -401,  -401,
    -401,  -401,   251,   252,   253,   254,   255,   256,   257,   258,
     860,   259,     0,     0,     0,   196,     0,     0,     0,     0,
     207,   866,     0,     0,   468,     0,   877,   197,   216,     0,
     432,   432,     0,     0,     0,     0,     0,   468,     0,   635,
     432,   432,     0,     0,   432,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   903,     0,     0,
       0,     0,     0,   284,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
     290,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
       0,   321,   196,     0,     0,     0,     0,     0,     0,   331,
     316,  -381,  -381,     0,   323,     0,   326,     0,     0,     0,
       0,   347,   332,   335,     0,     0,     0,     0,   355,     0,
       0,     0,   345,     0,     0,     0,     0,     0,     0,     0,
     374,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   389,   390,   391,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,     0,     0,     0,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   196,     0,   436,
       0,   436,   445,   344,     0,     0,     0,     0,     0,   433,
     469,   469,   469,   451,     0,   453,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,   433,     0,     0,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,   433,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   515,     0,     0,
       0,     0,     0,     0,     0,  -381,  -381,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   436,   234,   235,   236,
     486,     0,   433,     0,   539,     0,     0,     0,     0,   469,
       0,     0,     0,   237,   469,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
     542,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,   290,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,   290,     0,   290,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,   469,     0,   321,   582,     0,     0,     0,
     469,  -381,  -381,     0,     0,     0,     0,     0,   196,   583,
     586,     0,     0,   597,     0,   590,     0,   335,   335,     0,
     433,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
     469,     0,     0,   672,     0,     0,     0,     0,   196,   196,
       0,     0,   632,     0,     0,     0,     0,   196,   196,   196,
     433,   433,   196,     0,     0,     0,   436,   645,     0,   636,
     433,   433,   647,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,   661,     0,     0,     0,   469,     0,     0,     0,
       0,     0,   234,   235,   236,   670,     0,     0,   665,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   436,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,   436,   436,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     290,     0,     0,     0,   321,     0,     0,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   469,     0,
       0,     0,     0,   469,     0,     0,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,   502,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,   815,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
      34,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,   841,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,     0,    77,    78,   497,    79,
     236,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,    34,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
       0,    77,    78,   595,    79,     0,    80,    81,     4,     5,
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
     719,     0,     0,     0,     0,     0,    43,     0,    44,    45,
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
     777,    43,     0,    44,    45,    46,    47,    48,    49,    50,
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
       0,    77,    78,   835,    79,     0,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,     0,    77,    78,   838,    79,
       0,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,  -401,  -401,  -401,  -401,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,   840,     0,     0,     0,    43,     0,    44,    45,
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
       0,    77,    78,   881,    79,     0,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,     0,    77,    78,   897,    79,
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
       0,    77,    78,   925,    79,     0,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,     0,    77,    78,   928,    79,
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
       0,   577,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   588,     0,     0,     0,
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
       0,   678,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   760,     0,     0,     0,
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
       0,   808,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   392,     0,    79,     0,    80,    81,     0,     0,     0,
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
       0,    80,    81,   416,     0,     0,     0,     0,     0,     0,
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
     429,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      81,   634,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    79,     0,    80,    81,   646,     0,
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
     257,   258,     0,   259,     0,     0,     0,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   518,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   557,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   587,   237,   771,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   639,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   711,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   772,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   260,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   308,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   310,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   356,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   482,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   490,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   508,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     606,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   459,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   720,   461,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   462,     0,     0,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,   844,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    58,    59,   464,    61,
     465,   234,   235,   236,     0,     0,     0,   466,   117,     0,
       0,     0,     0,    70,   863,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     540,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,   560,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,   118,     2,     2,    26,    22,    23,   473,   259,    26,
       2,   429,   483,   279,   233,   301,   617,   191,     8,   620,
       8,     8,    26,     8,    31,     8,    31,    29,     8,    26,
      31,   795,   450,     8,   452,     8,     8,     8,    31,    78,
       8,     8,     8,    60,    26,    62,     8,    61,   165,    73,
     609,    90,    61,    77,    31,    61,    73,   276,    78,   278,
     136,    59,    60,    78,   298,     8,     8,    72,   287,   288,
      90,   112,   208,   149,    26,    90,   677,   149,   297,   128,
      74,   300,   301,    61,   133,     8,    81,   688,   128,   104,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   126,   128,   128,   146,    22,    23,   342,   149,
      26,   136,   136,   115,   153,    61,    61,    61,   384,   133,
     146,   126,   139,   128,   133,   889,   685,   152,   154,   146,
     112,   136,    61,   153,   128,   152,    59,    60,   152,   146,
     149,   146,   743,   152,   378,   146,   152,     0,   152,   154,
     709,   600,   130,   146,   151,    74,   622,    72,   149,   176,
      81,   151,   152,   151,   151,   182,   151,   341,   151,   146,
     150,   188,   189,   190,   173,   136,   151,   150,   160,   151,
     151,   198,   150,   150,   150,   130,   130,   788,   150,     8,
     149,   662,   209,   210,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   152,   150,   150,   128,
      78,   126,   149,   128,   128,   217,   634,   149,    88,   133,
     149,   136,    90,   152,   673,    95,   675,   150,   646,    99,
     146,   146,    64,    65,    22,    23,   104,   259,    26,   154,
      59,    60,   259,    88,   128,   151,   152,   848,   149,   850,
      95,   233,    67,    68,    69,    70,    71,    72,   103,   128,
     176,   128,   496,   128,   133,   149,   182,    88,   285,   870,
      85,   136,   188,   189,    95,   146,   146,   259,   295,   136,
     149,   233,   198,   154,   151,   152,   303,   157,   554,   890,
     541,    63,   309,   209,   276,   149,   278,    22,    23,   128,
      72,   146,   536,   537,    73,   287,   288,   259,    77,   910,
      99,   912,   546,   547,   103,   297,   550,    26,   300,   301,
     149,    88,   608,   149,   276,   146,   278,   149,    95,   144,
     145,   150,    99,   149,   136,   287,   288,   339,   153,   339,
     339,   607,   149,   259,   146,   297,   363,   339,   300,   301,
     152,   126,   154,   128,   126,   357,   128,   126,   146,   128,
     128,   136,   648,   136,   136,   133,   383,   136,    67,    68,
      69,    70,    71,    72,   146,   641,   642,    64,    65,   146,
     136,   150,   154,    72,   149,   149,    85,   303,   176,   608,
     128,    88,   128,   309,   182,   133,   146,   133,    95,   416,
     188,   189,    99,   152,   154,   149,   388,   152,    72,    88,
     198,   149,   429,   149,   136,    88,    95,   303,   684,    31,
      99,   209,    95,   309,   103,    88,    99,    80,    81,   648,
     103,    61,    95,   450,   149,   452,    99,   126,   904,   128,
     136,   577,   459,   460,   461,   144,   145,   136,   465,   146,
     146,    72,   588,   133,   153,   133,   473,   146,   154,   476,
     136,    61,   126,   152,   128,   154,   112,   146,   485,   486,
     146,   259,   136,   146,   491,   130,   493,   494,   154,   478,
     128,    49,   146,   146,    67,    68,    69,    70,    71,    72,
     154,   490,   128,   510,   129,   133,   498,    63,   498,   498,
     416,   136,   123,   520,   136,   126,   498,   128,   133,     8,
     136,   146,   529,   429,   146,   136,   155,   128,   200,   541,
     146,   203,   154,   128,   541,   146,   133,   149,   154,   112,
     133,   130,   136,   154,   450,    13,   452,   219,    13,   221,
     222,   223,   678,   459,   460,   461,   156,   126,   150,   128,
     151,   568,   569,   151,   150,   136,   573,   136,   136,   541,
     476,    42,    43,    44,    45,    46,    47,   584,    49,   485,
     486,    61,   149,   459,   460,   491,   146,   493,   494,    67,
      68,    69,    70,    71,    72,   149,    13,   150,   147,   541,
     476,    45,    46,    47,   510,    49,   150,     8,   151,   151,
     617,    74,   149,   620,   520,   622,   623,   606,   153,   626,
      61,   747,   136,   136,   180,   149,    13,   634,   107,   149,
     756,   107,   149,     8,   760,   541,   608,   149,   416,   646,
     150,   149,   149,   650,   520,   652,   155,   773,   150,   155,
     149,   429,   659,   128,    13,   136,   663,   149,    13,   133,
     150,   155,   568,    79,   151,   150,   608,   573,   660,   136,
     677,   117,   450,   150,   452,   667,   648,   149,   584,   128,
     150,   688,   808,     8,    61,    61,   155,   813,   130,    96,
       8,   817,   699,   155,   103,   150,   136,   573,    13,   151,
      96,   151,   150,   130,   151,   831,   648,   485,   486,   152,
     149,   144,   146,   491,   151,   493,   494,    13,   150,   275,
     827,   150,   150,   153,   150,   150,     8,   150,   634,   150,
     150,   155,   510,   155,   723,   724,   743,   152,   727,   865,
     646,   149,   298,   750,   650,   737,   652,   150,   755,    13,
     152,   155,    96,   659,   152,   155,   151,   663,   884,   151,
     150,   149,   151,   541,   146,   146,    13,    26,    66,   155,
     759,   149,   151,   136,   650,   146,   652,   150,   152,   151,
     146,   788,    13,   659,   151,    13,   342,    13,   136,   151,
     146,   152,    13,   699,   920,   136,   146,   804,   151,    26,
     926,    74,   794,    74,   153,   151,   584,   119,   151,   133,
     802,    13,   149,   136,    79,   807,   136,   136,     8,   811,
     149,   152,   378,   699,   150,   146,   818,   363,   150,   836,
     907,   663,   510,   585,   688,   724,   626,   870,   610,   770,
     847,   848,   742,   850,   750,   852,    76,   839,   658,   755,
     842,   633,   568,   845,   327,   844,   634,   567,   682,   493,
     166,   494,    -1,   870,    -1,   857,   182,    -1,   646,    -1,
      -1,    -1,    -1,   880,   750,    -1,    -1,    -1,    -1,   755,
      -1,    -1,    -1,   890,    -1,   663,   893,    -1,    -1,    -1,
      -1,    -1,    -1,   885,    -1,    -1,    -1,   904,   804,    -1,
      -1,    -1,    -1,   910,   896,   912,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    25,   804,    -1,
     836,   923,    -1,    31,    -1,   927,    22,    23,    36,    -1,
     496,   847,    -1,    41,    -1,    -1,   852,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     836,    49,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      68,   847,    -1,    -1,   880,    -1,   852,    63,    76,    -1,
     536,   537,    -1,    -1,    -1,    -1,    -1,   893,    -1,   545,
     546,   547,    -1,    -1,   550,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   880,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,   187,
     176,    59,    60,    -1,   180,    -1,   182,    -1,    -1,    -1,
      -1,   199,   188,   189,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,    -1,   277,
      -1,   279,   280,   151,    -1,    -1,    -1,    -1,    -1,   275,
     459,   460,   461,   291,    -1,   293,    -1,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,    -1,   476,    -1,    -1,
      -1,    -1,   298,    -1,    -1,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,
      -1,   520,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    -1,    -1,   384,     9,    10,    11,
      74,    -1,   378,    -1,   392,    -1,    -1,    -1,    -1,   568,
      -1,    -1,    -1,    25,   573,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   439,    -1,   429,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   450,    -1,   452,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   650,    -1,   652,    -1,   483,   484,    -1,    -1,    -1,
     659,    59,    60,    -1,    -1,    -1,    -1,    -1,   496,   485,
     486,    -1,    -1,   501,    -1,   491,    -1,   493,   494,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,
     699,    -1,    -1,   155,    -1,    -1,    -1,    -1,   536,   537,
      -1,    -1,   540,    -1,    -1,    -1,    -1,   545,   546,   547,
     536,   537,   550,    -1,    -1,    -1,   554,   555,    -1,   545,
     546,   547,   560,    -1,   550,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   750,   580,    -1,    -1,    -1,   755,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   593,    -1,    -1,   584,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   607,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,   804,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   641,   642,    -1,    -1,    -1,   634,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     646,    -1,    -1,    -1,   662,    -1,    -1,   836,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   663,   847,    -1,
      -1,    -1,    -1,   852,    -1,    -1,   684,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,   880,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   893,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   731,    -1,    -1,   153,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,   767,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,   812,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
      11,   156,   157,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,    89,
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
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   151,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,
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
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    25,    -1,    27,    28,    29,    30,
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
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,   125,   126,   127,
     128,     9,    10,    11,    -1,    -1,    -1,   135,   136,    -1,
      -1,    -1,    -1,   141,   150,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49
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
     156,   157,   161,   162,   165,   168,   169,   179,   180,   182,
     185,   190,   193,   251,   252,   254,   257,   259,   268,   271,
     275,   276,   278,   279,   286,   287,   288,   289,   291,   292,
     293,   294,   299,   307,   309,    72,   126,   136,   254,   275,
     275,   149,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,    72,   126,   128,
     161,   259,   278,   279,   288,   278,    31,   275,   302,   303,
     275,   126,   128,   161,   259,   261,   262,   288,   292,   293,
     299,    81,    81,   146,   220,   254,   149,   151,   275,   136,
     151,   275,   149,   171,   244,   275,   149,   149,   265,   149,
     149,   146,   154,   218,   219,   136,   149,   149,   149,   149,
     128,   152,   161,   161,   151,   252,   275,   279,    88,    95,
      99,   103,   146,   304,   305,    26,   149,   275,   152,   149,
     128,   161,   163,   164,   149,   251,   275,   166,   152,    99,
     266,   304,    99,   304,   128,   149,     8,   151,   136,   136,
      31,   181,   290,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     151,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   133,    61,   130,    61,
     152,   154,   293,   181,   275,   128,   161,   133,   133,   277,
     279,    96,   155,     8,   273,   128,   161,   133,   149,   267,
     133,   130,   293,    13,     8,   151,   181,   302,   151,    13,
     151,   136,   204,   168,     8,   151,   279,   150,   275,   245,
     246,   275,   252,   279,   152,   276,   279,     8,   151,   151,
     150,   275,   279,   308,   123,   279,   300,   301,   161,   160,
     151,   152,   149,   151,   151,   279,   137,   275,   103,   305,
      61,   130,    99,   103,   305,   275,   151,   166,   177,   178,
     279,   161,    74,     8,   151,   170,   150,   150,   115,   153,
     167,   168,   179,   180,   275,   156,   157,   136,   258,   136,
     186,   188,   136,   149,    61,   136,   286,   293,   299,   275,
     275,   275,    26,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   261,    31,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,    31,
     216,   217,   252,   279,   136,   286,   275,   295,   136,   152,
     286,   296,   297,   298,   295,   275,   150,   161,   136,   136,
      31,   275,    31,   275,   161,   286,   216,   286,   296,    42,
      43,    61,    73,    82,   126,   128,   135,   161,   259,   268,
     269,   270,   146,   149,   150,   269,    13,     8,   150,   147,
     275,   150,   150,   151,     8,    74,    74,   275,   219,   151,
     150,     8,   150,   149,     8,   150,   149,   153,   160,   216,
     153,    61,   153,   129,   136,   146,   306,   136,   150,   153,
       8,   150,    74,   136,   164,   275,   253,   149,   153,   216,
      13,   107,   191,   107,   194,   183,    73,    77,   126,   128,
     161,   213,   214,   215,   260,   295,   149,   149,   293,   275,
      26,    63,   279,   277,   150,     8,   149,   149,   155,   275,
     149,   283,   284,   285,    61,   152,   155,   153,   277,   277,
      96,   150,   263,   269,   269,   269,   272,   274,   149,   128,
     161,    99,   133,    13,   213,   269,   136,    26,   168,   203,
     149,   245,   275,   279,    31,   200,   279,   153,    26,   168,
     279,   300,   301,    13,   216,   153,   150,   275,   155,    26,
     152,   205,    79,   178,   151,   136,   150,    61,   130,   247,
     248,   249,   250,   282,   150,   150,   269,   192,   117,   196,
     195,   189,   149,   128,   161,   150,     8,    31,   146,   155,
     216,   216,   275,   261,    31,   252,   279,   216,   216,   153,
     216,    61,    61,   280,   295,   275,    31,   275,   130,   264,
      96,   155,     8,   273,   272,   161,   136,   269,   150,    13,
     166,   275,   151,    96,   199,   279,   199,   166,   209,   150,
     275,   150,   155,   151,   206,   151,   206,   149,    26,   168,
     208,   295,   296,   282,    61,   247,   151,   260,   197,   187,
     198,   260,   152,   213,   161,   144,   255,   215,   146,    13,
     150,   150,   267,   277,   150,   150,   150,   295,   295,   281,
     155,   153,   277,   296,   269,   269,   150,   255,   269,   100,
     150,   245,   200,   150,   150,   210,    64,    65,   211,   153,
     206,    78,    90,   104,   206,   153,   260,   166,   155,   285,
     295,   198,   152,     8,   221,   150,   149,   152,    31,   146,
      13,   269,   155,   155,   282,    96,   152,   151,   151,   150,
      26,   168,   202,   202,    64,    65,   212,   149,   168,   104,
     275,    26,   151,   207,   151,   153,   146,   105,   155,   221,
     260,    67,    68,    69,    70,    71,    72,    85,   144,   145,
     153,   222,   225,   238,   239,   240,   241,   243,   184,    31,
     146,   256,   166,   146,    13,   269,   269,   166,    26,   168,
     201,   166,   149,    26,    66,   275,   151,   207,   166,   150,
     151,   153,   136,   226,   260,   146,   242,   254,   241,     8,
     151,   152,   146,     8,   150,   153,    13,   269,   153,   166,
     102,   275,   166,   151,   150,   166,   172,    13,     8,   151,
     152,   227,    13,     8,   151,   181,   136,   166,    31,   146,
     269,   101,   151,   150,   168,   152,   269,   260,   136,   228,
     229,   230,   231,   233,   234,   235,   260,   269,   146,   136,
      13,   153,   146,   151,    26,   166,   153,   230,   151,    74,
     119,   151,   133,    13,   223,   269,   166,   153,   236,   241,
     232,   260,   136,   269,   149,    79,   173,   174,   175,   136,
       8,   213,   149,   175,   260,   150,   260,   224,   146,   151,
     152,   237,   150,   166,   176,   153,   152,   166,   153
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

  case 26:

    { observers.ClearExpressions(); ;}
    break;

  case 35:

    {;}
    break;

  case 37:

    {;}
    break;

  case 58:

    { observers.ExceptionCatchFound((yyvsp[(8) - (9)])); ;}
    break;

  case 66:

    { observers.ExceptionCatchFound((yyvsp[(4) - (5)])); ;}
    break;

  case 73:

    { (yyval).Token = 0; ;}
    break;

  case 74:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 75:

    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 76:

    { observers.FunctionFound(analyzer.GetLineNumber()); ;}
    break;

  case 77:

    { observers.FunctionEnd((yyvsp[(11) - (11)])); ;}
    break;

  case 78:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 79:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 80:

    { observers.ClassEnd(analyzer.GetLineNumber()); ;}
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

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false); ;}
    break;

  case 85:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false); ;}
    break;

  case 86:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false); ;}
    break;

  case 87:

    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false); ;}
    break;

  case 89:

    { observers.QualifiedNameClear(); ;}
    break;

  case 90:

    { observers.ClassSetExtends(); ;}
    break;

  case 91:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true); ;}
    break;

  case 93:

    { observers.QualifiedNameClear(); ;}
    break;

  case 96:

    { observers.QualifiedNameClear(); ;}
    break;

  case 98:

    { observers.ClassAddToImplements(); ;}
    break;

  case 99:

    { observers.ClassAddToImplements(); ;}
    break;

  case 102:

    { observers.ForeachVariableFound(); ;}
    break;

  case 103:

    { observers.ForeachVariableFound(); ;}
    break;

  case 133:

    { observers.ParametersListSetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 134:

    { observers.ParametersListSetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 135:

    { observers.ParametersListSetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 136:

    { observers.ParametersListSetName((yyvsp[(2) - (4)]), false); ;}
    break;

  case 137:

    { observers.ParametersListSetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 138:

    { observers.ParametersListSetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 139:

    { observers.ParametersListSetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 140:

    { observers.ParametersListSetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 141:

    { observers.ParametersListCreate(); ;}
    break;

  case 142:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 143:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 144:

    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 147:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 148:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 149:

    { observers.ExpressionAsCallArgument(); ;}
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

  case 155:

    { observers.GlobalVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 158:

    { observers.StaticVariableFound((yyvsp[(3) - (3)])); ;}
    break;

  case 159:

    { observers.StaticVariableFound((yyvsp[(3) - (5)])); ;}
    break;

  case 160:

    { observers.StaticVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 161:

    { observers.StaticVariableFound((yyvsp[(1) - (3)])); ;}
    break;

  case 164:

    { observers.ClassMemberClear(); ;}
    break;

  case 165:

    { observers.ClassMemberClear(); ;}
    break;

  case 167:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 168:

    { observers.ClassMemberFound(false, analyzer.GetLineNumber()); ;}
    break;

  case 169:

    { observers.ClassMemberClear(); ;}
    break;

  case 191:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 192:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 194:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 199:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 200:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 201:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 202:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 203:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 204:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 205:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 206:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 207:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 208:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 209:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 210:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 228:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 229:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 230:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 231:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 232:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 233:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 234:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 235:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 236:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 237:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 244:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 251:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 252:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 264:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 265:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 266:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 271:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 272:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { /* no need to push here as this is recursive */ ;}
    break;

  case 277:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 278:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 280:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 281:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 282:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 283:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 284:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 285:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 286:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 287:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 288:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 293:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 294:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (3)])); ;}
    break;

  case 295:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 297:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 298:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (10)])); ;}
    break;

  case 306:

    { observers.FunctionCallStart(); ;}
    break;

  case 307:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 337:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 338:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 339:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 340:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 341:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 342:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 343:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 348:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 358:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 377:

    { observers.ExpressionFound(); ;}
    break;

  case 378:

    { observers.ExpressionFound(); ;}
    break;

  case 382:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 387:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 390:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 391:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 392:

    { (yyval).Token = 0; ;}
    break;

  case 393:

    { (yyval).Token = 0; ;}
    break;

  case 399:

    {;}
    break;

  case 400:

    {;}
    break;

  case 401:

    {;}
    break;

  case 403:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 404:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 411:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 426:

    { observers.ForeachVariableFound(); ;}
    break;

  case 454:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 455:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 457:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 458:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 461:

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




