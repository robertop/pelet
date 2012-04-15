
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
#define YYLAST   7803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  463
/* YYNRULES -- Number of states.  */
#define YYNSTATES  930

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
     969,   971,   976,   982,   987,   989,   992,   995,   998,  1001,
    1004,  1007,  1010,  1013,  1016,  1018,  1023,  1027,  1031,  1034,
    1044,  1055,  1057,  1058,  1063,  1067,  1072,  1074,  1077,  1078,
    1084,  1091,  1097,  1104,  1111,  1118,  1125,  1130,  1132,  1134,
    1138,  1141,  1143,  1147,  1150,  1152,  1154,  1159,  1161,  1164,
    1165,  1168,  1169,  1172,  1176,  1177,  1179,  1181,  1182,  1186,
    1188,  1190,  1192,  1194,  1196,  1198,  1200,  1202,  1204,  1206,
    1210,  1213,  1215,  1217,  1221,  1224,  1227,  1230,  1235,  1239,
    1241,  1243,  1247,  1249,  1251,  1253,  1257,  1260,  1262,  1266,
    1270,  1272,  1273,  1276,  1277,  1279,  1285,  1289,  1293,  1295,
    1297,  1299,  1301,  1303,  1305,  1306,  1313,  1315,  1318,  1319,
    1323,  1328,  1333,  1337,  1339,  1341,  1342,  1344,  1347,  1351,
    1355,  1357,  1362,  1367,  1369,  1371,  1373,  1375,  1378,  1380,
    1385,  1390,  1392,  1394,  1399,  1400,  1402,  1404,  1406,  1411,
    1416,  1418,  1420,  1424,  1426,  1429,  1433,  1435,  1437,  1442,
    1443,  1444,  1447,  1453,  1457,  1461,  1463,  1470,  1475,  1480,
    1483,  1486,  1489,  1491,  1494,  1496,  1501,  1505,  1509,  1516,
    1520,  1522,  1524,  1526,  1531,  1536,  1539,  1542,  1547,  1550,
    1553,  1555,  1559,  1563
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
     136,    13,   271,    -1,    85,   136,    13,   271,    -1,   166,
     167,    -1,    -1,   168,    -1,   179,    -1,   180,    -1,   115,
     149,   150,   151,    -1,   169,    -1,   136,    26,    -1,   152,
     166,   153,    -1,   116,   149,   277,   150,   168,   209,   211,
      -1,   116,   149,   277,   150,    26,   166,   210,   212,    66,
     151,    -1,    -1,   147,   149,   170,   277,   150,   208,    -1,
      -1,    93,   171,   168,   147,   149,   277,   150,   151,    -1,
     109,   149,   248,   151,   248,   151,   248,   150,   201,    -1,
     138,   149,   277,   150,   205,    -1,    76,   151,    -1,    76,
     277,   151,    -1,    87,   151,    -1,    87,   277,   151,    -1,
     134,   151,    -1,   134,   255,   151,    -1,   134,   281,   151,
      -1,   113,   218,   151,    -1,    72,   220,   151,    -1,    97,
     247,   151,    -1,   118,    -1,   277,   151,    -1,   143,   149,
     177,   150,   151,    -1,   110,   149,   281,    74,   200,   199,
     150,   202,    -1,   110,   149,   255,    74,   281,   199,   150,
     202,    -1,    89,   149,   204,   150,   203,    -1,   151,    -1,
      -1,   142,   152,   166,   153,    79,   149,   262,   146,   150,
     172,   152,   166,   153,   173,    -1,   139,   277,   151,    -1,
     114,   136,   151,    -1,   174,    -1,    -1,   175,    -1,   174,
     175,    -1,    -1,    79,   149,   262,   146,   150,   176,   152,
     166,   153,    -1,   178,    -1,   177,     8,   178,    -1,   281,
      -1,   182,    -1,   185,    -1,    -1,    31,    -1,    -1,    -1,
     256,   181,   136,   183,   149,   213,   150,   184,   152,   166,
     153,    -1,    -1,    -1,   190,   136,   186,   191,   196,   187,
     152,   221,   153,    -1,    -1,    -1,   193,   136,   188,   194,
     189,   152,   221,   153,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,    -1,   107,   192,   262,
      -1,   120,    -1,    -1,    -1,   107,   195,   198,    -1,    -1,
      -1,   117,   197,   198,    -1,   262,    -1,   198,     8,   262,
      -1,    -1,    96,   200,    -1,   281,    -1,    31,   281,    -1,
     168,    -1,    26,   166,   101,   151,    -1,   168,    -1,    26,
     166,   102,   151,    -1,   168,    -1,    26,   166,   100,   151,
      -1,   136,    13,   271,    -1,   204,     8,   136,    13,   271,
      -1,   152,   206,   153,    -1,   152,   151,   206,   153,    -1,
      26,   206,   104,   151,    -1,    26,   151,   206,   104,   151,
      -1,    -1,   206,    78,   277,   207,   166,    -1,   206,    90,
     207,   166,    -1,    26,    -1,   151,    -1,   168,    -1,    26,
     166,   105,   151,    -1,    -1,   209,    64,   149,   277,   150,
     168,    -1,    -1,   210,    64,   149,   277,   150,    26,   166,
      -1,    -1,    65,   168,    -1,    -1,    65,    26,   166,    -1,
     214,    -1,    -1,   215,   146,    -1,   215,    31,   146,    -1,
     215,    31,   146,    13,   271,    -1,   215,   146,    13,   271,
      -1,   214,     8,   215,   146,    -1,   214,     8,   215,    31,
     146,    -1,   214,     8,   215,    31,   146,    13,   271,    -1,
     214,     8,   215,   146,    13,   271,    -1,    -1,    73,    -1,
      77,    -1,   262,    -1,   217,    -1,    -1,   255,    -1,   281,
      -1,    31,   279,    -1,   217,     8,   255,    -1,   217,     8,
     281,    -1,   217,     8,    31,   279,    -1,   218,     8,   219,
      -1,   219,    -1,   146,    -1,   154,   278,    -1,   154,   152,
     277,   153,    -1,   220,     8,   146,    -1,   220,     8,   146,
      13,   271,    -1,   146,    -1,   146,    13,   271,    -1,   221,
     222,    -1,    -1,   241,   245,   151,    -1,   246,   151,    -1,
     225,    -1,    -1,    -1,   242,   256,   181,   136,   223,   149,
     213,   150,   224,   240,    -1,    -1,   144,   226,   227,   229,
      -1,   262,    -1,    -1,   227,     8,   228,   262,    -1,   151,
      -1,    -1,   152,   230,   231,   153,    -1,    -1,   232,    -1,
     233,    -1,   232,   233,    -1,   234,   151,    -1,   238,   151,
      -1,   237,   119,   235,    -1,   262,    -1,   235,     8,   262,
      -1,   136,    -1,   237,    -1,   262,   133,   136,    -1,   236,
      74,   239,   136,    -1,   236,    74,   244,    -1,    -1,   244,
      -1,   151,    -1,   152,   166,   153,    -1,   243,    -1,   145,
      -1,    -1,   243,    -1,   244,    -1,   243,   244,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   245,     8,   146,    -1,   245,     8,   146,    13,   271,
      -1,   146,    -1,   146,    13,   271,    -1,   246,     8,   136,
      13,   271,    -1,    85,   136,    13,   271,    -1,   247,     8,
     277,    -1,   277,    -1,    -1,   249,    -1,   249,     8,   277,
      -1,   277,    -1,   250,   284,    -1,   284,    -1,   251,    61,
     296,   155,    -1,    61,   296,   155,    -1,   251,   250,    -1,
     251,    -1,   250,    -1,    -1,   252,    -1,    63,   263,   269,
      -1,   123,   149,   301,   150,    13,   277,    -1,   281,    13,
     277,    -1,   281,    13,    31,   281,    -1,   281,    13,    31,
      63,   263,   269,    -1,    62,   277,    -1,   281,    24,   277,
      -1,   281,    23,   277,    -1,   281,    22,   277,    -1,   281,
      21,   277,    -1,   281,    20,   277,    -1,   281,    19,   277,
      -1,   281,    18,   277,    -1,   281,    17,   277,    -1,   281,
      16,   277,    -1,   281,    15,   277,    -1,   281,    14,   277,
      -1,   280,    60,    -1,    60,   280,    -1,   280,    59,    -1,
      59,   280,    -1,   277,    27,   277,    -1,   277,    28,   277,
      -1,   277,     9,   277,    -1,   277,    11,   277,    -1,   277,
      10,   277,    -1,   277,    29,   277,    -1,   277,    31,   277,
      -1,   277,    30,   277,    -1,   277,    44,   277,    -1,   277,
      42,   277,    -1,   277,    43,   277,    -1,   277,    45,   277,
      -1,   277,    46,   277,    -1,   277,    47,   277,    -1,   277,
      41,   277,    -1,   277,    40,   277,    -1,    42,   277,    -1,
      43,   277,    -1,    48,   277,    -1,    50,   277,    -1,   277,
      33,   277,    -1,   277,    32,   277,    -1,   277,    35,   277,
      -1,   277,    34,   277,    -1,   277,    36,   277,    -1,   277,
      39,   277,    -1,   277,    37,   277,    -1,   277,    38,   277,
      -1,   277,    49,   263,    -1,   149,   277,   150,    -1,   254,
      -1,   149,   254,   150,   253,    -1,   277,    25,   277,    26,
     277,    -1,   277,    25,    26,   277,    -1,   308,    -1,    58,
     277,    -1,    57,   277,    -1,    56,   277,    -1,    55,   277,
      -1,    54,   277,    -1,    53,   277,    -1,    52,   277,    -1,
     106,   267,    -1,    51,   277,    -1,   273,    -1,    73,   149,
     303,   150,    -1,    61,   303,   155,    -1,   156,   268,   156,
      -1,    12,   277,    -1,   256,   181,   149,   213,   150,   257,
     152,   166,   153,    -1,    72,   256,   181,   149,   213,   150,
     257,   152,   166,   153,    -1,   112,    -1,    -1,   144,   149,
     258,   150,    -1,   258,     8,   146,    -1,   258,     8,    31,
     146,    -1,   146,    -1,    31,   146,    -1,    -1,   161,   149,
     260,   216,   150,    -1,   126,   128,   161,   149,   216,   150,
      -1,   128,   161,   149,   216,   150,    -1,   261,   133,   136,
     149,   216,   150,    -1,   261,   133,   288,   149,   216,   150,
      -1,   290,   133,   136,   149,   216,   150,    -1,   290,   133,
     288,   149,   216,   150,    -1,   288,   149,   216,   150,    -1,
      72,    -1,   161,    -1,   126,   128,   161,    -1,   128,   161,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     261,    -1,   264,    -1,   293,   130,   297,   265,    -1,   293,
      -1,   265,   266,    -1,    -1,   130,   297,    -1,    -1,   149,
     150,    -1,   149,   277,   150,    -1,    -1,    99,    -1,   305,
      -1,    -1,   149,   216,   150,    -1,   124,    -1,    92,    -1,
      86,    -1,   122,    -1,   108,    -1,    91,    -1,   141,    -1,
     125,    -1,   111,    -1,   127,    -1,   135,    99,   103,    -1,
     135,   103,    -1,   270,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,    42,   271,    -1,    43,   271,    -1,
      73,   149,   274,   150,    -1,    61,   274,   155,    -1,   272,
      -1,    82,    -1,   261,   133,   136,    -1,   137,    -1,   310,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     270,    -1,   157,   305,   157,    -1,   135,   305,   103,    -1,
      82,    -1,    -1,   276,   275,    -1,    -1,     8,    -1,   276,
       8,   271,    96,   271,    -1,   276,     8,   271,    -1,   271,
      96,   271,    -1,   271,    -1,   278,    -1,   255,    -1,   281,
      -1,   281,    -1,   281,    -1,    -1,   292,   130,   297,   287,
     282,   283,    -1,   292,    -1,   283,   284,    -1,    -1,   130,
     297,   287,    -1,   285,    61,   296,   155,    -1,   286,    61,
     296,   155,    -1,   149,   216,   150,    -1,   286,    -1,   285,
      -1,    -1,   294,    -1,   300,   294,    -1,   261,   133,   288,
      -1,   290,   133,   288,    -1,   294,    -1,   291,    61,   296,
     155,    -1,   259,    61,   296,   155,    -1,   293,    -1,   291,
      -1,   259,    -1,   294,    -1,   300,   294,    -1,   289,    -1,
     294,    61,   296,   155,    -1,   294,   152,   277,   153,    -1,
     295,    -1,   146,    -1,   154,   152,   277,   153,    -1,    -1,
     277,    -1,   298,    -1,   288,    -1,   298,    61,   296,   155,
      -1,   298,   152,   277,   153,    -1,   299,    -1,   136,    -1,
     152,   277,   153,    -1,   154,    -1,   300,   154,    -1,   301,
       8,   302,    -1,   302,    -1,   281,    -1,   123,   149,   301,
     150,    -1,    -1,    -1,   304,   275,    -1,   304,     8,   277,
      96,   277,    -1,   304,     8,   277,    -1,   277,    96,   277,
      -1,   277,    -1,   304,     8,   277,    96,    31,   279,    -1,
     304,     8,    31,   279,    -1,   277,    96,    31,   279,    -1,
      31,   279,    -1,   305,   306,    -1,   305,    99,    -1,   306,
      -1,    99,   306,    -1,   146,    -1,   146,    61,   307,   155,
      -1,   146,   130,   136,    -1,    95,   277,   153,    -1,    95,
     137,    61,   277,   155,   153,    -1,    88,   281,   153,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   149,   309,   150,
      -1,    98,   149,   281,   150,    -1,     7,   277,    -1,     6,
     277,    -1,     5,   149,   277,   150,    -1,     4,   277,    -1,
       3,   277,    -1,   281,    -1,   309,     8,   281,    -1,   261,
     133,   136,    -1,   290,   133,   136,    -1
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
     667,   668,   672,   673,   677,   678,   679,   682,   684,   688,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   741,
     742,   743,   744,   747,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     766,   771,   774,   776,   780,   781,   782,   783,   787,   787,
     789,   792,   794,   796,   798,   800,   802,   807,   808,   809,
     810,   814,   815,   816,   820,   821,   825,   828,   832,   833,
     837,   840,   842,   843,   846,   848,   849,   852,   854,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   886,   890,   891,   892,   893,   894,   895,   896,   897,
     898,   901,   903,   906,   908,   912,   913,   914,   915,   919,
     920,   925,   930,   934,   940,   938,   942,   946,   947,   951,
     956,   957,   961,   965,   966,   967,   971,   972,   976,   977,
     981,   985,   986,   990,   991,   992,   996,   997,   998,  1002,
    1003,  1004,  1008,  1009,  1012,  1014,  1018,  1019,  1023,  1024,
    1025,  1029,  1030,  1034,  1035,  1039,  1040,  1044,  1045,  1046,
    1049,  1051,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,
    1066,  1067,  1068,  1069,  1073,  1074,  1075,  1076,  1077,  1078,
    1082,  1083,  1084,  1088,  1089,  1090,  1091,  1092,  1093,  1094,
    1098,  1099,  1103,  1104
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
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@19", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@20",
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
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   256,   257,   257,   258,   258,   258,   258,   260,   259,
     259,   259,   259,   259,   259,   259,   259,   261,   261,   261,
     261,   262,   262,   262,   263,   263,   264,   264,   265,   265,
     266,   267,   267,   267,   268,   268,   268,   269,   269,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   275,   275,   276,   276,   276,   276,   277,
     277,   278,   279,   280,   282,   281,   281,   283,   283,   284,
     285,   285,   286,   287,   287,   287,   288,   288,   289,   289,
     290,   291,   291,   292,   292,   292,   293,   293,   293,   294,
     294,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     298,   299,   299,   300,   300,   301,   301,   302,   302,   302,
     303,   303,   304,   304,   304,   304,   304,   304,   304,   304,
     305,   305,   305,   305,   306,   306,   306,   306,   306,   306,
     307,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     309,   309,   310,   310
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
       1,     4,     5,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     3,     3,     2,     9,
      10,     1,     0,     4,     3,     4,     1,     2,     0,     5,
       6,     5,     6,     6,     6,     6,     4,     1,     1,     3,
       2,     1,     3,     2,     1,     1,     4,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     2,     2,     2,     4,     3,     1,
       1,     3,     1,     1,     1,     3,     2,     1,     3,     3,
       1,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     6,     1,     2,     0,     3,
       4,     4,     3,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     4,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     1,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     4,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     2,     2,     4,     2,     2,
       1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   430,     0,     0,     0,     0,   317,
       0,     0,    84,   370,     0,   341,     0,     0,   344,   340,
      37,     0,     0,   331,   343,     0,     0,   347,   301,     0,
       0,     0,     0,    51,    91,     0,   342,     0,   339,   346,
       0,   348,     0,     0,     0,     5,   362,     0,     0,    86,
     345,     0,     0,     0,   412,     0,     0,    57,    25,   423,
     334,     0,   364,     3,     0,     7,    30,     8,     9,    71,
      72,     0,     0,   280,   380,    73,   405,     0,   367,   294,
       0,   379,     0,   381,     0,   408,     0,   404,   386,   403,
     406,   411,     0,   284,   363,   317,     0,     5,    73,   459,
     458,     0,   456,   455,   298,   266,   267,   268,   269,   293,
     291,   290,   289,   288,   287,   286,   285,   317,     0,     0,
     318,     0,   249,   383,     0,   247,     0,   435,     0,   373,
     234,     0,     0,   318,   324,   337,   325,     0,   327,   406,
       0,    87,    85,   160,     0,    73,   430,    41,     0,     0,
      43,     0,     0,     0,     0,   215,     0,     0,   292,   216,
       0,   155,     0,     0,   154,     0,     0,     0,     0,   429,
       0,     4,     0,   366,    45,   380,     0,   381,     0,     0,
       0,   350,   444,     0,   442,    31,     0,     0,    25,     0,
       0,    18,     0,    17,    35,   280,     0,     0,     0,   335,
       0,   336,     0,     0,     0,   308,     0,    15,    78,    81,
      74,     0,   414,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   248,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,   414,     0,   414,
       0,   424,   407,     0,     0,     0,   320,     0,     0,   439,
     382,     0,   296,   374,   431,     0,   320,     0,   146,   229,
       0,     0,   407,     0,     0,    49,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    50,     0,   332,     0,     0,
     217,   219,   380,   381,     0,   156,   381,     0,    48,    61,
       0,     0,   460,     0,     0,   427,     0,   426,   365,     0,
      11,     4,   146,    46,    47,     0,   362,     0,   349,   443,
       0,     0,   441,   369,   440,     0,    60,     0,     0,    68,
      70,    20,     0,     0,    14,     0,   227,   279,     0,    32,
      24,    26,    27,    28,     0,   297,   368,     6,   146,     0,
      88,    92,    75,   141,   415,     0,   462,   398,   396,     0,
     252,   254,   253,     0,     0,   250,   251,   255,   257,   256,
     271,   270,   273,   272,   274,   276,   277,   275,   265,   264,
     259,   260,   258,   261,   262,   263,   278,     0,   231,   245,
     244,   243,   242,   241,   240,   239,   238,   237,   236,   235,
       0,     0,   145,   380,   381,   463,   399,     0,   421,     0,
     417,   395,   416,   420,     0,     0,   457,   319,     0,     0,
       0,   434,     0,   433,   319,   398,     0,   399,   329,     0,
       0,   371,     0,   360,     0,     0,     0,   352,     0,   351,
     161,   359,   158,   141,   295,    23,     0,     0,     0,     0,
     214,   454,   333,   216,     0,     0,     0,     0,   153,    10,
       0,     0,   453,   429,   429,     0,   146,    13,     0,     0,
     449,     0,   447,   451,   450,   452,     0,   446,     0,     0,
       0,     0,     0,    19,    16,     0,   414,     0,   226,   225,
     228,   281,   221,     0,   413,     0,     0,    89,    95,    93,
      82,     0,   142,   143,     0,     0,   321,     0,   131,     0,
     144,   402,   146,   146,   397,   283,     0,     0,   232,   149,
     316,     0,   146,   146,   401,     0,   146,   394,   393,   384,
     414,     0,   409,   410,   438,   437,     0,   338,   326,   355,
     356,   378,     0,   373,   371,     0,   354,     0,     0,     0,
       0,   110,     0,    25,   108,    56,     0,     0,   218,   100,
       0,   100,   102,   157,    25,   123,   461,     0,   425,     0,
       0,    12,   311,     0,   445,   116,   116,    40,     0,    69,
      53,    21,     0,     0,   395,   220,   414,   224,     0,   309,
      22,     0,    96,    79,     0,     0,   141,     0,   323,   302,
     141,     0,   133,     0,     0,   282,   337,     0,   380,   381,
       0,     0,   422,     0,   414,   414,   388,     0,     0,     0,
     432,     0,   328,     0,   358,   374,   372,     0,   353,   361,
     159,   302,     0,     0,     0,   216,     0,     0,   103,     0,
     125,   127,   428,   230,   310,     0,   116,     0,   116,     0,
       0,    25,   121,    36,   223,   389,     0,    29,    90,     0,
       0,    94,    98,   163,     0,   322,     0,     0,     0,   134,
       0,   312,   313,   233,   152,   314,   315,   392,     0,     0,
     385,   418,   419,   436,   330,   377,   376,   357,     0,   111,
       0,     0,     0,   101,     0,     0,   129,     0,     0,    33,
     448,     0,     0,     0,     0,     0,   112,     0,     0,   222,
      97,   163,     0,   198,    76,     0,    25,     0,   137,     0,
     136,   390,   391,   387,     0,    25,   109,    38,     0,    25,
     106,    55,    54,     0,     0,     0,     0,   128,     0,     0,
     119,   120,    25,   114,   113,     0,     0,   198,    99,   202,
     203,   204,   207,   206,   205,     0,   170,   197,    83,   162,
     166,     0,     0,   196,   200,     0,     0,     0,   306,     0,
       0,   138,     0,   135,   375,     0,    25,   104,    39,     0,
       0,    25,     0,     0,   115,    25,   118,    58,   122,    80,
       0,     0,   210,     0,    73,   201,     0,   165,    25,   307,
       0,   303,   299,     0,   140,   300,     0,     0,     0,   130,
      34,     0,   117,     0,     0,     0,   172,     0,     0,   164,
       0,     0,     0,     0,   304,   139,     0,   107,     0,   124,
      25,   213,   173,   175,   176,   171,   211,   208,   167,     0,
      77,   305,   105,    25,     0,     0,   178,     0,     0,   212,
     126,    63,   174,     5,     0,   179,   180,     0,     0,   188,
       0,     0,   209,   141,     0,    59,    62,    64,   177,   181,
     182,   192,     0,   183,     0,     0,     0,    65,     0,   191,
     184,   185,   189,   168,     0,   190,     0,     0,     0,   186,
     194,    25,   169,    66,     0,     0,   195,    25,     0,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   212,   213,    84,   217,   370,
     371,    86,   365,   173,   843,   895,   896,   897,   925,   358,
     359,   372,   373,   231,    89,   531,   796,    90,   380,   690,
     381,   625,    91,   528,   621,    92,   530,   624,   623,   689,
     691,   667,   591,   808,   761,   585,   312,   607,   677,   772,
     683,   671,   726,   729,   765,   537,   538,   539,   431,   432,
     183,   184,   164,   743,   789,   878,   917,   790,   821,   845,
     875,   865,   876,   884,   885,   886,   887,   910,   888,   889,
     890,   908,   922,   791,   792,   793,   794,   823,   795,   174,
     319,   320,   518,   519,   520,   521,    93,    94,   118,   697,
     799,    96,   378,    97,   540,   155,   156,   568,   652,   178,
     220,   299,    98,   571,   471,    99,   572,   294,   573,   100,
     101,   289,   102,   103,   646,   710,   522,   557,   558,   559,
     104,   105,   106,   107,   108,   109,   110,   111,   385,   441,
     442,   443,   112,   336,   337,   148,   149,   203,   204,   506,
     113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -768
static const yytype_int16 yypact[] =
{
    -768,    45,  1874,  -768,  6492,  6492,   -63,  6492,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,
    6492,  6492,   300,   300,  4974,  6492,   301,     8,    78,   -45,
     -43,  5100,  -768,  -768,    27,  -768,  5226,   -33,  -768,  -768,
    -768,  6492,    61,    97,  -768,   101,   103,  -768,  -768,   -23,
      43,   123,   170,  -768,  -768,   172,  -768,   187,  -768,  -768,
     -31,  -768,    91,  5352,   168,   321,  -768,   201,  6492,  -768,
    -768,   219,   204,    76,  -768,   226,  6492,  -768,  -768,   241,
       4,   214,   100,  -768,    22,  -768,  -768,  -768,  -768,  -768,
    -768,   269,   273,  -768,  -768,   380,   377,   343,  -768,  -768,
    7005,  -768,   237,   993,   329,  -768,   346,   420,   352,  -768,
     -25,  -768,   279,  -768,  -768,   372,   358,  -768,   380,  7754,
    7754,  6492,  7754,  7754,  1860,  -768,  -768,   445,  -768,  -768,
    -768,  -768,  -768,  -768,  -768,  -768,  -768,  -768,   367,    91,
     -54,   364,  -768,  -768,   366,  -768,   300,  7631,   347,   501,
    -768,   384,    91,   386,   385,   368,  -768,   389,   393,     3,
     279,  -768,  -768,   512,    25,   380,  4974,  -768,  7046,   516,
    -768,  7087,   394,  4819,    26,  7754,   300,  5478,  -768,  6492,
    6492,  -768,    80,    29,  -768,   390,   381,  6492,   300,   212,
      91,  -768,   -37,   190,  -768,   391,  7754,  1213,   300,  6618,
      -1,  -768,    12,   289,  -768,  -768,  6492,  7130,  -768,   300,
      91,   -17,    30,  -768,  -768,   383,  7171,  2029,  6492,    77,
     387,   232,    77,   165,   401,  -768,   404,  -768,  -768,  -768,
    -768,   -67,  6492,    59,  6492,  6492,  6492,  5604,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,  6492,   301,
    -768,  -768,  -768,  5731,  6492,  6492,  6492,  6492,  6492,  6492,
    6492,  6492,  6492,  6492,  6492,  5858,   134,  6492,   315,  6492,
    6492,   241,    -3,   399,  7212,    91,   -24,   188,   258,  -768,
    -768,  5985,  -768,  6112,  -768,    91,   386,   304,  5858,  -768,
     304,   315,     1,  7511,   403,  -768,   402,   406,  -768,  7511,
    -768,   539,    11,   410,  6492,  -768,   411,  -768,  7255,   409,
     554,  7754,   479,   973,  6492,  -768,  -768,   -23,  -768,  -768,
     413,  7297,  -768,    24,   416,  -768,    35,  -768,   236,  1564,
    -768,  -768,  5858,  -768,  -768,   415,   505,  6751,  -768,  -768,
     339,   433,  -768,  -768,  -768,  7338,  -768,  2184,    36,  -768,
    -768,   -11,   436,    76,  -768,  6492,    17,  -768,   424,  -768,
    -768,  -768,  -768,  -768,  6792,  -768,  -768,  -768,  5858,   561,
     475,   476,  -768,    81,  7754,   438,   446,   447,     1,   279,
    1555,  1708,  1860,  6492,  7713,  2169,  2323,  2477,  1437,  2630,
    2785,  2785,  2785,  2785,  2936,  2936,  2936,  2936,   543,   543,
     442,   442,   442,   445,   445,   445,  -768,   -16,  1860,  1860,
    1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,
     300,   441,   589,    38,   400,   449,   450,   448,  -768,  6492,
    -768,   453,     5,  -768,   454,  6833,  -768,   109,   446,   449,
     300,  7754,   300,  7672,   386,  -768,   455,  -768,  -768,  7511,
    7511,  7511,   459,  -768,   483,    91,    19,     0,   480,  -768,
    -768,  -768,   599,    81,  -768,  -768,  7511,   484,  4044,   467,
    7754,  -768,  -768,  6492,  6492,   300,    65,  6878,  -768,  -768,
    4199,   300,  -768,   212,   212,   606,  5858,  -768,  1719,   471,
    -768,  6492,  -768,  -768,  -768,  -768,   469,  -768,    -8,   546,
     300,   485,   486,  -768,  -768,  7379,  6492,   315,   496,    68,
    -768,  -768,  -768,   481,  -768,   487,  7511,  -768,   513,  -768,
    -768,   489,  -768,  -768,   506,    91,   386,   491,   631,    -7,
    -768,  -768,  5858,  5858,     1,  2015,  6492,   301,  -768,  -768,
    -768,  6239,  5858,  5858,  -768,  6919,  5858,   583,   584,  -768,
    6492,  6492,  -768,  -768,  -768,  -768,  6366,  -768,   517,  -768,
    -768,   553,   497,   643,  7511,    91,   146,   552,   520,  7511,
     514,  -768,   650,  -768,  -768,  -768,  6492,   515,  7754,   569,
     300,   569,  -768,  -768,  -768,  -768,  -768,    42,  -768,  6492,
     521,  -768,  -768,  1273,  -768,   519,   524,  -768,   518,  -768,
    -768,  -768,  4354,   523,   453,  -768,  6492,   496,   525,  -768,
    -768,   119,  -768,  -768,   119,   529,    81,    91,   386,   533,
     253,   527,   669,   536,   537,  2015,   368,   300,    44,   733,
     538,   549,  -768,   550,  6492,  6492,  -768,   548,  6960,   300,
    7754,   315,  -768,  7511,  -768,  7511,  -768,   551,   344,  -768,
    -768,   533,  7511,  2339,  7421,  6492,    65,   555,  -768,   556,
    3889,   268,  -768,  1860,  -768,   557,  -768,   140,  -768,   -18,
     119,  -768,  -768,  -768,  -768,  -768,   558,  -768,  -768,   119,
     559,   696,  -768,  -768,   562,   386,   560,   563,    37,   701,
    7511,  -768,  -768,  -768,  -768,  -768,  -768,  -768,   565,   566,
     496,  -768,  -768,  -768,  -768,  -768,   620,  -768,   571,  -768,
     567,   574,   578,  -768,  4509,  4509,   292,   568,  4819,  -768,
    -768,   195,  6492,     9,   580,   -13,  -768,   586,  2494,  -768,
     696,  -768,   119,   223,  -768,    54,  -768,   591,   722,  7511,
    -768,  -768,  -768,  -768,  7511,  -768,  -768,  -768,  4664,  -768,
    -768,  -768,  -768,   593,   712,   674,  6492,  -768,   592,  1493,
    -768,  -768,  -768,  -768,  -768,   594,   607,   509,  -768,  -768,
    -768,  -768,  -768,  -768,  -768,   623,  -768,  -768,  -768,  -768,
    -768,   615,   372,   331,  -768,    31,   610,   617,  -768,    47,
    2649,   751,  7511,  -768,  -768,  2804,  -768,  -768,  -768,  2959,
    6492,  -768,   614,  7462,  -768,  -768,  3889,  -768,  -768,  -768,
     753,   119,   754,    33,   380,  -768,   632,  -768,  -768,  -768,
      57,  -768,  -768,  7511,  -768,  -768,  3114,   618,  7503,  3889,
    -768,  4819,  3889,   619,  7511,    15,  -768,  7511,   624,  -768,
     637,   761,  3269,   629,  -768,  -768,   625,  -768,   752,  -768,
    -768,  -768,  -768,  -768,  -768,  -768,  -768,   766,  -768,  7511,
    -768,  -768,  -768,  -768,  3424,   119,   316,  7511,   634,  -768,
    3889,   702,  -768,   706,   633,   316,  -768,   636,   710,   666,
     638,   658,  -768,    81,   645,  -768,   702,  -768,  -768,  -768,
    -768,   626,   119,  -768,   659,   646,   119,  -768,   661,   663,
     792,  -768,  -768,  -768,   656,  -768,   119,   239,   654,  -768,
    -768,  -768,  -768,  -768,  3579,   653,  -768,  -768,  3734,  -768
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -768,  -768,  -170,   -20,  -768,  -768,   443,  -768,  -188,  -768,
       2,  -768,  -768,  -768,  -768,  -768,  -768,   -88,  -768,  -768,
     299,     6,    10,  -117,  -768,  -768,  -768,  -768,  -768,  -768,
    -768,  -768,  -768,  -768,  -768,  -768,  -768,  -768,  -768,  -768,
     121,   220,   149,  -768,    87,  -768,  -768,  -768,  -578,    48,
    -768,  -768,  -768,  -768,  -768,  -462,  -768,   186,  -191,  -768,
    -768,   492,  -768,    79,  -768,  -768,  -768,  -768,  -768,  -768,
    -768,  -768,  -768,  -768,  -768,   -64,  -768,  -768,  -768,  -768,
    -768,  -768,  -768,  -768,  -768,  -768,  -767,  -768,  -768,  -768,
    -469,  -768,   303,  -768,  -768,  -768,   742,   -32,    -2,   162,
    -768,  -768,  -768,   198,  -599,  -246,  -768,  -768,  -768,  -768,
    -768,   192,   522,   545,  -768,  -768,   252,   256,  -768,   899,
     648,  -401,   426,   911,  -768,  -768,  -508,  -768,  -768,   218,
    -217,  -768,    53,  -768,  -768,   -21,   -19,  -768,  -262,  -292,
    -768,  -768,    28,   340,   342,   672,  -768,   382,   313,  -768,
    -768,  -768,  -768
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -401
static const yytype_int16 yytable[] =
{
      95,   283,   140,   140,    85,   158,   153,   159,    87,   458,
     615,   580,    88,   416,   587,   437,   387,   444,   605,   477,
     357,   339,   688,   862,   631,   692,   825,   165,   679,   549,
     226,   195,   491,   304,   314,   770,   279,   327,   363,   826,
     192,   848,   193,   494,   510,     3,  -147,   547,   306,   564,
     494,   565,  -150,   211,   160,   830,   137,   362,   279,   436,
     732,   440,   279,   512,   279,   732,   560,    48,   747,   382,
     387,   436,   733,   350,   224,   144,   144,   733,   516,   157,
     455,   737,   383,   457,   440,   797,   121,   198,   853,   161,
     692,   224,   198,   282,   199,   225,   590,   190,   731,   199,
     735,   163,   348,   219,   224,   117,   166,   456,  -400,   615,
     138,   224,   139,   165,   340,   341,   172,   224,   577,   286,
     117,   191,   201,   181,  -396,   342,   140,   280,   224,   616,
      74,   182,   296,  -318,   909,   736,  -400,   137,    79,   632,
     774,   302,   351,   778,   606,   202,  -397,   517,   322,   280,
     202,   499,   137,   280,   532,   280,   140,   561,   533,   162,
     771,   478,   140,   169,   694,   198,   863,   864,   140,   140,
     338,   498,   199,   227,   492,   313,   305,   315,   140,   185,
     328,   364,   827,   748,   849,   495,   511,   525,  -147,   140,
     361,   138,   672,   139,  -150,   386,   722,   831,   517,   144,
     798,   117,   753,   854,   210,    74,   138,   534,   139,   535,
     176,    74,   117,    79,   388,    95,   117,   117,   732,    79,
     141,   141,   846,   202,   154,   614,    74,   117,   224,   144,
     733,  -132,   324,  -318,    79,   144,   704,   224,   158,   153,
     159,   144,   144,   433,   734,   534,   177,   535,   713,   225,
     179,   144,   180,   198,   613,   117,   198,   388,   496,   388,
     199,   389,   144,   199,   352,   447,   433,   200,   388,   388,
     435,   201,   186,   732,   224,   454,   882,   891,   388,  -320,
      74,   388,   388,   467,   137,   733,   891,   160,    79,   467,
     779,   780,   781,   782,   783,   784,   261,   262,   647,   768,
     440,   636,   198,   911,   389,   600,   389,   914,   785,   199,
     433,   202,   157,   222,   202,   389,   389,   919,   224,   187,
     198,   188,   376,  -320,   448,   389,   532,   199,   389,   389,
     533,   352,   727,   728,    74,   334,   189,    95,   138,   342,
     139,    85,    79,   211,   141,    87,   433,   205,   117,    88,
     206,   633,   634,   209,   686,    95,   763,   764,    74,   714,
     202,   640,   641,   536,   224,   643,    79,   786,   787,  -319,
     544,   208,   137,   137,   141,   214,   788,   198,   202,   534,
     141,   535,   708,   709,   199,   496,   141,   141,   352,   117,
     920,   921,   353,   218,   449,   663,   141,   140,   779,   780,
     781,   782,   783,   784,    74,   228,   670,   141,  -148,   229,
     140,   230,    79,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,    74,   138,   151,   139,   152,
     140,   905,   140,   281,   440,   202,   117,   117,   232,   467,
     467,   467,   534,  -199,   535,   576,    74,    74,   142,   145,
      74,   438,   883,   536,    79,    79,   467,   154,    79,  -383,
    -383,    74,   221,   223,   433,   140,   140,   439,   503,    79,
     144,   140,   224,   140,   140,   504,   233,  -319,   275,   276,
     584,   277,   278,   144,    48,   505,   190,   256,   257,   258,
     140,   259,   595,   738,   259,   285,    95,   287,   388,   288,
      85,   468,   292,   144,    87,   144,   467,   468,    88,   293,
     433,   433,   295,   349,   224,   628,   354,   298,   297,   638,
     433,   433,   300,   301,   433,   303,   158,   153,   159,   309,
     311,   330,   349,   366,   354,   349,   354,   377,   144,   144,
     379,   329,   343,   375,   144,   389,   144,   144,   383,   472,
    -148,   473,   476,   485,   467,   658,   474,   479,   800,   467,
     483,   481,   484,   144,   489,   493,   501,   805,   500,   507,
     140,   809,   513,   523,   526,   160,   779,   780,   781,   782,
     783,   784,   527,   529,   816,   253,   254,   255,   256,   257,
     258,   550,   259,   541,   785,   542,   543,   551,   552,   553,
     157,   536,   556,   554,   536,   567,   536,   695,   574,   562,
     536,   575,   579,   578,   682,   141,   586,   140,   836,   599,
     582,   602,   611,   839,   604,   608,   517,   842,   141,   140,
     622,   618,   388,   467,   627,   467,   610,   619,   626,   630,
     852,   629,   467,   144,   644,   645,   140,   651,   141,   653,
     141,   655,   654,   786,   787,   348,   659,   468,   468,   468,
     536,    95,   819,   662,   661,   666,   665,   680,    95,   536,
     676,   674,   874,   699,   468,   678,   687,   696,   684,   389,
     467,   693,   700,   141,   141,   880,   701,   702,   705,   141,
     144,   141,   141,   779,   780,   781,   782,   783,   784,   706,
     707,   717,   144,   711,   742,   724,   725,   850,   141,   745,
     730,   741,   744,   739,   749,   746,   754,   766,   756,   144,
     751,   752,   536,   755,   468,   757,   760,   760,   758,   467,
     767,   773,   775,   924,   467,   802,    95,   801,   811,   928,
     812,  -151,   810,   814,   817,   154,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   818,   820,
     807,   822,   828,   829,   833,   840,   844,   847,   851,   857,
     867,   860,   468,   868,   869,   871,   872,   468,   873,   877,
    -187,   894,   467,   893,   901,   902,   898,   900,   141,   903,
     824,   904,  -383,  -383,   906,   912,   913,   915,    95,  -193,
     916,   536,   918,    95,   923,   927,   514,    95,   907,   609,
     740,   669,   762,   467,    95,   723,   698,   815,   215,   488,
     777,   899,   617,   718,   467,   469,   657,   467,   703,   656,
     325,   469,   685,   597,    95,   141,   598,    95,   307,     0,
      95,     0,     0,   859,     0,     0,     0,   141,   470,   467,
      95,   468,     0,   468,   475,   536,   536,   467,     0,     0,
     468,     0,     0,     0,   141,   536,     0,     0,     0,     0,
       0,     0,    95,   536,     0,     0,     0,     0,    95,     0,
       0,     0,   536,  -151,     0,     0,   536,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   536,     0,   468,     0,
       0,     0,     0,   119,   120,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     0,    95,   147,   150,     0,    95,     0,     0,     0,
     168,     0,     0,   143,   143,   171,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,   468,     0,     0,
       0,     0,   468,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,   207,     0,     0,
       0,     0,     0,     0,   197,   216,     0,     0,     0,     0,
       0,   469,   469,   469,     0,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   469,     0,
     468,     0,     0,     0,   569,   570,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,     0,     0,
     284,   581,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,  -383,  -383,     0,     0,     0,     0,     0,     0,
       0,     0,   468,     0,     0,   468,     0,   486,   469,     0,
       0,     0,  -383,  -383,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,   147,     0,   468,     0,     0,
       0,   620,     0,     0,     0,   468,   318,     0,   321,   196,
       0,     0,     0,     0,     0,     0,   331,   316,     0,     0,
       0,   323,     0,   326,     0,     0,   469,     0,   347,   332,
     335,   469,     0,     0,     0,   355,     0,     0,     0,   345,
       0,     0,     0,     0,     0,     0,     0,   374,     0,     0,
     360,     0,     0,     0,   660,     0,     0,     0,     0,     0,
       0,   384,     0,   390,   391,   392,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,     0,     0,
       0,     0,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   196,   469,   384,   469,   384,   445,
       0,     0,     0,     0,   469,     0,   434,     0,     0,     0,
     451,     0,   453,     0,     0,     0,     0,   196,   715,     0,
     716,     0,     0,     0,     0,     0,     0,   719,     0,   434,
       0,     0,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,   469,   487,     0,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,     0,     0,
       0,   196,     0,     0,     0,   750,     0,     0,     0,     0,
       0,     0,     0,   434,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,   469,  -383,  -383,     0,     0,   469,   196,     0,     0,
       0,     0,   234,   235,   236,     0,     0,     0,     0,   434,
       0,     0,   545,     0,   803,     0,     0,     0,   237,   804,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   469,     0,     0,     0,   548,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   555,     0,
       0,   290,     0,     0,     0,     0,     0,   834,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
       0,   290,     0,   290,   344,     0,   469,     0,     0,   469,
       0,     0,     0,     0,     0,     0,     0,     0,   855,     0,
       0,     0,   321,   588,     0,     0,     0,     0,     0,   861,
       0,   469,   866,     0,     0,   196,   589,   592,     0,   469,
     603,     0,   596,     0,   335,   335,     0,   434,     0,     0,
       0,     0,     0,     0,   879,   384,     0,     0,     0,     0,
       0,   360,   892,     0,     0,     0,     0,     0,   675,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   196,   196,     0,     0,   635,     0,     0,     0,     0,
     196,   196,   196,   434,   434,   196,     0,     0,     0,   384,
     648,     0,   639,   434,   434,   650,     0,   434,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   664,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,     0,
       0,   668,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   384,     0,     0,   237,   770,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   384,   384,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     290,     0,     0,     0,   321,   235,   236,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   592,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,   769,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,   771,    32,    33,     0,     0,    34,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,   813,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   838,
      74,    75,     0,    76,     0,    77,    78,   497,    79,   236,
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
      77,    78,   601,    79,     0,    80,    81,     4,     5,     6,
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
       0,     9,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,   720,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   368,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,   776,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   368,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,    78,     0,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
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
      77,    78,   832,    79,     0,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,  -401,  -401,  -401,
    -401,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
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
      74,    75,     0,    76,     0,    77,    78,   835,    79,     0,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,  -401,  -401,  -401,  -401,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,   837,     0,     0,     0,    43,     0,    44,    45,    46,
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
       0,    41,    42,     0,     0,   856,     0,     0,     0,     0,
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
      77,    78,   870,    79,     0,    80,    81,     4,     5,     6,
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
      74,    75,     0,    76,     0,    77,    78,   881,    79,     0,
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
      77,    78,   926,    79,     0,    80,    81,     4,     5,     6,
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
      74,    75,     0,    76,     0,    77,    78,   929,    79,     0,
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
     583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   594,     0,     0,     0,     0,
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
     681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   759,     0,     0,     0,     0,
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
     806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     393,     0,    79,     0,    80,    81,     0,     0,     0,     0,
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
      80,    81,   417,     0,     0,     0,     0,     0,     0,     0,
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
      76,     0,     0,     0,     0,    79,     0,    80,    81,   430,
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
     637,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    79,     0,    80,    81,   649,     0,     0,
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
       0,     0,     0,     0,   237,   524,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   563,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   593,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   642,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   712,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   260,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   308,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   310,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   356,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   482,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   490,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   508,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   612,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   459,   460,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   721,   461,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,   462,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,   841,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    58,    59,   464,    61,   465,
     234,   235,   236,     0,     0,     0,   466,   117,     0,     0,
       0,     0,    70,   858,     0,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   546,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,   566,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,   118,    22,    23,     2,    26,    26,    26,     2,   301,
     518,   473,     2,   259,   483,   277,   233,   279,    26,     8,
     208,   191,   621,     8,    31,   624,   793,    29,   606,   430,
       8,    63,     8,     8,     8,    26,    61,     8,     8,     8,
      60,     8,    62,     8,     8,     0,     8,    63,   165,   450,
       8,   452,     8,    73,    26,     8,    72,    74,    61,   276,
      78,   278,    61,    74,    61,    78,    61,   112,    31,   136,
     287,   288,    90,    61,   128,    22,    23,    90,    61,    26,
     297,   680,   149,   300,   301,    31,   149,    88,    31,    81,
     689,   128,    88,   112,    95,   149,    31,   128,   676,    95,
     678,   146,   103,    99,   128,   136,   149,   298,   133,   617,
     126,   128,   128,   115,   151,   152,   149,   128,    99,   139,
     136,   152,   103,   146,   149,   149,   146,   152,   128,    61,
     146,   154,   152,   133,   901,   153,   133,    72,   154,   146,
     153,   160,   130,   742,   152,   146,   149,   130,   180,   152,
     146,   342,    72,   152,    73,   152,   176,   152,    77,    81,
     151,   150,   182,   136,   626,    88,   151,   152,   188,   189,
     190,   341,    95,   151,   150,   173,   151,   151,   198,   136,
     151,   151,   151,   146,   151,   150,   150,   378,   150,   209,
     210,   126,   150,   128,   150,   136,   665,   150,   130,   146,
     146,   136,   710,   146,   128,   146,   126,   126,   128,   128,
     149,   146,   136,   154,   233,   217,   136,   136,    78,   154,
      22,    23,   821,   146,    26,   517,   146,   136,   128,   176,
      90,   150,   152,   133,   154,   182,   637,   128,   259,   259,
     259,   188,   189,   275,   104,   126,   149,   128,   649,   149,
     149,   198,   149,    88,   516,   136,    88,   276,   149,   278,
      95,   233,   209,    95,    99,   285,   298,    99,   287,   288,
     136,   103,   149,    78,   128,   295,   875,   876,   297,   133,
     146,   300,   301,   303,    72,    90,   885,   259,   154,   309,
      67,    68,    69,    70,    71,    72,    59,    60,   560,   104,
     517,   547,    88,   902,   276,   496,   278,   906,    85,    95,
     342,   146,   259,    99,   146,   287,   288,   916,   128,   149,
      88,   149,   157,   133,   136,   297,    73,    95,   300,   301,
      77,    99,    64,    65,   146,   123,   149,   339,   126,   149,
     128,   339,   154,   363,   146,   339,   378,    26,   136,   339,
     149,   542,   543,   149,   616,   357,    64,    65,   146,   651,
     146,   552,   553,   383,   128,   556,   154,   144,   145,   133,
     389,   152,    72,    72,   176,   149,   153,    88,   146,   126,
     182,   128,   644,   645,    95,   149,   188,   189,    99,   136,
     151,   152,   103,   152,   136,   583,   198,   417,    67,    68,
      69,    70,    71,    72,   146,   136,   594,   209,     8,   136,
     430,    31,   154,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   146,   126,   126,   128,   128,
     450,   893,   452,   154,   651,   146,   136,   136,    61,   459,
     460,   461,   126,   112,   128,   465,   146,   146,    22,    23,
     146,   136,   136,   473,   154,   154,   476,   259,   154,    59,
      60,   146,    80,    81,   496,   485,   486,   152,   129,   154,
     417,   491,   128,   493,   494,   136,   133,   133,   149,   133,
     478,    61,   130,   430,   112,   146,   128,    45,    46,    47,
     510,    49,   490,   681,    49,   128,   498,   133,   517,   133,
     498,   303,   155,   450,   498,   452,   526,   309,   498,     8,
     542,   543,   128,   200,   128,   535,   203,   149,   133,   551,
     552,   553,   133,   130,   556,    13,   547,   547,   547,    13,
     136,   150,   219,   150,   221,   222,   223,   136,   485,   486,
     136,   151,   151,   156,   491,   517,   493,   494,   149,   146,
     150,   149,    13,    74,   574,   575,   150,   147,   746,   579,
     151,   150,     8,   510,   151,   149,    61,   755,   153,   136,
     590,   759,   136,   149,    13,   547,    67,    68,    69,    70,
      71,    72,   107,   107,   772,    42,    43,    44,    45,    46,
      47,   150,    49,   155,    85,   149,   149,     8,   149,   149,
     547,   621,   149,   155,   624,   150,   626,   627,   149,   155,
     630,   128,    13,   133,   612,   417,   149,   637,   806,    13,
     136,   150,   136,   811,   155,    79,   130,   815,   430,   649,
     117,   150,   651,   653,   128,   655,   151,   150,   149,     8,
     828,   150,   662,   590,    61,    61,   666,   130,   450,    96,
     452,     8,   155,   144,   145,   103,   136,   459,   460,   461,
     680,   663,   153,    13,   150,    96,   151,   149,   670,   689,
     151,   150,   860,   146,   476,   151,   151,   144,   155,   651,
     700,   152,    13,   485,   486,   873,   150,   150,   150,   491,
     637,   493,   494,    67,    68,    69,    70,    71,    72,   150,
     150,   150,   649,   155,     8,   150,   150,   824,   510,   149,
     153,   152,   150,   155,    13,   152,    96,   149,   151,   666,
     155,   155,   742,   152,   526,   151,   724,   725,   150,   749,
     728,   151,   146,   921,   754,    13,   738,   146,    26,   927,
      66,     8,   149,   151,   150,   547,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   151,   136,
     758,   146,   152,   146,    13,   151,    13,    13,   136,   151,
     146,   152,   574,   136,    13,   146,   151,   579,    26,    13,
      74,    79,   802,   149,    74,   119,   153,   151,   590,   151,
     792,   133,    59,    60,   149,   136,   150,   136,   800,   136,
       8,   821,   146,   805,   150,   152,   363,   809,   896,   510,
     689,   591,   725,   833,   816,   666,   630,   769,    76,   327,
     741,   885,   519,   661,   844,   303,   574,   847,   636,   573,
     182,   309,   614,   493,   836,   637,   494,   839,   166,    -1,
     842,    -1,    -1,   841,    -1,    -1,    -1,   649,   303,   869,
     852,   653,    -1,   655,   309,   875,   876,   877,    -1,    -1,
     662,    -1,    -1,    -1,   666,   885,    -1,    -1,    -1,    -1,
      -1,    -1,   874,   893,    -1,    -1,    -1,    -1,   880,    -1,
      -1,    -1,   902,   150,    -1,    -1,   906,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   916,    -1,   700,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,   924,    24,    25,    -1,   928,    -1,    -1,    -1,
      31,    -1,    -1,    22,    23,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,   749,    -1,    -1,
      -1,    -1,   754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    76,    -1,    -1,    -1,    -1,
      -1,   459,   460,   461,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   476,    -1,
     802,    -1,    -1,    -1,   459,   460,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
     121,   476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   833,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   844,    -1,    -1,   847,    -1,    74,   526,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,    -1,   869,    -1,    -1,
      -1,   526,    -1,    -1,    -1,   877,   177,    -1,   179,   180,
      -1,    -1,    -1,    -1,    -1,    -1,   187,   176,    -1,    -1,
      -1,   180,    -1,   182,    -1,    -1,   574,    -1,   199,   188,
     189,   579,    -1,    -1,    -1,   206,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,
     209,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,
      -1,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   653,   277,   655,   279,   280,
      -1,    -1,    -1,    -1,   662,    -1,   275,    -1,    -1,    -1,
     291,    -1,   293,    -1,    -1,    -1,    -1,   298,   653,    -1,
     655,    -1,    -1,    -1,    -1,    -1,    -1,   662,    -1,   298,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   700,   324,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,   342,    -1,    -1,    -1,   700,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,   749,    59,    60,    -1,    -1,   754,   378,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,   378,
      -1,    -1,   393,    -1,   749,    -1,    -1,    -1,    25,   754,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,   802,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,    -1,
      -1,   430,    -1,    -1,    -1,    -1,    -1,   802,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   833,    -1,    -1,    -1,    -1,
      -1,   450,    -1,   452,   151,    -1,   844,    -1,    -1,   847,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   833,    -1,
      -1,    -1,   483,   484,    -1,    -1,    -1,    -1,    -1,   844,
      -1,   869,   847,    -1,    -1,   496,   485,   486,    -1,   877,
     501,    -1,   491,    -1,   493,   494,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   869,   516,    -1,    -1,    -1,    -1,
      -1,   510,   877,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   542,   543,    -1,    -1,   546,    -1,    -1,    -1,    -1,
     551,   552,   553,   542,   543,   556,    -1,    -1,    -1,   560,
     561,    -1,   551,   552,   553,   566,    -1,   556,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   586,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,
      -1,   590,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   616,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   644,   645,    -1,    -1,    -1,   637,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     649,    -1,    -1,    -1,   665,    10,    11,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,   666,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,   732,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,   151,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,   766,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   810,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,    11,
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
      -1,    12,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       6,     7,    -1,    -1,    -1,    -1,    12,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
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
      -1,    12,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
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
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
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
      -1,    12,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
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
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   151,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,   124,   125,   126,   127,   128,
       9,    10,    11,    -1,    -1,    -1,   135,   136,    -1,    -1,
      -1,    -1,   141,   150,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49
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
     185,   190,   193,   254,   255,   256,   259,   261,   270,   273,
     277,   278,   280,   281,   288,   289,   290,   291,   292,   293,
     294,   295,   300,   308,   310,    72,   126,   136,   256,   277,
     277,   149,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,    72,   126,   128,
     161,   261,   280,   281,   290,   280,    31,   277,   303,   304,
     277,   126,   128,   161,   261,   263,   264,   290,   293,   294,
     300,    81,    81,   146,   220,   256,   149,   151,   277,   136,
     151,   277,   149,   171,   247,   277,   149,   149,   267,   149,
     149,   146,   154,   218,   219,   136,   149,   149,   149,   149,
     128,   152,   161,   161,   151,   255,   277,   281,    88,    95,
      99,   103,   146,   305,   306,    26,   149,   277,   152,   149,
     128,   161,   163,   164,   149,   254,   277,   166,   152,    99,
     268,   305,    99,   305,   128,   149,     8,   151,   136,   136,
      31,   181,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     151,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   133,    61,   130,    61,
     152,   154,   294,   181,   277,   128,   161,   133,   133,   279,
     281,    96,   155,     8,   275,   128,   161,   133,   149,   269,
     133,   130,   294,    13,     8,   151,   181,   303,   151,    13,
     151,   136,   204,   168,     8,   151,   281,   150,   277,   248,
     249,   277,   255,   281,   152,   278,   281,     8,   151,   151,
     150,   277,   281,   309,   123,   281,   301,   302,   161,   160,
     151,   152,   149,   151,   151,   281,   137,   277,   103,   306,
      61,   130,    99,   103,   306,   277,   151,   166,   177,   178,
     281,   161,    74,     8,   151,   170,   150,   150,   115,   153,
     167,   168,   179,   180,   277,   156,   157,   136,   260,   136,
     186,   188,   136,   149,   277,   296,   136,   288,   294,   300,
     277,   277,   277,    26,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   263,    31,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
      31,   216,   217,   255,   281,   136,   288,   296,   136,   152,
     288,   297,   298,   299,   296,   277,   150,   161,   136,   136,
      31,   277,    31,   277,   161,   288,   216,   288,   297,    42,
      43,    61,    73,    82,   126,   128,   135,   161,   261,   270,
     271,   272,   146,   149,   150,   271,    13,     8,   150,   147,
     277,   150,   150,   151,     8,    74,    74,   277,   219,   151,
     150,     8,   150,   149,     8,   150,   149,   153,   160,   216,
     153,    61,   153,   129,   136,   146,   307,   136,   150,   153,
       8,   150,    74,   136,   164,   277,    61,   130,   250,   251,
     252,   253,   284,   149,   153,   216,    13,   107,   191,   107,
     194,   183,    73,    77,   126,   128,   161,   213,   214,   215,
     262,   155,   149,   149,   294,   277,    26,    63,   281,   279,
     150,     8,   149,   149,   155,   277,   149,   285,   286,   287,
      61,   152,   155,   153,   279,   279,    96,   150,   265,   271,
     271,   271,   274,   276,   149,   128,   161,    99,   133,    13,
     213,   271,   136,    26,   168,   203,   149,   248,   277,   281,
      31,   200,   281,   153,    26,   168,   281,   301,   302,    13,
     216,   153,   150,   277,   155,    26,   152,   205,    79,   178,
     151,   136,   150,   296,   297,   284,    61,   250,   150,   150,
     271,   192,   117,   196,   195,   189,   149,   128,   161,   150,
       8,    31,   146,   216,   216,   277,   263,    31,   255,   281,
     216,   216,   153,   216,    61,    61,   282,   296,   277,    31,
     277,   130,   266,    96,   155,     8,   275,   274,   161,   136,
     271,   150,    13,   166,   277,   151,    96,   199,   281,   199,
     166,   209,   150,   277,   150,   155,   151,   206,   151,   206,
     149,    26,   168,   208,   155,   287,   296,   151,   262,   197,
     187,   198,   262,   152,   213,   161,   144,   257,   215,   146,
      13,   150,   150,   269,   279,   150,   150,   150,   296,   296,
     283,   155,   153,   279,   297,   271,   271,   150,   257,   271,
     100,   150,   248,   200,   150,   150,   210,    64,    65,   211,
     153,   206,    78,    90,   104,   206,   153,   262,   166,   155,
     198,   152,     8,   221,   150,   149,   152,    31,   146,    13,
     271,   155,   155,   284,    96,   152,   151,   151,   150,    26,
     168,   202,   202,    64,    65,   212,   149,   168,   104,   277,
      26,   151,   207,   151,   153,   146,   105,   221,   262,    67,
      68,    69,    70,    71,    72,    85,   144,   145,   153,   222,
     225,   241,   242,   243,   244,   246,   184,    31,   146,   258,
     166,   146,    13,   271,   271,   166,    26,   168,   201,   166,
     149,    26,    66,   277,   151,   207,   166,   150,   151,   153,
     136,   226,   146,   245,   256,   244,     8,   151,   152,   146,
       8,   150,   153,    13,   271,   153,   166,   102,   277,   166,
     151,   150,   166,   172,    13,   227,   262,    13,     8,   151,
     181,   136,   166,    31,   146,   271,   101,   151,   150,   168,
     152,   271,     8,   151,   152,   229,   271,   146,   136,    13,
     153,   146,   151,    26,   166,   228,   230,    13,   223,   271,
     166,   153,   262,   136,   231,   232,   233,   234,   236,   237,
     238,   262,   271,   149,    79,   173,   174,   175,   153,   233,
     151,    74,   119,   151,   133,   213,   149,   175,   239,   244,
     235,   262,   136,   150,   262,   136,     8,   224,   146,   262,
     151,   152,   240,   150,   166,   176,   153,   152,   166,   153
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

  case 184:

    { observers.TraitPrecedenceFound(); ;}
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

  case 229:

    { observers.ExpressionPushNewInstanceCall(); ;}
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

  case 282:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 283:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 284:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
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

  case 289:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 290:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 295:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 296:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (3)])); ;}
    break;

  case 297:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 299:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 300:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (10)])); ;}
    break;

  case 308:

    { observers.FunctionCallStart(); ;}
    break;

  case 309:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 348:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 349:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 350:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 360:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 379:

    { observers.ExpressionFound(); ;}
    break;

  case 380:

    { observers.ExpressionFound(); ;}
    break;

  case 384:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 389:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 390:

    { observers.ExpressionPop(); ;}
    break;

  case 391:

    { observers.ExpressionPop(); ;}
    break;

  case 392:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 394:

    { (yyval).Token = 0; ;}
    break;

  case 395:

    { (yyval).Token = 0; ;}
    break;

  case 398:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 401:

    { observers.ExpressionPop(); ;}
    break;

  case 402:

    { observers.ExpressionPop(); ;}
    break;

  case 404:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 405:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 412:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 427:

    { observers.ForeachVariableFound(); ;}
    break;

  case 455:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 456:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 458:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 459:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 462:

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




