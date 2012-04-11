
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
#define YYLAST   7922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  155
/* YYNRULES -- Number of rules.  */
#define YYNRULES  465
/* YYNRULES -- Number of states.  */
#define YYNSTATES  932

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
     605,   606,   611,   613,   614,   619,   621,   622,   627,   628,
     630,   632,   635,   638,   641,   645,   647,   651,   653,   655,
     659,   664,   668,   669,   671,   673,   677,   679,   681,   682,
     684,   686,   689,   691,   693,   695,   697,   699,   701,   705,
     711,   713,   717,   723,   728,   732,   734,   735,   737,   741,
     743,   746,   748,   753,   757,   760,   762,   764,   765,   767,
     771,   778,   782,   787,   794,   797,   801,   805,   809,   813,
     817,   821,   825,   829,   833,   837,   841,   844,   847,   850,
     853,   857,   861,   865,   869,   873,   877,   881,   885,   889,
     893,   897,   901,   905,   909,   913,   917,   920,   923,   926,
     929,   933,   937,   941,   945,   949,   953,   957,   961,   965,
     969,   971,   972,   978,   984,   989,   991,   994,   997,  1000,
    1003,  1006,  1009,  1012,  1015,  1018,  1020,  1025,  1029,  1033,
    1036,  1046,  1057,  1059,  1060,  1065,  1069,  1074,  1076,  1079,
    1080,  1086,  1093,  1099,  1106,  1113,  1120,  1127,  1132,  1134,
    1136,  1140,  1143,  1145,  1149,  1152,  1154,  1156,  1161,  1163,
    1166,  1167,  1170,  1171,  1174,  1178,  1179,  1181,  1183,  1184,
    1188,  1190,  1192,  1194,  1196,  1198,  1200,  1202,  1204,  1206,
    1208,  1212,  1215,  1217,  1219,  1223,  1226,  1229,  1232,  1237,
    1241,  1243,  1245,  1249,  1251,  1253,  1255,  1259,  1262,  1264,
    1268,  1272,  1274,  1275,  1278,  1279,  1281,  1287,  1291,  1295,
    1297,  1299,  1301,  1303,  1305,  1307,  1308,  1315,  1317,  1320,
    1321,  1325,  1330,  1335,  1339,  1341,  1343,  1344,  1346,  1349,
    1353,  1357,  1359,  1364,  1365,  1371,  1373,  1375,  1377,  1379,
    1382,  1384,  1389,  1394,  1396,  1398,  1403,  1404,  1406,  1408,
    1410,  1415,  1420,  1422,  1424,  1428,  1430,  1433,  1437,  1439,
    1441,  1446,  1447,  1448,  1451,  1457,  1461,  1465,  1467,  1474,
    1479,  1484,  1487,  1490,  1493,  1495,  1498,  1500,  1505,  1509,
    1513,  1520,  1524,  1526,  1528,  1530,  1535,  1540,  1543,  1546,
    1551,  1554,  1557,  1559,  1563,  1567
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
     136,    13,   272,    -1,    85,   136,    13,   272,    -1,   166,
     167,    -1,    -1,   168,    -1,   179,    -1,   180,    -1,   115,
     149,   150,   151,    -1,   169,    -1,   136,    26,    -1,   152,
     166,   153,    -1,   116,   149,   278,   150,   168,   209,   211,
      -1,   116,   149,   278,   150,    26,   166,   210,   212,    66,
     151,    -1,    -1,   147,   149,   170,   278,   150,   208,    -1,
      -1,    93,   171,   168,   147,   149,   278,   150,   151,    -1,
     109,   149,   248,   151,   248,   151,   248,   150,   201,    -1,
     138,   149,   278,   150,   205,    -1,    76,   151,    -1,    76,
     278,   151,    -1,    87,   151,    -1,    87,   278,   151,    -1,
     134,   151,    -1,   134,   255,   151,    -1,   134,   282,   151,
      -1,   113,   218,   151,    -1,    72,   220,   151,    -1,    97,
     247,   151,    -1,   118,    -1,   278,   151,    -1,   143,   149,
     177,   150,   151,    -1,   110,   149,   282,    74,   200,   199,
     150,   202,    -1,   110,   149,   255,    74,   282,   199,   150,
     202,    -1,    89,   149,   204,   150,   203,    -1,   151,    -1,
      -1,   142,   152,   166,   153,    79,   149,   263,   146,   150,
     172,   152,   166,   153,   173,    -1,   139,   278,   151,    -1,
     114,   136,   151,    -1,   174,    -1,    -1,   175,    -1,   174,
     175,    -1,    -1,    79,   149,   263,   146,   150,   176,   152,
     166,   153,    -1,   178,    -1,   177,     8,   178,    -1,   282,
      -1,   182,    -1,   185,    -1,    -1,    31,    -1,    -1,    -1,
     257,   181,   136,   183,   149,   213,   150,   184,   152,   166,
     153,    -1,    -1,    -1,   190,   136,   186,   191,   196,   187,
     152,   221,   153,    -1,    -1,    -1,   193,   136,   188,   194,
     189,   152,   221,   153,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,    -1,   107,   192,   263,
      -1,   120,    -1,    -1,    -1,   107,   195,   198,    -1,    -1,
      -1,   117,   197,   198,    -1,   263,    -1,   198,     8,   263,
      -1,    -1,    96,   200,    -1,   282,    -1,    31,   282,    -1,
     168,    -1,    26,   166,   101,   151,    -1,   168,    -1,    26,
     166,   102,   151,    -1,   168,    -1,    26,   166,   100,   151,
      -1,   136,    13,   272,    -1,   204,     8,   136,    13,   272,
      -1,   152,   206,   153,    -1,   152,   151,   206,   153,    -1,
      26,   206,   104,   151,    -1,    26,   151,   206,   104,   151,
      -1,    -1,   206,    78,   278,   207,   166,    -1,   206,    90,
     207,   166,    -1,    26,    -1,   151,    -1,   168,    -1,    26,
     166,   105,   151,    -1,    -1,   209,    64,   149,   278,   150,
     168,    -1,    -1,   210,    64,   149,   278,   150,    26,   166,
      -1,    -1,    65,   168,    -1,    -1,    65,    26,   166,    -1,
     214,    -1,    -1,   215,   146,    -1,   215,    31,   146,    -1,
     215,    31,   146,    13,   272,    -1,   215,   146,    13,   272,
      -1,   214,     8,   215,   146,    -1,   214,     8,   215,    31,
     146,    -1,   214,     8,   215,    31,   146,    13,   272,    -1,
     214,     8,   215,   146,    13,   272,    -1,    -1,    73,    -1,
      77,    -1,   263,    -1,   217,    -1,    -1,   255,    -1,   282,
      -1,    31,   280,    -1,   217,     8,   255,    -1,   217,     8,
     282,    -1,   217,     8,    31,   280,    -1,   218,     8,   219,
      -1,   219,    -1,   146,    -1,   154,   279,    -1,   154,   152,
     278,   153,    -1,   220,     8,   146,    -1,   220,     8,   146,
      13,   272,    -1,   146,    -1,   146,    13,   272,    -1,   221,
     222,    -1,    -1,   241,   245,   151,    -1,   246,   151,    -1,
     225,    -1,    -1,    -1,   242,   257,   181,   136,   223,   149,
     213,   150,   224,   240,    -1,    -1,   144,   226,   227,   229,
      -1,   263,    -1,    -1,   227,     8,   228,   263,    -1,   151,
      -1,    -1,   152,   230,   231,   153,    -1,    -1,   232,    -1,
     233,    -1,   232,   233,    -1,   234,   151,    -1,   238,   151,
      -1,   237,   119,   235,    -1,   263,    -1,   235,     8,   263,
      -1,   136,    -1,   237,    -1,   263,   133,   136,    -1,   236,
      74,   239,   136,    -1,   236,    74,   244,    -1,    -1,   244,
      -1,   151,    -1,   152,   166,   153,    -1,   243,    -1,   145,
      -1,    -1,   243,    -1,   244,    -1,   243,   244,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   245,     8,   146,    -1,   245,     8,   146,    13,   272,
      -1,   146,    -1,   146,    13,   272,    -1,   246,     8,   136,
      13,   272,    -1,    85,   136,    13,   272,    -1,   247,     8,
     278,    -1,   278,    -1,    -1,   249,    -1,   249,     8,   278,
      -1,   278,    -1,   250,   285,    -1,   285,    -1,   251,    61,
     298,   155,    -1,    61,   298,   155,    -1,   251,   250,    -1,
     251,    -1,   250,    -1,    -1,   252,    -1,    63,   264,   270,
      -1,   123,   149,   303,   150,    13,   278,    -1,   282,    13,
     278,    -1,   282,    13,    31,   282,    -1,   282,    13,    31,
      63,   264,   270,    -1,    62,   278,    -1,   282,    24,   278,
      -1,   282,    23,   278,    -1,   282,    22,   278,    -1,   282,
      21,   278,    -1,   282,    20,   278,    -1,   282,    19,   278,
      -1,   282,    18,   278,    -1,   282,    17,   278,    -1,   282,
      16,   278,    -1,   282,    15,   278,    -1,   282,    14,   278,
      -1,   281,    60,    -1,    60,   281,    -1,   281,    59,    -1,
      59,   281,    -1,   278,    27,   278,    -1,   278,    28,   278,
      -1,   278,     9,   278,    -1,   278,    11,   278,    -1,   278,
      10,   278,    -1,   278,    29,   278,    -1,   278,    31,   278,
      -1,   278,    30,   278,    -1,   278,    44,   278,    -1,   278,
      42,   278,    -1,   278,    43,   278,    -1,   278,    45,   278,
      -1,   278,    46,   278,    -1,   278,    47,   278,    -1,   278,
      41,   278,    -1,   278,    40,   278,    -1,    42,   278,    -1,
      43,   278,    -1,    48,   278,    -1,    50,   278,    -1,   278,
      33,   278,    -1,   278,    32,   278,    -1,   278,    35,   278,
      -1,   278,    34,   278,    -1,   278,    36,   278,    -1,   278,
      39,   278,    -1,   278,    37,   278,    -1,   278,    38,   278,
      -1,   278,    49,   264,    -1,   149,   278,   150,    -1,   254,
      -1,    -1,   149,   254,   150,   256,   253,    -1,   278,    25,
     278,    26,   278,    -1,   278,    25,    26,   278,    -1,   310,
      -1,    58,   278,    -1,    57,   278,    -1,    56,   278,    -1,
      55,   278,    -1,    54,   278,    -1,    53,   278,    -1,    52,
     278,    -1,   106,   268,    -1,    51,   278,    -1,   274,    -1,
      73,   149,   305,   150,    -1,    61,   305,   155,    -1,   156,
     269,   156,    -1,    12,   278,    -1,   257,   181,   149,   213,
     150,   258,   152,   166,   153,    -1,    72,   257,   181,   149,
     213,   150,   258,   152,   166,   153,    -1,   112,    -1,    -1,
     144,   149,   259,   150,    -1,   259,     8,   146,    -1,   259,
       8,    31,   146,    -1,   146,    -1,    31,   146,    -1,    -1,
     161,   149,   261,   216,   150,    -1,   126,   128,   161,   149,
     216,   150,    -1,   128,   161,   149,   216,   150,    -1,   262,
     133,   136,   149,   216,   150,    -1,   262,   133,   289,   149,
     216,   150,    -1,   291,   133,   136,   149,   216,   150,    -1,
     291,   133,   289,   149,   216,   150,    -1,   289,   149,   216,
     150,    -1,    72,    -1,   161,    -1,   126,   128,   161,    -1,
     128,   161,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   262,    -1,   265,    -1,   295,   130,   299,   266,
      -1,   295,    -1,   266,   267,    -1,    -1,   130,   299,    -1,
      -1,   149,   150,    -1,   149,   278,   150,    -1,    -1,    99,
      -1,   307,    -1,    -1,   149,   216,   150,    -1,   124,    -1,
      92,    -1,    86,    -1,   122,    -1,   108,    -1,    91,    -1,
     141,    -1,   125,    -1,   111,    -1,   127,    -1,   135,    99,
     103,    -1,   135,   103,    -1,   271,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,    42,   272,    -1,    43,
     272,    -1,    73,   149,   275,   150,    -1,    61,   275,   155,
      -1,   273,    -1,    82,    -1,   262,   133,   136,    -1,   137,
      -1,   312,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   271,    -1,   157,   307,   157,    -1,   135,   307,
     103,    -1,    82,    -1,    -1,   277,   276,    -1,    -1,     8,
      -1,   277,     8,   272,    96,   272,    -1,   277,     8,   272,
      -1,   272,    96,   272,    -1,   272,    -1,   279,    -1,   255,
      -1,   282,    -1,   282,    -1,   282,    -1,    -1,   294,   130,
     299,   288,   283,   284,    -1,   294,    -1,   284,   285,    -1,
      -1,   130,   299,   288,    -1,   286,    61,   298,   155,    -1,
     287,    61,   298,   155,    -1,   149,   216,   150,    -1,   287,
      -1,   286,    -1,    -1,   296,    -1,   302,   296,    -1,   262,
     133,   289,    -1,   291,   133,   289,    -1,   296,    -1,   292,
      61,   298,   155,    -1,    -1,   260,   293,    61,   298,   155,
      -1,   295,    -1,   292,    -1,   260,    -1,   296,    -1,   302,
     296,    -1,   290,    -1,   296,    61,   298,   155,    -1,   296,
     152,   278,   153,    -1,   297,    -1,   146,    -1,   154,   152,
     278,   153,    -1,    -1,   278,    -1,   300,    -1,   289,    -1,
     300,    61,   298,   155,    -1,   300,   152,   278,   153,    -1,
     301,    -1,   136,    -1,   152,   278,   153,    -1,   154,    -1,
     302,   154,    -1,   303,     8,   304,    -1,   304,    -1,   282,
      -1,   123,   149,   303,   150,    -1,    -1,    -1,   306,   276,
      -1,   306,     8,   278,    96,   278,    -1,   306,     8,   278,
      -1,   278,    96,   278,    -1,   278,    -1,   306,     8,   278,
      96,    31,   280,    -1,   306,     8,    31,   280,    -1,   278,
      96,    31,   280,    -1,    31,   280,    -1,   307,   308,    -1,
     307,    99,    -1,   308,    -1,    99,   308,    -1,   146,    -1,
     146,    61,   309,   155,    -1,   146,   130,   136,    -1,    95,
     278,   153,    -1,    95,   137,    61,   278,   155,   153,    -1,
      88,   282,   153,    -1,   136,    -1,   129,    -1,   146,    -1,
     121,   149,   311,   150,    -1,    98,   149,   282,   150,    -1,
       7,   278,    -1,     6,   278,    -1,     5,   149,   278,   150,
      -1,     4,   278,    -1,     3,   278,    -1,   282,    -1,   311,
       8,   282,    -1,   262,   133,   136,    -1,   291,   133,   136,
      -1
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
     449,   454,   455,   458,   460,   463,   465,   468,   470,   473,
     475,   479,   480,   484,   485,   486,   487,   488,   489,   490,
     491,   495,   496,   497,   498,   502,   503,   507,   508,   509,
     510,   511,   512,   516,   517,   521,   522,   523,   527,   528,
     529,   530,   534,   535,   539,   540,   541,   542,   543,   542,
     548,   548,   553,   554,   554,   559,   560,   560,   565,   567,
     571,   572,   576,   577,   581,   585,   586,   590,   591,   595,
     599,   600,   603,   605,   609,   610,   614,   615,   618,   620,
     624,   625,   629,   630,   631,   632,   633,   634,   638,   639,
     640,   641,   645,   647,   651,   652,   656,   658,   662,   663,
     670,   671,   675,   676,   680,   681,   682,   685,   687,   691,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   746,   748,   751,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   767,
     768,   770,   775,   778,   780,   784,   785,   786,   787,   791,
     791,   793,   796,   798,   800,   802,   804,   806,   811,   812,
     813,   814,   818,   819,   820,   824,   825,   829,   832,   836,
     837,   841,   844,   846,   847,   850,   852,   853,   856,   858,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   890,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   905,   907,   910,   912,   916,   917,   918,   919,
     923,   924,   929,   934,   938,   944,   942,   946,   950,   951,
     955,   961,   962,   966,   970,   971,   972,   976,   977,   981,
     982,   986,   990,   991,   991,   996,   997,   998,  1002,  1003,
    1004,  1008,  1009,  1010,  1014,  1015,  1018,  1020,  1024,  1025,
    1029,  1030,  1031,  1035,  1036,  1040,  1041,  1045,  1046,  1050,
    1051,  1052,  1055,  1057,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1072,  1073,  1074,  1075,  1079,  1080,  1081,  1082,
    1083,  1084,  1088,  1089,  1090,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1104,  1105,  1109,  1110
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
  "class_statement", "$@14", "$@15", "trait_use_statement", "$@16",
  "trait_list", "$@17", "trait_adaptations", "$@18",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "$@19", "function", "lexical_vars",
  "lexical_var_list", "function_call", "$@20", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@21",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference", "$@22",
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
     226,   225,   227,   228,   227,   229,   230,   229,   231,   231,
     232,   232,   233,   233,   234,   235,   235,   236,   236,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   245,   245,
     245,   245,   246,   246,   247,   247,   248,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   252,   253,   253,   254,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   256,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   257,   258,   258,   259,   259,   259,   259,   261,
     260,   260,   260,   260,   260,   260,   260,   260,   262,   262,
     262,   262,   263,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   268,   268,   268,   269,   269,   269,   270,   270,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   275,   276,   276,   277,   277,   277,   277,
     278,   278,   279,   280,   281,   283,   282,   282,   284,   284,
     285,   286,   286,   287,   288,   288,   288,   289,   289,   290,
     290,   291,   292,   293,   292,   294,   294,   294,   295,   295,
     295,   296,   296,   296,   297,   297,   298,   298,   299,   299,
     300,   300,   300,   301,   301,   302,   302,   303,   303,   304,
     304,   304,   305,   305,   306,   306,   306,   306,   306,   306,
     306,   306,   307,   307,   307,   307,   308,   308,   308,   308,
     308,   308,   309,   309,   309,   310,   310,   310,   310,   310,
     310,   310,   311,   311,   312,   312
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
       0,     4,     1,     0,     4,     1,     0,     4,     0,     1,
       1,     2,     2,     2,     3,     1,     3,     1,     1,     3,
       4,     3,     0,     1,     1,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     3,     5,     4,     3,     1,     0,     1,     3,     1,
       2,     1,     4,     3,     2,     1,     1,     0,     1,     3,
       6,     3,     4,     6,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     0,     5,     5,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     4,     3,     3,     2,
       9,    10,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     6,     5,     6,     6,     6,     6,     4,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     4,     1,     2,
       0,     2,     0,     2,     3,     0,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     1,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     6,     1,     2,     0,
       3,     4,     4,     3,     1,     1,     0,     1,     2,     3,
       3,     1,     4,     0,     5,     1,     1,     1,     1,     2,
       1,     4,     4,     1,     1,     4,     0,     1,     1,     1,
       4,     4,     1,     1,     3,     1,     2,     3,     1,     1,
       4,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     1,     2,     1,     4,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     2,     2,     4,
       2,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   432,     0,     0,     0,     0,   318,
       0,     0,    84,   371,     0,   342,     0,     0,   345,   341,
      37,     0,     0,   332,   344,     0,     0,   348,   302,     0,
       0,     0,     0,    51,    91,     0,   343,     0,   340,   347,
       0,   349,     0,     0,     0,     5,   363,     0,     0,    86,
     346,     0,     0,     0,   414,     0,     0,    57,    25,   425,
     335,     0,   365,     3,     0,     7,    30,     8,     9,    71,
      72,     0,     0,   280,   381,    73,   407,     0,   368,   295,
       0,   380,     0,   382,     0,   410,     0,   406,   387,   405,
     408,   413,     0,   285,   364,   318,     0,     5,    73,   461,
     460,     0,   458,   457,   299,   266,   267,   268,   269,   294,
     292,   291,   290,   289,   288,   287,   286,   318,     0,     0,
     319,     0,   249,   384,     0,   247,     0,   437,     0,   374,
     234,     0,     0,   319,   325,   338,   326,     0,   328,   408,
       0,    87,    85,   160,     0,    73,   432,    41,     0,     0,
      43,     0,     0,     0,     0,   215,     0,     0,   293,   216,
       0,   155,     0,     0,   154,     0,     0,     0,     0,   431,
       0,     4,     0,   367,    45,   381,     0,   382,     0,     0,
       0,   351,   446,     0,   444,    31,     0,     0,    25,     0,
       0,    18,     0,    17,    35,   280,     0,     0,     0,   336,
       0,   337,     0,     0,     0,   309,     0,    15,    78,    81,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   248,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,   416,     0,   416,
       0,   426,   409,     0,     0,     0,   321,     0,     0,   441,
     383,     0,   297,   375,   433,     0,   321,     0,   146,   229,
       0,     0,   409,     0,     0,    49,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    50,     0,   333,     0,     0,
     217,   219,   381,   382,     0,   156,   382,     0,    48,    61,
       0,     0,   462,     0,     0,   429,     0,   428,   366,     0,
      11,     4,   146,    46,    47,     0,   363,     0,   350,   445,
       0,     0,   443,   370,   442,     0,    60,     0,     0,    68,
      70,    20,     0,     0,    14,     0,   281,   279,     0,    32,
      24,    26,    27,    28,     0,   298,   369,     6,   146,     0,
      88,    92,    75,   141,   416,   464,   399,   397,     0,   252,
     254,   253,     0,     0,   250,   251,   255,   257,   256,   271,
     270,   273,   272,   274,   276,   277,   275,   265,   264,   259,
     260,   258,   261,   262,   263,   278,     0,   231,   245,   244,
     243,   242,   241,   240,   239,   238,   237,   236,   235,     0,
       0,   145,   381,   382,   465,   400,   417,     0,   423,     0,
     419,   396,   418,   422,     0,     0,   459,   320,     0,     0,
       0,   436,     0,   435,   320,   399,     0,   400,   330,     0,
       0,   372,     0,   361,     0,     0,     0,   353,     0,   352,
     161,   360,   158,   141,   296,    23,     0,     0,     0,     0,
     214,   456,   334,   216,     0,     0,     0,     0,   153,    10,
       0,     0,   455,   431,   431,     0,   146,    13,     0,     0,
     451,     0,   449,   453,   452,   454,     0,   448,     0,     0,
       0,     0,     0,    19,    16,     0,   227,     0,   415,     0,
       0,    89,    95,    93,    82,     0,   142,   143,     0,     0,
     322,     0,   131,     0,   144,     0,   146,   146,   398,   284,
       0,     0,   232,   149,   317,     0,   146,   146,   402,     0,
     146,   395,   394,   385,   416,     0,   411,   412,   440,   439,
       0,   339,   327,   356,   357,   379,     0,   374,   372,     0,
     355,     0,     0,     0,     0,   110,     0,    25,   108,    56,
       0,     0,   218,   100,     0,   100,   102,   157,    25,   123,
     463,     0,   427,     0,     0,    12,   312,     0,   447,   116,
     116,    40,     0,    69,    53,    21,     0,   416,     0,   226,
     225,   228,   282,   221,     0,   310,    22,     0,    96,    79,
       0,     0,   141,     0,   324,   303,   141,     0,   133,   404,
       0,     0,   283,   338,     0,   381,   382,     0,     0,   424,
       0,   416,   416,   389,     0,     0,     0,   434,     0,   329,
       0,   359,   375,   373,     0,   354,   362,   159,   303,     0,
       0,     0,   216,     0,     0,   103,     0,   125,   127,   430,
     230,   311,     0,   116,     0,   116,     0,     0,    25,   121,
      36,     0,   396,   220,   416,   224,    29,    90,     0,     0,
      94,    98,   163,     0,   323,     0,     0,     0,   134,     0,
     313,   314,   233,   152,   315,   316,   393,     0,     0,   386,
     420,   421,   438,   331,   378,   377,   358,     0,   111,     0,
       0,     0,   101,     0,     0,   129,     0,     0,    33,   450,
       0,     0,     0,     0,     0,   112,     0,     0,   223,   390,
       0,    97,   163,     0,   198,    76,     0,    25,     0,   137,
       0,   136,   391,   392,   388,     0,    25,   109,    38,     0,
      25,   106,    55,    54,     0,     0,     0,     0,   128,     0,
       0,   119,   120,    25,   114,   113,     0,     0,   222,   198,
      99,   202,   203,   204,   207,   206,   205,     0,   170,   197,
      83,   162,   166,     0,     0,   196,   200,     0,     0,     0,
     307,     0,     0,   138,     0,   135,   376,     0,    25,   104,
      39,     0,     0,    25,     0,     0,   115,    25,   118,    58,
     122,    80,     0,     0,   210,     0,    73,   201,     0,   165,
      25,   308,     0,   304,   300,     0,   140,   301,     0,     0,
       0,   130,    34,     0,   117,     0,     0,     0,   172,     0,
       0,   164,     0,     0,     0,     0,   305,   139,     0,   107,
       0,   124,    25,   213,   173,   175,   176,   171,   211,   208,
     167,     0,    77,   306,   105,    25,     0,     0,   178,     0,
       0,   212,   126,    63,   174,     5,     0,   179,   180,     0,
       0,   188,     0,     0,   209,   141,     0,    59,    62,    64,
     177,   181,   182,   192,     0,   183,     0,     0,     0,    65,
       0,   191,   184,   185,   189,   168,     0,   190,     0,     0,
       0,   186,   194,    25,   169,    66,     0,     0,   195,    25,
       0,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   212,   213,    84,   217,   370,
     371,    86,   365,   173,   845,   897,   898,   899,   927,   358,
     359,   372,   373,   231,    89,   525,   798,    90,   380,   689,
     381,   621,    91,   522,   617,    92,   524,   620,   619,   688,
     690,   664,   585,   810,   762,   579,   312,   601,   674,   773,
     680,   668,   725,   728,   766,   531,   532,   533,   430,   431,
     183,   184,   164,   744,   791,   880,   919,   792,   823,   847,
     877,   867,   878,   886,   887,   888,   889,   912,   890,   891,
     892,   910,   924,   793,   794,   795,   796,   825,   797,   174,
     319,   320,   609,   610,   611,   612,    93,    94,   516,   118,
     696,   801,    96,   378,    97,   534,   155,   156,   562,   649,
     178,   220,   299,    98,   565,   471,    99,   566,   294,   567,
     100,   101,   289,   102,   103,   643,   709,   613,   551,   552,
     553,   104,   105,   106,   107,   232,   108,   109,   110,   111,
     437,   441,   442,   443,   112,   336,   337,   148,   149,   203,
     204,   506,   113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -776
static const yytype_int16 yypact[] =
{
    -776,    89,  1994,  -776,  6612,  6612,   -34,  6612,  6612,  6612,
    6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,
    6612,  6612,   508,   508,  5094,  6612,   513,    37,    43,   -59,
     -15,  5220,  -776,  -776,    19,  -776,  5346,   -13,  -776,  -776,
    -776,  6612,     9,    36,  -776,    65,    67,  -776,  -776,     7,
      51,    70,   108,  -776,  -776,   124,  -776,   138,  -776,  -776,
     -38,  -776,   154,  5472,   222,   197,  -776,   148,  6612,  -776,
    -776,   175,   184,   119,  -776,   186,  6612,  -776,  -776,   217,
      -7,   203,    99,  -776,    13,  -776,  -776,  -776,  -776,  -776,
    -776,   218,   243,  -776,  -776,   390,   362,   294,  -776,  -776,
    7168,  -776,   291,   697,   296,  -776,   301,   400,   342,  -776,
     -12,  -776,   178,  -776,  -776,   343,   345,  -776,   390,  7833,
    7833,  6612,  7833,  7833,  1980,  -776,  -776,   426,  -776,  -776,
    -776,  -776,  -776,  -776,  -776,  -776,  -776,  -776,   350,   154,
     -56,   355,  -776,  -776,   357,  -776,   508,  7708,   337,   486,
    -776,   367,   154,   373,   374,   353,  -776,   375,   379,     0,
     178,  -776,  -776,   497,    15,   390,  5094,  -776,  7209,   500,
    -776,  7252,   385,  4939,    16,  7833,   508,  5598,  -776,  6612,
    6612,  -776,   394,    25,  -776,   372,   368,  6612,   508,   235,
     154,  -776,   102,   133,  -776,   377,  7833,   387,   508,  6738,
      87,  -776,    12,   325,  -776,  -776,  6612,  7293,  -776,   508,
     154,   -44,    26,  -776,  -776,   381,  7334,  2149,  6612,   130,
     386,   285,   130,   157,   393,  -776,   401,  -776,  -776,  -776,
    -776,   139,   478,   190,  6612,  6612,  6612,  5724,  6612,  6612,
    6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,
    6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,  6612,   513,
    -776,  -776,  -776,  5851,  6612,  6612,  6612,  6612,  6612,  6612,
    6612,  6612,  6612,  6612,  6612,  5978,   216,  6612,    74,  6612,
    6612,   217,   -32,   395,  7377,   154,   -54,   228,   229,  -776,
    -776,  6105,  -776,  6232,  -776,   154,   373,   232,  5978,  -776,
     232,    74,   -26,   862,   397,  -776,   396,   399,  -776,   862,
    -776,   537,    20,   414,  6612,  -776,   410,  -776,  7418,   411,
     557,  7833,   495,   680,  6612,  -776,  -776,     7,  -776,  -776,
     419,  7460,  -776,    33,   422,  -776,    34,  -776,   167,  1684,
    -776,  -776,  5978,  -776,  -776,   420,   511,  6871,  -776,  -776,
     286,   439,  -776,  -776,  -776,  7501,  -776,  2304,    38,  -776,
    -776,     3,   440,   119,  -776,  6612,  -776,  -776,   428,  -776,
    -776,  -776,  -776,  -776,  6912,  -776,  -776,  -776,  5978,   565,
     472,   475,  -776,   173,  6612,   434,   444,   -26,   178,  7873,
    1828,  1980,  6612,  7792,  2289,  1037,  1636,  1495,  2440,  2595,
    2595,  2595,  2595,   706,   706,   706,   706,   552,   552,   487,
     487,   487,   426,   426,   426,  -776,   202,  1980,  1980,  1980,
    1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,   508,
     452,   576,    56,    86,   455,   459,  7833,   456,  -776,  6612,
    -776,   461,   -14,  -776,   457,  6953,  -776,   -52,   434,   455,
     508,  7833,   508,  7749,   373,  -776,   464,  -776,  -776,   862,
     862,   862,   466,  -776,   490,   154,   -40,   131,   489,  -776,
    -776,  -776,   607,   173,  -776,  -776,   862,   491,  4164,   474,
    7833,  -776,  -776,  6612,  6612,   508,    85,  6998,  -776,  -776,
    4319,   508,  -776,   235,   235,   615,  5978,  -776,  1839,   480,
    -776,  6612,  -776,  -776,  -776,  -776,   482,  -776,    -4,   561,
     508,   492,   509,  -776,  -776,  7542,    17,   498,  -776,   501,
     862,  -776,   530,  -776,  -776,   503,  -776,  -776,   522,   154,
     373,   505,   645,    -5,  -776,   502,  5978,  5978,   -26,  2135,
    6612,   513,  -776,  -776,  -776,  6359,  5978,  5978,  -776,  7039,
    5978,   595,   600,  -776,  6612,  6612,  -776,  -776,  -776,  -776,
    6486,  -776,   533,  -776,  -776,   568,   514,   664,   862,   154,
     201,   570,   539,   862,   526,  -776,   665,  -776,  -776,  -776,
    6612,   528,  7833,   581,   508,   581,  -776,  -776,  -776,  -776,
    -776,    57,  -776,  6612,   531,  -776,  -776,  1603,  -776,   529,
     534,  -776,   535,  -776,  -776,  -776,  4474,  6612,    74,   556,
      30,  -776,  -776,  -776,   536,  -776,  -776,   334,  -776,  -776,
     334,   538,   173,   154,   373,   544,   231,   543,   678,  -776,
     542,   555,  2135,   353,   508,    58,   181,   558,   572,  -776,
     573,  6612,  6612,  -776,   551,  7080,   508,  7833,    74,  -776,
     862,  -776,   862,  -776,   577,   264,  -776,  -776,   544,   862,
    2459,  7584,  6612,    85,   579,  -776,   580,  4009,    21,  -776,
    1980,  -776,   554,  -776,   134,  -776,   -28,   334,  -776,  -776,
    -776,   586,   461,  -776,  6612,   556,  -776,  -776,   334,   582,
     724,  -776,  -776,   608,   373,   587,   609,     8,   746,   862,
    -776,  -776,  -776,  -776,  -776,  -776,  -776,   610,   611,   556,
    -776,  -776,  -776,  -776,  -776,   666,  -776,   612,  -776,   616,
     617,   613,  -776,  4629,  4629,   329,   622,  4939,  -776,  -776,
     159,  6612,    -1,   621,   -10,  -776,   627,  2614,  -776,  -776,
     619,   724,  -776,   334,   382,  -776,    23,  -776,   629,   763,
     862,  -776,  -776,  -776,  -776,   862,  -776,  -776,  -776,  4784,
    -776,  -776,  -776,  -776,   628,   752,   713,  6612,  -776,   631,
    7127,  -776,  -776,  -776,  -776,  -776,   630,   632,  -776,   413,
    -776,  -776,  -776,  -776,  -776,  -776,  -776,   648,  -776,  -776,
    -776,  -776,  -776,   639,   343,   519,  -776,    28,   636,   643,
    -776,    59,  2769,   777,   862,  -776,  -776,  2924,  -776,  -776,
    -776,  3079,  6612,  -776,   640,  7625,  -776,  -776,  4009,  -776,
    -776,  -776,   780,   334,   782,    29,   390,  -776,   660,  -776,
    -776,  -776,    40,  -776,  -776,   862,  -776,  -776,  3234,   646,
    7666,  4009,  -776,  4939,  4009,   647,   862,    11,  -776,   862,
     652,  -776,   667,   788,  3389,   656,  -776,  -776,   653,  -776,
     781,  -776,  -776,  -776,  -776,  -776,  -776,  -776,  -776,   795,
    -776,   862,  -776,  -776,  -776,  -776,  3544,   334,   361,   862,
     661,  -776,  4009,   732,  -776,   738,   668,   361,  -776,   662,
     740,   700,   669,   689,  -776,   173,   674,  -776,   732,  -776,
    -776,  -776,  -776,   369,   334,  -776,   691,   681,   334,  -776,
     692,   698,   825,  -776,  -776,  -776,   694,  -776,   334,   274,
     685,  -776,  -776,  -776,  -776,  -776,  3699,   686,  -776,  -776,
    3854,  -776
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -776,  -776,  -173,   -17,  -776,  -776,   483,  -776,  -192,  -776,
       1,  -776,  -776,  -776,  -776,  -776,  -776,   -61,  -776,  -776,
     333,     2,     6,  -117,  -776,  -776,  -776,  -776,  -776,  -776,
    -776,  -776,  -776,  -776,  -776,  -776,  -776,  -776,  -776,  -776,
     160,   260,   192,  -776,   123,  -776,  -776,  -776,  -543,    79,
    -776,  -776,  -776,  -776,  -776,  -466,  -776,   227,  -267,  -776,
    -776,   540,  -776,   115,  -776,  -776,  -776,  -776,  -776,  -776,
    -776,  -776,  -776,  -776,  -776,   -23,  -776,  -776,  -776,  -776,
    -776,  -776,  -776,  -776,  -776,  -776,  -775,  -776,  -776,  -776,
    -471,  -776,   253,  -776,  -776,  -776,   789,   -31,  -776,    -2,
     208,  -776,  -776,  -776,   365,  -565,  -248,  -776,  -776,  -776,
    -776,  -776,   236,   851,   310,  -776,  -776,   300,   304,  -776,
    1022,   690,  -412,   435,   941,  -776,  -776,  -558,  -776,  -776,
     191,  -218,  -776,   959,  -776,  -776,  -776,   -24,   -16,  -776,
    -265,  -288,  -776,  -776,    18,   384,   388,   710,  -776,   383,
     195,  -776,  -776,  -776,  -776
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -404
static const yytype_int16 yytable[] =
{
      95,   283,   158,    85,    87,   140,   140,   574,    88,   153,
     159,   415,   581,   458,   444,   386,   357,   543,   339,   864,
     827,   226,   599,   304,   314,   771,   627,   165,   477,   279,
     362,   456,   195,   327,   363,   279,   828,   850,   558,   748,
     559,   491,   494,   192,   160,   193,   510,   554,   306,   279,
     731,   683,   687,    48,   799,   691,   211,   676,   435,   571,
     440,   279,   732,   201,  -147,   494,  -150,   832,   731,   386,
     435,   855,   224,   350,   224,   499,   224,   512,   607,   455,
     732,   198,   457,   440,   224,   726,   727,   163,   199,     3,
     190,   684,   219,   225,  -148,   342,   282,   496,   117,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   519,   736,   165,   191,   121,   584,  -398,   161,   535,
     280,  -401,   286,   691,   162,   735,   280,   683,   911,   140,
     730,   224,   734,  -401,   166,   296,   172,  -397,   555,   202,
     280,   628,   351,   775,   302,  -384,  -384,   608,   600,   322,
     772,   754,   280,   181,   749,   169,   693,   137,   176,   140,
     608,   182,   865,   866,   227,   140,   305,   315,   498,   800,
     478,   140,   140,   338,   313,   198,   328,   364,   780,   829,
     851,   140,   199,   492,   495,   177,   856,   185,   511,  -151,
     348,   721,   140,   361,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,  -147,   669,  -150,   833,
     438,   138,   731,   139,   179,    95,   180,   387,   198,   186,
      74,   117,   703,   205,   732,   199,   439,   224,    79,   594,
     224,    74,  -319,   202,   712,   158,  -148,   731,   733,    79,
    -384,  -384,   153,   159,   432,   198,   526,   210,   225,   732,
     527,   388,   199,   340,   341,   117,   352,   187,   848,   224,
     387,   224,   387,   769,  -319,   541,  -321,   432,   447,   630,
     631,   387,   387,   188,   137,   382,   202,   160,   454,   637,
     638,   387,   342,   640,   387,   387,   467,   189,   383,   644,
     117,   198,   467,   633,   388,   224,   388,   206,   199,   528,
    -320,   529,   222,   202,   526,   388,   388,   137,   527,   117,
     198,   432,   884,   893,   376,   388,   496,   199,   388,   388,
     682,   200,   893,  -132,    74,   201,   385,   208,   138,   224,
     139,  -151,   281,   209,  -321,   214,    74,    95,   117,   913,
      85,    87,   681,   916,    79,    88,   211,   432,    74,   202,
     261,   262,   434,   921,   228,    95,    79,   528,   334,   529,
     713,   138,    74,   139,   448,   449,   530,   117,   202,   218,
      79,   117,   538,   198,    74,    74,   707,   708,    74,   229,
     199,    74,    79,    79,   352,   660,    79,   141,   141,    79,
     440,   154,   224,   764,   765,   349,   667,  -320,   354,   140,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   140,   198,   349,   503,   354,   349,   354,   740,
     199,   230,   504,  -403,   352,   922,   923,   233,   353,   907,
     440,   202,   505,   140,   276,   140,   781,   782,   783,   784,
     785,   786,   467,   467,   467,   275,  -384,  -384,   570,   781,
     782,   783,   784,   785,   786,    48,   530,   142,   145,   467,
     528,   277,   529,   221,   223,   432,   137,   787,   140,   140,
     117,   202,   278,   190,   140,   259,   140,   140,   285,   578,
     781,   782,   783,   784,   785,   786,   737,   528,   287,   529,
     288,   589,   292,   140,   293,   295,    95,   885,   787,    85,
      87,   224,   298,   467,    88,   432,   432,   297,   300,   301,
     303,   141,   624,   309,   635,   432,   432,   158,   330,   432,
     138,   311,   139,   329,   153,   159,   788,   789,   343,   377,
     117,   366,   256,   257,   258,   790,   259,   379,   344,   384,
      74,   141,   375,   472,   383,   473,   324,   141,    79,   474,
     476,   467,   655,   141,   141,   802,   467,   788,   789,   160,
     481,   479,   483,   141,   807,   484,   821,   140,   811,   485,
     489,   493,   501,   500,   141,   507,   513,   517,   520,   521,
     137,   818,   523,   536,   545,   137,   781,   782,   783,   784,
     785,   786,   387,   537,   253,   254,   255,   256,   257,   258,
     530,   259,   544,   530,   546,   530,   694,   679,   547,   530,
     550,   548,   556,   470,   561,   568,   838,   140,   569,   475,
     573,   841,   572,   580,   154,   844,   388,   576,   593,   140,
     596,  -199,   387,   467,   138,   467,   139,   598,   854,   151,
     602,   152,   467,   604,   117,   605,   140,   618,   614,   117,
     623,   615,   622,   626,    74,   625,   641,   629,    95,    74,
     530,   642,    79,   648,   650,    95,   388,    79,   468,   651,
     876,   530,   652,   348,   468,   656,   658,   663,   659,   662,
     673,   671,   467,   882,   677,   675,   608,   686,   695,   698,
     692,   699,   700,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   701,   710,   729,   704,   852,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   705,   706,   761,   761,   530,   716,   768,   723,
     724,   926,   743,   467,   742,    95,   746,   930,   467,  -384,
    -384,   738,  -404,  -404,  -404,  -404,   251,   252,   253,   254,
     255,   256,   257,   258,   486,   259,  -384,  -384,   745,   750,
     809,   747,   755,   759,   756,   752,   753,   757,   758,   563,
     564,   767,   774,   776,   778,   803,   804,   812,   813,   814,
     819,   141,   816,   820,   822,   824,   575,   467,   830,   831,
     835,   842,   826,   846,   141,   849,   853,   859,   869,   862,
      95,   871,   873,   870,   874,    95,   530,   875,   879,    95,
     895,   896,  -187,   902,   903,   141,    95,   141,   467,   904,
     905,   900,   906,   908,   468,   468,   468,   914,   917,   467,
     616,   915,   467,   918,  -193,   925,    95,   909,   929,    95,
     920,   468,    95,   603,   861,   666,   514,   763,   741,   817,
     141,   141,    95,   697,   467,   722,   141,   779,   141,   141,
     530,   530,   467,   685,   901,   215,   717,   488,   654,   702,
     530,   653,   325,   739,    95,   141,   307,   591,   530,     0,
      95,     0,   592,   657,     0,   468,     0,   530,     0,     0,
       0,   530,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   530,     0,     0,   459,   460,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,    95,     0,     0,     0,    95,     0,
       0,     0,     0,   468,   137,   462,     0,     0,   468,     0,
       0,     0,     0,     0,   463,     0,     0,     0,    35,   141,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
     714,     0,   715,   143,   143,     0,     0,     0,     0,   718,
      44,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,   144,   144,     0,    56,   157,    58,    59,   464,    61,
     465,     0,     0,     0,     0,     0,     0,   466,   117,   141,
       0,     0,     0,    70,   197,     0,     0,     0,     0,   751,
       0,   141,     0,     0,     0,   468,     0,   468,     0,     0,
       0,     0,     0,     0,   468,     0,   119,   120,   141,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,     0,   147,   150,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   171,     0,
     805,     0,     0,   175,   468,   806,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   196,   259,   290,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,   836,   468,     0,   316,     0,     0,
     468,   323,     0,   326,     0,     0,     0,     0,     0,   332,
     335,     0,     0,     0,     0,   144,     0,     0,     0,   345,
       0,   144,     0,   284,     0,   857,     0,   144,   144,     0,
     360,     0,     0,     0,   469,     0,   863,   144,     0,   868,
     469,     0,     0,     0,     0,     0,     0,     0,   144,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   881,     0,     0,     0,     0,     0,     0,   147,   894,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     468,   321,   196,     0,     0,     0,     0,     0,     0,   331,
       0,   468,     0,     0,   468,     0,   433,     0,   157,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   355,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,   433,
     374,     0,     0,     0,   468,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   389,   390,   391,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,     0,     0,   433,     0,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   196,     0,   436,
       0,   436,   445,     0,     0,     0,     0,     0,     0,     0,
     469,   469,   469,   451,     0,   453,     0,     0,     0,   433,
     196,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,     0,     0,   480,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   542,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     290,   469,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   515,   144,     0,
       0,   290,     0,   290,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,   436,     0,     0,   144,
       0,   144,     0,     0,   539,     0,     0,     0,     0,   469,
       0,     0,     0,     0,   469,     0,   583,   586,     0,     0,
       0,     0,   590,     0,   335,   335,     0,   433,     0,     0,
       0,     0,     0,     0,   144,   144,     0,     0,     0,     0,
     144,   360,   144,   144,     0,     0,     0,     0,     0,     0,
       0,   549,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,   433,   433,     0,
       0,     0,     0,     0,     0,     0,   636,   433,   433,     0,
       0,   433,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   469,     0,   469,     0,   321,   582,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,   597,     0,   665,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   144,   259,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,   196,   196,
       0,     0,   632,     0,     0,     0,     0,   196,   196,   196,
       0,     0,   196,     0,     0,   290,   436,   645,     0,     0,
       0,     0,   647,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,   469,   661,     0,   586,   144,   469,     0,     0,     0,
       0,     0,   234,   235,   236,   670,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,     0,   237,   436,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,   436,   436,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   321,   259,   469,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   469,     0,     0,
     469,     0,     0,     0,     0,     0,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,    10,    11,     0,     0,
     469,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,   770,    27,    28,    29,    30,   672,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,    34,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,   815,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,   840,    77,    78,   497,    79,   236,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,    34,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,     0,
      77,    78,   595,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,   237,     9,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,    34,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,   369,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,   509,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,   719,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,  -404,  -404,  -404,
    -404,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,   777,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,   834,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,   837,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,   839,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,   858,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,   872,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,   883,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,   928,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,   931,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     577,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
      31,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      52,     0,    53,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   588,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
      31,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      52,     0,    53,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   760,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     808,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
      31,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      52,     0,    53,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   115,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     117,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,    76,     0,     0,     0,     0,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   115,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   116,    61,    62,     4,
       5,     6,     7,     8,     0,    64,   117,    66,     9,     0,
       0,    70,     0,     0,     0,     0,    74,     0,     0,    76,
       0,   167,     0,     0,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     4,     5,     6,     7,     8,
       0,    64,   117,    66,     9,     0,     0,    70,     0,     0,
       0,     0,    74,     0,     0,    76,     0,   170,     0,     0,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   116,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   117,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,    76,     0,   194,     0,     0,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   116,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   117,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,    76,   317,     0,
     392,     0,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   115,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     4,     5,     6,     7,     8,    64,
     117,    66,     0,     9,     0,    70,     0,     0,     0,     0,
      74,     0,     0,    76,     0,     0,     0,     0,    79,     0,
      80,    81,   416,     0,     0,     0,     0,     0,     0,     0,
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
      76,     0,     0,     0,     0,    79,     0,    80,    81,   429,
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
       0,     0,    79,     0,    80,    81,   450,     0,     0,     0,
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
       0,    80,    81,   452,     0,     0,     0,     0,     0,     0,
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
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    79,     0,    80,    81,   646,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   116,    61,    62,     4,     5,     6,     7,     8,
       0,    64,   117,    66,     9,     0,     0,    70,     0,     0,
       0,     0,    74,     0,     0,    76,     0,     0,     0,     0,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   116,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   117,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,    76,     0,     0,     0,     0,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     0,     0,
       0,     0,     0,    64,   117,   346,     0,     0,     0,    70,
     234,   235,   236,     0,    74,     0,     0,    76,     0,     0,
       0,     0,    79,     0,    80,    81,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   502,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   518,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   557,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   587,   237,   771,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   639,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   711,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   772,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   260,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     308,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   310,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   356,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   237,     0,   238,   239,   240,
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
       0,   237,   606,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   720,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   843,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,   234,   235,   236,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   860,   237,   540,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,   560,     0,     0,     0,     0,
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
       2,   118,    26,     2,     2,    22,    23,   473,     2,    26,
      26,   259,   483,   301,   279,   233,   208,   429,   191,     8,
     795,     8,    26,     8,     8,    26,    31,    29,     8,    61,
      74,   298,    63,     8,     8,    61,     8,     8,   450,    31,
     452,     8,     8,    60,    26,    62,     8,    61,   165,    61,
      78,   609,   617,   112,    31,   620,    73,   600,   276,    99,
     278,    61,    90,   103,     8,     8,     8,     8,    78,   287,
     288,    31,   128,    61,   128,   342,   128,    74,    61,   297,
      90,    88,   300,   301,   128,    64,    65,   146,    95,     0,
     128,    61,    99,   149,     8,   149,   112,   149,   136,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   378,   677,   115,   152,   149,    31,   149,    81,   384,
     152,   133,   139,   688,    81,   153,   152,   685,   903,   146,
     673,   128,   675,   133,   149,   152,   149,   149,   152,   146,
     152,   146,   130,   153,   160,    59,    60,   130,   152,   180,
     151,   709,   152,   146,   146,   136,   622,    72,   149,   176,
     130,   154,   151,   152,   151,   182,   151,   151,   341,   146,
     150,   188,   189,   190,   173,    88,   151,   151,   743,   151,
     151,   198,    95,   150,   150,   149,   146,   136,   150,     8,
     103,   662,   209,   210,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   150,   150,   150,   150,
     136,   126,    78,   128,   149,   217,   149,   233,    88,   149,
     146,   136,   634,    26,    90,    95,   152,   128,   154,   496,
     128,   146,   133,   146,   646,   259,   150,    78,   104,   154,
      59,    60,   259,   259,   275,    88,    73,   128,   149,    90,
      77,   233,    95,   151,   152,   136,    99,   149,   823,   128,
     276,   128,   278,   104,   133,    63,   133,   298,   285,   536,
     537,   287,   288,   149,    72,   136,   146,   259,   295,   546,
     547,   297,   149,   550,   300,   301,   303,   149,   149,   554,
     136,    88,   309,   541,   276,   128,   278,   149,    95,   126,
     133,   128,    99,   146,    73,   287,   288,    72,    77,   136,
      88,   342,   877,   878,   157,   297,   149,    95,   300,   301,
     608,    99,   887,   150,   146,   103,   136,   152,   126,   128,
     128,   150,   154,   149,   133,   149,   146,   339,   136,   904,
     339,   339,   607,   908,   154,   339,   363,   378,   146,   146,
      59,    60,   136,   918,   136,   357,   154,   126,   123,   128,
     648,   126,   146,   128,   136,   136,   383,   136,   146,   152,
     154,   136,   388,    88,   146,   146,   641,   642,   146,   136,
      95,   146,   154,   154,    99,   577,   154,    22,    23,   154,
     608,    26,   128,    64,    65,   200,   588,   133,   203,   416,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   429,    88,   219,   129,   221,   222,   223,   684,
      95,    31,   136,    61,    99,   151,   152,   133,   103,   895,
     648,   146,   146,   450,   133,   452,    67,    68,    69,    70,
      71,    72,   459,   460,   461,   149,    59,    60,   465,    67,
      68,    69,    70,    71,    72,   112,   473,    22,    23,   476,
     126,    61,   128,    80,    81,   496,    72,    85,   485,   486,
     136,   146,   130,   128,   491,    49,   493,   494,   128,   478,
      67,    68,    69,    70,    71,    72,   678,   126,   133,   128,
     133,   490,   155,   510,     8,   128,   498,   136,    85,   498,
     498,   128,   149,   520,   498,   536,   537,   133,   133,   130,
      13,   146,   529,    13,   545,   546,   547,   541,   150,   550,
     126,   136,   128,   151,   541,   541,   144,   145,   151,   136,
     136,   150,    45,    46,    47,   153,    49,   136,   151,    61,
     146,   176,   156,   146,   149,   149,   152,   182,   154,   150,
      13,   568,   569,   188,   189,   747,   573,   144,   145,   541,
     150,   147,   151,   198,   756,     8,   153,   584,   760,    74,
     151,   149,    61,   153,   209,   136,   136,   149,    13,   107,
      72,   773,   107,   149,     8,    72,    67,    68,    69,    70,
      71,    72,   608,   149,    42,    43,    44,    45,    46,    47,
     617,    49,   150,   620,   149,   622,   623,   606,   149,   626,
     149,   155,   155,   303,   150,   149,   808,   634,   128,   309,
      13,   813,   133,   149,   259,   817,   608,   136,    13,   646,
     150,   112,   648,   650,   126,   652,   128,   155,   830,   126,
      79,   128,   659,   151,   136,   136,   663,   117,   150,   136,
     128,   150,   149,     8,   146,   150,    61,   155,   660,   146,
     677,    61,   154,   130,    96,   667,   648,   154,   303,   155,
     862,   688,     8,   103,   309,   136,   150,    96,    13,   151,
     151,   150,   699,   875,   149,   151,   130,   151,   144,   146,
     152,    13,   150,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   150,   155,   153,   150,   826,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   150,   150,   723,   724,   743,   150,   727,   150,
     150,   923,     8,   750,   152,   737,   149,   929,   755,    59,
      60,   155,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    74,    49,    59,    60,   150,    13,
     759,   152,    96,   150,   152,   155,   155,   151,   151,   459,
     460,   149,   151,   146,   155,   146,    13,   149,    26,    66,
     150,   416,   151,   151,   136,   146,   476,   804,   152,   146,
      13,   151,   794,    13,   429,    13,   136,   151,   146,   152,
     802,    13,   146,   136,   151,   807,   823,    26,    13,   811,
     149,    79,    74,   151,    74,   450,   818,   452,   835,   119,
     151,   153,   133,   149,   459,   460,   461,   136,   136,   846,
     520,   150,   849,     8,   136,   150,   838,   898,   152,   841,
     146,   476,   844,   510,   843,   585,   363,   724,   688,   770,
     485,   486,   854,   626,   871,   663,   491,   742,   493,   494,
     877,   878,   879,   610,   887,    76,   658,   327,   568,   633,
     887,   567,   182,   682,   876,   510,   166,   493,   895,    -1,
     882,    -1,   494,   573,    -1,   520,    -1,   904,    -1,    -1,
      -1,   908,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   918,    -1,    -1,    42,    43,   541,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,   926,    -1,    -1,    -1,   930,    -1,
      -1,    -1,    -1,   568,    72,    73,    -1,    -1,   573,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,   584,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
     650,    -1,   652,    22,    23,    -1,    -1,    -1,    -1,   659,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,   122,    26,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   634,
      -1,    -1,    -1,   141,    63,    -1,    -1,    -1,    -1,   699,
      -1,   646,    -1,    -1,    -1,   650,    -1,   652,    -1,    -1,
      -1,    -1,    -1,    -1,   659,    -1,     4,     5,   663,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
     750,    -1,    -1,    41,   699,   755,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    63,    49,   146,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   804,   750,    -1,   176,    -1,    -1,
     755,   180,    -1,   182,    -1,    -1,    -1,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,   198,
      -1,   182,    -1,   121,    -1,   835,    -1,   188,   189,    -1,
     209,    -1,    -1,    -1,   303,    -1,   846,   198,    -1,   849,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,   804,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   871,    -1,    -1,    -1,    -1,    -1,    -1,   166,   879,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
     835,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,   846,    -1,    -1,   849,    -1,   275,    -1,   259,    -1,
      -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   871,    -1,    -1,   298,
     218,    -1,    -1,    -1,   879,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,   342,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,    -1,   277,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     459,   460,   461,   291,    -1,   293,    -1,    -1,    -1,   378,
     298,    -1,    -1,    -1,    -1,    -1,    -1,   476,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,
     429,   520,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,   429,    -1,
      -1,   450,    -1,   452,    -1,    -1,    -1,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,   450,
      -1,   452,    -1,    -1,   392,    -1,    -1,    -1,    -1,   568,
      -1,    -1,    -1,    -1,   573,    -1,   485,   486,    -1,    -1,
      -1,    -1,   491,    -1,   493,   494,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   485,   486,    -1,    -1,    -1,    -1,
     491,   510,   493,   494,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   536,   537,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   545,   546,   547,    -1,
      -1,   550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     541,   650,    -1,   652,    -1,   483,   484,    -1,    -1,    -1,
     659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,   501,    -1,   584,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   584,    49,    -1,    -1,    -1,    -1,    -1,
     699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   536,   537,
      -1,    -1,   540,    -1,    -1,    -1,    -1,   545,   546,   547,
      -1,    -1,   550,    -1,    -1,   634,   554,   555,    -1,    -1,
      -1,    -1,   560,    -1,    -1,    -1,    -1,   646,    -1,    -1,
      -1,    -1,    -1,   634,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   750,   580,    -1,   663,   646,   755,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   593,    -1,    -1,    -1,    -1,
      -1,    -1,   663,    -1,    -1,    -1,    -1,    -1,    25,   607,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,   804,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   641,   642,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   662,    49,   835,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,   846,    -1,    -1,
     849,    -1,    -1,    -1,    -1,    -1,   684,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   871,    -1,    -1,    -1,    42,    43,    -1,    -1,
     879,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,   731,    70,    71,    72,    73,   155,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,   767,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,    -1,   149,   812,   151,   152,   153,   154,    11,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    25,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,   151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,    -1,   151,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,   149,   150,    -1,
      26,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,     3,     4,     5,     6,     7,   135,
     136,   137,    -1,    12,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,   141,
       9,    10,    11,    -1,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   153,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    25,    26,    27,    28,    29,    30,    31,    32,
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
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     151,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   151,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   151,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,    29,
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
     156,   157,   161,   162,   165,   168,   169,   179,   180,   182,
     185,   190,   193,   254,   255,   257,   260,   262,   271,   274,
     278,   279,   281,   282,   289,   290,   291,   292,   294,   295,
     296,   297,   302,   310,   312,    72,   126,   136,   257,   278,
     278,   149,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,    72,   126,   128,
     161,   262,   281,   282,   291,   281,    31,   278,   305,   306,
     278,   126,   128,   161,   262,   264,   265,   291,   295,   296,
     302,    81,    81,   146,   220,   257,   149,   151,   278,   136,
     151,   278,   149,   171,   247,   278,   149,   149,   268,   149,
     149,   146,   154,   218,   219,   136,   149,   149,   149,   149,
     128,   152,   161,   161,   151,   255,   278,   282,    88,    95,
      99,   103,   146,   307,   308,    26,   149,   278,   152,   149,
     128,   161,   163,   164,   149,   254,   278,   166,   152,    99,
     269,   307,    99,   307,   128,   149,     8,   151,   136,   136,
      31,   181,   293,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     151,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   133,    61,   130,    61,
     152,   154,   296,   181,   278,   128,   161,   133,   133,   280,
     282,    96,   155,     8,   276,   128,   161,   133,   149,   270,
     133,   130,   296,    13,     8,   151,   181,   305,   151,    13,
     151,   136,   204,   168,     8,   151,   282,   150,   278,   248,
     249,   278,   255,   282,   152,   279,   282,     8,   151,   151,
     150,   278,   282,   311,   123,   282,   303,   304,   161,   160,
     151,   152,   149,   151,   151,   282,   137,   278,   103,   308,
      61,   130,    99,   103,   308,   278,   151,   166,   177,   178,
     282,   161,    74,     8,   151,   170,   150,   150,   115,   153,
     167,   168,   179,   180,   278,   156,   157,   136,   261,   136,
     186,   188,   136,   149,    61,   136,   289,   296,   302,   278,
     278,   278,    26,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   264,    31,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,    31,
     216,   217,   255,   282,   136,   289,   278,   298,   136,   152,
     289,   299,   300,   301,   298,   278,   150,   161,   136,   136,
      31,   278,    31,   278,   161,   289,   216,   289,   299,    42,
      43,    61,    73,    82,   126,   128,   135,   161,   262,   271,
     272,   273,   146,   149,   150,   272,    13,     8,   150,   147,
     278,   150,   150,   151,     8,    74,    74,   278,   219,   151,
     150,     8,   150,   149,     8,   150,   149,   153,   160,   216,
     153,    61,   153,   129,   136,   146,   309,   136,   150,   153,
       8,   150,    74,   136,   164,   278,   256,   149,   153,   216,
      13,   107,   191,   107,   194,   183,    73,    77,   126,   128,
     161,   213,   214,   215,   263,   298,   149,   149,   296,   278,
      26,    63,   282,   280,   150,     8,   149,   149,   155,   278,
     149,   286,   287,   288,    61,   152,   155,   153,   280,   280,
      96,   150,   266,   272,   272,   272,   275,   277,   149,   128,
     161,    99,   133,    13,   213,   272,   136,    26,   168,   203,
     149,   248,   278,   282,    31,   200,   282,   153,    26,   168,
     282,   303,   304,    13,   216,   153,   150,   278,   155,    26,
     152,   205,    79,   178,   151,   136,   150,    61,   130,   250,
     251,   252,   253,   285,   150,   150,   272,   192,   117,   196,
     195,   189,   149,   128,   161,   150,     8,    31,   146,   155,
     216,   216,   278,   264,    31,   255,   282,   216,   216,   153,
     216,    61,    61,   283,   298,   278,    31,   278,   130,   267,
      96,   155,     8,   276,   275,   161,   136,   272,   150,    13,
     166,   278,   151,    96,   199,   282,   199,   166,   209,   150,
     278,   150,   155,   151,   206,   151,   206,   149,    26,   168,
     208,   298,   299,   285,    61,   250,   151,   263,   197,   187,
     198,   263,   152,   213,   161,   144,   258,   215,   146,    13,
     150,   150,   270,   280,   150,   150,   150,   298,   298,   284,
     155,   153,   280,   299,   272,   272,   150,   258,   272,   100,
     150,   248,   200,   150,   150,   210,    64,    65,   211,   153,
     206,    78,    90,   104,   206,   153,   263,   166,   155,   288,
     298,   198,   152,     8,   221,   150,   149,   152,    31,   146,
      13,   272,   155,   155,   285,    96,   152,   151,   151,   150,
      26,   168,   202,   202,    64,    65,   212,   149,   168,   104,
     278,    26,   151,   207,   151,   153,   146,   105,   155,   221,
     263,    67,    68,    69,    70,    71,    72,    85,   144,   145,
     153,   222,   225,   241,   242,   243,   244,   246,   184,    31,
     146,   259,   166,   146,    13,   272,   272,   166,    26,   168,
     201,   166,   149,    26,    66,   278,   151,   207,   166,   150,
     151,   153,   136,   226,   146,   245,   257,   244,     8,   151,
     152,   146,     8,   150,   153,    13,   272,   153,   166,   102,
     278,   166,   151,   150,   166,   172,    13,   227,   263,    13,
       8,   151,   181,   136,   166,    31,   146,   272,   101,   151,
     150,   168,   152,   272,     8,   151,   152,   229,   272,   146,
     136,    13,   153,   146,   151,    26,   166,   228,   230,    13,
     223,   272,   166,   153,   263,   136,   231,   232,   233,   234,
     236,   237,   238,   263,   272,   149,    79,   173,   174,   175,
     153,   233,   151,    74,   119,   151,   133,   213,   149,   175,
     239,   244,   235,   263,   136,   150,   263,   136,     8,   224,
     146,   263,   151,   152,   240,   150,   166,   176,   153,   152,
     166,   153
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

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, false); ;}
    break;

  case 85:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false, false); ;}
    break;

  case 86:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, true); ;}
    break;

  case 87:

    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false, false); ;}
    break;

  case 89:

    { observers.QualifiedNameClear(); ;}
    break;

  case 90:

    { observers.ClassSetExtends(); ;}
    break;

  case 91:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true, false); ;}
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

  case 170:

    { observers.QualifiedNameClear(); ;}
    break;

  case 172:

    { observers.TraitUseFound(); ;}
    break;

  case 173:

    { observers.QualifiedNameClear(); ;}
    break;

  case 174:

    { observers.TraitUseFound(); ;}
    break;

  case 176:

    { observers.QualifiedNameClear(); ;}
    break;

  case 180:

    { observers.TraitClearAdaptation(); observers.QualifiedNameClear(); ;}
    break;

  case 181:

    { observers.TraitClearAdaptation(); observers.QualifiedNameClear(); ;}
    break;

  case 187:

    { observers.TraitAliasMethod((yyvsp[(1) - (1)])); ;}
    break;

  case 189:

    { observers.TraitAliasMethodFromQualifiedName((yyvsp[(3) - (3)])); ;}
    break;

  case 190:

    { observers.TraitAliasFound(&(yyvsp[(4) - (4)])); ;}
    break;

  case 191:

    { observers.TraitAliasFound(NULL); ;}
    break;

  case 194:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 195:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 197:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 202:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 203:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 204:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 205:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 206:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 207:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 208:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 209:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 210:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 211:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 212:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 213:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 231:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 232:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 233:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 234:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 244:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 247:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 248:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 249:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 264:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 265:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 266:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 267:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 268:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 269:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 277:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 278:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 279:

    { /* no need to push here as this is recursive */ ;}
    break;

  case 280:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 281:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 283:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 284:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 285:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
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

  case 289:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 290:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 291:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 296:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 297:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (3)])); ;}
    break;

  case 298:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 300:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 301:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (10)])); ;}
    break;

  case 309:

    { observers.FunctionCallStart(); ;}
    break;

  case 310:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 348:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 349:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 350:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 351:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 361:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 380:

    { observers.ExpressionFound(); ;}
    break;

  case 381:

    { observers.ExpressionFound(); ;}
    break;

  case 385:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 390:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 394:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 395:

    { (yyval).Token = 0; ;}
    break;

  case 396:

    { (yyval).Token = 0; ;}
    break;

  case 402:

    {;}
    break;

  case 403:

    {;}
    break;

  case 404:

    {;}
    break;

  case 406:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 407:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 414:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 429:

    { observers.ForeachVariableFound(); ;}
    break;

  case 457:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 458:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 460:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 461:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 464:

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




