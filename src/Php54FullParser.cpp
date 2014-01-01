
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

/* Line 189 of yacc.c  */
#line 1 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"

	
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



/* Line 189 of yacc.c  */
#line 102 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.cpp"

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


/* Line 264 of yacc.c  */
#line 273 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.cpp"

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
#define YYLAST   7830

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  139
/* YYNRULES -- Number of rules.  */
#define YYNRULES  449
/* YYNRULES -- Number of states.  */
#define YYNSTATES  916

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
     986,   989,   992,   994,   999,  1003,  1007,  1010,  1020,  1031,
    1033,  1034,  1039,  1043,  1048,  1050,  1053,  1058,  1065,  1071,
    1078,  1085,  1092,  1099,  1104,  1106,  1108,  1112,  1115,  1117,
    1121,  1124,  1126,  1128,  1133,  1135,  1138,  1139,  1142,  1143,
    1146,  1150,  1151,  1153,  1155,  1156,  1160,  1162,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1184,  1187,  1189,
    1191,  1195,  1198,  1201,  1204,  1209,  1213,  1215,  1217,  1221,
    1223,  1225,  1227,  1231,  1234,  1236,  1240,  1244,  1246,  1247,
    1250,  1251,  1253,  1259,  1263,  1267,  1269,  1271,  1273,  1275,
    1277,  1279,  1285,  1287,  1290,  1291,  1295,  1300,  1305,  1309,
    1311,  1313,  1314,  1316,  1319,  1323,  1327,  1329,  1334,  1339,
    1341,  1343,  1345,  1347,  1350,  1352,  1357,  1362,  1364,  1366,
    1371,  1372,  1374,  1376,  1378,  1383,  1388,  1390,  1392,  1396,
    1398,  1401,  1405,  1407,  1409,  1414,  1415,  1416,  1419,  1425,
    1429,  1433,  1435,  1442,  1447,  1452,  1455,  1458,  1461,  1463,
    1466,  1468,  1473,  1477,  1481,  1488,  1492,  1494,  1496,  1498,
    1503,  1508,  1511,  1514,  1519,  1522,  1525,  1527,  1531,  1535
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
     136,    -1,   167,     8,   136,    13,   258,    -1,    85,   136,
      13,   258,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   264,
     152,   170,   201,   203,    -1,   116,   151,   264,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   264,   152,
     200,    -1,    93,   170,   147,   151,   264,   152,   153,    -1,
     109,   151,   236,   153,   236,   153,   236,   152,   193,    -1,
     138,   151,   264,   152,   197,    -1,    76,   153,    -1,    76,
     264,   153,    -1,    87,   153,    -1,    87,   264,   153,    -1,
     134,   153,    -1,   134,   243,   153,    -1,   134,   268,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     235,   153,    -1,   118,    -1,   264,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   268,    74,   192,   191,
     152,   194,    -1,   110,   151,   243,    74,   268,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   249,   146,   152,   149,
     168,   150,   172,    -1,   139,   264,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   249,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   268,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   244,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   249,    -1,   120,
      -1,    -1,   107,   190,    -1,    -1,   117,   190,    -1,   249,
      -1,   190,     8,   249,    -1,    -1,    96,   192,    -1,   268,
      -1,    31,   268,    -1,   170,    -1,    26,   168,   101,   153,
      -1,   170,    -1,    26,   168,   102,   153,    -1,   170,    -1,
      26,   168,   100,   153,    -1,   136,    13,   258,    -1,   196,
       8,   136,    13,   258,    -1,   149,   198,   150,    -1,   149,
     153,   198,   150,    -1,    26,   198,   104,   153,    -1,    26,
     153,   198,   104,   153,    -1,    -1,   198,    78,   264,   199,
     168,    -1,   198,    90,   199,   168,    -1,    26,    -1,   153,
      -1,   170,    -1,    26,   168,   105,   153,    -1,    -1,   201,
      64,   151,   264,   152,   170,    -1,    -1,   202,    64,   151,
     264,   152,    26,   168,    -1,    -1,    65,   170,    -1,    -1,
      65,    26,   168,    -1,   206,    -1,    -1,   207,   146,    -1,
     207,    31,   146,    -1,   207,    31,   146,    13,   258,    -1,
     207,   146,    13,   258,    -1,   206,     8,   207,   146,    -1,
     206,     8,   207,    31,   146,    -1,   206,     8,   207,    31,
     146,    13,   258,    -1,   206,     8,   207,   146,    13,   258,
      -1,    -1,    73,    -1,    77,    -1,   249,    -1,   209,    -1,
      -1,   243,    -1,   268,    -1,    31,   266,    -1,   209,     8,
     243,    -1,   209,     8,   268,    -1,   209,     8,    31,   266,
      -1,   210,     8,   211,    -1,   211,    -1,   146,    -1,   155,
     265,    -1,   155,   149,   264,   150,    -1,   212,     8,   146,
      -1,   212,     8,   146,    13,   258,    -1,   146,    -1,   146,
      13,   258,    -1,   213,   214,    -1,    -1,   229,   233,   153,
      -1,   234,   153,    -1,   216,    -1,    -1,   230,   244,   179,
     136,   151,   205,   152,   215,   228,    -1,   144,   217,   218,
      -1,   249,    -1,   217,     8,   249,    -1,   153,    -1,   149,
     219,   150,    -1,    -1,   220,    -1,   221,    -1,   220,   221,
      -1,   222,   153,    -1,   226,   153,    -1,   225,   119,   223,
      -1,   249,    -1,   223,     8,   249,    -1,   136,    -1,   225,
      -1,   249,   133,   136,    -1,   224,    74,   227,   136,    -1,
     224,    74,   232,    -1,    -1,   232,    -1,   153,    -1,   149,
     168,   150,    -1,   231,    -1,   145,    -1,    -1,   231,    -1,
     232,    -1,   231,   232,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   233,     8,   146,
      -1,   233,     8,   146,    13,   258,    -1,   146,    -1,   146,
      13,   258,    -1,   234,     8,   136,    13,   258,    -1,    85,
     136,    13,   258,    -1,   235,     8,   264,    -1,   264,    -1,
      -1,   237,    -1,   237,     8,   264,    -1,   264,    -1,   238,
     270,    -1,   270,    -1,   239,    61,   282,   157,    -1,    61,
     282,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   250,   256,    -1,   123,   151,   287,
     152,    13,   264,    -1,   268,    13,   264,    -1,   268,    13,
      31,   268,    -1,   268,    13,    31,    63,   250,   256,    -1,
      62,   264,    -1,   268,    24,   264,    -1,   268,    23,   264,
      -1,   268,    22,   264,    -1,   268,    21,   264,    -1,   268,
      20,   264,    -1,   268,    19,   264,    -1,   268,    18,   264,
      -1,   268,    17,   264,    -1,   268,    16,   264,    -1,   268,
      15,   264,    -1,   268,    14,   264,    -1,   267,    59,    -1,
      59,   267,    -1,   267,    58,    -1,    58,   267,    -1,   264,
      27,   264,    -1,   264,    28,   264,    -1,   264,     9,   264,
      -1,   264,    11,   264,    -1,   264,    10,   264,    -1,   264,
      29,   264,    -1,   264,    31,   264,    -1,   264,    30,   264,
      -1,   264,    44,   264,    -1,   264,    42,   264,    -1,   264,
      43,   264,    -1,   264,    45,   264,    -1,   264,    46,   264,
      -1,   264,    47,   264,    -1,   264,    41,   264,    -1,   264,
      40,   264,    -1,    42,   264,    -1,    43,   264,    -1,    48,
     264,    -1,    50,   264,    -1,   264,    33,   264,    -1,   264,
      32,   264,    -1,   264,    35,   264,    -1,   264,    34,   264,
      -1,   264,    36,   264,    -1,   264,    39,   264,    -1,   264,
      37,   264,    -1,   264,    38,   264,    -1,   264,    49,   250,
      -1,   151,   264,   152,    -1,   242,    -1,   151,   242,   152,
     241,    -1,   264,    25,   264,    26,   264,    -1,   264,    25,
      26,   264,    -1,   294,    -1,    57,   264,    -1,    56,   264,
      -1,    55,   264,    -1,    54,   264,    -1,    53,   264,    -1,
      52,   264,    -1,    51,   264,    -1,   106,   254,    -1,    60,
     264,    -1,   260,    -1,    73,   151,   289,   152,    -1,    61,
     289,   157,    -1,   154,   255,   154,    -1,    12,   264,    -1,
     244,   179,   151,   205,   152,   245,   149,   168,   150,    -1,
      72,   244,   179,   151,   205,   152,   245,   149,   168,   150,
      -1,   112,    -1,    -1,   144,   151,   246,   152,    -1,   246,
       8,   146,    -1,   246,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,   161,   151,   208,   152,    -1,   126,   128,
     161,   151,   208,   152,    -1,   128,   161,   151,   208,   152,
      -1,   248,   133,   136,   151,   208,   152,    -1,   248,   133,
     274,   151,   208,   152,    -1,   276,   133,   136,   151,   208,
     152,    -1,   276,   133,   274,   151,   208,   152,    -1,   274,
     151,   208,   152,    -1,    72,    -1,   161,    -1,   126,   128,
     161,    -1,   128,   161,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,   248,    -1,   251,    -1,   279,   130,
     283,   252,    -1,   279,    -1,   252,   253,    -1,    -1,   130,
     283,    -1,    -1,   151,   152,    -1,   151,   264,   152,    -1,
      -1,    99,    -1,   291,    -1,    -1,   151,   208,   152,    -1,
     124,    -1,    92,    -1,    86,    -1,   122,    -1,   108,    -1,
      91,    -1,   141,    -1,   125,    -1,   111,    -1,   127,    -1,
     135,    99,   103,    -1,   135,   103,    -1,   257,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,    42,   258,
      -1,    43,   258,    -1,    73,   151,   261,   152,    -1,    61,
     261,   157,    -1,   259,    -1,    82,    -1,   248,   133,   136,
      -1,   137,    -1,   296,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,   257,    -1,   156,   291,   156,    -1,
     135,   291,   103,    -1,    82,    -1,    -1,   263,   262,    -1,
      -1,     8,    -1,   263,     8,   258,    96,   258,    -1,   263,
       8,   258,    -1,   258,    96,   258,    -1,   258,    -1,   265,
      -1,   243,    -1,   268,    -1,   268,    -1,   268,    -1,   278,
     130,   283,   273,   269,    -1,   278,    -1,   269,   270,    -1,
      -1,   130,   283,   273,    -1,   271,    61,   282,   157,    -1,
     272,    61,   282,   157,    -1,   151,   208,   152,    -1,   272,
      -1,   271,    -1,    -1,   280,    -1,   286,   280,    -1,   248,
     133,   274,    -1,   276,   133,   274,    -1,   280,    -1,   277,
      61,   282,   157,    -1,   247,    61,   282,   157,    -1,   279,
      -1,   277,    -1,   247,    -1,   280,    -1,   286,   280,    -1,
     275,    -1,   280,    61,   282,   157,    -1,   280,   149,   264,
     150,    -1,   281,    -1,   146,    -1,   155,   149,   264,   150,
      -1,    -1,   264,    -1,   284,    -1,   274,    -1,   284,    61,
     282,   157,    -1,   284,   149,   264,   150,    -1,   285,    -1,
     136,    -1,   149,   264,   150,    -1,   155,    -1,   286,   155,
      -1,   287,     8,   288,    -1,   288,    -1,   268,    -1,   123,
     151,   287,   152,    -1,    -1,    -1,   290,   262,    -1,   290,
       8,   264,    96,   264,    -1,   290,     8,   264,    -1,   264,
      96,   264,    -1,   264,    -1,   290,     8,   264,    96,    31,
     266,    -1,   290,     8,    31,   266,    -1,   264,    96,    31,
     266,    -1,    31,   266,    -1,   291,   292,    -1,   291,    99,
      -1,   292,    -1,    99,   292,    -1,   146,    -1,   146,    61,
     293,   157,    -1,   146,   130,   136,    -1,    95,   264,   150,
      -1,    95,   137,    61,   264,   157,   150,    -1,    88,   268,
     150,    -1,   136,    -1,   129,    -1,   146,    -1,   121,   151,
     295,   152,    -1,    98,   151,   268,   152,    -1,     7,   264,
      -1,     6,   264,    -1,     5,   151,   264,   152,    -1,     4,
     264,    -1,     3,   264,    -1,   268,    -1,   295,     8,   268,
      -1,   248,   133,   136,    -1,   276,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   337,   337,   341,   342,   346,   347,   351,   352,   353,
     354,   355,   356,   356,   358,   358,   360,   361,   365,   367,
     371,   372,   373,   374,   378,   379,   383,   384,   388,   389,
     390,   391,   395,   396,   400,   401,   405,   409,   410,   411,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   440,   446,   447,   448,   458,
     459,   463,   464,   468,   469,   473,   482,   483,   487,   491,
     495,   499,   500,   505,   504,   514,   513,   531,   530,   539,
     540,   541,   542,   546,   547,   552,   556,   557,   562,   563,
     568,   569,   573,   574,   578,   579,   583,   584,   588,   589,
     593,   594,   598,   599,   603,   604,   605,   606,   610,   611,
     613,   617,   618,   622,   623,   627,   628,   635,   636,   643,
     644,   648,   649,   653,   654,   659,   660,   661,   662,   663,
     664,   665,   666,   670,   671,   672,   673,   677,   678,   682,
     683,   684,   685,   686,   687,   691,   692,   696,   697,   698,
     702,   703,   704,   705,   709,   710,   714,   715,   716,   718,
     717,   725,   730,   731,   736,   737,   743,   744,   748,   749,
     753,   754,   758,   763,   764,   768,   769,   773,   777,   778,
     782,   783,   787,   788,   792,   793,   797,   798,   802,   803,
     807,   808,   809,   810,   811,   812,   816,   817,   818,   819,
     823,   825,   829,   830,   834,   835,   839,   840,   844,   845,
     849,   850,   854,   855,   856,   860,   861,   865,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   924,   926,   927,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   941,   944,   949,
     953,   954,   958,   959,   960,   961,   965,   967,   970,   972,
     974,   976,   978,   980,   985,   986,   987,   988,   992,   993,
     994,   998,   999,  1003,  1005,  1009,  1010,  1014,  1018,  1019,
    1020,  1024,  1025,  1026,  1030,  1031,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1063,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1079,  1080,
    1084,  1085,  1089,  1090,  1091,  1092,  1096,  1097,  1101,  1105,
    1109,  1113,  1117,  1121,  1122,  1126,  1131,  1132,  1136,  1140,
    1141,  1142,  1146,  1147,  1151,  1152,  1156,  1160,  1161,  1165,
    1166,  1167,  1171,  1172,  1173,  1177,  1178,  1179,  1183,  1184,
    1188,  1189,  1193,  1194,  1198,  1199,  1200,  1204,  1205,  1209,
    1210,  1214,  1215,  1219,  1220,  1221,  1225,  1226,  1230,  1234,
    1238,  1239,  1240,  1244,  1248,  1249,  1253,  1254,  1255,  1256,
    1260,  1261,  1262,  1263,  1264,  1265,  1269,  1270,  1271,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1285,  1286,  1290,  1291
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
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
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
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     245,   245,   246,   246,   246,   246,   247,   247,   247,   247,
     247,   247,   247,   247,   248,   248,   248,   248,   249,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   254,   254,
     254,   255,   255,   255,   256,   256,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   259,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   261,   261,
     262,   262,   263,   263,   263,   263,   264,   264,   265,   266,
     267,   268,   268,   269,   269,   270,   271,   271,   272,   273,
     273,   273,   274,   274,   275,   275,   276,   277,   277,   278,
     278,   278,   279,   279,   279,   280,   280,   280,   281,   281,
     282,   282,   283,   283,   284,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   290,   290,   290,   291,   291,   291,   291,
     292,   292,   292,   292,   292,   292,   293,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   295,   295,   296,   296
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
       2,     2,     1,     4,     3,     3,     2,     9,    10,     1,
       0,     4,     3,     4,     1,     2,     4,     6,     5,     6,
       6,     6,     6,     4,     1,     1,     3,     2,     1,     3,
       2,     1,     1,     4,     1,     2,     0,     2,     0,     2,
       3,     0,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       3,     2,     2,     2,     4,     3,     1,     1,     3,     1,
       1,     1,     3,     2,     1,     3,     3,     1,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     5,     1,     2,     0,     3,     4,     4,     3,     1,
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
       0,     0,     0,     0,   416,     0,     0,     0,     0,   304,
       0,     0,    79,   357,     0,   328,     0,     0,   331,   327,
       0,     0,     0,   318,   330,     0,     0,   334,   289,     0,
       0,     0,     0,    51,    85,     0,   329,     0,   326,   333,
       0,   335,     0,     0,     0,     5,   349,     0,     0,    81,
     332,     0,     0,     0,   398,     0,    27,     0,    57,   321,
     409,     0,   351,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   367,    71,   391,     0,   354,   282,
       0,   366,     0,   368,     0,   394,     0,   390,   372,   389,
     392,   397,     0,   272,   350,   304,     0,     5,    71,   445,
     444,     0,   442,   441,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   304,     0,     0,   305,
       0,   237,   370,     0,   235,   281,     0,   421,     0,   360,
     222,     0,     0,   305,   311,   324,   312,     0,   314,   392,
       0,    82,    80,   152,     0,    71,   416,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   415,
       0,    14,     0,   353,    45,   367,     0,   368,     0,     0,
       0,   337,   430,     0,   428,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   322,     0,
     323,     0,     0,     0,     0,   138,     0,    17,    83,    86,
      72,     0,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   400,     0,   400,
       0,   410,   393,     0,     0,     0,   307,     0,     0,   425,
     369,     0,   284,   361,   417,     0,   307,     0,   138,   217,
       0,     0,   393,     0,     0,    49,     0,     0,    42,     0,
      44,     0,     0,     0,     0,    50,     0,   319,     0,     0,
     205,   207,   367,   368,     0,   148,   368,     0,    48,    60,
       0,     0,   446,     0,     0,   413,     0,   412,   352,     4,
      12,    11,   138,    46,    47,     0,   349,     0,   336,   429,
       0,     0,   427,   356,   426,     0,    59,     0,     0,    66,
      68,    22,     0,     0,    16,     0,     0,    34,    26,    28,
      29,    30,   215,   267,   285,     0,   355,     6,     0,     0,
     137,   367,   368,     0,     0,    88,     0,    77,     0,   133,
     401,     0,   448,   384,   382,     0,   240,   242,   241,     0,
       0,   238,   239,   243,   245,   244,   259,   258,   261,   260,
     262,   264,   265,   263,   253,   252,   247,   248,   246,   249,
     250,   251,   266,     0,   219,   233,   232,   231,   230,   229,
     228,   227,   226,   225,   224,   223,     0,   449,   385,     0,
     407,     0,   403,   381,   402,   406,     0,     0,   443,   306,
       0,     0,     0,   420,     0,   419,   306,   384,     0,   385,
     316,     0,     0,   358,     0,   347,     0,     0,     0,   339,
       0,   338,   153,   346,   150,   133,   283,    25,     0,     0,
       0,     0,   202,   440,   320,   204,     0,     0,     0,     0,
     145,    10,     0,     0,   439,   415,   415,     0,   138,     0,
       4,     0,   435,     0,   433,   437,   436,   438,     0,   432,
       0,     0,     0,     0,     0,    21,    18,     0,     0,   400,
       0,   214,   213,   216,   269,   209,   399,   141,   296,     0,
       0,     0,     0,   308,    84,     0,    75,    87,    90,     0,
     133,   134,   135,     0,   123,     0,   136,   388,   138,   138,
     383,   271,     0,     0,   220,   303,   138,   138,   387,     0,
     138,   380,   379,   374,   400,     0,   395,   396,   424,   423,
       0,   325,   313,   342,   343,   365,     0,   360,   358,     0,
     341,     0,     0,     0,     0,   102,     0,    27,   100,    56,
       0,     0,   206,    92,     0,    92,    94,   149,    27,   115,
     447,     0,   411,     0,     0,    15,     0,   298,     0,   431,
     108,   108,    40,     0,    67,    53,    23,    27,   113,    37,
       0,     0,   381,   208,   400,   212,     0,   367,   368,    24,
       0,   310,    89,     0,     0,   155,     0,   290,   133,     0,
     125,     0,     0,   270,   324,     0,     0,   408,     0,   400,
     400,   371,     0,     0,     0,   418,     0,   315,     0,   345,
     361,   359,     0,   340,   348,   151,   290,     0,     0,     0,
     204,     0,     0,    95,     0,   117,   119,   414,   218,   297,
      13,     0,   108,     0,   108,     0,     0,     0,    31,   211,
     375,     0,   144,   309,   155,    91,   186,    73,     0,     0,
       0,   126,     0,   299,   300,   221,   301,   302,   378,     0,
       0,   373,   404,   405,   422,   317,   364,   363,   344,     0,
     103,     0,    38,     0,    93,     0,     0,   121,     0,     0,
      35,   434,     0,     0,     0,     0,     0,   104,     0,     0,
     210,   186,   190,   191,   192,   195,   194,   193,     0,     0,
     185,    78,   154,   158,     0,     0,   184,   188,     0,     0,
       0,    27,     0,   129,     0,   128,   376,   377,     0,    27,
     101,     0,    27,    98,    55,    54,     0,     0,     0,     0,
     120,     0,     0,   111,   112,    27,   106,   105,     0,   114,
      76,     0,     0,   162,   198,     0,    71,   189,     0,   157,
      27,     0,   294,     0,     0,   130,     0,   127,   362,     0,
      27,    96,    39,     0,     0,    27,     0,     0,   107,    27,
     110,     0,     0,     0,   166,   164,   161,     0,     0,   156,
       0,     0,     0,   295,     0,   291,   287,     0,   132,   288,
       0,     0,     0,   122,    36,     0,   109,    27,   201,   163,
       5,     0,   167,   168,     0,     0,   176,     0,     0,   199,
     196,     0,     0,    74,     0,   292,   131,     0,    99,     0,
     116,     0,   165,   169,   170,   180,     0,   171,     0,     0,
     133,   200,   293,    97,    27,    62,     0,   179,   172,   173,
     177,   197,     0,   118,     0,    58,    61,    63,   178,     0,
     159,     0,    64,   174,     0,     0,    27,   182,   160,     0,
       0,     0,   183,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   500,   339,   212,   213,    84,
     215,   368,   369,    86,   895,   896,   897,   358,   359,   370,
     371,   231,    89,   759,    90,   633,   539,    91,   385,    92,
     387,   536,   537,   672,   595,   812,   774,   589,   312,   612,
     683,   785,   619,   676,   727,   730,   778,   543,   544,   545,
     379,   380,   183,   184,   164,   696,   752,   904,   753,   792,
     826,   851,   852,   853,   854,   888,   855,   856,   857,   886,
     908,   754,   755,   756,   757,   795,   758,   174,   319,   320,
     521,   522,   523,   524,    93,    94,   118,   699,   803,    96,
      97,   546,   155,   156,   572,   657,   178,   219,   299,    98,
     575,   473,    99,   576,   294,   577,   100,   101,   289,   102,
     103,   651,   525,   561,   562,   563,   104,   105,   106,   107,
     108,   109,   110,   111,   391,   443,   444,   445,   112,   336,
     337,   148,   149,   203,   204,   508,   113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -725
static const yytype_int16 yypact[] =
{
    -725,    42,  1845,  -725,  6437,  6437,   -87,  6437,  6437,  6437,
    6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,
    6437,   165,   165,  6437,  4925,  6437,   204,     7,    55,   -54,
     -20,  5051,  -725,  -725,   121,  -725,  5177,   116,  -725,  -725,
    4771,  6437,   144,   148,  -725,   166,   190,  -725,  -725,   135,
     167,   201,   215,  -725,  -725,   219,  -725,   238,  -725,  -725,
     -24,  -725,   255,  5303,   124,   141,  -725,   242,  6437,  -725,
    -725,   246,   270,   102,  -725,   276,  -725,  6437,  -725,   269,
     248,   279,   -46,  -725,     8,  -725,  -725,  -725,  -725,  -725,
    -725,   277,   297,  -725,  -725,   410,   382,   313,  -725,  -725,
    6737,  -725,   152,  1356,   302,  -725,   323,   396,   332,  -725,
     -27,  -725,   173,  -725,  -725,   353,   345,  -725,   410,  7744,
    7744,  6437,  7744,  7744,  1831,  -725,  -725,   425,  -725,  -725,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,   348,   255,   -67,
     346,  -725,  -725,   354,  -725,  -725,   165,  7621,   321,   473,
    -725,   360,   255,   361,   363,   343,  -725,   370,   374,   -16,
     173,  -725,  -725,   492,     9,   410,  4925,  -725,  6778,   493,
    -725,  6823,   372,   366,    13,  7744,   165,  5429,  -725,  6437,
    6437,  -725,   -17,    16,  -725,   378,   383,  6437,   165,   125,
     255,  -725,   -68,   210,  -725,   392,  7744,  1280,   165,  6563,
     137,  -725,   -15,   230,  -725,  -725,  6437,  6864,  -725,   165,
     255,    36,    17,  -725,  6437,  1999,   384,  6905,   114,   393,
     331,  6437,   114,   178,   413,  5555,   415,  -725,   445,   446,
    -725,    12,  6437,    69,  6437,  6437,  6437,  5681,  6437,  6437,
    6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,
    6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,  6437,   204,
    -725,  -725,  -725,  5807,  6437,  6437,  6437,  6437,  6437,  6437,
    6437,  6437,  6437,  6437,  6437,  5555,   161,  6437,   282,  6437,
    6437,   248,   -12,   403,  6950,   255,   -48,   241,   293,  -725,
    -725,  5933,  -725,  6059,  -725,   255,   361,   207,  5555,  -725,
     207,   282,    -8,  7501,   409,  -725,   406,   420,  -725,  7501,
    -725,   560,    20,   426,  6437,  -725,   429,  -725,  6991,   430,
     570,  7744,   508,  1294,  6437,  -725,  -725,   135,  -725,  -725,
     431,  7033,  -725,    23,   437,  -725,    25,  -725,   218,  -725,
    -725,  -725,  5555,  -725,  -725,   440,   531,  7285,  -725,  -725,
     -39,   457,  -725,  -725,  -725,  7076,  -725,  2153,    28,  -725,
    -725,    86,   461,   102,  -725,  7117,   449,  -725,  -725,  -725,
    -725,  -725,   -14,  -725,  -725,  7328,  -725,  -725,   165,   451,
     590,    29,   386,   588,   286,   488,   286,  -725,   459,   126,
    7744,   455,   463,   464,    -8,   173,  1454,  7781,  1831,  6437,
    7703,  1482,  2137,  2290,  2443,  1672,  2596,  2596,  2596,  2596,
     843,  1003,   975,   975,   479,   479,   421,   421,   421,   425,
     425,   425,  -725,   -28,  1831,  1831,  1831,  1831,  1831,  1831,
    1831,  1831,  1831,  1831,  1831,  1831,   466,   465,   468,   467,
    -725,  6437,  -725,   471,     1,  -725,   475,  7369,  -725,    50,
     463,   465,   165,  7744,   165,  7662,   361,  -725,   478,  -725,
    -725,  7501,  7501,  7501,   474,  -725,   505,   255,   101,    98,
     501,  -725,  -725,  -725,   624,   126,  -725,  -725,  7501,   503,
    4001,  6437,  7744,  -725,  -725,  6437,  6437,   165,    62,  7411,
    -725,  -725,  4155,   165,  -725,   125,   125,   628,  5555,  1537,
    -725,   494,  -725,  6437,  -725,  -725,  -725,  -725,   487,  -725,
      47,   568,   165,   495,   513,  -725,  -725,  4309,   498,  6437,
     282,   522,   -10,  -725,  -725,  -725,  -725,  -725,  -725,  6185,
    7501,   525,   255,   361,  -725,   286,  -725,   648,  -725,   509,
     126,  -725,  -725,   515,   652,    -1,  -725,  -725,  5555,  5555,
      -8,  1985,  6437,   204,  -725,  -725,  5555,  5555,  -725,  7452,
    5555,   600,   608,  -725,  6437,  6437,  -725,  -725,  -725,  -725,
    6311,  -725,   540,  -725,  -725,   575,   517,   667,  7501,   255,
     117,   573,   541,  7501,   528,  -725,   668,  -725,  -725,  -725,
    7159,   534,  7744,   592,   165,   592,  -725,  -725,  -725,  -725,
    -725,    30,  -725,  6437,   532,  -725,  1691,  -725,  1228,  -725,
     536,   537,  -725,   543,  -725,  -725,  -725,  -725,  -725,  -725,
     538,   535,   471,  -725,  6437,   522,   165,    31,  1015,  -725,
     255,   361,   648,   546,   286,  -725,   544,   553,   262,   552,
     688,   550,   554,  1985,   343,   555,   557,  -725,   558,  6437,
    6437,   522,   547,  7493,   165,  7744,   282,  -725,  7501,  -725,
    7501,  -725,   561,   136,  -725,  -725,   553,  7501,  2307,   562,
    6437,    62,   572,  -725,   574,  3847,   308,  -725,  1831,  -725,
    -725,   564,  -725,    24,  -725,    66,   286,  2461,  -725,  -725,
    -725,   548,  -725,   361,  -725,  -725,   651,  -725,   579,   576,
      19,   718,  7501,  -725,  -725,  -725,  -725,  -725,  -725,   577,
     578,  -725,  -725,  -725,  -725,  -725,  -725,   637,  -725,   589,
    -725,   584,  -725,   587,  -725,  4463,  4463,   320,   591,  4771,
    -725,  -725,   143,  6437,    15,   594,    68,  -725,   595,   596,
    -725,   701,  -725,  -725,  -725,  -725,  -725,  -725,   607,   286,
    -725,  -725,  -725,  -725,   598,   353,   447,  -725,    18,   599,
      43,  -725,   604,   732,  7501,  -725,  -725,  -725,  7501,  -725,
    -725,  4617,  -725,  -725,  -725,  -725,   601,   725,   689,  6437,
    -725,   603,  6696,  -725,  -725,  -725,  -725,  -725,   602,  -725,
    -725,   744,     4,  -725,   745,    21,   410,  -725,   626,  -725,
    -725,   614,  -725,    32,  2615,   750,  7501,  -725,  -725,  2769,
    -725,  -725,  -725,  2923,  6437,  -725,   611,  7202,  -725,  -725,
    3847,   617,  7501,   286,   335,  -725,  -725,  7501,   621,  -725,
     639,   763,  3077,  -725,    45,  -725,  -725,  7501,  -725,  -725,
    3231,   625,  7243,  3847,  -725,  4771,  3847,  -725,  -725,  -725,
     705,   630,   335,  -725,   629,   707,   664,   631,   655,  -725,
     772,   638,  7501,  -725,   644,  -725,  -725,   641,  -725,   766,
    -725,  3385,  -725,  -725,  -725,   497,   286,  -725,   661,  7501,
     126,  -725,  -725,  -725,  -725,   719,   669,   672,   801,  -725,
    -725,  -725,   658,  3847,   662,  -725,   719,  -725,  -725,   286,
    -725,   286,  -725,  -725,   -58,   666,  -725,  -725,  -725,   663,
    3539,   665,  -725,  -725,  3693,  -725
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -725,  -725,  -324,    -3,  -725,  -725,  -725,  -725,   453,  -725,
    -107,  -725,     3,  -725,  -725,  -725,   -79,  -725,   310,     0,
       2,  -117,  -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,   288,   231,   154,  -725,   103,  -725,  -725,  -725,
    -542,    49,  -725,  -725,  -725,  -725,  -725,  -469,  -725,   194,
    -212,  -725,  -725,   510,  -725,   134,  -725,  -725,  -725,  -725,
    -725,  -725,  -725,    -9,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,  -725,  -725,  -724,  -725,  -725,  -725,  -477,  -725,
     314,  -725,  -725,  -725,   762,    14,    -2,   174,  -725,  -725,
     133,  -263,  -245,  -725,  -725,  -725,  -725,  -725,   198,  -220,
     524,  -725,  -725,   272,   275,  -725,   906,   671,  -358,   395,
     912,  -725,  -499,  -725,  -725,   225,  -222,  -725,    46,  -725,
    -725,   -23,   -13,  -725,  -270,  -291,  -725,  -725,    26,   359,
     362,   690,  -725,   268,   232,  -725,  -725,  -725,  -725
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -387
static const yytype_int16 yytable[] =
{
      95,   283,    87,   158,    88,    85,   584,   439,   591,   446,
     460,   393,   823,   159,   422,   499,   226,   304,   139,   139,
     527,   314,   623,   153,   327,   363,   798,   165,   479,   828,
     639,   493,   797,   496,   279,   553,   512,  -139,   496,  -142,
     834,   783,     3,   173,   136,   279,   350,   519,   306,   279,
     762,   624,   160,   279,   438,   136,   442,   192,    48,   193,
     224,   224,   564,   436,   121,   393,   438,   143,   143,   685,
     211,   636,   157,   610,   801,   457,   864,   195,   459,   442,
     224,   340,   224,   471,   225,   341,   458,  -305,   161,   471,
     505,   906,   163,   594,   568,   907,   569,   506,   137,   282,
     138,   357,   733,   342,   190,   225,  -386,   507,   117,   137,
     362,   138,   117,   165,   734,   351,   520,  -386,    74,   117,
     520,   534,   280,   538,  -382,   191,   623,    80,   735,    74,
     501,   166,   324,   280,   136,   286,   162,   280,    80,  -383,
     732,   280,   736,   139,   733,   640,   733,   302,   388,   296,
     565,   887,   711,   824,   140,   140,   734,   825,   734,   154,
     514,   227,   305,   389,   224,   763,   315,   205,   784,   328,
     364,   799,   480,   139,   829,   494,   606,   497,   224,   139,
     513,  -139,   677,  -142,   835,   139,   139,   338,   137,   802,
     138,   865,   143,   723,   322,   139,   611,   136,   117,   541,
     581,   498,   198,   542,   201,   392,   139,   361,    74,   199,
     261,   262,   198,    95,   224,    74,   737,    80,   787,   199,
     394,   733,   143,   200,    80,   198,   224,   201,   143,   622,
     210,  -305,   199,   734,   143,   143,   158,   136,   117,   381,
     348,   471,   471,   471,   143,   224,   159,   781,   334,   621,
    -307,   137,   531,   138,   532,   143,   153,   169,   471,   395,
     202,   117,   117,   394,   224,   394,   198,   172,   692,  -306,
     202,    74,   538,   199,   394,   394,   136,   352,  -124,   140,
      80,   181,   449,   202,   394,   160,   604,   394,   394,   381,
     182,   137,   456,   138,   652,   176,   714,   437,   442,   177,
     469,   117,   395,   185,   395,   157,   469,    74,   644,   140,
     471,    74,   381,   395,   395,   140,    80,   179,   198,    74,
      80,   140,   140,   395,   202,   199,   395,   395,   281,   352,
     151,   140,   152,   353,   376,   541,   641,   642,   224,   542,
     117,   180,   140,  -307,   645,   646,   224,   220,   648,   223,
      74,  -306,   186,    74,   691,    95,   381,   198,   471,    80,
     211,   342,    80,   471,   199,   715,   187,   198,   218,   498,
     188,   695,   728,   729,   199,   139,   202,   450,   222,   709,
     710,   533,   550,   533,   776,   777,   533,    74,   531,   189,
     532,   117,   154,   206,  -140,   208,    80,   221,   117,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   892,   531,   228,   532,   202,   141,   144,   440,   198,
     139,   209,   117,   738,   143,   202,   199,   214,    74,   451,
     352,   441,   349,   229,   442,   354,   470,    80,   471,    74,
     471,   230,   470,   232,  -370,  -370,   233,   471,    80,   139,
     349,   139,   354,   275,   349,   354,   276,   277,   469,   469,
     469,   531,   278,   532,   580,    48,   256,   257,   258,   143,
     259,   850,   533,   190,   259,   469,   285,   202,   292,   287,
     668,   293,   471,   588,   139,   139,   793,   288,   295,   224,
     139,   675,   139,   139,   298,   599,   297,    95,   143,    87,
     143,    88,    85,   300,   301,   303,   309,   394,   311,   139,
     687,   140,   381,   313,   742,   743,   744,   745,   746,   747,
     618,   253,   254,   255,   256,   257,   258,   469,   259,   631,
     158,   329,   533,   143,   143,   330,   372,   533,  -140,   143,
     159,   143,   143,   627,   471,   343,   395,   374,   471,   377,
     153,   383,   384,   386,   389,   474,   140,   475,   143,  -187,
     849,   858,   381,   381,   742,   743,   744,   745,   746,   747,
     381,   381,   476,   478,   381,   469,   663,   481,   486,   160,
     469,   483,   487,   485,   491,   140,   471,   140,   495,   858,
     502,   139,   503,   509,   470,   470,   470,   515,   529,   157,
     518,   530,   471,   528,    95,   535,    87,   471,    88,    85,
     540,   470,   547,   889,   548,   549,   556,   471,   555,   557,
     140,   140,   560,   139,   558,   578,   140,   693,   140,   140,
     571,   533,   566,   579,   582,   533,   903,   583,   905,   586,
     143,   603,   471,   394,   609,   140,   607,   613,   615,   616,
     620,   139,   520,   630,   804,   469,   634,   469,   635,   471,
     638,   649,   809,   470,   469,   813,    95,   637,   139,   650,
     656,   658,   143,    95,   659,   660,   348,   664,   820,   830,
     666,   667,   395,   533,   679,    95,   154,   670,   671,   682,
     684,   688,   689,   832,   686,   694,   697,   698,   701,   469,
     143,   702,   703,   840,   712,   740,   704,   706,   843,   707,
     708,   470,   846,   718,   731,   722,   470,   143,   742,   743,
     744,   745,   746,   747,   725,   761,   726,   140,   773,   773,
     760,   764,   780,   768,   766,   767,   748,   770,   769,   771,
     871,   788,   779,   791,   794,   806,   533,   786,   800,   789,
     805,   815,   814,   796,   821,   816,   818,   822,   827,   140,
     833,   469,   831,   837,   844,   469,   847,   860,   742,   743,
     744,   745,   746,   747,   811,   861,   862,   893,   868,  -175,
     872,   875,   874,   876,   877,   879,   748,   140,   878,   880,
     882,   470,   884,   470,   883,   749,   750,   890,   894,   910,
     470,   751,    95,   469,   140,   898,   914,    95,  -181,   899,
     900,    95,   909,   901,   913,   911,   516,   902,    95,   469,
     533,   533,   614,   632,   469,   724,   674,   472,   741,   775,
      95,   819,   700,   477,   469,   470,   625,   490,    95,   216,
     719,    95,   705,   873,    95,   749,   750,   690,   870,   533,
     662,   790,   661,   325,   601,     0,   307,     0,   602,   469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,   533,     0,     0,   469,   533,     0,  -387,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    95,   259,     0,     0,     0,   533,   470,   533,     0,
       0,   470,     0,     0,     0,     0,     0,     0,    95,     0,
     119,   120,    95,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,   145,
     147,   150,     0,   142,   142,     0,     0,   168,     0,   470,
       0,     0,   171,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     470,     0,     0,     0,   207,   197,     0,     0,     0,     0,
       0,     0,     0,   217,     0,   573,   574,     0,     0,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,   585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,  -387,  -387,   251,   252,   253,   254,   255,
     256,   257,   258,  -143,   259,     0,     0,   284,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
    -387,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   629,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,  -370,  -370,     0,     0,     0,     0,     0,
       0,     0,     0,   318,     0,   321,   196,     0,   316,     0,
       0,     0,   323,   331,   326,     0,     0,     0,     0,     0,
     332,   335,     0,     0,     0,   347,     0,   665,     0,     0,
     345,     0,   355,     0,     0,     0,     0,     0,     0,     0,
     365,   360,     0,     0,     0,     0,     0,   375,     0,     0,
       0,   196,     0,     0,     0,     0,     0,   382,   390,     0,
     396,   397,   398,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,     0,     0,  -143,     0,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   196,   716,   390,   717,   390,   447,   382,     0,     0,
       0,   720,     0,     0,     0,     0,     0,   453,     0,   455,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     382,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,     0,     0,   765,     0,     0,     0,
     489,     0,     0,     0,     0,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,   237,   382,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   807,     0,
     290,     0,   808,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   551,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     838,     0,     0,     0,     0,   554,     0,     0,  -370,  -370,
       0,     0,     0,     0,     0,     0,   848,   559,     0,     0,
       0,   859,  -370,  -370,     0,     0,     0,     0,     0,     0,
       0,   866,     0,     0,   290,     0,   290,     0,   488,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,     0,   681,   881,   590,     0,     0,
       0,   321,   592,     0,     0,     0,     0,     0,     0,   593,
     596,     0,     0,   891,   196,   600,     0,   335,   335,   608,
     382,     0,     0,     0,  -370,  -370,     0,     0,     0,     0,
       0,     0,     0,     0,   360,   390,     0,     0,     0,     0,
       0,     0,     0,   344,     0,   196,     0,     0,     0,     0,
       0,   628,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   196,     0,     0,   643,     0,
     382,   382,   196,   196,   235,   236,   196,     0,   382,   382,
     390,   653,   382,     0,     0,     0,   655,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,   673,     0,     0,   678,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     390,   259,     0,     0,     0,     0,     0,     0,   290,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,   390,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   290,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,     0,     0,    10,
      11,     0,     0,   596,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,    34,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,   782,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,   817,    76,   605,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     842,   259,     0,     0,     0,     0,     0,     0,     0,     0,
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
      76,   680,    77,     0,    78,    79,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
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
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   367,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   366,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   511,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,   721,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   366,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   116,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,   739,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   366,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,  -387,  -387,
    -387,  -387,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
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
       0,    74,    75,     0,    76,   836,    77,     0,    78,    79,
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
      70,    71,    72,     0,     0,    74,    75,     0,    76,   839,
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
      41,    42,     0,     0,     0,   841,     0,     0,     0,    43,
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
      72,     0,     0,    74,    75,     0,    76,   863,    77,     0,
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
       0,     0,   867,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   366,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   116,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,   885,    77,     0,    78,    79,
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
      70,    71,    72,     0,     0,    74,    75,     0,    76,   912,
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
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   366,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   116,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   915,    77,     0,    78,    79,    80,    81,
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
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   587,     0,     0,
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
       0,   598,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   617,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
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
       0,     0,     0,   810,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    74,     0,     0,     0,     0,    77,     0,     0,    79,
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
       0,     0,    77,     0,   167,    79,    80,    81,     0,     0,
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
     170,    79,    80,    81,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,     0,   194,    79,    80,    81,
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
      77,   317,     0,    79,    80,    81,   378,     0,     0,     0,
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
       0,    74,     0,     0,     0,     0,    77,   399,     0,    79,
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
       0,     0,    77,     0,     0,    79,    80,    81,   423,     0,
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
       0,    79,    80,    81,   452,     0,     0,     0,     0,     0,
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
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      77,     0,     0,    79,    80,    81,   626,     0,     0,     0,
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
      80,    81,   654,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    77,     0,     0,    79,    80,    81,     0,     0,
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
      61,    62,     0,     0,     0,     0,     0,     0,    64,   117,
     346,     0,     0,     0,    70,   234,   235,   236,     0,    74,
       0,     0,     0,     0,    77,     0,     0,    79,    80,    81,
       0,   237,   783,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   784,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     260,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   308,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   310,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   356,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   448,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   484,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   492,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   510,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   517,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   669,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   845,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   869,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   504,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   526,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   567,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   461,   462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   597,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,   464,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,   647,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    58,    59,   466,    61,   467,
     234,   235,   236,     0,     0,     0,   468,   117,     0,     0,
       0,     0,    70,   713,     0,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   552,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,   570,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   236,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259
};

static const yytype_int16 yycheck[] =
{
       2,   118,     2,    26,     2,     2,   475,   277,   485,   279,
     301,   233,     8,    26,   259,   339,     8,     8,    21,    22,
     378,     8,   521,    26,     8,     8,     8,    29,     8,     8,
      31,     8,   756,     8,    61,    63,     8,     8,     8,     8,
       8,    26,     0,    40,    72,    61,    61,    61,   165,    61,
      31,    61,    26,    61,   276,    72,   278,    60,   112,    62,
     128,   128,    61,   275,   151,   287,   288,    21,    22,   611,
      73,   540,    26,    26,    31,   297,    31,    63,   300,   301,
     128,   149,   128,   303,   151,   153,   298,   133,    81,   309,
     129,   149,   146,    31,   452,   153,   454,   136,   126,   112,
     128,   208,    78,   151,   128,   151,   133,   146,   136,   126,
      74,   128,   136,   115,    90,   130,   130,   133,   146,   136,
     130,   384,   149,   386,   151,   149,   625,   155,   104,   146,
     342,   151,   149,   149,    72,   138,    81,   149,   155,   151,
     682,   149,   684,   146,    78,   146,    78,   160,   136,   152,
     149,   875,   651,   149,    21,    22,    90,   153,    90,    26,
      74,   153,   153,   151,   128,   146,   153,    26,   153,   153,
     153,   153,   152,   176,   153,   152,   500,   152,   128,   182,
     152,   152,   152,   152,   152,   188,   189,   190,   126,   146,
     128,   146,   146,   670,   180,   198,   149,    72,   136,    73,
      99,   151,    88,    77,   103,   136,   209,   210,   146,    95,
      58,    59,    88,   215,   128,   146,   150,   155,   150,    95,
     233,    78,   176,    99,   155,    88,   128,   103,   182,   520,
     128,   133,    95,    90,   188,   189,   259,    72,   136,   225,
     103,   461,   462,   463,   198,   128,   259,   104,   123,   519,
     133,   126,   126,   128,   128,   209,   259,   136,   478,   233,
     146,   136,   136,   276,   128,   278,    88,   151,   626,   133,
     146,   146,   535,    95,   287,   288,    72,    99,   152,   146,
     155,   146,   285,   146,   297,   259,   498,   300,   301,   275,
     155,   126,   295,   128,   564,   151,   654,   136,   520,   151,
     303,   136,   276,   136,   278,   259,   309,   146,   553,   176,
     530,   146,   298,   287,   288,   182,   155,   151,    88,   146,
     155,   188,   189,   297,   146,    95,   300,   301,   155,    99,
     126,   198,   128,   103,   156,    73,   548,   549,   128,    77,
     136,   151,   209,   133,   556,   557,   128,    79,   560,    81,
     146,   133,   151,   146,   624,   357,   342,    88,   578,   155,
     363,   151,   155,   583,    95,   656,   151,    88,    99,   151,
     151,   634,    64,    65,    95,   378,   146,   136,    99,   649,
     650,   384,   395,   386,    64,    65,   389,   146,   126,   151,
     128,   136,   259,   151,     8,   149,   155,   149,   136,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   880,   126,   136,   128,   146,    21,    22,   136,    88,
     423,   151,   136,   686,   378,   146,    95,   151,   146,   136,
      99,   149,   200,   136,   656,   203,   303,   155,   658,   146,
     660,    31,   309,    61,    58,    59,   133,   667,   155,   452,
     218,   454,   220,   151,   222,   223,   133,    61,   461,   462,
     463,   126,   130,   128,   467,   112,    45,    46,    47,   423,
      49,   136,   475,   128,    49,   478,   128,   146,   157,   133,
     587,     8,   702,   480,   487,   488,   749,   133,   128,   128,
     493,   598,   495,   496,   151,   492,   133,   499,   452,   499,
     454,   499,   499,   133,   130,    13,    13,   520,   136,   512,
     617,   378,   498,   147,    67,    68,    69,    70,    71,    72,
     517,    42,    43,    44,    45,    46,    47,   530,    49,   532,
     553,   153,   535,   487,   488,   152,   152,   540,   152,   493,
     553,   495,   496,   529,   764,   153,   520,   154,   768,   136,
     553,   136,   107,   107,   151,   146,   423,   151,   512,   112,
     823,   824,   548,   549,    67,    68,    69,    70,    71,    72,
     556,   557,   152,    13,   560,   578,   579,   151,     8,   553,
     583,   152,    74,   153,   153,   452,   806,   454,   151,   852,
     150,   594,    61,   136,   461,   462,   463,   136,     8,   553,
     151,    13,   822,   152,   606,   117,   606,   827,   606,   606,
     151,   478,   157,   876,   151,   151,   151,   837,   152,   151,
     487,   488,   151,   626,   157,   151,   493,   630,   495,   496,
     152,   634,   157,   128,   133,   638,   899,    13,   901,   136,
     594,    13,   862,   656,   157,   512,   152,    79,   153,   136,
     152,   654,   130,   128,   761,   658,     8,   660,   149,   879,
       8,    61,   769,   530,   667,   772,   668,   152,   671,    61,
     130,    96,   626,   675,   157,     8,   103,   136,   785,   796,
     152,    13,   656,   686,   152,   687,   553,   153,    96,   153,
     153,   153,   157,   800,   151,   149,   152,   144,   146,   702,
     654,    13,   152,   810,   157,   157,   152,   152,   815,   152,
     152,   578,   819,   152,   150,   153,   583,   671,    67,    68,
      69,    70,    71,    72,   152,   149,   152,   594,   725,   726,
     151,    13,   729,    96,   157,   157,    85,   153,   149,   152,
     847,   146,   151,   136,   146,    13,   749,   153,   149,   153,
     146,    26,   151,   755,   152,    66,   153,    13,    13,   626,
     146,   764,   136,    13,   153,   768,   149,   146,    67,    68,
      69,    70,    71,    72,   771,   136,    13,   884,   153,    74,
     150,    74,   153,   119,   153,    13,    85,   654,   133,   151,
     146,   658,    26,   660,   153,   144,   145,   136,    79,   906,
     667,   150,   804,   806,   671,   136,   913,   809,   136,     8,
     152,   813,   146,   151,   149,   152,   363,   896,   820,   822,
     823,   824,   512,   535,   827,   671,   595,   303,   694,   726,
     832,   782,   638,   309,   837,   702,   522,   327,   840,    77,
     666,   843,   644,   852,   846,   144,   145,   622,   845,   852,
     578,   150,   577,   182,   495,    -1,   166,    -1,   496,   862,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   871,
      -1,    -1,    -1,   876,    -1,    -1,   879,   880,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   893,    49,    -1,    -1,    -1,   899,   764,   901,    -1,
      -1,   768,    -1,    -1,    -1,    -1,    -1,    -1,   910,    -1,
       4,     5,   914,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    21,    22,    -1,    -1,    31,    -1,   806,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   822,    -1,    -1,    -1,    -1,
     827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
     837,    -1,    -1,    -1,    68,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,   461,   462,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   862,    -1,    -1,    -1,    -1,
      -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   879,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     8,    49,    -1,    -1,   121,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,   530,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   166,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,   179,   180,    -1,   176,    -1,
      -1,    -1,   180,   187,   182,    -1,    -1,    -1,    -1,    -1,
     188,   189,    -1,    -1,    -1,   199,    -1,   583,    -1,    -1,
     198,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,   209,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,   225,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,    -1,    -1,   152,    -1,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   658,   277,   660,   279,   280,   275,    -1,    -1,
      -1,   667,    -1,    -1,    -1,    -1,    -1,   291,    -1,   293,
      -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,    -1,    -1,    -1,    -1,    -1,   702,    -1,    -1,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    25,   342,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   764,    -1,
     378,    -1,   768,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   399,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     806,    -1,    -1,    -1,    -1,   423,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,   822,   441,    -1,    -1,
      -1,   827,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   837,    -1,    -1,   452,    -1,   454,    -1,    74,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,   157,   862,   481,    -1,    -1,
      -1,   485,   486,    -1,    -1,    -1,    -1,    -1,    -1,   487,
     488,    -1,    -1,   879,   498,   493,    -1,   495,   496,   503,
     498,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   512,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,   529,    -1,    -1,    -1,    -1,
      -1,   529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   548,   549,    -1,    -1,   552,    -1,
     548,   549,   556,   557,    10,    11,   560,    -1,   556,   557,
     564,   565,   560,    -1,    -1,    -1,   570,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,   594,    -1,    -1,   603,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     624,    49,    -1,    -1,    -1,    -1,    -1,    -1,   626,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   649,   650,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   654,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   670,    -1,    -1,    42,
      43,    -1,    -1,   671,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,   733,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,   146,   147,   779,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     814,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
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
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
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
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
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
      -1,    -1,   151,    -1,   153,   154,   155,   156,    -1,    -1,
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
     153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
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
     151,   152,    -1,   154,   155,   156,    31,    -1,    -1,    -1,
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
      -1,   146,    -1,    -1,    -1,    -1,   151,    26,    -1,   154,
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
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
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
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,    -1,    -1,    -1,   141,     9,    10,    11,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,
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
      46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49
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
     182,   185,   187,   242,   243,   244,   247,   248,   257,   260,
     264,   265,   267,   268,   274,   275,   276,   277,   278,   279,
     280,   281,   286,   294,   296,    72,   126,   136,   244,   264,
     264,   151,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,    72,   126,   128,   161,
     248,   267,   268,   276,   267,   264,    31,   264,   289,   290,
     264,   126,   128,   161,   248,   250,   251,   276,   279,   280,
     286,    81,    81,   146,   212,   244,   151,   153,   264,   136,
     153,   264,   151,   170,   235,   264,   151,   151,   254,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   264,   268,    88,    95,
      99,   103,   146,   291,   292,    26,   151,   264,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   264,    99,   255,
     291,   149,    99,   291,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   130,    61,
     149,   155,   280,   179,   264,   128,   161,   133,   133,   266,
     268,    96,   157,     8,   262,   128,   161,   133,   151,   256,
     133,   130,   280,    13,     8,   153,   179,   289,   153,    13,
     153,   136,   196,   147,     8,   153,   268,   152,   264,   236,
     237,   264,   243,   268,   149,   265,   268,     8,   153,   153,
     152,   264,   268,   295,   123,   268,   287,   288,   161,   164,
     149,   153,   151,   153,   153,   268,   137,   264,   103,   292,
      61,   130,    99,   103,   292,   264,   153,   168,   175,   176,
     268,   161,    74,     8,   153,   264,   115,   150,   169,   170,
     177,   178,   152,   152,   154,   264,   156,   136,    31,   208,
     209,   243,   268,   136,   107,   186,   107,   188,   136,   151,
     264,   282,   136,   274,   280,   286,   264,   264,   264,    26,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   250,    31,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   208,   136,   274,   282,
     136,   149,   274,   283,   284,   285,   282,   264,   152,   161,
     136,   136,    31,   264,    31,   264,   161,   274,   208,   274,
     283,    42,    43,    61,    73,    82,   126,   128,   135,   161,
     248,   257,   258,   259,   146,   151,   152,   258,    13,     8,
     152,   151,   264,   152,   152,   153,     8,    74,    74,   264,
     211,   153,   152,     8,   152,   151,     8,   152,   151,   160,
     163,   208,   150,    61,   150,   129,   136,   146,   293,   136,
     152,   150,     8,   152,    74,   136,   166,   152,   151,    61,
     130,   238,   239,   240,   241,   270,   150,   266,   152,     8,
      13,   126,   128,   161,   249,   117,   189,   190,   249,   184,
     151,    73,    77,   205,   206,   207,   249,   157,   151,   151,
     280,   264,    26,    63,   268,   152,   151,   151,   157,   264,
     151,   271,   272,   273,    61,   149,   157,   150,   266,   266,
      96,   152,   252,   258,   258,   258,   261,   263,   151,   128,
     161,    99,   133,    13,   205,   258,   136,    26,   170,   195,
     264,   236,   264,   268,    31,   192,   268,   150,    26,   170,
     268,   287,   288,    13,   208,   150,   160,   152,   264,   157,
      26,   149,   197,    79,   176,   153,   136,    26,   170,   200,
     152,   282,   283,   270,    61,   238,    31,   243,   268,   258,
     128,   161,   190,   183,     8,   149,   205,   152,     8,    31,
     146,   208,   208,   264,   250,   208,   208,   150,   208,    61,
      61,   269,   282,   264,    31,   264,   130,   253,    96,   157,
       8,   262,   261,   161,   136,   258,   152,    13,   168,   152,
     153,    96,   191,   268,   191,   168,   201,   152,   264,   152,
     150,   157,   153,   198,   153,   198,   151,   168,   153,   157,
     273,   282,   266,   161,   149,   249,   213,   152,   144,   245,
     207,   146,    13,   152,   152,   256,   152,   152,   152,   282,
     282,   270,   157,   150,   266,   283,   258,   258,   152,   245,
     258,   100,   153,   236,   192,   152,   152,   202,    64,    65,
     203,   150,   198,    78,    90,   104,   198,   150,   249,   105,
     157,   213,    67,    68,    69,    70,    71,    72,    85,   144,
     145,   150,   214,   216,   229,   230,   231,   232,   234,   181,
     151,   149,    31,   146,    13,   258,   157,   157,    96,   149,
     153,   152,    26,   170,   194,   194,    64,    65,   204,   151,
     170,   104,   264,    26,   153,   199,   153,   150,   146,   153,
     150,   136,   217,   249,   146,   233,   244,   232,     8,   153,
     149,    31,   146,   246,   168,   146,    13,   258,   258,   168,
      26,   170,   193,   168,   151,    26,    66,   264,   153,   199,
     168,   152,    13,     8,   149,   153,   218,    13,     8,   153,
     179,   136,   168,   146,     8,   152,   150,    13,   258,   150,
     168,   102,   264,   168,   153,   152,   168,   149,   258,   249,
     136,   219,   220,   221,   222,   224,   225,   226,   249,   258,
     146,   136,    13,   150,    31,   146,   258,   101,   153,   152,
     170,   168,   150,   221,   153,    74,   119,   153,   133,    13,
     151,   258,   146,   153,    26,   150,   227,   232,   223,   249,
     136,   258,   205,   168,    79,   172,   173,   174,   136,     8,
     152,   151,   174,   249,   215,   249,   149,   153,   228,   146,
     168,   152,   150,   149,   168,   150
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
        case 2:

/* Line 1455 of yacc.c  */
#line 337 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 341 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 342 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 346 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameMake((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 347 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameAppend((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 351 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 352 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 353 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 354 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 355 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 356 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 357 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 358 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetDeclaredNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 359 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    {  (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 360 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 361 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 366 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 367 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 371 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUse((yyvsp[(1) - (1)].qualifiedName)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 372 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 373 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsolute((yyvsp[(2) - (2)].qualifiedName)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 374 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsoluteAlias((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 378 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 379 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(2) - (4)].semanticValue), analyzer.GetLineNumber()); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 383 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 384 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 391 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 396 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 400 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 401 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (7)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (7)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 405 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (10)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (10)].statementList)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 409 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(5) - (5)].statementList), (yyvsp[(3) - (5)].expression)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 410 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (7)].statementList), (yyvsp[(5) - (7)].expression)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 419 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(9) - (9)].statementList)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 420 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(5) - (5)].statementList), (yyvsp[(3) - (5)].expression)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 421 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 422 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 423 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 424 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 425 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 426 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 427 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].variable)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 428 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 429 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 430 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 431 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 432 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 433 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 436 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 442 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), observers.ExpressionMakeAsAssignmentExpression((yyvsp[(5) - (8)].variable)));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 446 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 447 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 451 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(3) - (13)].statementList), 
																											observers.AssignmentExpressionFromNewFound(
																											observers.VariableStart((yyvsp[(8) - (13)].semanticValue)), 
																											(yyvsp[(7) - (13)].qualifiedName),
																											NULL));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(11) - (13)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(13) - (13)].statementList)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 458 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 459 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 463 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 464 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 468 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 469 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 474 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.AssignmentExpressionFromNewFound(
																			   observers.VariableStart((yyvsp[(4) - (8)].semanticValue)), 
																			   (yyvsp[(3) - (8)].qualifiedName),
																			   NULL));
																		  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 482 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 483 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 499 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.isMethod) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 500 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.isMethod) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 505 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 506 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (10)].statementList)); 
											  observers.SetCurrentMemberName(NULL);
											;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 514 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 515 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (8)].semanticValue), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].semanticValue));
											  observers.DeclareAssignedPropertiesFromAssignments((yyvsp[(7) - (8)].statementList));
											  
											   /*
											   * parse out property and method PHP docs
											   */
											  pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) (yyval.statementList)->At(0);
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
 
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); 
											  
											 
											  
											  observers.SetCurrentClassName(NULL);  
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 531 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 532 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
											  observers.SetCurrentClassName(NULL);    
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 539 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 540 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 541 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, true); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 542 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 546 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 548 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 552 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 556 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 558 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 562 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 564 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 568 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 569 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 573 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 574 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 578 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 579 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 583 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 584 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 588 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 589 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 593 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 594 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 598 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 599 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 603 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 604 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 605 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 606 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 610 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 611 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); 
																			  observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 613 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 622 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 623 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 627 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 628 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (6)].statementList));
															  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (6)].expression))); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 635 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 636 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (7)].statementList));
																			  	  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (7)].expression))); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 643 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 644 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 648 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 649 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 653 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 654 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 659 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].semanticValue), false); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 660 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue), true); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 661 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].semanticValue), true);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 662 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].semanticValue), false); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 663 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (4)].parametersList), (yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), false); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 664 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (5)].parametersList), (yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].semanticValue), true); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 665 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (7)].parametersList), (yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].semanticValue), true); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 666 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (6)].parametersList), (yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), false); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 670 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 671 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 672 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 673 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 677 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 678 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 682 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 683 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 684 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 685 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 686 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 687 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 691 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 692 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 696 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 697 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 698 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 702 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 703 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 704 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 705 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 709 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 710 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 714 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 715 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 716 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 718 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 719 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol));
															  observers.SetCurrentMemberName(NULL);
															;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 726 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].traitUse), (yyvsp[(3) - (3)].statementList)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 730 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitUse) = observers.TraitUseStart((yyvsp[(1) - (1)].qualifiedName)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 732 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitUse) = observers.TraitUseAppend((yyvsp[(1) - (3)].traitUse), (yyvsp[(3) - (3)].qualifiedName)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 736 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 739 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 743 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 744 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 748 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 749 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 753 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 754 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 759 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitInsteadOf) =  observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), (yyvsp[(3) - (3)].traitInsteadOf)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 763 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMakeReferenceList((yyvsp[(1) - (1)].qualifiedName)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 764 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfAppendReferenceList((yyvsp[(1) - (3)].traitInsteadOf), (yyvsp[(3) - (3)].qualifiedName)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 768 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 769 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 773 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 777 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), (yyvsp[(3) - (4)].classMemberSymbol), (yyvsp[(4) - (4)].semanticValue)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 778 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 782 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 783 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 787 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 788 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 792 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 793 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 797 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 798 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 802 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 803 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 816 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 817 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 818 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 819 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 824 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 825 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 829 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 830 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 834 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 835 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 839 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 840 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 844 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 845 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 849 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (4)].variable); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 850 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 854 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 855 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 856 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 860 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 861 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 865 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList));  ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 869 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 870 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 871 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 872 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 873 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 874 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 875 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 876 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 877 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 878 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 879 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 880 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 881 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 882 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 883 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 884 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 885 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 886 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 887 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 888 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 889 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 890 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 891 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 892 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 893 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 894 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 895 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 896 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 897 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 898 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 899 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 900 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 901 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 902 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 903 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 904 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 905 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 906 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 907 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 908 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 909 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 910 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 911 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 912 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 913 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 914 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 915 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 916 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 917 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 918 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 919 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 920 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.NewInstanceAppendToChain((yyvsp[(2) - (4)].expression), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 923 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 925 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 926 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 927 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 928 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 929 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 930 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 931 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 932 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 933 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 934 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 935 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 936 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 937 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 938 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 939 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 940 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 943 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil();  ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 945 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 953 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 954 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 958 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 959 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 960 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 961 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 966 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 969 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 971 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 973 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(3) - (6)].semanticValue), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 975 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 977 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 979 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 981 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 985 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 986 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 987 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 988 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 992 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 993 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 994 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 998 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 999 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1004 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1005 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1009 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1010 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1018 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1019 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1020 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1024 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1025 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1026 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1030 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1031 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1035 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1036 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1037 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1038 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1039 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1040 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1041 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1042 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1043 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1044 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1045 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1046 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1050 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1051 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1052 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1053 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1054 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1055 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1056 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1057 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1058 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1059 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1063 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1067 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1068 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1069 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1070 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1071 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1073 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1074 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1075 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1079 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1084 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.isComma) = false; ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1085 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.isComma) = true; ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1089 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1090 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1091 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1092 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1096 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1116 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1117 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1121 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1122 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1127 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1131 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression));;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1132 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1136 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(2) - (3)].statementList), true); ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1140 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1141 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1142 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1147 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(2) - (2)].variable); ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1151 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1152 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1156 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1160 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1161 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1166 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1167 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1172 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(2) - (2)].variable); ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1177 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1178 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1183 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1184 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1188 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1189 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1193 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1194 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1198 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1199 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1200 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1204 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1205 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.variable) = observers.VariableNil(); ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1214 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1215 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1219 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1220 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1221 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1225 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1226 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1230 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
                                                                                ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1234 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1238 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1239 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1240 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
                                                                                ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1244 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1248 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1249 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1253 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1254 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1255 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1256 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1260 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1261 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1262 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1263 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1264 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1265 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1269 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1270 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1271 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1275 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1276 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1277 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1278 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1279 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1280 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1281 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1285 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1286 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1290 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1291 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 6774 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.cpp"
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



/* Line 1675 of yacc.c  */
#line 1294 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54FullParser.y"

