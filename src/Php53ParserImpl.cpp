
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
#define yyparse         php53parse
#define yylex           php53lex
#define yyerror         php53error
#define yylval          php53lval
#define yychar          php53char
#define yydebug         php53debug
#define yynerrs         php53nerrs


/* Copy the first part of user declarations.  */


	
/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to th	`e following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ParserObserverClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
 
#define YYSTYPE pelet::SemanticValueClass

// all PHP parsers will use same lex function
#define php53lex NextSemanticValue

// all PHP parsers will use the same error function
#define php53error GrammarError




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
#define YYLAST   7439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  417
/* YYNRULES -- Number of states.  */
#define YYNSTATES  847

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
       2,     2,     2,    48,   152,     2,   150,    47,    31,     2,
     145,   146,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   147,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   153,    30,     2,   151,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   148,    29,   149,    50,     2,     2,     2,
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
      27,    76,     2,    77,    78,    79,    80,    81,    62,    82,
      83,    20,    84,    85,    86,    87,    59,    88,    89,    90,
      21,    91,    92,    93,    94,    95,    57,    96,    65,    64,
      97,    98,    99,   100,   101,   102,    66,   103,   104,     5,
     105,   106,   107,    70,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    60,     7,     6,   117,    49,     2,    58,
     118,    35,    38,    33,    34,    32,   119,    39,   120,   121,
     122,    11,     9,    10,   123,    23,    19,    22,   124,    63,
     125,   126,   127,    54,   128,   129,   130,    17,   131,    24,
      12,    69,    68,    67,     4,     3,   132,    41,    15,    40,
      14,   133,    72,   134,    56,   135,   136,   137,     2,     2,
     138,   139,    52,   140,   141,   142,   143,   144,    16,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    52,    53,
      58,    60,    62,    66,    69,    74,    80,    85,    88,    89,
      91,    93,    95,   100,   102,   105,   109,   117,   128,   134,
     142,   152,   158,   161,   165,   168,   172,   175,   179,   183,
     187,   191,   195,   197,   200,   206,   215,   224,   230,   232,
     233,   248,   252,   256,   258,   259,   261,   264,   265,   275,
     277,   281,   283,   285,   287,   288,   290,   291,   292,   304,
     305,   306,   316,   317,   318,   327,   329,   332,   335,   336,
     337,   341,   343,   344,   345,   349,   350,   351,   355,   357,
     361,   362,   365,   367,   370,   372,   377,   379,   384,   386,
     391,   395,   401,   405,   410,   415,   421,   422,   428,   433,
     435,   437,   439,   444,   445,   452,   453,   461,   462,   465,
     466,   470,   472,   473,   476,   480,   486,   491,   496,   502,
     510,   517,   518,   520,   522,   524,   525,   527,   529,   532,
     536,   540,   545,   549,   551,   553,   556,   561,   565,   571,
     573,   577,   580,   581,   585,   588,   589,   590,   601,   603,
     607,   609,   611,   612,   614,   616,   619,   621,   623,   625,
     627,   629,   631,   635,   641,   643,   647,   653,   658,   662,
     664,   665,   667,   671,   673,   680,   684,   689,   696,   700,
     703,   707,   711,   715,   719,   723,   727,   731,   735,   739,
     743,   747,   750,   753,   756,   759,   763,   767,   771,   775,
     779,   783,   787,   791,   795,   799,   803,   807,   811,   815,
     819,   823,   826,   829,   832,   835,   839,   843,   847,   851,
     855,   859,   863,   867,   871,   875,   881,   886,   888,   891,
     894,   897,   900,   903,   906,   909,   912,   915,   917,   922,
     926,   929,   939,   941,   942,   947,   951,   956,   958,   961,
     962,   968,   969,   977,   978,   985,   992,   999,  1006,  1013,
    1018,  1020,  1022,  1026,  1029,  1031,  1035,  1038,  1040,  1042,
    1047,  1049,  1052,  1053,  1056,  1057,  1060,  1064,  1065,  1067,
    1069,  1070,  1074,  1076,  1078,  1080,  1082,  1084,  1086,  1088,
    1090,  1092,  1094,  1098,  1101,  1103,  1105,  1109,  1112,  1115,
    1118,  1123,  1125,  1129,  1131,  1133,  1135,  1139,  1142,  1144,
    1148,  1152,  1153,  1156,  1157,  1159,  1165,  1169,  1173,  1175,
    1177,  1179,  1181,  1183,  1185,  1186,  1193,  1195,  1198,  1199,
    1203,  1207,  1208,  1210,  1213,  1217,  1221,  1223,  1225,  1227,
    1229,  1232,  1234,  1239,  1244,  1246,  1248,  1253,  1254,  1256,
    1258,  1260,  1265,  1270,  1272,  1274,  1278,  1280,  1283,  1287,
    1289,  1291,  1292,  1298,  1299,  1300,  1303,  1309,  1313,  1317,
    1319,  1326,  1331,  1336,  1339,  1342,  1345,  1347,  1350,  1352,
    1357,  1361,  1365,  1372,  1376,  1378,  1380,  1382,  1387,  1392,
    1395,  1398,  1403,  1406,  1409,  1411,  1415,  1419
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,   156,    -1,   156,   158,    -1,    -1,   134,
      -1,   157,   126,   134,    -1,   167,    -1,   176,    -1,   177,
      -1,   114,   145,   146,   147,    -1,   124,   157,   147,    -1,
      -1,   124,   157,   148,   159,   156,   149,    -1,    -1,   124,
     148,   160,   156,   149,    -1,   140,   161,   147,    -1,   164,
     147,    -1,    -1,   161,     8,   162,   163,    -1,   163,    -1,
     157,    -1,   157,    74,   134,    -1,   126,   157,    -1,   126,
     157,    74,   134,    -1,   164,     8,   134,    13,   250,    -1,
      84,   134,    13,   250,    -1,   165,   166,    -1,    -1,   167,
      -1,   176,    -1,   177,    -1,   114,   145,   146,   147,    -1,
     168,    -1,   134,    26,    -1,   148,   165,   149,    -1,   115,
     145,   256,   146,   167,   206,   208,    -1,   115,   145,   256,
     146,    26,   165,   207,   209,    66,   147,    -1,   143,   145,
     256,   146,   205,    -1,    92,   167,   143,   145,   256,   146,
     147,    -1,   108,   145,   230,   147,   230,   147,   230,   146,
     198,    -1,   136,   145,   256,   146,   202,    -1,    76,   147,
      -1,    76,   256,   147,    -1,    86,   147,    -1,    86,   256,
     147,    -1,   132,   147,    -1,   132,   232,   147,    -1,   132,
     260,   147,    -1,   112,   215,   147,    -1,    72,   217,   147,
      -1,    96,   229,   147,    -1,   117,    -1,   256,   147,    -1,
     139,   145,   174,   146,   147,    -1,   109,   145,   260,    74,
     197,   196,   146,   199,    -1,   109,   145,   232,    74,   260,
     196,   146,   199,    -1,    88,   145,   201,   146,   200,    -1,
     147,    -1,    -1,   138,   148,   165,   149,    78,   145,   241,
     142,   146,   169,   148,   165,   149,   170,    -1,   137,   256,
     147,    -1,   113,   134,   147,    -1,   171,    -1,    -1,   172,
      -1,   171,   172,    -1,    -1,    78,   145,   241,   142,   146,
     173,   148,   165,   149,    -1,   175,    -1,   174,     8,   175,
      -1,   260,    -1,   179,    -1,   182,    -1,    -1,    31,    -1,
      -1,    -1,   233,   178,   134,   180,   145,   210,   146,   181,
     148,   165,   149,    -1,    -1,    -1,   187,   134,   183,   188,
     193,   184,   148,   218,   149,    -1,    -1,    -1,   190,   134,
     185,   191,   186,   148,   218,   149,    -1,    80,    -1,    71,
      80,    -1,    70,    80,    -1,    -1,    -1,   106,   189,   241,
      -1,   118,    -1,    -1,    -1,   106,   192,   195,    -1,    -1,
      -1,   116,   194,   195,    -1,   241,    -1,   195,     8,   241,
      -1,    -1,    95,   197,    -1,   260,    -1,    31,   260,    -1,
     167,    -1,    26,   165,   100,   147,    -1,   167,    -1,    26,
     165,   101,   147,    -1,   167,    -1,    26,   165,    99,   147,
      -1,   134,    13,   250,    -1,   201,     8,   134,    13,   250,
      -1,   148,   203,   149,    -1,   148,   147,   203,   149,    -1,
      26,   203,   103,   147,    -1,    26,   147,   203,   103,   147,
      -1,    -1,   203,    77,   256,   204,   165,    -1,   203,    89,
     204,   165,    -1,    26,    -1,   147,    -1,   167,    -1,    26,
     165,   104,   147,    -1,    -1,   206,    64,   145,   256,   146,
     167,    -1,    -1,   207,    64,   145,   256,   146,    26,   165,
      -1,    -1,    65,   167,    -1,    -1,    65,    26,   165,    -1,
     211,    -1,    -1,   212,   142,    -1,   212,    31,   142,    -1,
     212,    31,   142,    13,   250,    -1,   212,   142,    13,   250,
      -1,   211,     8,   212,   142,    -1,   211,     8,   212,    31,
     142,    -1,   211,     8,   212,    31,   142,    13,   250,    -1,
     211,     8,   212,   142,    13,   250,    -1,    -1,   241,    -1,
      73,    -1,   214,    -1,    -1,   232,    -1,   260,    -1,    31,
     258,    -1,   214,     8,   232,    -1,   214,     8,   260,    -1,
     214,     8,    31,   258,    -1,   215,     8,   216,    -1,   216,
      -1,   142,    -1,   150,   257,    -1,   150,   148,   256,   149,
      -1,   217,     8,   142,    -1,   217,     8,   142,    13,   250,
      -1,   142,    -1,   142,    13,   250,    -1,   218,   219,    -1,
      -1,   223,   227,   147,    -1,   228,   147,    -1,    -1,    -1,
     224,   233,   178,   134,   220,   145,   210,   146,   221,   222,
      -1,   147,    -1,   148,   165,   149,    -1,   225,    -1,   141,
      -1,    -1,   225,    -1,   226,    -1,   225,   226,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   227,     8,   142,    -1,   227,     8,   142,    13,   250,
      -1,   142,    -1,   142,    13,   250,    -1,   228,     8,   134,
      13,   250,    -1,    84,   134,    13,   250,    -1,   229,     8,
     256,    -1,   256,    -1,    -1,   231,    -1,   231,     8,   256,
      -1,   256,    -1,   121,   145,   277,   146,    13,   256,    -1,
     260,    13,   256,    -1,   260,    13,    31,   260,    -1,   260,
      13,    31,    63,   242,   248,    -1,    63,   242,   248,    -1,
      62,   256,    -1,   260,    24,   256,    -1,   260,    23,   256,
      -1,   260,    22,   256,    -1,   260,    21,   256,    -1,   260,
      20,   256,    -1,   260,    19,   256,    -1,   260,    18,   256,
      -1,   260,    17,   256,    -1,   260,    16,   256,    -1,   260,
      15,   256,    -1,   260,    14,   256,    -1,   259,    60,    -1,
      60,   259,    -1,   259,    59,    -1,    59,   259,    -1,   256,
      27,   256,    -1,   256,    28,   256,    -1,   256,     9,   256,
      -1,   256,    11,   256,    -1,   256,    10,   256,    -1,   256,
      29,   256,    -1,   256,    31,   256,    -1,   256,    30,   256,
      -1,   256,    44,   256,    -1,   256,    42,   256,    -1,   256,
      43,   256,    -1,   256,    45,   256,    -1,   256,    46,   256,
      -1,   256,    47,   256,    -1,   256,    41,   256,    -1,   256,
      40,   256,    -1,    42,   256,    -1,    43,   256,    -1,    48,
     256,    -1,    50,   256,    -1,   256,    33,   256,    -1,   256,
      32,   256,    -1,   256,    35,   256,    -1,   256,    34,   256,
      -1,   256,    36,   256,    -1,   256,    39,   256,    -1,   256,
      37,   256,    -1,   256,    38,   256,    -1,   256,    49,   242,
      -1,   145,   256,   146,    -1,   256,    25,   256,    26,   256,
      -1,   256,    25,    26,   256,    -1,   285,    -1,    58,   256,
      -1,    57,   256,    -1,    56,   256,    -1,    55,   256,    -1,
      54,   256,    -1,    53,   256,    -1,    52,   256,    -1,   105,
     246,    -1,    51,   256,    -1,   252,    -1,    73,   145,   280,
     146,    -1,   151,   247,   151,    -1,    12,   256,    -1,   233,
     178,   145,   210,   146,   234,   148,   165,   149,    -1,   111,
      -1,    -1,   140,   145,   235,   146,    -1,   235,     8,   142,
      -1,   235,     8,    31,   142,    -1,   142,    -1,    31,   142,
      -1,    -1,   157,   145,   237,   213,   146,    -1,    -1,   124,
     126,   157,   145,   238,   213,   146,    -1,    -1,   126,   157,
     145,   239,   213,   146,    -1,   240,   131,   134,   145,   213,
     146,    -1,   240,   131,   265,   145,   213,   146,    -1,   267,
     131,   134,   145,   213,   146,    -1,   267,   131,   265,   145,
     213,   146,    -1,   265,   145,   213,   146,    -1,    72,    -1,
     157,    -1,   124,   126,   157,    -1,   126,   157,    -1,   157,
      -1,   124,   126,   157,    -1,   126,   157,    -1,   240,    -1,
     243,    -1,   269,   128,   273,   244,    -1,   269,    -1,   244,
     245,    -1,    -1,   128,   273,    -1,    -1,   145,   146,    -1,
     145,   256,   146,    -1,    -1,    98,    -1,   282,    -1,    -1,
     145,   213,   146,    -1,   122,    -1,    91,    -1,    85,    -1,
     120,    -1,   107,    -1,    90,    -1,    81,    -1,   123,    -1,
     110,    -1,   125,    -1,   133,    98,   102,    -1,   133,   102,
      -1,   249,    -1,   157,    -1,   124,   126,   157,    -1,   126,
     157,    -1,    42,   250,    -1,    43,   250,    -1,    73,   145,
     253,   146,    -1,   251,    -1,   240,   131,   134,    -1,   135,
      -1,   287,    -1,   157,    -1,   124,   126,   157,    -1,   126,
     157,    -1,   249,    -1,   152,   282,   152,    -1,   133,   282,
     102,    -1,    -1,   255,   254,    -1,    -1,     8,    -1,   255,
       8,   250,    95,   250,    -1,   255,     8,   250,    -1,   250,
      95,   250,    -1,   250,    -1,   257,    -1,   232,    -1,   260,
      -1,   260,    -1,   260,    -1,    -1,   268,   128,   273,   264,
     261,   262,    -1,   268,    -1,   262,   263,    -1,    -1,   128,
     273,   264,    -1,   145,   213,   146,    -1,    -1,   270,    -1,
     276,   270,    -1,   240,   131,   265,    -1,   267,   131,   265,
      -1,   270,    -1,   269,    -1,   236,    -1,   270,    -1,   276,
     270,    -1,   266,    -1,   270,    61,   272,   153,    -1,   270,
     148,   256,   149,    -1,   271,    -1,   142,    -1,   150,   148,
     256,   149,    -1,    -1,   256,    -1,   274,    -1,   265,    -1,
     274,    61,   272,   153,    -1,   274,   148,   256,   149,    -1,
     275,    -1,   134,    -1,   148,   256,   149,    -1,   150,    -1,
     276,   150,    -1,   277,     8,   278,    -1,   278,    -1,   260,
      -1,    -1,   121,   145,   279,   277,   146,    -1,    -1,    -1,
     281,   254,    -1,   281,     8,   256,    95,   256,    -1,   281,
       8,   256,    -1,   256,    95,   256,    -1,   256,    -1,   281,
       8,   256,    95,    31,   258,    -1,   281,     8,    31,   258,
      -1,   256,    95,    31,   258,    -1,    31,   258,    -1,   282,
     283,    -1,   282,    98,    -1,   283,    -1,    98,   283,    -1,
     142,    -1,   142,    61,   284,   153,    -1,   142,   128,   134,
      -1,    94,   256,   149,    -1,    94,   135,    61,   256,   153,
     149,    -1,    87,   260,   149,    -1,   134,    -1,   127,    -1,
     142,    -1,   119,   145,   286,   146,    -1,    97,   145,   260,
     146,    -1,     7,   256,    -1,     6,   256,    -1,     5,   145,
     256,   146,    -1,     4,   256,    -1,     3,   256,    -1,   260,
      -1,   286,     8,   260,    -1,   240,   131,   134,    -1,   267,
     131,   134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   240,   241,   245,   246,   250,   251,   252,
     253,   254,   255,   255,   257,   257,   259,   260,   264,   264,
     266,   270,   271,   272,   273,   277,   278,   282,   283,   287,
     288,   289,   290,   294,   295,   299,   300,   301,   302,   303,
     304,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   330,   333,   334,   336,
     335,   339,   340,   344,   345,   349,   350,   354,   354,   359,
     360,   364,   368,   372,   376,   377,   381,   382,   381,   387,
     388,   387,   390,   391,   390,   396,   397,   398,   401,   403,
     403,   408,   411,   413,   413,   417,   419,   419,   424,   425,
     428,   430,   434,   435,   439,   440,   444,   445,   449,   450,
     454,   455,   459,   460,   461,   462,   465,   467,   468,   472,
     473,   477,   478,   481,   483,   486,   488,   491,   493,   496,
     498,   502,   503,   508,   509,   510,   511,   512,   513,   514,
     515,   520,   521,   522,   526,   527,   531,   532,   533,   534,
     535,   536,   540,   541,   545,   546,   547,   551,   552,   553,
     554,   558,   559,   563,   564,   565,   566,   565,   571,   572,
     576,   577,   580,   582,   586,   587,   591,   592,   593,   594,
     595,   596,   600,   601,   602,   603,   607,   609,   613,   614,
     617,   619,   623,   624,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   682,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   704,   707,   709,   713,   714,   715,   716,   720,
     720,   723,   722,   725,   725,   727,   729,   731,   733,   735,
     740,   741,   742,   743,   747,   748,   749,   753,   754,   758,
     760,   764,   765,   769,   772,   774,   775,   778,   780,   781,
     784,   786,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   805,   806,   807,   808,   809,   810,
     811,   812,   816,   820,   821,   822,   823,   824,   825,   826,
     827,   830,   832,   835,   837,   841,   842,   843,   844,   848,
     849,   853,   857,   861,   867,   865,   869,   873,   874,   878,
     883,   884,   888,   889,   893,   894,   898,   902,   903,   907,
     908,   909,   913,   914,   915,   919,   920,   923,   925,   929,
     930,   934,   935,   936,   940,   941,   945,   946,   950,   951,
     955,   956,   956,   957,   960,   962,   966,   967,   968,   969,
     970,   971,   972,   973,   977,   978,   979,   980,   984,   985,
     986,   987,   988,   989,   993,   994,   995,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1010,  1011,  1015,  1016
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
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
  "T_BAD_CHARACTER", "T_BREAK", "T_CASE", "T_CATCH", "T_CHARACTER",
  "T_CLASS", "T_CLASS_C", "T_CLOSE_TAG", "T_COMMENT", "T_CONST",
  "T_CONSTANT_ENCAPSED_STRING", "T_CONTINUE", "T_CURLY_OPEN", "T_DECLARE",
  "T_DEFAULT", "T_DIR", "T_DNUMBER", "T_DO", "T_DOC_COMMENT",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_DOUBLE_ARROW", "T_ECHO", "T_EMPTY",
  "T_ENCAPSED_AND_WHITESPACE", "T_ENDDECLARE", "T_ENDFOR", "T_ENDFOREACH",
  "T_END_HEREDOC", "T_ENDSWITCH", "T_ENDWHILE", "T_EXIT", "T_EXTENDS",
  "T_FILE", "T_FOR", "T_FOREACH", "T_FUNC_C", "T_FUNCTION", "T_GLOBAL",
  "T_GOTO", "T_HALT_COMPILER", "T_IF", "T_IMPLEMENTS", "T_INLINE_HTML",
  "T_INTERFACE", "T_ISSET", "T_LINE", "T_LIST", "T_LNUMBER", "T_METHOD_C",
  "T_NAMESPACE", "T_NS_C", "T_NS_SEPARATOR", "T_NUM_STRING",
  "T_OBJECT_OPERATOR", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO",
  "T_PAAMAYIM_NEKUDOTAYIM", "T_RETURN", "T_START_HEREDOC", "T_STRING",
  "T_STRING_VARNAME", "T_SWITCH", "T_THROW", "T_TRY", "T_UNSET", "T_USE",
  "T_VAR", "T_VARIABLE", "T_WHILE", "T_WHITESPACE", "'('", "')'", "';'",
  "'{'", "'}'", "'$'", "'`'", "'\"'", "']'", "$accept", "start",
  "top_statement_list", "namespace_name", "top_statement", "$@1", "$@2",
  "use_declarations", "$@3", "use_declaration", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement",
  "unticked_statement", "$@4", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@5",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@6", "$@7",
  "unticked_class_declaration_statement", "$@8", "$@9", "$@10", "$@11",
  "class_entry_type", "extends_from", "$@12", "interface_entry",
  "interface_extends_list", "$@13", "implements_list", "$@14",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@15", "$@16", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@17", "$@18", "$@19", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@20",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@21", "array_pair_list",
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
     553,   502,   612,   504,   506,   507,   511,   513,   514,   515,
     516,   517,   519,   520,   522,   523,   524,   525,   527,   528,
     529,   531,   532,   533,   534,   535,   537,   540,   541,   542,
     543,   544,   545,   547,   548,   550,   551,   552,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   566,   570,   576,
     578,   579,   580,   584,   588,   590,   591,   592,   594,   595,
     596,   598,   606,   611,   613,   615,   616,   617,   620,   621,
     623,   624,   625,   626,   627,    40,    41,    59,   123,   125,
      36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   158,   159,   158,   160,   158,   158,   158,   162,   161,
     161,   163,   163,   163,   163,   164,   164,   165,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   169,
     168,   168,   168,   170,   170,   171,   171,   173,   172,   174,
     174,   175,   176,   177,   178,   178,   180,   181,   179,   183,
     184,   182,   185,   186,   182,   187,   187,   187,   188,   189,
     188,   190,   191,   192,   191,   193,   194,   193,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   202,   202,   203,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   221,   219,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   226,   226,   226,
     226,   226,   227,   227,   227,   227,   228,   228,   229,   229,
     230,   230,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   233,   234,   234,   235,   235,   235,   235,   237,
     236,   238,   236,   239,   236,   236,   236,   236,   236,   236,
     240,   240,   240,   240,   241,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   246,   246,   247,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   250,   250,   250,   250,   250,   250,
     250,   250,   251,   252,   252,   252,   252,   252,   252,   252,
     252,   253,   253,   254,   254,   255,   255,   255,   255,   256,
     256,   257,   258,   259,   261,   260,   260,   262,   262,   263,
     264,   264,   265,   265,   266,   266,   267,   268,   268,   269,
     269,   269,   270,   270,   270,   271,   271,   272,   272,   273,
     273,   274,   274,   274,   275,   275,   276,   276,   277,   277,
     278,   279,   278,   278,   280,   280,   281,   281,   281,   281,
     281,   281,   281,   281,   282,   282,   282,   282,   283,   283,
     283,   283,   283,   283,   284,   284,   284,   285,   285,   285,
     285,   285,   285,   285,   286,   286,   287,   287
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     0,     4,
       1,     1,     3,     2,     4,     5,     4,     2,     0,     1,
       1,     1,     4,     1,     2,     3,     7,    10,     5,     7,
       9,     5,     2,     3,     2,     3,     2,     3,     3,     3,
       3,     3,     1,     2,     5,     8,     8,     5,     1,     0,
      14,     3,     3,     1,     0,     1,     2,     0,     9,     1,
       3,     1,     1,     1,     0,     1,     0,     0,    11,     0,
       0,     9,     0,     0,     8,     1,     2,     2,     0,     0,
       3,     1,     0,     0,     3,     0,     0,     3,     1,     3,
       0,     2,     1,     2,     1,     4,     1,     4,     1,     4,
       3,     5,     3,     4,     4,     5,     0,     5,     4,     1,
       1,     1,     4,     0,     6,     0,     7,     0,     2,     0,
       3,     1,     0,     2,     3,     5,     4,     4,     5,     7,
       6,     0,     1,     1,     1,     0,     1,     1,     2,     3,
       3,     4,     3,     1,     1,     2,     4,     3,     5,     1,
       3,     2,     0,     3,     2,     0,     0,    10,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     3,     1,     6,     3,     4,     6,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     4,     3,
       2,     9,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     0,     7,     0,     6,     6,     6,     6,     6,     4,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     4,
       1,     2,     0,     2,     0,     2,     3,     0,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     2,     2,     2,
       4,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     6,     1,     2,     0,     3,
       3,     0,     1,     2,     3,     3,     1,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     0,     1,     1,
       1,     4,     4,     1,     1,     3,     1,     2,     3,     1,
       1,     0,     5,     0,     0,     2,     5,     3,     3,     1,
       6,     4,     4,     2,     2,     2,     1,     2,     1,     4,
       3,     3,     6,     3,     1,     1,     1,     4,     4,     2,
       2,     4,     2,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,    85,   308,     0,   304,     0,     0,   307,   303,     0,
       0,     0,   294,   306,     0,     0,   310,   262,     0,     0,
       0,     0,    52,    91,     0,   305,     0,   302,   309,     0,
     311,     0,     0,     0,     5,   323,     0,     0,     0,     0,
       0,   365,     0,     0,    58,    28,   376,   297,     0,   325,
       3,     0,     7,    33,     8,     9,    72,    73,     0,     0,
     340,    74,   358,     0,   328,   257,     0,   339,     0,   341,
       0,   361,     0,   346,   357,   359,   364,     0,   247,   324,
     280,     0,     5,    74,   413,   412,     0,   410,   409,   260,
     231,   232,   233,   234,   256,   254,   253,   252,   251,   250,
     249,   248,     0,     0,   281,     0,   214,   343,     0,   212,
     199,     0,     0,   281,   287,   300,   288,     0,   290,   359,
       0,    87,    86,   159,     0,   384,    42,     0,     0,    44,
       0,     0,     0,     0,   189,     0,     0,   255,   190,     0,
     154,     0,     0,   153,     0,     0,     0,     0,   383,     0,
      14,     0,   327,    46,   340,     0,   341,     0,     0,     0,
     313,   398,     0,   396,    34,     0,     0,    28,     0,     0,
      21,     0,    20,     0,     0,     0,     0,   298,     0,   299,
       0,     0,     0,   269,     0,    17,    79,    82,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,   213,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,   367,     0,   377,   360,     0,
       0,     0,   283,     0,     0,     0,   283,     0,   145,   198,
       0,     0,   360,     0,     0,    50,     0,   389,     0,   333,
      43,     0,    45,     0,     0,     0,     0,    51,     0,   295,
       0,     0,   191,   193,   340,   341,     0,   155,   341,     0,
      49,    62,     0,     0,   414,     0,     0,   380,     0,   379,
     326,     4,    11,    12,   273,    47,    48,     0,   323,     0,
     312,   397,     0,     0,   395,   330,   394,     0,    61,     0,
       0,    69,    71,    23,     0,    18,    16,     0,   244,     0,
      35,    27,    29,    30,    31,     0,   259,   329,     6,   145,
       0,    88,    92,    76,   141,   416,   354,   352,     0,   217,
     219,   218,     0,     0,   215,   216,   220,   222,   221,   236,
     235,   238,   237,   239,   241,   242,   240,   230,   229,   224,
     225,   223,   226,   227,   228,   243,     0,   195,   210,   209,
     208,   207,   206,   205,   204,   203,   202,   201,   200,     0,
       0,   144,   340,   341,   417,   355,   374,     0,   370,   351,
     369,   373,   368,     0,     0,   411,   282,     0,     0,   282,
     354,     0,   355,   292,     0,     0,     0,     0,     0,     0,
     315,     0,   314,   160,   321,   157,   393,   342,     0,   258,
     334,   385,    26,     0,     0,     0,     0,   188,   408,   296,
     190,     0,     0,     0,     0,   152,    10,     0,     0,   407,
     381,   383,     0,   271,     0,     4,   145,   403,     0,   401,
     405,   404,   406,     0,   400,     0,     0,     0,     0,     0,
      22,     0,     0,     0,   366,     0,     0,    89,    95,    93,
      83,     0,   143,     0,     0,   284,     0,   131,     0,   142,
     145,   145,   353,   246,     0,     0,   196,   148,   279,     0,
     145,   145,     0,   145,   344,   367,     0,   362,   363,   301,
     289,   318,   319,   331,     0,   317,     0,     0,     0,     0,
     388,     0,   387,   110,     0,    28,   108,    57,     0,     0,
     192,   100,     0,   100,   102,   156,    28,   123,   415,   383,
     378,     0,   145,    15,     0,     0,     0,   399,   116,   116,
      41,     0,    70,    54,    24,    19,    28,   121,    38,     0,
     270,    25,     0,    96,    80,     0,     0,   141,     0,   286,
     263,   141,     0,   133,     0,     0,   245,   300,     0,   340,
     341,     0,     0,   375,     0,   348,     0,     0,     0,   291,
     338,     0,   333,   316,   322,   158,   392,   391,     0,     0,
       0,     0,   190,     0,     0,   103,     0,   125,   127,     0,
     194,     0,    13,   274,     0,   116,     0,   116,     0,     0,
       0,    32,    90,     0,     0,    94,    98,   162,     0,   285,
       0,     0,     0,   134,     0,   275,   276,   197,   151,   277,
     278,   350,   345,   371,   372,   293,     0,   320,   334,   332,
       0,   386,   111,     0,    39,     0,   101,     0,     0,   129,
       0,     0,    36,   382,   272,   402,     0,     0,     0,     0,
       0,   112,     0,     0,    97,   162,     0,   172,    77,     0,
      28,     0,   137,     0,   136,     0,   347,   337,   336,   390,
     109,     0,    28,   106,    56,    55,     0,     0,     0,     0,
     128,     0,     0,   119,   120,    28,   114,   113,     0,   122,
     172,    99,   176,   177,   178,   181,   180,   179,     0,   171,
      84,   161,     0,     0,   170,   174,     0,     0,     0,   267,
       0,     0,   138,     0,   135,   351,     0,    28,   104,    40,
       0,     0,    28,     0,     0,   115,    28,   118,    59,    81,
       0,   184,     0,    74,   175,     0,   164,    28,   268,     0,
     264,   261,     0,   140,   349,   335,     0,     0,     0,   130,
      37,     0,   117,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   265,   139,     0,   107,     0,   124,    28,   187,
     185,   182,   165,     0,    78,   266,   105,    28,     0,     0,
       0,   186,   126,    64,   183,   141,     0,    60,    63,    65,
       0,     0,    66,   166,     0,     0,     0,   168,    28,   167,
      67,     0,     0,   169,    28,     0,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   475,   321,   201,   491,   202,
      81,   205,   351,   352,    83,   793,   827,   828,   829,   842,
     340,   341,   353,   354,   219,    86,   501,   747,    87,   361,
     644,   362,   586,    88,   498,   582,    89,   500,   585,   584,
     643,   645,   624,   553,   759,   714,   547,   294,   570,   636,
     725,   578,   628,   679,   682,   718,   506,   507,   508,   410,
     411,   172,   173,   154,   697,   741,   820,   835,   839,   742,
     743,   744,   745,   772,   746,   163,   301,   302,    90,   113,
     651,   750,    92,   359,   562,   476,    93,   509,   145,   146,
     530,   609,   167,   208,   279,    94,   443,   444,    95,   611,
     451,   612,    96,    97,   446,    98,    99,   605,   662,   706,
     524,   100,   101,   102,   103,   104,   105,   106,   423,   419,
     420,   421,   107,   318,   319,   559,   288,   289,   192,   193,
     483,   108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -571
static const yytype_int16 yypact[] =
{
    -571,    51,  1830,  -571,  6194,  6194,   -27,  6194,  6194,  6194,
    6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,
    6194,  6194,   167,   167,  6194,   200,    45,    47,   -30,     3,
    4680,  -571,  -571,    17,  -571,  4804,    39,  -571,  -571,  4530,
    6194,    80,   101,  -571,   103,   114,  -571,  -571,    11,    38,
     118,   120,  -571,  -571,   142,  -571,   149,  -571,  -571,    93,
    -571,    84,  4928,   421,   277,  -571,   152,  6194,   168,   184,
      90,  -571,   187,  6194,  -571,  -571,   172,   344,   390,    56,
    -571,     7,  -571,  -571,  -571,  -571,  -571,  -571,   222,   244,
    -571,   363,  -571,   267,  -571,  -571,  6694,  -571,   263,  1209,
     259,  -571,   306,   285,  -571,   -12,  -571,    87,  -571,  -571,
    -571,   331,  -571,   363,  7350,  7350,  6194,  7350,  7350,  1666,
    -571,  -571,   394,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,   334,    84,   -79,   332,  -571,  -571,   333,  -571,
    -571,   339,    84,   359,   362,   325,  -571,   368,   375,     1,
      87,  -571,  -571,   449,     8,  5052,  -571,  6735,   492,  -571,
    6776,   372,   364,    10,  7350,   167,  5176,  -571,  6194,  6194,
    -571,   282,    13,  -571,   367,   370,  6194,   167,   347,    84,
    -571,   205,   281,  -571,   371,  7350,   191,   167,  6318,   162,
    -571,     0,   435,  -571,  -571,  6194,  6817,  -571,   167,    84,
     -41,    16,  -571,  6194,  6858,  1980,  6194,   153,   366,   440,
     153,   144,   396,  -571,   397,  -571,  -571,  -571,  -571,   -55,
      86,  6194,  6194,  6194,  5326,  6194,  6194,  6194,  6194,  6194,
    6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,
    6194,  6194,  6194,  6194,  6194,  6194,   200,  -571,  -571,  -571,
    5450,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,  6194,
    6194,  6194,  5574,   319,   431,  6194,  6194,   172,   -31,   379,
    6899,    84,   -63,   348,   411,    84,   359,   291,  5574,  -571,
     291,   431,   -24,   912,   400,  -571,   167,  7227,   402,   528,
    -571,   912,  -571,   530,    21,   405,  6194,  -571,   418,  -571,
    6940,   404,   559,  7350,   494,  1178,  6194,  -571,  -571,    11,
    -571,  -571,   424,  6981,  -571,    27,   438,  -571,    30,  -571,
     283,  -571,  -571,  -571,  -571,  -571,  -571,   427,   519,   330,
    -571,  -571,   276,   452,  -571,  -571,  -571,  7022,  -571,  2130,
      31,  -571,  -571,     9,   453,  -571,  -571,  7063,  -571,   450,
    -571,  -571,  -571,  -571,  -571,  6446,  -571,  -571,  -571,  5574,
     581,   490,   493,  -571,   271,   455,   457,   -24,    87,  7390,
    1968,  1666,  6194,  7309,  2115,  2264,  2413,  1514,  1380,  2561,
    2561,  2561,  2561,  1170,  1170,  1170,  1170,   602,   602,   544,
     544,   544,   394,   394,   394,  -571,   158,  1666,  1666,  1666,
    1666,  1666,  1666,  1666,  1666,  1666,  1666,  1666,  1666,   167,
     458,   595,    32,   175,   460,   462,  -571,  6194,  -571,   463,
      -8,  -571,  7350,   456,  6487,  -571,   -59,   455,   460,   359,
    -571,   465,  -571,  -571,   912,   912,   468,   488,    84,    24,
     159,   484,  -571,  -571,  -571,   603,  -571,  -571,  5698,  -571,
    5822,  -571,  -571,   912,   483,  3780,  6194,  7350,  -571,  -571,
    6194,  6194,   167,    -3,  6528,  -571,  -571,  3930,   167,  -571,
    -571,   347,   606,  -571,  1530,  -571,  5574,  -571,  6194,  -571,
    -571,  -571,  -571,   467,  -571,    -7,   543,   167,   475,   489,
    -571,    90,  4080,   478,  -571,   481,   912,  -571,   512,  -571,
    -571,   486,  -571,   503,    84,   359,   491,   624,    -5,  -571,
    5574,  5574,   -24,  1816,  6194,   200,  -571,  -571,  -571,  5946,
    5574,  5574,  6569,  5574,  -571,  6194,  6194,  -571,  -571,  -571,
     506,  -571,  -571,   912,    84,   289,   533,   502,   912,   167,
    7350,   167,  7268,  -571,   626,  -571,  -571,  -571,  7104,   495,
    7350,   545,   167,   545,  -571,  -571,  -571,  -571,  -571,   347,
    -571,  6194,  5574,  -571,  1680,   504,    64,  -571,   509,   511,
    -571,   514,  -571,  -571,  -571,  -571,  -571,  -571,  -571,   513,
    -571,  -571,   -46,  -571,  -571,   -46,   515,   271,    84,   359,
     522,   320,   523,   651,   520,   524,  1816,   325,   167,    33,
     844,   525,   526,  -571,   529,  -571,   516,  6610,   431,  -571,
     573,   531,   666,   308,  -571,  -571,  -571,  -571,  6070,   912,
    2280,   534,  6194,    -3,   532,  -571,   536,  3630,   317,    34,
    1666,   538,  -571,  -571,   527,  -571,   -19,  -571,   -33,   -46,
    2430,  -571,  -571,   -46,   539,   672,  -571,  -571,   540,   359,
     546,   541,    -4,   675,   912,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,   566,  -571,  -571,  -571,   912,  -571,   912,  -571,
     167,  7350,  -571,   548,  -571,   550,  -571,  4230,  4230,   336,
     554,  4530,  -571,  -571,  -571,  -571,   230,  6194,    -1,   553,
      73,  -571,   560,   556,   672,  -571,   -46,   243,  -571,    14,
    -571,   562,   692,   912,  -571,   431,  -571,  -571,   611,  -571,
    -571,  4380,  -571,  -571,  -571,  -571,   563,   681,   643,  6194,
    -571,   565,  6653,  -571,  -571,  -571,  -571,  -571,   564,  -571,
     318,  -571,  -571,  -571,  -571,  -571,  -571,  -571,   579,  -571,
    -571,  -571,   572,   604,   487,  -571,    23,   568,   575,  -571,
      35,  2580,   705,   912,  -571,   463,   912,  -571,  -571,  -571,
    2730,  6194,  -571,   576,  7145,  -571,  -571,  3630,  -571,  -571,
     706,   709,    28,   363,  -571,   590,  -571,  -571,  -571,    29,
    -571,  -571,   912,  -571,  -571,  -571,  2880,   578,  7186,  3630,
    -571,  4530,  3630,   580,   912,   912,   585,  -571,   598,   720,
    3030,   592,  -571,  -571,   588,  -571,   710,  -571,  -571,  -571,
    -571,   724,  -571,   912,  -571,  -571,  -571,  -571,  3180,   912,
     593,  -571,  3630,   661,  -571,   271,   597,  -571,   661,  -571,
     600,   -46,  -571,  -571,   605,   188,   607,  -571,  -571,  -571,
    -571,  3330,   596,  -571,  -571,  3480,  -571
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -571,  -571,  -307,   -13,  -571,  -571,  -571,  -571,  -571,   257,
    -571,  -165,  -571,    20,  -571,  -571,  -571,  -571,   -78,  -571,
    -571,   264,     2,     6,  -112,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,   109,   202,   133,  -571,    79,  -571,  -571,  -571,  -493,
      37,  -571,  -571,  -571,  -571,  -571,  -570,  -571,   169,  -244,
    -571,  -571,   454,  -571,    66,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,    18,  -571,  -571,  -571,  -453,  -571,   -10,    -2,
    -571,  -571,  -571,  -571,  -571,  -571,   258,  -562,  -240,  -571,
    -571,  -571,  -571,  -571,   170,   725,   708,  -571,  -571,  -571,
     154,  -571,   875,   599,  -396,   425,   780,  -571,  -571,  -571,
      19,  -209,  -571,   809,  -571,   -23,   -20,  -571,   239,  -278,
    -571,  -571,    25,   209,   300,  -571,  -571,  -571,   374,   136,
    -571,  -571,  -571,  -571
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -357
static const yytype_int16 yytable[] =
{
      91,   269,   148,   433,    84,   149,   395,   549,    85,   134,
     134,   366,   143,   517,   474,   214,   284,   648,   296,   568,
     642,   309,    82,   646,   345,   723,   592,   701,   552,   454,
     265,   775,   339,   344,   431,   468,   796,   265,   471,   487,
    -146,  -149,   471,   779,   687,   748,   181,   212,   182,   265,
     150,     3,   184,   525,   415,   418,   688,   200,   687,   162,
     801,   332,   265,   212,   366,   415,   213,   212,   430,   110,
     688,   432,   418,   221,   222,   223,   638,   692,   503,   363,
     504,   646,   324,   489,   689,   212,   473,   268,   112,   224,
     364,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   153,   246,  -353,   495,   691,   266,   116,  -356,
     272,   132,   536,   133,   266,   151,   190,   152,   333,   276,
     282,   112,  -356,  -352,   731,   212,   266,   593,   702,    71,
     526,   569,   686,   616,   690,   617,   724,    76,   155,   266,
     687,   158,   134,   170,   215,   285,   749,   297,   134,   304,
     310,   171,   688,   346,   134,   134,   320,   455,   564,   675,
     776,   802,   174,   469,   134,   797,   472,   488,  -146,  -149,
     683,   780,   212,  -147,   161,   134,   343,  -281,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     367,   213,   658,    91,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   199,   634,   112,   179,
     365,   515,   727,   148,   112,   165,   149,   112,    71,    71,
     110,   187,   565,   143,  -343,  -343,    76,   267,   188,   110,
     187,   180,   334,   367,   367,   368,   166,   188,   168,   187,
    -343,  -343,   412,   367,   367,   830,   188,   367,   426,   169,
     367,   367,   429,   175,   330,   176,   594,   595,   412,   834,
     440,   150,   110,   134,   709,   597,   601,   602,   440,   604,
     135,   135,   132,   144,   133,   212,   191,   177,   368,   368,
    -281,   132,   112,   133,   178,   191,   357,   195,   368,   368,
      71,   112,   368,   194,   191,   368,   368,   687,    76,    71,
     732,   733,   734,   735,   736,   737,   197,    76,   631,   688,
     206,  -147,   248,   249,   141,   331,   142,   738,   336,   198,
     665,   212,   203,   721,   112,   837,   838,    91,   326,   221,
     222,   223,    71,   331,   502,   336,   331,   336,   512,   412,
      76,   505,   322,   323,   110,   224,   216,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   217,   246,
     620,   680,   681,   134,   739,   732,   733,   734,   735,   736,
     737,   627,   740,   502,   218,   503,   134,   504,   220,   418,
     716,   717,   738,   480,   262,   112,   132,   212,   133,   212,
     481,   640,  -283,   264,  -282,   212,   112,  -132,   482,   110,
    -283,   440,   440,   135,    71,   535,   324,   755,   473,   135,
     306,   187,    76,    71,   212,   135,   135,   263,   188,  -282,
     440,    76,   207,   246,   503,   135,   504,   136,   139,   134,
     134,   209,   211,   414,   112,   134,   135,   179,   134,   739,
     271,    71,   283,   273,   274,   275,   412,   769,   316,    76,
     278,   132,    91,   133,   134,   546,    84,   187,   200,   479,
      85,   112,   427,   440,   188,   212,   191,   557,   210,    71,
      71,   589,   148,   277,    82,   149,   418,    76,    76,   280,
     412,   412,   143,   281,   144,   291,   293,   295,   187,   599,
     412,   412,   577,   412,   311,   188,   312,   356,   325,   189,
     440,   613,   187,   190,   364,   440,   134,   187,   134,   188,
     358,   360,   191,   334,   188,   751,   450,   335,   334,   134,
     150,   441,   445,   453,   135,   428,   134,   760,   449,   441,
     456,   460,   412,    71,   732,   733,   734,   735,   736,   737,
     767,    76,    91,   191,   458,   416,    84,   461,   462,   505,
      85,   466,   505,    71,   505,   649,   477,   191,   505,   417,
     478,    76,   191,   470,    82,   134,   484,   490,   367,   243,
     244,   245,   786,   246,   496,   493,   497,   789,  -173,   499,
     510,   792,   511,   519,   518,   520,   440,   521,   523,   527,
     134,   529,   800,   533,   534,   537,   538,   544,    91,   561,
     567,   571,   573,   574,   579,    91,   505,   580,   583,   588,
     505,   587,   591,   368,   608,   330,   614,   590,    91,   619,
     623,   440,   622,   818,   240,   241,   242,   243,   244,   245,
     633,   246,   822,   440,   135,   440,   635,   134,   637,   639,
     641,   798,   650,   647,   654,   653,   655,   135,   666,   663,
     656,   659,   660,   841,   668,   661,   685,   667,   677,   845,
     696,   674,   678,   505,   684,   367,   698,   695,   703,   700,
     440,   699,   441,   441,   705,   710,   711,   713,   713,   719,
     726,   720,   728,   729,   752,   753,   756,   762,   761,   763,
     768,   441,   765,   770,   771,    47,   777,   778,   782,   794,
     135,   135,   795,   790,   799,   805,   135,   811,   808,   135,
     368,   758,   812,   813,   815,   816,   817,   819,   825,   826,
     440,   773,   831,   440,   844,   135,   833,   836,   575,    91,
     832,   572,   694,   840,   441,   626,   676,   715,    91,   766,
     652,   730,   774,   465,   606,    91,   669,   657,   629,   440,
     307,   560,     0,   144,   784,     0,     0,     0,     0,     0,
       0,   440,   440,     0,    91,     0,     0,    91,     0,     0,
      91,   441,     0,     0,     0,     0,   441,   135,    91,   135,
     440,     0,   137,   137,     0,     0,   440,     0,     0,     0,
     135,   807,   505,     0,     0,     0,    91,   135,   505,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   138,     0,   147,     0,     0,     0,     0,    91,
       0,     0,   186,    91,     0,     0,     0,     0,     0,     0,
       0,     0,  -150,     0,     0,     0,   135,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
       0,     0,     0,     0,     0,     0,     0,   441,     0,   114,
     115,   135,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   140,
       0,     0,     0,  -343,  -343,   157,     0,     0,     0,     0,
     160,     0,   441,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,   441,     0,   441,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,   196,     0,     0,   298,     0,     0,   204,   305,
       0,   308,     0,     0,   434,   435,     0,   314,   317,     0,
       0,   441,     0,     0,     0,     0,     0,   327,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,   342,     0,
     138,     0,     0,     0,   110,   436,   138,   138,     0,     0,
    -150,   270,     0,    32,     0,     0,   138,    34,     0,   452,
       0,     0,    37,    38,     0,     0,     0,   138,   442,     0,
       0,   441,     0,     0,   441,     0,   442,     0,     0,    43,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
     287,     0,    55,     0,    57,    58,   437,    60,   438,     0,
     441,   300,   413,   303,   185,   439,   112,     0,     0,     0,
       0,   313,   441,   441,     0,   147,     0,     0,   413,     0,
       0,     0,     0,   329,     0,     0,   447,     0,     0,     0,
     337,   441,     0,     0,     0,     0,     0,   441,   347,     0,
       0,   355,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   369,   370,   371,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   185,     0,   413,
     422,   424,   531,   532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,     0,     0,     0,     0,   442,
     442,   543,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   457,     0,     0,     0,     0,   516,     0,   442,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,   447,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   581,   138,  -357,  -357,  -357,  -357,
     238,   239,   240,   241,   242,   243,   244,   245,   138,   246,
       0,   442,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   185,     0,     0,  -343,  -343,     0,
       0,   610,   551,   554,     0,     0,   615,   513,   558,     0,
       0,   317,   463,     0,     0,     0,   413,     0,   442,     0,
       0,     0,     0,   442,     0,     0,     0,   342,  -343,  -343,
       0,   138,   138,     0,     0,     0,     0,   138,     0,     0,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     413,   413,   522,     0,     0,     0,   138,     0,     0,   600,
     413,   413,     0,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,   447,     0,   540,   147,   542,     0,   672,     0,     0,
       0,   548,   625,     0,     0,   303,   550,     0,     0,   317,
       0,     0,   413,     0,   442,     0,     0,     0,   138,     0,
     138,   185,     0,   566,     0,     0,     0,     0,     0,     0,
       0,   138,   704,     0,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,   707,     0,   708,     0,   447,   442,
       0,     0,     0,     0,     0,   185,   185,     0,     0,   596,
       0,   442,     0,   442,   185,   185,   185,     0,   185,     0,
     422,   607,     0,   554,     0,     0,     0,   138,     0,     0,
       0,   754,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   442,   246,
       0,     0,   138,     0,     0,     0,   630,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   783,     0,     0,   785,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,   138,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
     803,     0,     0,   671,     0,     0,     0,   303,     0,     0,
       0,     0,   809,   810,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     442,   821,     0,     0,     0,     0,     0,   824,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,   442,     0,
       0,     0,     9,     0,   442,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   722,   246,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,   764,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,    33,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,   788,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,     0,    73,     0,    74,    75,   563,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,   224,     9,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,    33,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,     0,    73,     0,    74,    75,   632,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,    33,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,     0,    73,     0,    74,    75,   223,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   350,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   486,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,   673,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,   693,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,  -357,  -357,  -357,  -357,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   781,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,   787,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
     804,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   814,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   823,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   843,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,   846,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   349,    51,     0,    52,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   712,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,    71,     0,     0,    73,     0,   156,     0,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,    71,     0,     0,    73,
       0,   159,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   112,    65,     9,     0,     0,     0,     0,     0,
      71,     0,     0,    73,     0,   183,     0,     0,    76,    77,
      78,     0,     0,   286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   112,    65,     9,     0,
       0,     0,     0,     0,    71,     0,     0,    73,     0,     0,
       0,     0,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     0,     0,     0,     0,     0,     0,    63,
     112,    65,     0,     0,     0,     0,     0,     0,    71,     0,
       0,    73,   299,     0,     0,     0,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     112,    65,     9,     0,     0,     0,     0,     0,    71,     0,
       0,    73,     0,     0,     0,     0,    76,    77,    78,     0,
       0,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,    71,     0,     0,    73,     0,     0,     0,     0,
      76,    77,    78,     0,     0,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,    71,     0,     0,    73,
       0,     0,     0,     0,    76,    77,    78,     0,     0,   539,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   112,    65,     9,     0,     0,     0,     0,     0,
      71,     0,     0,    73,     0,     0,     0,     0,    76,    77,
      78,     0,     0,   541,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   112,    65,     9,     0,
       0,     0,     0,     0,    71,     0,     0,    73,     0,     0,
       0,     0,    76,    77,    78,     0,     0,   598,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     112,    65,     9,     0,     0,     0,     0,     0,    71,     0,
       0,    73,     0,     0,     0,     0,    76,    77,    78,     0,
       0,   670,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,    71,     0,     0,    73,     0,     0,     0,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,    71,     0,     0,    73,
       0,     0,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     0,     0,     0,     0,     0,
       0,    63,   112,   328,     0,   221,   222,   223,     0,     0,
      71,     0,     0,    73,     0,     0,     0,     0,    76,    77,
      78,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   494,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   528,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   555,   224,   723,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   292,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   425,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   459,     0,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   485,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   492,
       0,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     621,     0,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   791,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,     0,   224,   514,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,   618,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246
};

static const yytype_int16 yycheck[] =
{
       2,   113,    25,   281,     2,    25,   246,   460,     2,    22,
      23,   220,    25,   409,   321,     8,     8,   587,     8,    26,
     582,     8,     2,   585,     8,    26,    31,    31,    31,     8,
      61,     8,   197,    74,   278,     8,     8,    61,     8,     8,
       8,     8,     8,     8,    77,    31,    59,   126,    61,    61,
      25,     0,    62,    61,   263,   264,    89,    70,    77,    39,
      31,    61,    61,   126,   273,   274,   145,   126,   277,    72,
      89,   280,   281,     9,    10,    11,   569,   639,   124,   134,
     126,   643,   145,    74,   103,   126,   145,   107,   134,    25,
     145,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   142,    49,   145,   359,   149,   148,   145,   131,
     133,   124,    98,   126,   148,    80,   102,    80,   128,   142,
     150,   134,   131,   145,   696,   126,   148,   142,   142,   142,
     148,   148,   635,   539,   637,   541,   147,   150,   145,   148,
      77,   134,   165,   142,   147,   147,   142,   147,   171,   169,
     147,   150,    89,   147,   177,   178,   179,   146,   475,   622,
     147,   142,   134,   146,   187,   147,   146,   146,   146,   146,
     146,   146,   126,     8,   145,   198,   199,   131,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     220,   145,   598,   205,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   126,   153,   134,   126,
     134,    63,   149,   246,   134,   145,   246,   134,   142,   142,
      72,    87,   476,   246,    59,    60,   150,   150,    94,    72,
      87,   148,    98,   263,   264,   220,   145,    94,   145,    87,
      59,    60,   262,   273,   274,   825,    94,   277,   271,   145,
     280,   281,   275,   145,   102,   145,   510,   511,   278,   831,
     283,   246,    72,   286,   670,   515,   520,   521,   291,   523,
      22,    23,   124,    25,   126,   126,   142,   145,   263,   264,
     131,   124,   134,   126,   145,   142,   152,   145,   273,   274,
     142,   134,   277,    26,   142,   280,   281,    77,   150,   142,
      67,    68,    69,    70,    71,    72,   148,   150,   562,    89,
     148,   146,    59,    60,   124,   189,   126,    84,   192,   145,
     608,   126,   145,   103,   134,   147,   148,   339,   147,     9,
      10,    11,   142,   207,    73,   209,   210,   211,   368,   359,
     150,   364,   147,   148,    72,    25,   134,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   134,    49,
     545,    64,    65,   396,   141,    67,    68,    69,    70,    71,
      72,   556,   149,    73,    31,   124,   409,   126,   131,   608,
      64,    65,    84,   127,   145,   134,   124,   126,   126,   126,
     134,   576,   131,   128,   131,   126,   134,   146,   142,    72,
     131,   434,   435,   165,   142,   438,   145,   705,   145,   171,
     148,    87,   150,   142,   126,   177,   178,   131,    94,   131,
     453,   150,    98,    49,   124,   187,   126,    22,    23,   462,
     463,    77,    78,   134,   134,   468,   198,   126,   471,   141,
     126,   142,    13,   131,   131,   126,   476,   149,   121,   150,
     145,   124,   474,   126,   487,   455,   474,    87,   491,   149,
     474,   134,   134,   496,    94,   126,   142,   467,    98,   142,
     142,   504,   515,   131,   474,   515,   705,   150,   150,   131,
     510,   511,   515,   128,   246,    13,   134,   143,    87,   519,
     520,   521,   492,   523,   147,    94,   146,   151,   147,    98,
     533,   534,    87,   102,   145,   538,   539,    87,   541,    94,
     134,   134,   142,    98,    94,   700,     8,   102,    98,   552,
     515,   283,   142,    13,   286,   134,   559,   712,   146,   291,
     145,   147,   562,   142,    67,    68,    69,    70,    71,    72,
     725,   150,   564,   142,   146,   134,   564,     8,    74,   582,
     564,   147,   585,   142,   587,   588,   149,   142,   591,   148,
      61,   150,   142,   145,   564,   598,   134,   134,   608,    45,
      46,    47,   757,    49,    13,   145,   106,   762,   111,   106,
     145,   766,   145,     8,   146,   145,   619,   145,   145,   153,
     623,   146,   777,   145,   126,   131,    13,   134,   620,    13,
     153,    78,   147,   134,   146,   627,   639,   146,   116,   126,
     643,   145,     8,   608,   128,   102,   134,   146,   640,    13,
      95,   654,   147,   808,    42,    43,    44,    45,    46,    47,
     146,    49,   817,   666,   396,   668,   147,   670,   147,   145,
     147,   773,   140,   148,    13,   142,   146,   409,    95,   153,
     146,   146,   146,   838,     8,   146,   149,   146,   146,   844,
       8,   147,   146,   696,   146,   705,   146,   148,    13,   148,
     703,   145,   434,   435,   128,   147,   146,   677,   678,   145,
     147,   681,   142,   147,   142,    13,    95,    26,   145,    66,
     146,   453,   147,   134,   142,   111,   148,   142,    13,    13,
     462,   463,    13,   147,   134,   147,   468,   142,   148,   471,
     705,   711,   134,    13,   142,   147,    26,    13,   145,    78,
     753,   743,   145,   756,   148,   487,   146,   142,   491,   751,
     828,   487,   643,   146,   496,   553,   623,   678,   760,   722,
     591,   695,   744,   309,   525,   767,   612,   597,   559,   782,
     171,   471,    -1,   515,   755,    -1,    -1,    -1,    -1,    -1,
      -1,   794,   795,    -1,   786,    -1,    -1,   789,    -1,    -1,
     792,   533,    -1,    -1,    -1,    -1,   538,   539,   800,   541,
     813,    -1,    22,    23,    -1,    -1,   819,    -1,    -1,    -1,
     552,   791,   825,    -1,    -1,    -1,   818,   559,   831,    -1,
     822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,   841,
      -1,    -1,    62,   845,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,   598,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,     4,
       5,   623,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    59,    60,    30,    -1,    -1,    -1,    -1,
      35,    -1,   654,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   666,    -1,   668,    -1,   670,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,   165,    -1,    -1,    73,   169,
      -1,   171,    -1,    -1,    42,    43,    -1,   177,   178,    -1,
      -1,   703,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,   198,    -1,
     171,    -1,    -1,    -1,    72,    73,   177,   178,    -1,    -1,
     146,   116,    -1,    81,    -1,    -1,   187,    85,    -1,   291,
      -1,    -1,    90,    91,    -1,    -1,    -1,   198,   283,    -1,
      -1,   753,    -1,    -1,   756,    -1,   291,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,   120,    -1,   122,   123,   124,   125,   126,    -1,
     782,   166,   262,   168,   169,   133,   134,    -1,    -1,    -1,
      -1,   176,   794,   795,    -1,   246,    -1,    -1,   278,    -1,
      -1,    -1,    -1,   188,    -1,    -1,   286,    -1,    -1,    -1,
     195,   813,    -1,    -1,    -1,    -1,    -1,   819,   203,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,    -1,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,    -1,   359,
     265,   266,   434,   435,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,   434,
     435,   453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,   396,    -1,   453,    -1,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   409,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,   496,   396,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   409,    49,
      -1,   496,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   359,    -1,    -1,    59,    60,    -1,
      -1,   533,   462,   463,    -1,    -1,   538,   372,   468,    -1,
      -1,   471,    74,    -1,    -1,    -1,   476,    -1,   533,    -1,
      -1,    -1,    -1,   538,    -1,    -1,    -1,   487,    59,    60,
      -1,   462,   463,    -1,    -1,    -1,    -1,   468,    -1,    -1,
     471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     510,   511,   417,    -1,    -1,    -1,   487,    -1,    -1,   519,
     520,   521,    -1,   523,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   539,
      -1,   541,    -1,   448,   515,   450,    -1,   619,    -1,    -1,
      -1,   456,   552,    -1,    -1,   460,   461,    -1,    -1,   559,
      -1,    -1,   562,    -1,   619,    -1,    -1,    -1,   539,    -1,
     541,   476,    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   552,   654,    -1,    -1,    -1,    -1,    -1,   559,    -1,
      -1,    -1,    -1,    -1,   666,    -1,   668,    -1,   598,   654,
      -1,    -1,    -1,    -1,    -1,   510,   511,    -1,    -1,   514,
      -1,   666,    -1,   668,   519,   520,   521,    -1,   523,    -1,
     525,   526,    -1,   623,    -1,    -1,    -1,   598,    -1,    -1,
      -1,   703,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   703,    49,
      -1,    -1,   623,    -1,    -1,    -1,   561,   562,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     670,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   753,    -1,    -1,   756,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,   670,
      -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     782,    -1,    -1,   618,    -1,    -1,    -1,   622,    -1,    -1,
      -1,    -1,   794,   795,    -1,    -1,    -1,   782,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   794,
     795,   813,    -1,    -1,    -1,    -1,    -1,   819,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   813,    -1,
      -1,    -1,    12,    -1,   819,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   687,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,   719,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   761,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    25,    12,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    84,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,    -1,   145,    -1,   147,   148,    11,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
     100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,   117,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,   145,    -1,   147,   148,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,     7,    -1,   133,   134,   135,    12,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,    -1,   147,    -1,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,     7,    -1,   133,   134,   135,
      12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,   147,    -1,    -1,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,   107,    -1,    -1,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,     3,     4,     5,     6,     7,
      -1,   133,   134,   135,    12,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,    -1,   147,    -1,    -1,   150,   151,
     152,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,     3,
       4,     5,     6,     7,    -1,   133,   134,   135,    12,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,    -1,    -1,    -1,   150,   151,   152,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,     3,     4,     5,     6,     7,    -1,   133,
     134,   135,    12,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,     7,    -1,   133,   134,   135,    12,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,     7,    -1,   133,   134,   135,
      12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,   107,    -1,    -1,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,     3,     4,     5,     6,     7,
      -1,   133,   134,   135,    12,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,     3,
       4,     5,     6,     7,    -1,   133,   134,   135,    12,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,     3,     4,     5,     6,     7,    -1,   133,
     134,   135,    12,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,     7,    -1,   133,   134,   135,    12,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,     7,    -1,   133,   134,   135,
      12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,   107,    -1,    -1,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,     9,    10,    11,    -1,    -1,
     142,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   149,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   149,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   155,   156,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    80,    81,    84,    85,    86,    88,    90,    91,    92,
      96,    97,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   142,   143,   145,   147,   148,   150,   151,   152,   157,
     158,   164,   167,   168,   176,   177,   179,   182,   187,   190,
     232,   233,   236,   240,   249,   252,   256,   257,   259,   260,
     265,   266,   267,   268,   269,   270,   271,   276,   285,   287,
      72,   124,   134,   233,   256,   256,   145,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   124,   126,   157,   240,   259,   260,   267,   259,
     256,   124,   126,   157,   240,   242,   243,   267,   269,   270,
     276,    80,    80,   142,   217,   145,   147,   256,   134,   147,
     256,   145,   167,   229,   256,   145,   145,   246,   145,   145,
     142,   150,   215,   216,   134,   145,   145,   145,   145,   126,
     148,   157,   157,   147,   232,   256,   260,    87,    94,    98,
     102,   142,   282,   283,    26,   145,   256,   148,   145,   126,
     157,   161,   163,   145,   256,   165,   148,    98,   247,   282,
      98,   282,   126,   145,     8,   147,   134,   134,    31,   178,
     131,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   147,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   145,   131,   128,    61,   148,   150,   270,   178,
     256,   126,   157,   131,   131,   126,   157,   131,   145,   248,
     131,   128,   270,    13,     8,   147,    31,   256,   280,   281,
     147,    13,   147,   134,   201,   143,     8,   147,   260,   146,
     256,   230,   231,   256,   232,   260,   148,   257,   260,     8,
     147,   147,   146,   256,   260,   286,   121,   260,   277,   278,
     157,   160,   147,   148,   145,   147,   147,   260,   135,   256,
     102,   283,    61,   128,    98,   102,   283,   256,   147,   165,
     174,   175,   260,   157,    74,     8,   147,   256,   146,   114,
     149,   166,   167,   176,   177,   256,   151,   152,   134,   237,
     134,   183,   185,   134,   145,   134,   265,   270,   276,   256,
     256,   256,    26,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   242,    31,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,    31,
     213,   214,   232,   260,   134,   265,   134,   148,   265,   273,
     274,   275,   256,   272,   256,   146,   157,   134,   134,   157,
     265,   213,   265,   273,    42,    43,    73,   124,   126,   133,
     157,   240,   249,   250,   251,   142,   258,   260,    95,   146,
       8,   254,   250,    13,     8,   146,   145,   256,   146,   146,
     147,     8,    74,    74,   256,   216,   147,   146,     8,   146,
     145,     8,   146,   145,   156,   159,   239,   149,    61,   149,
     127,   134,   142,   284,   134,   146,   149,     8,   146,    74,
     134,   162,   146,   145,   149,   213,    13,   106,   188,   106,
     191,   180,    73,   124,   126,   157,   210,   211,   212,   241,
     145,   145,   270,   256,    26,    63,   260,   258,   146,     8,
     145,   145,   256,   145,   264,    61,   148,   153,   149,   146,
     244,   250,   250,   145,   126,   157,    98,   131,    13,    31,
     256,    31,   256,   250,   134,    26,   167,   200,   256,   230,
     256,   260,    31,   197,   260,   149,    26,   167,   260,   279,
     278,    13,   238,   149,   156,   213,   256,   153,    26,   148,
     202,    78,   175,   147,   134,   163,    26,   167,   205,   146,
     146,   250,   189,   116,   193,   192,   186,   145,   126,   157,
     146,     8,    31,   142,   213,   213,   256,   242,    31,   232,
     260,   213,   213,   149,   213,   261,   272,   256,   128,   245,
     250,   253,   255,   157,   134,   250,   258,   258,    95,    13,
     165,   146,   147,    95,   196,   260,   196,   165,   206,   277,
     256,   213,   149,   146,   153,   147,   203,   147,   203,   145,
     165,   147,   241,   194,   184,   195,   241,   148,   210,   157,
     140,   234,   212,   142,    13,   146,   146,   248,   258,   146,
     146,   146,   262,   153,   149,   273,    95,   146,     8,   254,
      31,   256,   250,    99,   147,   230,   197,   146,   146,   207,
      64,    65,   208,   146,   146,   149,   203,    77,    89,   103,
     203,   149,   241,   104,   195,   148,     8,   218,   146,   145,
     148,    31,   142,    13,   250,   128,   263,   250,   250,   258,
     147,   146,    26,   167,   199,   199,    64,    65,   209,   145,
     167,   103,   256,    26,   147,   204,   147,   149,   142,   147,
     218,   241,    67,    68,    69,    70,    71,    72,    84,   141,
     149,   219,   223,   224,   225,   226,   228,   181,    31,   142,
     235,   165,   142,    13,   250,   273,    95,    26,   167,   198,
     165,   145,    26,    66,   256,   147,   204,   165,   146,   149,
     134,   142,   227,   233,   226,     8,   147,   148,   142,     8,
     146,   149,    13,   250,   264,   250,   165,   101,   256,   165,
     147,   146,   165,   169,    13,    13,     8,   147,   178,   134,
     165,    31,   142,   250,   100,   147,   146,   167,   148,   250,
     250,   142,   134,    13,   149,   142,   147,    26,   165,    13,
     220,   250,   165,   149,   250,   145,    78,   170,   171,   172,
     210,   145,   172,   146,   241,   221,   142,   147,   148,   222,
     146,   165,   173,   149,   148,   165,   149
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

  case 59:

    { observers.ExceptionCatchFound((yyvsp[(8) - (9)])); ;}
    break;

  case 67:

    { observers.ExceptionCatchFound((yyvsp[(4) - (5)])); ;}
    break;

  case 74:

    { (yyval).Token = 0; ;}
    break;

  case 75:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 76:

    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 77:

    { observers.FunctionFound(analyzer.GetLineNumber()); ;}
    break;

  case 78:

    { observers.FunctionEnd((yyvsp[(11) - (11)])); ;}
    break;

  case 79:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 80:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 81:

    { observers.ClassEnd(analyzer.GetLineNumber(), (yyvsp[(7) - (9)])); ;}
    break;

  case 82:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 83:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 84:

    { observers.ClassEnd(analyzer.GetLineNumber(), (yyvsp[(6) - (8)])); ;}
    break;

  case 85:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, false); ;}
    break;

  case 86:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false, false); ;}
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

    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 143:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 146:

    { observers.ExpressionAsCallArgument(); ;}
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

  case 154:

    { observers.GlobalVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 157:

    { observers.StaticVariableFound((yyvsp[(3) - (3)])); ;}
    break;

  case 158:

    { observers.StaticVariableFound((yyvsp[(3) - (5)])); ;}
    break;

  case 159:

    { observers.StaticVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 160:

    { observers.StaticVariableFound((yyvsp[(1) - (3)])); ;}
    break;

  case 163:

    { observers.ClassMemberClear(); ;}
    break;

  case 164:

    { observers.ClassMemberClear(); ;}
    break;

  case 165:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 166:

    { observers.ClassMemberFound(false, analyzer.GetLineNumber()); ;}
    break;

  case 167:

    { observers.ClassMemberClear(); ;}
    break;

  case 168:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 169:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 171:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 176:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 177:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 178:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 179:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 180:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 181:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 182:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 183:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 184:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 185:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 186:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 187:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 194:

    {  ;}
    break;

  case 195:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 196:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 197:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 198:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 199:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 200:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 201:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 202:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 203:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 204:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 205:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 206:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 207:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 208:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 209:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 210:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 211:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 212:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 213:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 214:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 215:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 216:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 217:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 218:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 219:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 220:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 221:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 222:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 223:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 224:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 225:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 226:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 227:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 228:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 229:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 230:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 231:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 232:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 233:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 234:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { /* no need to push here as this is recursive */ ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 247:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 248:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 249:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 250:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 251:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (2)])); ;}
    break;

  case 252:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 253:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 258:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 259:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 261:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 269:

    { observers.FunctionCallStart(); ;}
    break;

  case 270:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 271:

    { observers.FunctionCallStart(); ;}
    break;

  case 272:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 273:

    { observers.QualifiedNameMakeAbsolute(); observers.FunctionCallStart(); ;}
    break;

  case 274:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 283:

    { observers.QualifiedNameMakeAbsolute(); ;}
    break;

  case 286:

    { observers.QualifiedNameMakeAbsolute(); ;}
    break;

  case 302:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 303:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 304:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 305:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 306:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 307:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 308:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 309:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 310:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 311:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 312:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 313:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 339:

    { observers.ExpressionFound(); ;}
    break;

  case 340:

    { observers.ExpressionFound(); ;}
    break;

  case 344:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 349:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 350:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 351:

    { (yyval).Token = 0; ;}
    break;

  case 354:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 358:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 365:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 380:

    { observers.ForeachVariableFound(); ;}
    break;

  case 381:

    {;}
    break;

  case 409:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 410:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 412:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 413:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 416:

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





