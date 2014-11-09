/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"

	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/FullParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ParserType

// so that both bison parses call the same lex function
#define php54lex pelet::FullLex

// so that both bison parses call the same error function
#define php54error pelet::FullGrammarError



/* Line 268 of yacc.c  */
#line 100 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.cpp"

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

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 271 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7844

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  451
/* YYNRULES -- Number of states.  */
#define YYNSTATES  918

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
       2,     2,     2,    48,   156,     2,   155,    47,    31,     2,
     151,   152,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   153,
      36,    13,    37,    25,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   157,    30,     2,   154,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,    29,   150,    50,     2,     2,     2,
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
       2,     2,    71,    18,    73,    54,    74,    75,    52,    28,
      27,    76,    77,    78,    79,    80,    81,    82,    62,    83,
      84,    20,    85,    86,    87,    88,    58,    89,    90,    91,
      21,    92,    93,    94,    95,    96,    56,    97,    65,    64,
      98,    99,   100,   101,   102,   103,    66,   104,   105,     5,
     106,   107,   108,    70,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    59,     7,     6,   118,    49,   119,    57,
     120,    35,    38,    33,    34,    32,   121,    39,   122,   123,
     124,    11,     9,    10,   125,    23,    19,    22,   126,    63,
     127,   128,   129,    53,   130,   131,   132,    17,   133,    24,
      12,    69,    68,    67,     4,     3,   134,    41,    15,    40,
      14,   135,    72,   136,    55,   137,   138,   139,   140,   141,
     142,   143,    51,   144,   145,   146,   147,   148,    16,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    52,    56,
      58,    60,    64,    67,    72,    78,    83,    86,    87,    89,
      91,    93,    98,   100,   103,   107,   115,   126,   132,   140,
     150,   156,   159,   163,   166,   170,   173,   177,   181,   185,
     189,   193,   195,   198,   204,   213,   222,   228,   230,   244,
     248,   252,   254,   255,   257,   260,   269,   271,   275,   277,
     279,   281,   282,   284,   285,   296,   297,   306,   307,   315,
     317,   320,   322,   325,   326,   329,   331,   332,   335,   336,
     339,   341,   345,   346,   349,   351,   354,   356,   361,   363,
     368,   370,   375,   379,   385,   389,   394,   399,   405,   406,
     412,   417,   419,   421,   423,   428,   429,   436,   437,   445,
     446,   449,   450,   454,   456,   457,   460,   464,   470,   475,
     480,   486,   494,   501,   502,   504,   506,   508,   510,   511,
     513,   515,   518,   522,   526,   531,   535,   537,   539,   542,
     547,   551,   557,   559,   563,   566,   567,   571,   574,   576,
     577,   587,   591,   593,   597,   599,   603,   604,   606,   608,
     611,   614,   617,   621,   623,   627,   629,   631,   635,   640,
     644,   645,   647,   649,   653,   655,   657,   658,   660,   662,
     665,   667,   669,   671,   673,   675,   677,   681,   687,   689,
     693,   699,   704,   708,   710,   711,   713,   717,   719,   722,
     724,   729,   733,   736,   738,   740,   741,   743,   747,   754,
     758,   763,   770,   773,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   820,   823,   826,   829,   833,
     837,   841,   845,   849,   853,   857,   861,   865,   869,   873,
     877,   881,   885,   889,   893,   896,   899,   902,   905,   909,
     913,   917,   921,   925,   929,   933,   937,   941,   945,   947,
     952,   958,   963,   965,   968,   971,   974,   977,   980,   983,
     986,   989,   992,   994,   999,  1003,  1007,  1010,  1011,  1022,
    1023,  1035,  1037,  1038,  1043,  1047,  1052,  1054,  1057,  1062,
    1069,  1075,  1082,  1089,  1096,  1103,  1108,  1110,  1112,  1116,
    1119,  1121,  1125,  1128,  1130,  1132,  1137,  1139,  1142,  1143,
    1146,  1147,  1150,  1154,  1155,  1157,  1159,  1160,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1188,
    1191,  1193,  1195,  1199,  1202,  1205,  1208,  1213,  1217,  1219,
    1221,  1225,  1227,  1229,  1231,  1235,  1238,  1240,  1244,  1248,
    1250,  1251,  1254,  1255,  1257,  1263,  1267,  1271,  1273,  1275,
    1277,  1279,  1281,  1283,  1289,  1291,  1294,  1295,  1299,  1304,
    1309,  1313,  1315,  1317,  1318,  1320,  1323,  1327,  1331,  1333,
    1338,  1343,  1345,  1347,  1349,  1351,  1354,  1356,  1361,  1366,
    1368,  1370,  1375,  1376,  1378,  1380,  1382,  1387,  1392,  1394,
    1396,  1400,  1402,  1405,  1409,  1411,  1413,  1418,  1419,  1420,
    1423,  1429,  1433,  1437,  1439,  1446,  1451,  1456,  1459,  1462,
    1465,  1467,  1470,  1472,  1477,  1481,  1485,  1492,  1496,  1498,
    1500,  1502,  1507,  1512,  1515,  1518,  1523,  1526,  1529,  1531,
    1535,  1539
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   170,    -1,   177,    -1,   178,
      -1,   115,   151,   152,   153,    -1,   126,   161,   153,    -1,
      -1,   126,   161,   149,   163,   160,   150,    -1,    -1,   126,
     149,   164,   160,   150,    -1,   144,   165,   153,    -1,   167,
     153,    -1,   165,     8,   166,    -1,   166,    -1,   161,    -1,
     161,    74,   136,    -1,   128,   161,    -1,   128,   161,    74,
     136,    -1,   167,     8,   136,    13,   260,    -1,    85,   136,
      13,   260,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   266,
     152,   170,   201,   203,    -1,   116,   151,   266,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   266,   152,
     200,    -1,    93,   170,   147,   151,   266,   152,   153,    -1,
     109,   151,   236,   153,   236,   153,   236,   152,   193,    -1,
     138,   151,   266,   152,   197,    -1,    76,   153,    -1,    76,
     266,   153,    -1,    87,   153,    -1,    87,   266,   153,    -1,
     134,   153,    -1,   134,   243,   153,    -1,   134,   270,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     235,   153,    -1,   118,    -1,   266,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   270,    74,   192,   191,
     152,   194,    -1,   110,   151,   243,    74,   270,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   251,   146,   152,   149,
     168,   150,   172,    -1,   139,   266,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   251,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   270,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   246,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   251,    -1,   120,
      -1,    -1,   107,   190,    -1,    -1,   117,   190,    -1,   251,
      -1,   190,     8,   251,    -1,    -1,    96,   192,    -1,   270,
      -1,    31,   270,    -1,   170,    -1,    26,   168,   101,   153,
      -1,   170,    -1,    26,   168,   102,   153,    -1,   170,    -1,
      26,   168,   100,   153,    -1,   136,    13,   260,    -1,   196,
       8,   136,    13,   260,    -1,   149,   198,   150,    -1,   149,
     153,   198,   150,    -1,    26,   198,   104,   153,    -1,    26,
     153,   198,   104,   153,    -1,    -1,   198,    78,   266,   199,
     168,    -1,   198,    90,   199,   168,    -1,    26,    -1,   153,
      -1,   170,    -1,    26,   168,   105,   153,    -1,    -1,   201,
      64,   151,   266,   152,   170,    -1,    -1,   202,    64,   151,
     266,   152,    26,   168,    -1,    -1,    65,   170,    -1,    -1,
      65,    26,   168,    -1,   206,    -1,    -1,   207,   146,    -1,
     207,    31,   146,    -1,   207,    31,   146,    13,   260,    -1,
     207,   146,    13,   260,    -1,   206,     8,   207,   146,    -1,
     206,     8,   207,    31,   146,    -1,   206,     8,   207,    31,
     146,    13,   260,    -1,   206,     8,   207,   146,    13,   260,
      -1,    -1,    73,    -1,    77,    -1,   251,    -1,   209,    -1,
      -1,   243,    -1,   270,    -1,    31,   268,    -1,   209,     8,
     243,    -1,   209,     8,   270,    -1,   209,     8,    31,   268,
      -1,   210,     8,   211,    -1,   211,    -1,   146,    -1,   155,
     267,    -1,   155,   149,   266,   150,    -1,   212,     8,   146,
      -1,   212,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   213,   214,    -1,    -1,   229,   233,   153,
      -1,   234,   153,    -1,   216,    -1,    -1,   230,   246,   179,
     136,   151,   205,   152,   215,   228,    -1,   144,   217,   218,
      -1,   251,    -1,   217,     8,   251,    -1,   153,    -1,   149,
     219,   150,    -1,    -1,   220,    -1,   221,    -1,   220,   221,
      -1,   222,   153,    -1,   226,   153,    -1,   225,   119,   223,
      -1,   251,    -1,   223,     8,   251,    -1,   136,    -1,   225,
      -1,   251,   133,   136,    -1,   224,    74,   227,   136,    -1,
     224,    74,   232,    -1,    -1,   232,    -1,   153,    -1,   149,
     168,   150,    -1,   231,    -1,   145,    -1,    -1,   231,    -1,
     232,    -1,   231,   232,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   233,     8,   146,
      -1,   233,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   234,     8,   136,    13,   260,    -1,    85,
     136,    13,   260,    -1,   235,     8,   266,    -1,   266,    -1,
      -1,   237,    -1,   237,     8,   266,    -1,   266,    -1,   238,
     272,    -1,   272,    -1,   239,    61,   284,   157,    -1,    61,
     284,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   252,   258,    -1,   123,   151,   289,
     152,    13,   266,    -1,   270,    13,   266,    -1,   270,    13,
      31,   270,    -1,   270,    13,    31,    63,   252,   258,    -1,
      62,   266,    -1,   270,    24,   266,    -1,   270,    23,   266,
      -1,   270,    22,   266,    -1,   270,    21,   266,    -1,   270,
      20,   266,    -1,   270,    19,   266,    -1,   270,    18,   266,
      -1,   270,    17,   266,    -1,   270,    16,   266,    -1,   270,
      15,   266,    -1,   270,    14,   266,    -1,   269,    59,    -1,
      59,   269,    -1,   269,    58,    -1,    58,   269,    -1,   266,
      27,   266,    -1,   266,    28,   266,    -1,   266,     9,   266,
      -1,   266,    11,   266,    -1,   266,    10,   266,    -1,   266,
      29,   266,    -1,   266,    31,   266,    -1,   266,    30,   266,
      -1,   266,    44,   266,    -1,   266,    42,   266,    -1,   266,
      43,   266,    -1,   266,    45,   266,    -1,   266,    46,   266,
      -1,   266,    47,   266,    -1,   266,    41,   266,    -1,   266,
      40,   266,    -1,    42,   266,    -1,    43,   266,    -1,    48,
     266,    -1,    50,   266,    -1,   266,    33,   266,    -1,   266,
      32,   266,    -1,   266,    35,   266,    -1,   266,    34,   266,
      -1,   266,    36,   266,    -1,   266,    39,   266,    -1,   266,
      37,   266,    -1,   266,    38,   266,    -1,   266,    49,   252,
      -1,   151,   266,   152,    -1,   242,    -1,   151,   242,   152,
     241,    -1,   266,    25,   266,    26,   266,    -1,   266,    25,
      26,   266,    -1,   296,    -1,    57,   266,    -1,    56,   266,
      -1,    55,   266,    -1,    54,   266,    -1,    53,   266,    -1,
      52,   266,    -1,    51,   266,    -1,   106,   256,    -1,    60,
     266,    -1,   262,    -1,    73,   151,   291,   152,    -1,    61,
     291,   157,    -1,   154,   257,   154,    -1,    12,   266,    -1,
      -1,   246,   179,   151,   205,   152,   247,   149,   244,   168,
     150,    -1,    -1,    72,   246,   179,   151,   205,   152,   247,
     149,   245,   168,   150,    -1,   112,    -1,    -1,   144,   151,
     248,   152,    -1,   248,     8,   146,    -1,   248,     8,    31,
     146,    -1,   146,    -1,    31,   146,    -1,   161,   151,   208,
     152,    -1,   126,   128,   161,   151,   208,   152,    -1,   128,
     161,   151,   208,   152,    -1,   250,   133,   287,   151,   208,
     152,    -1,   250,   133,   276,   151,   208,   152,    -1,   278,
     133,   287,   151,   208,   152,    -1,   278,   133,   276,   151,
     208,   152,    -1,   276,   151,   208,   152,    -1,    72,    -1,
     161,    -1,   126,   128,   161,    -1,   128,   161,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   250,    -1,
     253,    -1,   281,   130,   285,   254,    -1,   281,    -1,   254,
     255,    -1,    -1,   130,   285,    -1,    -1,   151,   152,    -1,
     151,   266,   152,    -1,    -1,    99,    -1,   293,    -1,    -1,
     151,   208,   152,    -1,   124,    -1,    92,    -1,    86,    -1,
     122,    -1,   108,    -1,    91,    -1,   141,    -1,   125,    -1,
     111,    -1,   127,    -1,   135,    99,   103,    -1,   135,   103,
      -1,   259,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,    42,   260,    -1,    43,   260,    -1,    73,   151,
     263,   152,    -1,    61,   263,   157,    -1,   261,    -1,    82,
      -1,   250,   133,   136,    -1,   137,    -1,   298,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   259,    -1,
     156,   293,   156,    -1,   135,   293,   103,    -1,    82,    -1,
      -1,   265,   264,    -1,    -1,     8,    -1,   265,     8,   260,
      96,   260,    -1,   265,     8,   260,    -1,   260,    96,   260,
      -1,   260,    -1,   267,    -1,   243,    -1,   270,    -1,   270,
      -1,   270,    -1,   280,   130,   285,   275,   271,    -1,   280,
      -1,   271,   272,    -1,    -1,   130,   285,   275,    -1,   273,
      61,   284,   157,    -1,   274,    61,   284,   157,    -1,   151,
     208,   152,    -1,   274,    -1,   273,    -1,    -1,   282,    -1,
     288,   282,    -1,   250,   133,   276,    -1,   278,   133,   276,
      -1,   282,    -1,   279,    61,   284,   157,    -1,   249,    61,
     284,   157,    -1,   281,    -1,   279,    -1,   249,    -1,   282,
      -1,   288,   282,    -1,   277,    -1,   282,    61,   284,   157,
      -1,   282,   149,   266,   150,    -1,   283,    -1,   146,    -1,
     155,   149,   266,   150,    -1,    -1,   266,    -1,   286,    -1,
     276,    -1,   286,    61,   284,   157,    -1,   286,   149,   266,
     150,    -1,   287,    -1,   136,    -1,   149,   266,   150,    -1,
     155,    -1,   288,   155,    -1,   289,     8,   290,    -1,   290,
      -1,   270,    -1,   123,   151,   289,   152,    -1,    -1,    -1,
     292,   264,    -1,   292,     8,   266,    96,   266,    -1,   292,
       8,   266,    -1,   266,    96,   266,    -1,   266,    -1,   292,
       8,   266,    96,    31,   268,    -1,   292,     8,    31,   268,
      -1,   266,    96,    31,   268,    -1,    31,   268,    -1,   293,
     294,    -1,   293,    99,    -1,   294,    -1,    99,   294,    -1,
     146,    -1,   146,    61,   295,   157,    -1,   146,   130,   136,
      -1,    95,   266,   150,    -1,    95,   137,    61,   266,   157,
     150,    -1,    88,   270,   150,    -1,   136,    -1,   129,    -1,
     146,    -1,   121,   151,   297,   152,    -1,    98,   151,   270,
     152,    -1,     7,   266,    -1,     6,   266,    -1,     5,   151,
     266,   152,    -1,     4,   266,    -1,     3,   266,    -1,   270,
      -1,   297,     8,   270,    -1,   250,   133,   136,    -1,   278,
     133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   337,   337,   341,   342,   346,   347,   351,   352,   353,
     354,   355,   356,   356,   358,   358,   360,   361,   365,   367,
     371,   372,   373,   374,   378,   379,   383,   384,   388,   389,
     390,   391,   395,   396,   400,   401,   405,   409,   412,   413,
     425,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   448,   455,   456,   457,   467,
     468,   472,   473,   477,   478,   482,   491,   492,   496,   500,
     504,   508,   509,   514,   513,   523,   522,   540,   539,   548,
     549,   550,   551,   555,   556,   561,   565,   566,   571,   572,
     577,   578,   582,   583,   587,   588,   592,   593,   597,   598,
     602,   603,   607,   608,   612,   613,   614,   615,   619,   620,
     624,   630,   631,   635,   636,   640,   641,   648,   649,   656,
     657,   661,   662,   666,   667,   672,   673,   674,   675,   676,
     677,   678,   679,   683,   684,   685,   686,   690,   691,   695,
     696,   697,   698,   699,   700,   704,   705,   709,   710,   711,
     715,   716,   717,   718,   722,   723,   727,   728,   729,   731,
     730,   738,   743,   744,   749,   750,   756,   757,   761,   762,
     766,   767,   771,   776,   777,   781,   782,   786,   790,   791,
     795,   796,   800,   801,   805,   806,   810,   811,   815,   816,
     820,   821,   822,   823,   824,   825,   829,   830,   831,   832,
     836,   838,   842,   843,   847,   848,   852,   853,   857,   858,
     862,   863,   867,   868,   869,   873,   874,   878,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   930,   931,   932,   933,
     934,   937,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   956,   954,   964,
     963,   974,   978,   979,   983,   987,   991,   992,   996,   998,
    1001,  1003,  1005,  1007,  1009,  1011,  1016,  1017,  1018,  1019,
    1023,  1024,  1025,  1029,  1030,  1034,  1036,  1040,  1041,  1045,
    1049,  1050,  1051,  1055,  1056,  1057,  1061,  1062,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,
    1094,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1110,  1111,  1115,  1116,  1120,  1121,  1122,  1123,  1127,  1128,
    1132,  1136,  1140,  1144,  1148,  1152,  1153,  1157,  1162,  1163,
    1167,  1171,  1172,  1173,  1177,  1178,  1182,  1183,  1187,  1191,
    1192,  1196,  1197,  1198,  1202,  1203,  1204,  1208,  1209,  1210,
    1214,  1215,  1219,  1220,  1224,  1225,  1229,  1230,  1231,  1235,
    1236,  1240,  1241,  1245,  1246,  1250,  1251,  1252,  1256,  1257,
    1261,  1265,  1269,  1270,  1271,  1275,  1279,  1280,  1284,  1285,
    1286,  1287,  1291,  1292,  1293,  1294,  1295,  1296,  1300,  1301,
    1302,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1316,  1317,
    1321,  1322
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
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'@'", "'['", "T_CLONE",
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
  "T_WHITESPACE", "'{'", "'}'", "'('", "')'", "';'", "'`'", "'$'", "'\"'",
  "']'", "$accept", "start", "top_statement_list", "namespace_name",
  "top_statement", "$@1", "$@2", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@3",
  "unticked_class_declaration_statement", "$@4", "$@5", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@6", "trait_use_statement",
  "trait_list", "trait_adaptations", "trait_adaptation_list",
  "non_empty_trait_adaptation_list", "trait_adaptation_statement",
  "trait_precedence", "trait_reference_list", "trait_method_reference",
  "trait_method_reference_fully_qualified", "trait_alias",
  "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "$@7", "$@8", "function", "lexical_vars",
  "lexical_var_list", "function_call", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable",
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
     126,   622,   508,   593,   505,   614,   536,   569,   526,   563,
      64,    91,   518,   589,   539,   538,   546,   603,   602,   601,
     553,   502,   612,   504,   506,   507,   511,   512,   513,   514,
     515,   516,   517,   519,   520,   522,   523,   524,   525,   527,
     528,   529,   531,   532,   533,   534,   535,   537,   540,   541,
     542,   543,   544,   545,   547,   548,   550,   551,   552,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   566,   568,
     570,   576,   578,   579,   580,   584,   588,   590,   591,   592,
     594,   595,   596,   598,   606,   611,   613,   615,   616,   617,
     618,   619,   620,   621,   623,   624,   625,   626,   627,   123,
     125,    40,    41,    59,    96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   162,   163,   162,   164,   162,   162,   162,   165,   165,
     166,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   175,   175,   176,   177,
     178,   179,   179,   181,   180,   183,   182,   184,   182,   185,
     185,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   209,   210,   210,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   215,
     214,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   224,   224,   225,   226,   226,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   232,   233,   233,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   244,   243,   245,
     243,   246,   247,   247,   248,   248,   248,   248,   249,   249,
     249,   249,   249,   249,   249,   249,   250,   250,   250,   250,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     256,   256,   256,   257,   257,   257,   258,   258,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   266,   266,
     267,   268,   269,   270,   270,   271,   271,   272,   273,   273,
     274,   275,   275,   275,   276,   276,   277,   277,   278,   279,
     279,   280,   280,   280,   281,   281,   281,   282,   282,   282,
     283,   283,   284,   284,   285,   285,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   290,   291,   291,
     292,   292,   292,   292,   292,   292,   292,   292,   293,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   296,   296,   296,   296,   296,   296,   296,   297,   297,
     298,   298
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     3,     1,
       1,     3,     2,     4,     5,     4,     2,     0,     1,     1,
       1,     4,     1,     2,     3,     7,    10,     5,     7,     9,
       5,     2,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     1,     2,     5,     8,     8,     5,     1,    13,     3,
       3,     1,     0,     1,     2,     8,     1,     3,     1,     1,
       1,     0,     1,     0,    10,     0,     8,     0,     7,     1,
       2,     1,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     1,     4,     1,     4,
       1,     4,     3,     5,     3,     4,     4,     5,     0,     5,
       4,     1,     1,     1,     4,     0,     6,     0,     7,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     3,     2,     1,     0,
       9,     3,     1,     3,     1,     3,     0,     1,     1,     2,
       2,     2,     3,     1,     3,     1,     1,     3,     4,     3,
       0,     1,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     3,     1,     2,     1,
       4,     3,     2,     1,     1,     0,     1,     3,     6,     3,
       4,     6,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     3,     3,     2,     0,    10,     0,
      11,     1,     0,     4,     3,     4,     1,     2,     4,     6,
       5,     6,     6,     6,     6,     4,     1,     1,     3,     2,
       1,     3,     2,     1,     1,     4,     1,     2,     0,     2,
       0,     2,     3,     0,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     5,     1,     2,     0,     3,     4,     4,
       3,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       4,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     1,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     4,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     4,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     2,     2,     4,     2,     2,     1,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   418,     0,     0,     0,     0,   306,
       0,     0,    79,   359,     0,   330,     0,     0,   333,   329,
       0,     0,     0,   320,   332,     0,     0,   336,   291,     0,
       0,     0,     0,    51,    85,     0,   331,     0,   328,   335,
       0,   337,     0,     0,     0,     5,   351,     0,     0,    81,
     334,     0,     0,     0,   400,     0,    27,     0,    57,   323,
     411,     0,   353,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   369,    71,   393,     0,   356,   282,
       0,   368,     0,   370,     0,   396,     0,   392,   374,   391,
     394,   399,     0,   272,   352,   306,     0,     5,    71,   447,
     446,     0,   444,   443,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   306,     0,     0,   307,
       0,   237,   372,     0,   235,   281,     0,   423,     0,   362,
     222,     0,     0,   307,   313,   326,   314,     0,   316,   394,
       0,    82,    80,   152,     0,    71,   418,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   417,
       0,    14,     0,   355,    45,   369,     0,   370,     0,     0,
       0,   339,   432,     0,   430,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   324,     0,
     325,     0,     0,     0,     0,   138,     0,    17,    83,    86,
      72,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   402,     0,   402,
       0,   412,   395,     0,     0,     0,   309,     0,     0,   427,
     371,     0,   284,   363,   419,     0,   309,     0,   138,   217,
       0,     0,   395,     0,     0,    49,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    50,     0,   321,     0,     0,
     205,   207,   369,   370,     0,   148,   370,     0,    48,    60,
       0,     0,   448,     0,     0,   415,     0,   414,   354,     4,
      12,    11,   138,    46,    47,     0,   351,     0,   338,   431,
       0,     0,   429,   358,   428,     0,    59,     0,     0,    66,
      68,    22,     0,     0,    16,     0,     0,    34,    26,    28,
      29,    30,   215,   267,   285,     0,   357,     6,     0,     0,
     137,   369,   370,     0,     0,    88,     0,    77,     0,   133,
     403,     0,   450,     0,   386,   384,     0,     0,   240,   242,
     241,     0,     0,   238,   239,   243,   245,   244,   259,   258,
     261,   260,   262,   264,   265,   263,   253,   252,   247,   248,
     246,   249,   250,   251,   266,     0,   219,   233,   232,   231,
     230,   229,   228,   227,   226,   225,   224,   223,     0,   451,
     387,     0,     0,   409,   405,   383,   404,   408,     0,     0,
     445,   308,     0,   422,     0,   421,   308,   386,     0,   387,
     318,     0,     0,   360,     0,   349,     0,     0,     0,   341,
       0,   340,   153,   348,   150,   133,   283,    25,     0,     0,
       0,     0,   202,   442,   322,   204,     0,     0,     0,     0,
     145,    10,     0,     0,   441,   417,   417,     0,   138,     0,
       4,     0,   437,     0,   435,   439,   438,   440,     0,   434,
       0,     0,     0,     0,     0,    21,    18,     0,     0,   402,
       0,   214,   213,   216,   269,   209,   401,   141,   298,     0,
       0,     0,     0,   310,    84,     0,    75,    87,    90,     0,
     133,   134,   135,     0,   123,     0,   136,   390,     0,   138,
     138,   385,   271,     0,     0,   220,   305,   138,   138,   389,
     138,   382,   381,   376,   402,     0,   397,   398,   426,   425,
       0,   327,   315,   344,   345,   367,     0,   362,   360,     0,
     343,     0,     0,     0,     0,   102,     0,    27,   100,    56,
       0,     0,   206,    92,     0,    92,    94,   149,    27,   115,
     449,     0,   413,     0,     0,    15,     0,   300,     0,   433,
     108,   108,    40,     0,    67,    53,    23,    27,   113,    37,
       0,     0,   383,   208,   402,   212,     0,   369,   370,    24,
       0,   312,    89,     0,     0,   155,     0,   292,   133,     0,
     125,   410,     0,     0,   270,   326,     0,     0,     0,   402,
     402,   373,     0,     0,     0,   420,     0,   317,     0,   347,
     363,   361,     0,   342,   350,   151,   292,     0,     0,     0,
     204,     0,     0,    95,     0,   117,   119,   416,   218,   299,
      13,     0,   108,     0,   108,     0,     0,     0,    31,   211,
     377,     0,   144,   311,   155,    91,   186,    73,     0,     0,
       0,   126,     0,   302,   301,   221,   304,   303,   380,     0,
       0,   375,   406,   407,   424,   319,   366,   365,   346,     0,
     103,     0,    38,     0,    93,     0,     0,   121,     0,     0,
      35,   436,     0,     0,     0,     0,     0,   104,     0,     0,
     210,   186,   190,   191,   192,   195,   194,   193,     0,     0,
     185,    78,   154,   158,     0,     0,   184,   188,     0,     0,
       0,   287,     0,   129,     0,   128,   378,   379,     0,   289,
     101,     0,    27,    98,    55,    54,     0,     0,     0,     0,
     120,     0,     0,   111,   112,    27,   106,   105,     0,   114,
      76,     0,     0,   162,   198,     0,    71,   189,     0,   157,
      27,     0,   296,     0,    27,   130,     0,   127,   364,    27,
      27,    96,    39,     0,     0,    27,     0,     0,   107,    27,
     110,     0,     0,     0,   166,   164,   161,     0,     0,   156,
       0,     0,     0,   297,     0,   293,     0,     0,   132,     0,
       0,     0,     0,   122,    36,     0,   109,    27,   201,   163,
       5,     0,   167,   168,     0,     0,   176,     0,     0,   199,
     196,     0,     0,    74,     0,   294,   288,   131,   290,     0,
      99,     0,   116,     0,   165,   169,   170,   180,     0,   171,
       0,     0,   133,   200,   295,    97,    27,    62,     0,   179,
     172,   173,   177,   197,     0,   118,     0,    58,    61,    63,
     178,     0,   159,     0,    64,   174,     0,     0,    27,   182,
     160,     0,     0,     0,   183,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   500,   339,   212,   213,    84,
     215,   368,   369,    86,   897,   898,   899,   358,   359,   370,
     371,   231,    89,   759,    90,   633,   539,    91,   385,    92,
     387,   536,   537,   672,   595,   812,   774,   589,   312,   612,
     683,   785,   619,   676,   727,   730,   778,   543,   544,   545,
     379,   380,   183,   184,   164,   696,   752,   906,   753,   792,
     826,   851,   852,   853,   854,   890,   855,   856,   857,   888,
     910,   754,   755,   756,   757,   795,   758,   174,   319,   320,
     521,   522,   523,   524,    93,    94,   804,   809,   118,   699,
     803,    96,    97,   546,   155,   156,   572,   657,   178,   219,
     299,    98,   575,   473,    99,   576,   294,   577,   100,   101,
     289,   102,   103,   651,   525,   561,   562,   563,   104,   105,
     106,   107,   108,   109,   110,   111,   391,   445,   446,   447,
     112,   336,   337,   148,   149,   203,   204,   508,   113,   333,
     114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -723
static const yytype_int16 yypact[] =
{
    -723,   105,  1987,  -723,  6579,  6579,   -28,  6579,  6579,  6579,
    6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,
    6579,   235,   235,  6579,  5067,  6579,   248,   127,   131,   -47,
      -7,  5193,  -723,  -723,    89,  -723,  5319,    85,  -723,  -723,
    4913,  6579,    96,    99,  -723,   115,   125,  -723,  -723,   -54,
     107,   137,   145,  -723,  -723,   154,  -723,   158,  -723,  -723,
     106,  -723,   142,  5445,   265,   297,  -723,   182,  6579,  -723,
    -723,   217,   198,   143,  -723,   228,  -723,  6579,  -723,   318,
     233,   339,   -37,  -723,    14,  -723,  -723,  -723,  -723,  -723,
    -723,   256,   260,  -723,  -723,   376,   347,   285,  -723,  -723,
    6838,  -723,   254,  1128,   268,  -723,   289,   362,   294,  -723,
      -9,  -723,   -38,  -723,  -723,   317,   302,  -723,   376,  7718,
    7718,  6579,  7718,  7718,  1973,  -723,  -723,   383,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,   305,   142,     2,
     304,  -723,  -723,   307,  -723,  -723,   235,  7636,   278,   449,
    -723,   331,   142,   334,   328,   312,  -723,   340,   336,    -1,
     -38,  -723,  -723,   465,    15,   376,  5067,  -723,  6879,   471,
    -723,  6920,   343,   344,    17,  7718,   235,  5571,  -723,  6579,
    6579,  -723,   -10,    18,  -723,   337,   335,  6579,   235,   231,
     142,  -723,    95,   165,  -723,   342,  7718,   430,   235,  6705,
     119,  -723,    -3,   290,  -723,  -723,  6579,  6965,  -723,   235,
     142,    88,    20,  -723,  6579,  2141,   349,  7006,   -21,   332,
     377,  6579,   -21,   168,   356,  5697,   374,  -723,   409,   414,
    -723,   -61,  6579,   322,  6579,  6579,  6579,  5823,  6579,  6579,
    6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,
    6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,  6579,   248,
    -723,  -723,  -723,  5949,  6579,  6579,  6579,  6579,  6579,  6579,
    6579,  6579,  6579,  6579,  6579,  5697,   482,  6579,   498,  6579,
    6579,   233,     0,   371,  7047,   142,    78,   498,   498,  -723,
    -723,  6075,  -723,  6201,  -723,   142,   334,   -12,  5697,  -723,
     -12,   498,    46,   865,   380,  -723,   381,   375,  -723,   865,
    -723,   515,    30,   391,  6579,  -723,   379,  -723,  7092,   390,
     536,  7718,   472,   761,  6579,  -723,  -723,   -54,  -723,  -723,
     392,  7134,  -723,    31,   399,  -723,    32,  -723,   171,  -723,
    -723,  -723,  5697,  -723,  -723,   402,   496,  7386,  -723,  -723,
      92,   422,  -723,  -723,  -723,  7175,  -723,  2295,    34,  -723,
    -723,   126,   425,   143,  -723,  7218,   411,  -723,  -723,  -723,
    -723,  -723,    27,  -723,  -723,  7427,  -723,  -723,   235,   412,
     555,    35,    63,   553,   200,   452,   200,  -723,   420,   132,
    7718,   416,   424,  6579,   428,    46,   433,   -38,  7758,  7795,
    1973,  6579,  1824,  2280,  2433,  2586,  1030,  2738,  2892,  2892,
    2892,  2892,  1192,  1464,   676,   676,   689,   689,   466,   466,
     466,   383,   383,   383,  -723,   -17,  1973,  1973,  1973,  1973,
    1973,  1973,  1973,  1973,  1973,  1973,  1973,  1973,   442,   424,
     435,   444,   419,  -723,  -723,   447,    49,  -723,   443,  7470,
    -723,    98,   235,  7718,   235,  7677,   334,  -723,   454,  -723,
    -723,   865,   865,   865,   448,  -723,   457,   142,    38,   201,
     468,  -723,  -723,  -723,   598,   132,  -723,  -723,   865,   479,
    4143,  6579,  7718,  -723,  -723,  6579,  6579,   235,   189,  7512,
    -723,  -723,  4297,   235,  -723,   231,   231,   604,  5697,  1674,
    -723,   467,  -723,  6579,  -723,  -723,  -723,  -723,   469,  -723,
      28,   545,   235,   474,   493,  -723,  -723,  4451,   478,  6579,
     498,   503,    59,  -723,  -723,  -723,  -723,  -723,  -723,  6327,
     865,   507,   142,   334,  -723,   200,  -723,   630,  -723,   490,
     132,  -723,  -723,   494,   637,     4,  -723,  -723,  7553,  5697,
    5697,    46,  2127,  6579,   248,  -723,  -723,  5697,  5697,  -723,
    5697,   587,   588,  -723,  6579,  6579,  -723,  -723,  -723,  -723,
    6453,  -723,   521,  -723,  -723,   556,   497,   647,   865,   142,
     242,   554,   523,   865,   504,  -723,   648,  -723,  -723,  -723,
    7260,   509,  7718,   564,   235,   564,  -723,  -723,  -723,  -723,
    -723,    40,  -723,  6579,   511,  -723,  1833,  -723,  1415,  -723,
     514,   516,  -723,   524,  -723,  -723,  -723,  -723,  -723,  -723,
     518,   517,   447,  -723,  6579,   503,   235,    41,   746,  -723,
     142,   334,   630,   532,   200,  -723,   531,   540,   164,   549,
     684,  -723,   547,   551,  2127,   312,   552,   558,   559,  6579,
    6579,   503,   548,  7594,   235,  7718,   498,  -723,   865,  -723,
     865,  -723,   560,   276,  -723,  -723,   540,   865,  2449,   571,
    6579,   189,   577,  -723,   589,  3989,   266,  -723,  1973,  -723,
    -723,   557,  -723,    57,  -723,    16,   200,  2603,  -723,  -723,
    -723,   582,  -723,   334,  -723,  -723,   271,  -723,   591,   596,
       6,   693,   865,  -723,  -723,  -723,  -723,  -723,  -723,   583,
     590,  -723,  -723,  -723,  -723,  -723,  -723,   652,  -723,   600,
    -723,   597,  -723,   599,  -723,  4605,  4605,   282,   601,  4913,
    -723,  -723,   113,  6579,     5,   602,    22,  -723,   610,   605,
    -723,   520,  -723,  -723,  -723,  -723,  -723,  -723,   621,   200,
    -723,  -723,  -723,  -723,   625,   317,   330,  -723,    21,   624,
      13,  -723,   640,   774,   865,  -723,  -723,  -723,   865,  -723,
    -723,  4759,  -723,  -723,  -723,  -723,   638,   762,   724,  6579,
    -723,   639,  1519,  -723,  -723,  -723,  -723,  -723,   641,  -723,
    -723,   781,    11,  -723,   782,    25,   376,  -723,   660,  -723,
    -723,   651,  -723,    45,  -723,   785,   865,  -723,  -723,  -723,
    -723,  -723,  -723,  2757,  6579,  -723,   649,  7301,  -723,  -723,
    3989,   654,   865,   200,   222,  -723,  -723,   865,   655,  -723,
     664,   794,  2911,  -723,    19,  -723,  3065,   865,  -723,  3219,
    3373,   656,  7344,  3989,  -723,  4913,  3989,  -723,  -723,  -723,
     734,   663,   222,  -723,   661,   741,   697,   668,   690,  -723,
     804,   671,   865,  -723,   678,  -723,  -723,  -723,  -723,   672,
    -723,   800,  -723,  3527,  -723,  -723,  -723,   619,   200,  -723,
     691,   865,   132,  -723,  -723,  -723,  -723,   749,   695,   696,
     821,  -723,  -723,  -723,   681,  3989,   685,  -723,   749,  -723,
    -723,   200,  -723,   200,  -723,  -723,   -60,   694,  -723,  -723,
    -723,   687,  3681,   698,  -723,  -723,  3835,  -723
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -723,  -723,  -321,    42,  -723,  -723,  -723,  -723,   480,  -723,
    -207,  -723,     1,  -723,  -723,  -723,   -56,  -723,   341,     3,
       8,  -114,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,   310,   259,   178,  -723,   129,  -723,  -723,  -723,
    -480,    74,  -723,  -723,  -723,  -723,  -723,  -468,  -723,   219,
    -239,  -723,  -723,   533,  -723,   167,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,    23,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -722,  -723,  -723,  -723,  -469,  -723,
     346,  -723,  -723,  -723,   786,    10,  -723,  -723,    -2,   192,
    -723,  -723,   434,  -354,  -248,  -723,  -723,  -723,  -723,  -723,
     225,   389,   216,  -723,  -723,   284,   295,  -723,  1099,   699,
    -357,   351,   983,  -723,  -497,  -723,  -723,   251,  -231,  -723,
     -13,  -723,  -723,   -20,   -14,  -723,  -262,  -287,  -723,   -77,
      -6,   382,   384,   712,  -723,   196,   333,  -723,  -723,  -723,
    -723
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -410
static const yytype_int16 yytable[] =
{
      95,   357,   394,    85,   283,    87,   158,   584,   143,   143,
      88,   424,   159,   157,   460,   442,   591,   448,   499,   823,
     160,   527,   226,   304,   623,   314,   327,   165,   363,   798,
     534,   783,   538,   828,   797,   639,   438,   762,   479,   493,
     496,   173,   512,  -139,   801,   440,   554,   444,   496,  -142,
     864,   306,   279,   834,   610,   136,   394,   440,   350,   458,
     279,   279,   136,   139,   139,    48,   457,   198,   153,   459,
     444,  -140,   636,   195,   199,   388,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   519,   908,
     389,   224,   181,   909,   733,   568,  -307,   569,   282,   163,
     733,   182,   192,   501,   193,     3,   734,   279,    74,   137,
     564,   138,   734,   165,   225,   211,   137,   281,   138,   117,
     624,  -372,  -372,   121,  -388,   202,   117,   351,   623,    74,
     224,   685,  -388,   143,    74,   733,    74,   581,    80,   324,
     280,   201,  -384,    80,   166,    80,   302,   734,   280,   280,
     640,  -385,   763,   225,   711,   889,   396,   520,   784,   802,
     824,   735,   362,   143,   825,   865,   737,   227,   305,   143,
     315,   328,   787,   364,   799,   143,   143,   611,   829,   606,
     286,   538,   480,   494,   497,   143,   513,  -139,   139,   520,
     322,   733,   677,  -142,   296,   280,   143,   835,   565,   441,
     514,   723,   732,   734,   736,   541,   224,   198,   161,   542,
     396,   441,   162,    95,   199,  -140,   224,   781,   139,   395,
     594,   505,   348,   224,   139,   169,   224,   397,   506,   342,
     139,   139,   338,   622,   190,   381,   172,   541,   507,   158,
     139,   542,   117,   185,   340,   159,   157,   176,   341,   498,
     177,   139,   361,   160,   224,   191,   198,   621,   531,   604,
     532,   136,   395,   199,   395,   202,   179,   352,   117,   692,
     397,   210,   397,   395,   395,   220,   180,   223,   117,   117,
     695,   397,   397,   395,  -124,   381,   395,   395,   186,   444,
     531,   397,   532,   224,   397,   397,   187,   714,  -309,   224,
     117,   153,   652,   136,  -308,   188,   645,   136,   381,   189,
     642,   643,   261,   262,   202,   137,   342,   138,   646,   647,
     136,   648,   498,   205,   376,   117,   531,   451,   532,   224,
     728,   729,   738,   206,  -307,    74,   117,   456,   742,   743,
     744,   745,   746,   747,    80,   469,   776,   777,   531,   209,
     532,   469,   381,   198,   334,    95,   748,   137,   850,   138,
     199,   137,   691,   138,   200,   143,   208,   117,   201,   715,
     224,   117,   141,   144,   151,  -309,   152,    74,   198,   214,
     668,    74,   221,   551,   117,   199,    80,   709,   710,   352,
      80,   675,   228,   353,    74,   793,   229,   742,   743,   744,
     745,   746,   747,    80,   224,   211,   198,   230,   232,  -308,
     687,   202,   143,   199,   894,   749,   750,   218,   233,   275,
     139,   751,   276,   277,   278,   444,   533,   198,   533,    48,
     190,   533,   259,   285,   199,   292,   202,   287,   222,   143,
     288,   143,  -187,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   140,   140,   293,   392,   295,
     154,   297,   224,   298,   202,   198,   301,   139,    74,   849,
     858,   393,   199,   300,   143,   143,   352,    80,   303,   311,
     143,   588,   143,   143,   309,   202,   374,   330,  -372,  -372,
     329,   313,   377,   599,   139,   343,   139,    95,   858,   143,
      85,   372,    87,   469,   469,   469,   395,    88,   381,   580,
     383,   256,   257,   258,   397,   259,   384,   533,   618,   472,
     469,   386,   389,   202,   891,   477,   474,   476,   478,   139,
     139,   483,   475,   349,   158,   139,   354,   139,   139,   627,
     159,   157,   481,   485,   486,   491,   487,   905,   160,   907,
     495,   349,   502,   354,   139,   349,   354,   503,   509,   381,
     381,   515,   518,   529,   528,   813,   530,   381,   381,   535,
     381,   540,   469,   547,   631,  -409,   559,   533,   820,   549,
     140,   143,   533,   344,   550,   579,   557,   742,   743,   744,
     745,   746,   747,   832,   556,   558,   153,   836,   560,   578,
     566,   582,   839,   840,    95,   748,   571,    85,   843,    87,
     140,   583,   846,   143,    88,   586,   140,   603,   439,   607,
     469,   663,   140,   140,   613,   469,   609,   615,    74,   616,
     620,   393,   140,   520,   443,   630,   139,    80,   634,   635,
     873,   143,   395,   140,    74,   638,   637,   393,   649,   650,
     397,   656,   658,    80,   659,   660,   666,   348,   143,   664,
     671,   667,   670,   679,   749,   750,    95,   682,   139,   684,
     790,   688,   693,    95,   689,   686,   533,   573,   574,   895,
     533,   694,   830,   697,   698,    95,   742,   743,   744,   745,
     746,   747,   471,   154,   585,   701,   139,   702,   471,   703,
     469,   912,   469,   704,   706,   712,   764,   731,   916,   469,
     707,   708,   718,   139,  -410,  -410,   251,   252,   253,   254,
     255,   256,   257,   258,   722,   259,   773,   773,   533,   725,
     780,   253,   254,   255,   256,   257,   258,   470,   259,   740,
     766,   726,   760,   470,   469,   761,   629,   767,   768,   769,
     770,   771,   779,   796,  -143,   786,   788,   791,   789,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   794,   811,   800,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   805,   806,   815,   814,
     816,   533,   818,   821,   822,   827,   831,   833,   837,   665,
     861,   860,   844,   847,  -372,  -372,   469,   862,  -175,   870,
     469,    95,   140,   874,   876,   877,   878,   881,    95,  -372,
    -372,   879,   882,   880,   884,   885,   886,   892,   896,   901,
      95,   900,  -181,   902,    95,   488,   903,    95,    95,   913,
     911,    95,   904,   516,    95,   632,   872,   915,   469,   724,
     471,   471,   471,   614,   674,   775,   819,   700,   719,   140,
     490,   741,   662,   216,   469,   533,   533,   471,   625,   469,
     705,    95,   661,   690,   716,   875,   717,   601,   307,   469,
     602,   325,     0,   720,     0,     0,   140,     0,   140,     0,
       0,     0,     0,    95,   533,   470,   470,   470,  -143,     0,
       0,     0,     0,     0,   469,     0,     0,   461,   462,     0,
      95,     0,   470,     0,    95,     0,     0,     0,   765,   471,
     533,   140,   140,   469,   533,     0,   463,   140,     0,   140,
     140,     0,     0,     0,     0,     0,     0,   136,   464,     0,
       0,     0,     0,   533,     0,   533,   140,   465,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,     0,   470,     0,     0,   471,     0,     0,
       0,     0,   471,    44,     0,     0,    47,     0,     0,     0,
     807,     0,     0,     0,   808,     0,     0,    56,   154,    58,
      59,   466,    61,   467,     0,     0,     0,     0,     0,     0,
     468,   117,     0,     0,   142,   142,    70,     0,     0,     0,
       0,     0,   470,     0,     0,     0,     0,   470,     0,     0,
       0,     0,   838,     0,     0,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   848,     0,
       0,     0,     0,   859,     0,     0,   197,   471,     0,   471,
       0,     0,     0,   867,     0,     0,   471,     0,     0,     0,
     140,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   883,   259,
       0,     0,     0,     0,     0,     0,     0,     0,   140,     0,
       0,   471,   470,     0,   470,     0,     0,   893,     0,     0,
       0,   470,     0,   119,   120,   140,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,   145,   147,   150,     0,     0,     0,     0,   290,
     168,     0,     0,     0,     0,   171,   470,     0,     0,     0,
     175,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   471,     0,     0,     0,   471,     0,   316,
       0,     0,   196,   323,     0,   326,     0,   207,     0,     0,
       0,   332,   335,     0,     0,     0,   217,     0,     0,     0,
       0,   345,     0,     0,     0,     0,  -372,  -372,     0,     0,
       0,     0,   360,     0,     0,   471,     0,     0,   470,     0,
       0,     0,   470,     0,     0,     0,     0,     0,   382,     0,
       0,   471,     0,     0,     0,     0,   471,     0,     0,     0,
     284,     0,     0,     0,     0,     0,   471,     0,  -410,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     470,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,     0,     0,     0,     0,   470,     0,   382,     0,
       0,   470,     0,     0,     0,   147,     0,     0,     0,     0,
     471,   470,     0,     0,     0,     0,   318,     0,   321,   196,
       0,   382,     0,     0,     0,     0,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,   347,     0,
       0,     0,     0,     0,     0,   355,     0,     0,     0,     0,
       0,     0,     0,   365,     0,   470,     0,     0,     0,     0,
     375,     0,     0,     0,   196,   382,     0,     0,     0,     0,
       0,   390,     0,   398,   399,   400,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,     0,     0,
       0,   290,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   196,     0,   390,     0,   390,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     453,     0,   455,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   555,     0,
       0,     0,     0,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,   290,     0,     0,
     237,   196,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
     593,   596,     0,     0,     0,     0,   600,     0,   335,   335,
       0,   382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   548,     0,     0,   360,     0,     0,     0,     0,
     552,  -410,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   628,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   235,
     236,     0,   382,   382,     0,     0,     0,     0,     0,     0,
     382,   382,     0,   382,   237,   783,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,   681,     0,     0,     0,     0,   673,     0,     0,
     590,     0,     0,     0,   321,   592,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,     0,   608,     0,     0,     0,     0,     0,     0,   290,
       0,     0,     0,     0,     0,     0,     0,     0,   390,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   196,
       0,     0,   644,     0,   596,     0,   196,   196,     0,   196,
       0,     0,     0,   390,   653,     0,     0,     0,     0,   655,
       0,     0,   784,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   678,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,   390,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,   390,   390,
      31,     0,     0,     0,     0,    32,    33,     0,     0,    34,
      35,    36,     0,    37,     0,    38,    39,    40,     0,   321,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,   605,    77,     0,    78,    79,    80,
      81,     0,   782,   234,   235,   236,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,   237,
     553,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,    10,    11,     0,   817,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,   842,    32,    33,     0,     0,    34,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,   680,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,   237,     9,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,    34,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
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
      45,    46,    47,    48,    49,    50,   366,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   367,    77,     0,    78,    79,    80,    81,     4,     5,
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
     366,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   511,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,   721,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,   739,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   366,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,   841,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   366,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   116,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,  -410,  -410,  -410,  -410,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   366,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   863,    77,     0,    78,    79,    80,    81,     4,     5,
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
     366,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   866,    77,     0,    78,    79,
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
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   868,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,   869,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   366,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   366,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   116,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,   887,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
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
      45,    46,    47,    48,    49,    50,   366,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   914,    77,     0,    78,    79,    80,    81,     4,     5,
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
     366,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   116,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   917,    77,     0,    78,    79,
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
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    52,
       0,    53,     0,     0,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   598,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   116,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   617,     0,     0,
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
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   810,     0,     0,     0,     0,
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
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    52,
       0,    53,     0,     0,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
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
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
       0,    79,    80,    81,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,     0,   167,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,   170,    79,    80,    81,     0,     0,     0,     0,
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
       0,    74,     0,     0,     0,     0,    77,     0,   194,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    77,   317,     0,    79,    80,    81,   378,     0,
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
       0,     0,     0,    74,     0,     0,     0,     0,    77,   401,
       0,    79,    80,    81,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,     0,     0,    79,    80,    81,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,     0,    79,    80,    81,   452,     0,     0,     0,
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
       0,    74,     0,     0,     0,     0,    77,     0,     0,    79,
      80,    81,   454,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    77,     0,     0,    79,    80,    81,   626,     0,
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
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
       0,    79,    80,    81,   654,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,     0,     0,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,     0,    79,    80,    81,     0,     0,     0,     0,
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
       0,    74,     0,     0,     0,     0,    77,     0,     0,    79,
      80,    81,     0,   237,     0,   238,   239,   240,   241,   242,
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
       0,     0,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   260,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   308,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   310,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   356,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   450,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   484,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   492,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   510,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     517,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   669,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   845,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   871,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   504,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   526,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     567,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   597,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   641,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,   291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   713,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   235,   236,
       0,     0,     0,   570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   236,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-723))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-410))

static const yytype_int16 yycheck[] =
{
       2,   208,   233,     2,   118,     2,    26,   475,    21,    22,
       2,   259,    26,    26,   301,   277,   485,   279,   339,     8,
      26,   378,     8,     8,   521,     8,     8,    29,     8,     8,
     384,    26,   386,     8,   756,    31,   275,    31,     8,     8,
       8,    40,     8,     8,    31,   276,    63,   278,     8,     8,
      31,   165,    61,     8,    26,    72,   287,   288,    61,   298,
      61,    61,    72,    21,    22,   112,   297,    88,    26,   300,
     301,     8,   540,    63,    95,   136,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    61,   149,
     151,   128,   146,   153,    78,   452,   133,   454,   112,   146,
      78,   155,    60,   342,    62,     0,    90,    61,   146,   126,
      61,   128,    90,   115,   151,    73,   126,   155,   128,   136,
      61,    58,    59,   151,   133,   146,   136,   130,   625,   146,
     128,   611,   133,   146,   146,    78,   146,    99,   155,   149,
     149,   103,   151,   155,   151,   155,   160,    90,   149,   149,
     146,   151,   146,   151,   651,   877,   233,   130,   153,   146,
     149,   104,    74,   176,   153,   146,   150,   153,   153,   182,
     153,   153,   150,   153,   153,   188,   189,   149,   153,   500,
     138,   535,   152,   152,   152,   198,   152,   152,   146,   130,
     180,    78,   152,   152,   152,   149,   209,   152,   149,   276,
      74,   670,   682,    90,   684,    73,   128,    88,    81,    77,
     287,   288,    81,   215,    95,   152,   128,   104,   176,   233,
      31,   129,   103,   128,   182,   136,   128,   233,   136,   151,
     188,   189,   190,   520,   128,   225,   151,    73,   146,   259,
     198,    77,   136,   136,   149,   259,   259,   151,   153,   151,
     151,   209,   210,   259,   128,   149,    88,   519,   126,   498,
     128,    72,   276,    95,   278,   146,   151,    99,   136,   626,
     276,   128,   278,   287,   288,    79,   151,    81,   136,   136,
     634,   287,   288,   297,   152,   275,   300,   301,   151,   520,
     126,   297,   128,   128,   300,   301,   151,   654,   133,   128,
     136,   259,   564,    72,   133,   151,   554,    72,   298,   151,
     549,   550,    58,    59,   146,   126,   151,   128,   557,   558,
      72,   560,   151,    26,   156,   136,   126,   285,   128,   128,
      64,    65,   686,   151,   133,   146,   136,   295,    67,    68,
      69,    70,    71,    72,   155,   303,    64,    65,   126,   151,
     128,   309,   342,    88,   123,   357,    85,   126,   136,   128,
      95,   126,   624,   128,    99,   378,   149,   136,   103,   656,
     128,   136,    21,    22,   126,   133,   128,   146,    88,   151,
     587,   146,   149,   397,   136,    95,   155,   649,   650,    99,
     155,   598,   136,   103,   146,   749,   136,    67,    68,    69,
      70,    71,    72,   155,   128,   363,    88,    31,    61,   133,
     617,   146,   425,    95,   882,   144,   145,    99,   133,   151,
     378,   150,   133,    61,   130,   656,   384,    88,   386,   112,
     128,   389,    49,   128,    95,   157,   146,   133,    99,   452,
     133,   454,   112,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    21,    22,     8,   136,   128,
      26,   133,   128,   151,   146,    88,   130,   425,   146,   823,
     824,   149,    95,   133,   487,   488,    99,   155,    13,   136,
     493,   480,   495,   496,    13,   146,   154,   152,    58,    59,
     153,   147,   136,   492,   452,   153,   454,   499,   852,   512,
     499,   152,   499,   461,   462,   463,   520,   499,   498,   467,
     136,    45,    46,    47,   520,    49,   107,   475,   517,   303,
     478,   107,   151,   146,   878,   309,   146,   152,    13,   487,
     488,   152,   151,   200,   554,   493,   203,   495,   496,   529,
     554,   554,   151,   153,     8,   153,    74,   901,   554,   903,
     151,   218,   150,   220,   512,   222,   223,    61,   136,   549,
     550,   136,   151,     8,   152,   772,    13,   557,   558,   117,
     560,   151,   530,   157,   532,   151,   157,   535,   785,   151,
     146,   594,   540,   153,   151,   128,   151,    67,    68,    69,
      70,    71,    72,   800,   152,   151,   554,   804,   151,   151,
     157,   133,   809,   810,   606,    85,   152,   606,   815,   606,
     176,    13,   819,   626,   606,   136,   182,    13,   136,   152,
     578,   579,   188,   189,    79,   583,   157,   153,   146,   136,
     152,   149,   198,   130,   136,   128,   594,   155,     8,   149,
     847,   654,   656,   209,   146,     8,   152,   149,    61,    61,
     656,   130,    96,   155,   157,     8,   152,   103,   671,   136,
      96,    13,   153,   152,   144,   145,   668,   153,   626,   153,
     150,   153,   630,   675,   157,   151,   634,   461,   462,   886,
     638,   149,   796,   152,   144,   687,    67,    68,    69,    70,
      71,    72,   303,   259,   478,   146,   654,    13,   309,   152,
     658,   908,   660,   152,   152,   157,    13,   150,   915,   667,
     152,   152,   152,   671,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   153,    49,   725,   726,   686,   152,
     729,    42,    43,    44,    45,    46,    47,   303,    49,   157,
     157,   152,   151,   309,   702,   149,   530,   157,    96,   149,
     153,   152,   151,   755,     8,   153,   146,   136,   153,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   146,   771,   149,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   146,    13,    26,   151,
      66,   749,   153,   152,    13,    13,   136,   146,    13,   583,
     136,   146,   153,   149,    58,    59,   764,    13,    74,   153,
     768,   813,   378,   150,   153,    74,   119,    13,   820,    58,
      59,   153,   151,   133,   146,   153,    26,   136,    79,     8,
     832,   136,   136,   152,   836,    74,   151,   839,   840,   152,
     146,   843,   898,   363,   846,   535,   845,   149,   806,   671,
     461,   462,   463,   512,   595,   726,   782,   638,   666,   425,
     327,   694,   578,    77,   822,   823,   824,   478,   522,   827,
     645,   873,   577,   622,   658,   852,   660,   495,   166,   837,
     496,   182,    -1,   667,    -1,    -1,   452,    -1,   454,    -1,
      -1,    -1,    -1,   895,   852,   461,   462,   463,   152,    -1,
      -1,    -1,    -1,    -1,   862,    -1,    -1,    42,    43,    -1,
     912,    -1,   478,    -1,   916,    -1,    -1,    -1,   702,   530,
     878,   487,   488,   881,   882,    -1,    61,   493,    -1,   495,
     496,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,   901,    -1,   903,   512,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,   530,    -1,    -1,   578,    -1,    -1,
      -1,    -1,   583,   108,    -1,    -1,   111,    -1,    -1,    -1,
     764,    -1,    -1,    -1,   768,    -1,    -1,   122,   554,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,    -1,    21,    22,   141,    -1,    -1,    -1,
      -1,    -1,   578,    -1,    -1,    -1,    -1,   583,    -1,    -1,
      -1,    -1,   806,    -1,    -1,    -1,    -1,    -1,   594,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   822,    -1,
      -1,    -1,    -1,   827,    -1,    -1,    63,   658,    -1,   660,
      -1,    -1,    -1,   837,    -1,    -1,   667,    -1,    -1,    -1,
     626,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   862,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,    -1,
      -1,   702,   658,    -1,   660,    -1,    -1,   881,    -1,    -1,
      -1,   667,    -1,     4,     5,   671,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,   146,
      31,    -1,    -1,    -1,    -1,    36,   702,    -1,    -1,    -1,
      41,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   764,    -1,    -1,    -1,   768,    -1,   176,
      -1,    -1,    63,   180,    -1,   182,    -1,    68,    -1,    -1,
      -1,   188,   189,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,   209,    -1,    -1,   806,    -1,    -1,   764,    -1,
      -1,    -1,   768,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,   822,    -1,    -1,    -1,    -1,   827,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,   837,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     806,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   862,    -1,    -1,    -1,    -1,   822,    -1,   275,    -1,
      -1,   827,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
     881,   837,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,
      -1,   298,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   862,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   881,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,   225,   342,    -1,    -1,    -1,    -1,
      -1,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,    -1,    -1,
      -1,   378,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,    -1,   277,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,   293,    -1,    -1,    -1,    -1,   298,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   452,    -1,   454,    -1,    -1,
      25,   342,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
     487,   488,    -1,    -1,    -1,    -1,   493,    -1,   495,   496,
      -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   393,    -1,    -1,   512,    -1,    -1,    -1,    -1,
     401,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   529,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,   549,   550,    -1,    -1,    -1,    -1,    -1,    -1,
     557,   558,    -1,   560,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,   594,    -1,    -1,
     481,    -1,    -1,    -1,   485,   486,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,
      -1,    -1,   503,    -1,    -1,    -1,    -1,    -1,    -1,   626,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   529,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   549,   550,
      -1,    -1,   553,    -1,   671,    -1,   557,   558,    -1,   560,
      -1,    -1,    -1,   564,   565,    -1,    -1,    -1,    -1,   570,
      -1,    -1,   153,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,   624,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,   649,   650,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,   670,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,    -1,   733,     9,    10,    11,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    42,    43,    -1,   779,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,   814,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    12,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
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
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
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
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
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
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
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
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
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
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
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
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
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
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
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
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
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
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   151,   152,    -1,   154,   155,   156,    31,    -1,
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
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    26,
      -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,
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
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    25,    -1,    27,    28,    29,    30,    31,
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
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    11,    49,    -1,    -1,
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
     141,   142,   143,   144,   146,   147,   149,   151,   153,   154,
     155,   156,   161,   162,   167,   170,   171,   177,   178,   180,
     182,   185,   187,   242,   243,   246,   249,   250,   259,   262,
     266,   267,   269,   270,   276,   277,   278,   279,   280,   281,
     282,   283,   288,   296,   298,    72,   126,   136,   246,   266,
     266,   151,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    72,   126,   128,   161,
     250,   269,   270,   278,   269,   266,    31,   266,   291,   292,
     266,   126,   128,   161,   250,   252,   253,   278,   281,   282,
     288,    81,    81,   146,   212,   246,   151,   153,   266,   136,
     153,   266,   151,   170,   235,   266,   151,   151,   256,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   266,   270,    88,    95,
      99,   103,   146,   293,   294,    26,   151,   266,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   266,    99,   257,
     293,   149,    99,   293,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   130,    61,
     149,   155,   282,   179,   266,   128,   161,   133,   133,   268,
     270,    96,   157,     8,   264,   128,   161,   133,   151,   258,
     133,   130,   282,    13,     8,   153,   179,   291,   153,    13,
     153,   136,   196,   147,     8,   153,   270,   152,   266,   236,
     237,   266,   243,   270,   149,   267,   270,     8,   153,   153,
     152,   266,   270,   297,   123,   270,   289,   290,   161,   164,
     149,   153,   151,   153,   153,   270,   137,   266,   103,   294,
      61,   130,    99,   103,   294,   266,   153,   168,   175,   176,
     270,   161,    74,     8,   153,   266,   115,   150,   169,   170,
     177,   178,   152,   152,   154,   266,   156,   136,    31,   208,
     209,   243,   270,   136,   107,   186,   107,   188,   136,   151,
     266,   284,   136,   149,   276,   282,   287,   288,   266,   266,
     266,    26,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   252,    31,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   208,   136,
     276,   287,   284,   136,   276,   285,   286,   287,   284,   266,
     152,   161,    31,   266,    31,   266,   161,   276,   208,   276,
     285,    42,    43,    61,    73,    82,   126,   128,   135,   161,
     250,   259,   260,   261,   146,   151,   152,   260,    13,     8,
     152,   151,   266,   152,   152,   153,     8,    74,    74,   266,
     211,   153,   152,     8,   152,   151,     8,   152,   151,   160,
     163,   208,   150,    61,   150,   129,   136,   146,   295,   136,
     152,   150,     8,   152,    74,   136,   166,   152,   151,    61,
     130,   238,   239,   240,   241,   272,   150,   268,   152,     8,
      13,   126,   128,   161,   251,   117,   189,   190,   251,   184,
     151,    73,    77,   205,   206,   207,   251,   157,   266,   151,
     151,   282,   266,    26,    63,   270,   152,   151,   151,   157,
     151,   273,   274,   275,    61,   149,   157,   150,   268,   268,
      96,   152,   254,   260,   260,   260,   263,   265,   151,   128,
     161,    99,   133,    13,   205,   260,   136,    26,   170,   195,
     266,   236,   266,   270,    31,   192,   270,   150,    26,   170,
     270,   289,   290,    13,   208,   150,   160,   152,   266,   157,
      26,   149,   197,    79,   176,   153,   136,    26,   170,   200,
     152,   284,   285,   272,    61,   238,    31,   243,   270,   260,
     128,   161,   190,   183,     8,   149,   205,   152,     8,    31,
     146,   150,   208,   208,   266,   252,   208,   208,   208,    61,
      61,   271,   284,   266,    31,   266,   130,   255,    96,   157,
       8,   264,   263,   161,   136,   260,   152,    13,   168,   152,
     153,    96,   191,   270,   191,   168,   201,   152,   266,   152,
     150,   157,   153,   198,   153,   198,   151,   168,   153,   157,
     275,   284,   268,   161,   149,   251,   213,   152,   144,   247,
     207,   146,    13,   152,   152,   258,   152,   152,   152,   284,
     284,   272,   157,   150,   268,   285,   260,   260,   152,   247,
     260,   100,   153,   236,   192,   152,   152,   202,    64,    65,
     203,   150,   198,    78,    90,   104,   198,   150,   251,   105,
     157,   213,    67,    68,    69,    70,    71,    72,    85,   144,
     145,   150,   214,   216,   229,   230,   231,   232,   234,   181,
     151,   149,    31,   146,    13,   260,   157,   157,    96,   149,
     153,   152,    26,   170,   194,   194,    64,    65,   204,   151,
     170,   104,   266,    26,   153,   199,   153,   150,   146,   153,
     150,   136,   217,   251,   146,   233,   246,   232,     8,   153,
     149,    31,   146,   248,   244,   146,    13,   260,   260,   245,
      26,   170,   193,   168,   151,    26,    66,   266,   153,   199,
     168,   152,    13,     8,   149,   153,   218,    13,     8,   153,
     179,   136,   168,   146,     8,   152,   168,    13,   260,   168,
     168,   102,   266,   168,   153,   152,   168,   149,   260,   251,
     136,   219,   220,   221,   222,   224,   225,   226,   251,   260,
     146,   136,    13,   150,    31,   146,   150,   260,   150,   101,
     153,   152,   170,   168,   150,   221,   153,    74,   119,   153,
     133,    13,   151,   260,   146,   153,    26,   150,   227,   232,
     223,   251,   136,   260,   205,   168,    79,   172,   173,   174,
     136,     8,   152,   151,   174,   251,   215,   251,   149,   153,
     228,   146,   168,   152,   150,   149,   168,   150
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass& observers;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass& observers;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass& observers;
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass& observers;
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
int yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/*----------.
| yyparse.  |
`----------*/

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
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass& observers;
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
  if (yypact_value_is_default (yyn))
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
        case 2:

/* Line 1806 of yacc.c  */
#line 337 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 341 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 342 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 346 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 347 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameAppend((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 351 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 352 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 353 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 354 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 355 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 356 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 357 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 358 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 359 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    {  (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 360 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 361 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 366 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 367 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 371 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUse((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 372 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 373 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 374 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsoluteAlias((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 378 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 379 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(2) - (4)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 383 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 384 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 391 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 396 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 400 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 401 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (7)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (7)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 405 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (10)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (10)].statementList)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 409 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression));
																										  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList));
																										}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 412 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (7)].statementList), (yyvsp[(5) - (7)].expression)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 421 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); 
																									}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 425 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); 
																										  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList));
 																										}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 428 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 429 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 430 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 431 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 432 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 433 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 434 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].variable)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 436 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 437 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 438 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 439 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 440 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].variable));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 450 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), observers.ExpressionMakeAsAssignmentExpression((yyvsp[(5) - (8)].variable)));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 455 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 456 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 460 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(3) - (13)].statementList), 
																											observers.AssignmentExpressionFromNewFound(
																											observers.VariableStart((yyvsp[(8) - (13)].semanticValue)), 
																											(yyvsp[(7) - (13)].qualifiedName),
																											NULL));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(11) - (13)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(13) - (13)].statementList)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 467 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 468 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 473 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 477 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 483 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.AssignmentExpressionFromNewFound(
																			   observers.VariableStart((yyvsp[(4) - (8)].semanticValue)), 
																			   (yyvsp[(3) - (8)].qualifiedName),
																			   NULL));
																		  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 508 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 509 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 514 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 515 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (10)].statementList)); 
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 523 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 524 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (8)].semanticValue), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].semanticValue));
											  observers.DeclareAssignedPropertiesFromAssignments((yyvsp[(7) - (8)].statementList));
											  
											   /*
											   * parse out property and method PHP docs
											   */
											  pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) (yyval.statementList)->At(0);
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
 
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); 
											  
											 
											  
											  observers.SetCurrentClassName(NULL);  
											}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 540 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 541 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
											  observers.SetCurrentClassName(NULL);    
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 548 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 549 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 550 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, true); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 551 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 555 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 557 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 561 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 565 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 567 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 571 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 573 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 577 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 578 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 582 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 583 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 587 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 588 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 592 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 593 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 597 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 598 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 602 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 603 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 607 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 608 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 612 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 613 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 614 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 615 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 619 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 620 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (5)].statementList);
																				  observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression));
																			      observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); 
																				}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 624 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList));
																				}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 635 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 636 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 640 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 641 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (6)].statementList));
															  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (6)].expression))); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 649 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (7)].statementList));
																			  	  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (7)].expression))); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 656 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 657 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 661 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 662 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 666 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 667 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 672 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].semanticValue), false); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 673 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue), true); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 674 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].semanticValue), true);}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 675 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].semanticValue), false); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 676 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (4)].parametersList), (yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), false); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 677 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (5)].parametersList), (yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].semanticValue), true); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 678 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (7)].parametersList), (yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].semanticValue), true); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 679 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (6)].parametersList), (yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), false); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 683 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 684 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 685 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 686 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 690 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 691 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 695 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 696 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 697 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 698 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 699 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 700 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].variable)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 704 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 709 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 710 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 711 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 715 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 717 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 718 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 722 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 727 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 728 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 729 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 731 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 732 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol));
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 739 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].traitUse), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 743 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitUse) = observers.TraitUseStart((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 745 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitUse) = observers.TraitUseAppend((yyvsp[(1) - (3)].traitUse), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 749 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 752 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 756 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 757 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 761 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 762 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 766 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 767 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 772 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitInsteadOf) =  observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), (yyvsp[(3) - (3)].traitInsteadOf)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 776 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMakeReferenceList((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 777 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfAppendReferenceList((yyvsp[(1) - (3)].traitInsteadOf), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 781 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 782 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 786 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 790 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), (yyvsp[(3) - (4)].classMemberSymbol), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 791 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 795 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 796 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 800 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 801 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 805 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 806 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 810 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 811 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 815 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 816 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 829 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 830 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 831 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 832 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 837 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 838 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 842 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 843 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 847 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 848 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 852 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 853 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 857 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 858 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 862 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (4)].variable); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 863 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 867 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 868 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 869 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 873 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 874 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 878 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList));  }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 882 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 883 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 884 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 885 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 886 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 887 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 888 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 889 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 890 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 891 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 892 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 893 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 894 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 895 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 896 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 897 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 898 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 899 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 900 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 901 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 902 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 903 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 904 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 905 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 906 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 907 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 908 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 909 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 910 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 911 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 912 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 913 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 914 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 915 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 916 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 917 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 918 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 919 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 920 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 921 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 922 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 923 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 924 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 925 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 926 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 927 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 928 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 929 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 930 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 931 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 932 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 933 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.NewInstanceAppendToChain((yyvsp[(2) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 936 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 938 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 939 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 940 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 941 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 942 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 943 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 944 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 945 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 946 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 947 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 948 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 949 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression);}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 950 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 951 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 952 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 953 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 956 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 957 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(4) - (10)].parametersList), (yyvsp[(6) - (10)].statementList), (yyvsp[(9) - (10)].statementList), (yyvsp[(7) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue)); 
																	
																	  // end after we create the closure so that closure gets the correct scope
																	  // anonymous function count
																	  observers.EndAnonymousFunction(); 
																	}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 964 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 965 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(5) - (11)].parametersList), (yyvsp[(7) - (11)].statementList), (yyvsp[(10) - (11)].statementList), (yyvsp[(8) - (11)].semanticValue), (yyvsp[(11) - (11)].semanticValue));  
			
																	  // end after we create the closure so that closure gets the correct scope
																	  // anonymous function count
																	  observers.EndAnonymousFunction(); 
																	}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 978 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 979 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 983 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), 
														       observers.VariableStart((yyvsp[(3) - (3)].semanticValue))
		                                                   ); 
		                                            }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 987 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), 
	                                                         observers.VariableStart((yyvsp[(4) - (4)].semanticValue), true)
		                                                   ); 
		                                            }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 991 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 992 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true)); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 997 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1000 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1002 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber()); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1004 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(3) - (6)].variable), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1006 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1008 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1010 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1012 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1016 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1017 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1018 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1019 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1023 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1024 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1025 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1029 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1030 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1035 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1036 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1040 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1041 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1049 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1050 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1051 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1055 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1056 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1057 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1061 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1066 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1067 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1068 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1069 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1070 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1071 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1072 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1073 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1074 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1075 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1076 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1077 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1081 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1082 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1083 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1084 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1085 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1086 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1087 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1088 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1089 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1090 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1094 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1098 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1099 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1100 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1101 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1102 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1104 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1105 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1106 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1110 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1115 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1116 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1120 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1121 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1122 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1123 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1127 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1147 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1148 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1152 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1153 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1158 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1162 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression));}
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1163 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1167 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(2) - (3)].statementList), true); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1171 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1172 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1173 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1178 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1182 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1183 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1187 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1191 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1192 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1197 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1198 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1203 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1208 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1209 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1214 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1215 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1219 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1220 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1224 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1225 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1229 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1230 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1231 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1235 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1236 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1245 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1246 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1250 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1251 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1252 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1256 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1257 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1261 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1265 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1269 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1270 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1271 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1275 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 1279 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 1280 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 1284 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 1285 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 1286 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 1287 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 1291 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 1292 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 1293 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 1294 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 1295 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 1296 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 1300 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 1301 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 1302 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 1306 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 1307 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 1308 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 1309 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 1310 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 1311 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 1312 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 1316 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].variable)); }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 1317 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].variable)); }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 1321 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 1322 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;



/* Line 1806 of yacc.c  */
#line 6856 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.cpp"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (analyzer, observers, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (analyzer, observers, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, analyzer, observers);
    }
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



/* Line 2067 of yacc.c  */
#line 1325 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54FullParser.y"

