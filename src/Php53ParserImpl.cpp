
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
#define YYLAST   7381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  412
/* YYNRULES -- Number of states.  */
#define YYNSTATES  842

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
      21,    26,    30,    36,    41,    45,    48,    52,    54,    56,
      60,    63,    68,    74,    79,    82,    83,    85,    87,    89,
      94,    96,    99,   103,   111,   122,   128,   136,   146,   152,
     155,   159,   162,   166,   169,   173,   177,   181,   185,   189,
     191,   194,   200,   209,   218,   224,   226,   227,   242,   246,
     250,   252,   253,   255,   258,   259,   269,   271,   275,   277,
     279,   281,   282,   284,   285,   286,   298,   299,   300,   310,
     311,   312,   321,   323,   326,   329,   330,   331,   335,   337,
     338,   339,   343,   344,   345,   349,   351,   355,   356,   359,
     361,   364,   366,   371,   373,   378,   380,   385,   389,   395,
     399,   404,   409,   415,   416,   422,   427,   429,   431,   433,
     438,   439,   446,   447,   455,   456,   459,   460,   464,   466,
     467,   470,   474,   480,   485,   490,   496,   504,   511,   512,
     514,   516,   518,   519,   521,   523,   526,   530,   534,   539,
     543,   545,   547,   550,   555,   559,   565,   567,   571,   574,
     575,   579,   582,   583,   584,   595,   597,   601,   603,   605,
     606,   608,   610,   613,   615,   617,   619,   621,   623,   625,
     629,   635,   637,   641,   647,   652,   656,   658,   659,   661,
     665,   667,   674,   678,   683,   690,   694,   697,   701,   705,
     709,   713,   717,   721,   725,   729,   733,   737,   741,   744,
     747,   750,   753,   757,   761,   765,   769,   773,   777,   781,
     785,   789,   793,   797,   801,   805,   809,   813,   817,   820,
     823,   826,   829,   833,   837,   841,   845,   849,   853,   857,
     861,   865,   869,   875,   880,   882,   885,   888,   891,   894,
     897,   900,   903,   906,   909,   911,   916,   920,   923,   933,
     935,   936,   941,   945,   950,   952,   955,   956,   962,   969,
     975,   982,   989,   996,  1003,  1008,  1010,  1012,  1016,  1019,
    1021,  1025,  1028,  1030,  1032,  1037,  1039,  1042,  1043,  1046,
    1047,  1050,  1054,  1055,  1057,  1059,  1060,  1064,  1066,  1068,
    1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1088,  1091,
    1093,  1095,  1099,  1102,  1105,  1108,  1113,  1115,  1119,  1121,
    1123,  1125,  1129,  1132,  1134,  1138,  1142,  1143,  1146,  1147,
    1149,  1155,  1159,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1176,  1183,  1185,  1188,  1189,  1193,  1197,  1198,  1200,  1203,
    1207,  1211,  1213,  1215,  1217,  1219,  1222,  1224,  1229,  1234,
    1236,  1238,  1243,  1244,  1246,  1248,  1250,  1255,  1260,  1262,
    1264,  1268,  1270,  1273,  1277,  1279,  1281,  1282,  1288,  1289,
    1290,  1293,  1299,  1303,  1307,  1309,  1316,  1321,  1326,  1329,
    1332,  1335,  1337,  1340,  1342,  1347,  1351,  1355,  1362,  1366,
    1368,  1370,  1372,  1377,  1382,  1385,  1388,  1393,  1396,  1399,
    1401,  1405,  1409
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,   156,    -1,   156,   158,    -1,    -1,   134,
      -1,   157,   126,   134,    -1,   164,    -1,   173,    -1,   174,
      -1,   114,   145,   146,   147,    -1,   124,   157,   147,    -1,
     124,   157,   148,   156,   149,    -1,   124,   148,   156,   149,
      -1,   140,   159,   147,    -1,   161,   147,    -1,   159,     8,
     160,    -1,   160,    -1,   157,    -1,   157,    74,   134,    -1,
     126,   157,    -1,   126,   157,    74,   134,    -1,   161,     8,
     134,    13,   245,    -1,    84,   134,    13,   245,    -1,   162,
     163,    -1,    -1,   164,    -1,   173,    -1,   174,    -1,   114,
     145,   146,   147,    -1,   165,    -1,   134,    26,    -1,   148,
     162,   149,    -1,   115,   145,   251,   146,   164,   203,   205,
      -1,   115,   145,   251,   146,    26,   162,   204,   206,    66,
     147,    -1,   143,   145,   251,   146,   202,    -1,    92,   164,
     143,   145,   251,   146,   147,    -1,   108,   145,   227,   147,
     227,   147,   227,   146,   195,    -1,   136,   145,   251,   146,
     199,    -1,    76,   147,    -1,    76,   251,   147,    -1,    86,
     147,    -1,    86,   251,   147,    -1,   132,   147,    -1,   132,
     229,   147,    -1,   132,   255,   147,    -1,   112,   212,   147,
      -1,    72,   214,   147,    -1,    96,   226,   147,    -1,   117,
      -1,   251,   147,    -1,   139,   145,   171,   146,   147,    -1,
     109,   145,   255,    74,   194,   193,   146,   196,    -1,   109,
     145,   229,    74,   255,   193,   146,   196,    -1,    88,   145,
     198,   146,   197,    -1,   147,    -1,    -1,   138,   148,   162,
     149,    78,   145,   236,   142,   146,   166,   148,   162,   149,
     167,    -1,   137,   251,   147,    -1,   113,   134,   147,    -1,
     168,    -1,    -1,   169,    -1,   168,   169,    -1,    -1,    78,
     145,   236,   142,   146,   170,   148,   162,   149,    -1,   172,
      -1,   171,     8,   172,    -1,   255,    -1,   176,    -1,   179,
      -1,    -1,    31,    -1,    -1,    -1,   230,   175,   134,   177,
     145,   207,   146,   178,   148,   162,   149,    -1,    -1,    -1,
     184,   134,   180,   185,   190,   181,   148,   215,   149,    -1,
      -1,    -1,   187,   134,   182,   188,   183,   148,   215,   149,
      -1,    80,    -1,    71,    80,    -1,    70,    80,    -1,    -1,
      -1,   106,   186,   236,    -1,   118,    -1,    -1,    -1,   106,
     189,   192,    -1,    -1,    -1,   116,   191,   192,    -1,   236,
      -1,   192,     8,   236,    -1,    -1,    95,   194,    -1,   255,
      -1,    31,   255,    -1,   164,    -1,    26,   162,   100,   147,
      -1,   164,    -1,    26,   162,   101,   147,    -1,   164,    -1,
      26,   162,    99,   147,    -1,   134,    13,   245,    -1,   198,
       8,   134,    13,   245,    -1,   148,   200,   149,    -1,   148,
     147,   200,   149,    -1,    26,   200,   103,   147,    -1,    26,
     147,   200,   103,   147,    -1,    -1,   200,    77,   251,   201,
     162,    -1,   200,    89,   201,   162,    -1,    26,    -1,   147,
      -1,   164,    -1,    26,   162,   104,   147,    -1,    -1,   203,
      64,   145,   251,   146,   164,    -1,    -1,   204,    64,   145,
     251,   146,    26,   162,    -1,    -1,    65,   164,    -1,    -1,
      65,    26,   162,    -1,   208,    -1,    -1,   209,   142,    -1,
     209,    31,   142,    -1,   209,    31,   142,    13,   245,    -1,
     209,   142,    13,   245,    -1,   208,     8,   209,   142,    -1,
     208,     8,   209,    31,   142,    -1,   208,     8,   209,    31,
     142,    13,   245,    -1,   208,     8,   209,   142,    13,   245,
      -1,    -1,   236,    -1,    73,    -1,   211,    -1,    -1,   229,
      -1,   255,    -1,    31,   253,    -1,   211,     8,   229,    -1,
     211,     8,   255,    -1,   211,     8,    31,   253,    -1,   212,
       8,   213,    -1,   213,    -1,   142,    -1,   150,   252,    -1,
     150,   148,   251,   149,    -1,   214,     8,   142,    -1,   214,
       8,   142,    13,   245,    -1,   142,    -1,   142,    13,   245,
      -1,   215,   216,    -1,    -1,   220,   224,   147,    -1,   225,
     147,    -1,    -1,    -1,   221,   230,   175,   134,   217,   145,
     207,   146,   218,   219,    -1,   147,    -1,   148,   162,   149,
      -1,   222,    -1,   141,    -1,    -1,   222,    -1,   223,    -1,
     222,   223,    -1,    67,    -1,    68,    -1,    69,    -1,    72,
      -1,    71,    -1,    70,    -1,   224,     8,   142,    -1,   224,
       8,   142,    13,   245,    -1,   142,    -1,   142,    13,   245,
      -1,   225,     8,   134,    13,   245,    -1,    84,   134,    13,
     245,    -1,   226,     8,   251,    -1,   251,    -1,    -1,   228,
      -1,   228,     8,   251,    -1,   251,    -1,   121,   145,   272,
     146,    13,   251,    -1,   255,    13,   251,    -1,   255,    13,
      31,   255,    -1,   255,    13,    31,    63,   237,   243,    -1,
      63,   237,   243,    -1,    62,   251,    -1,   255,    24,   251,
      -1,   255,    23,   251,    -1,   255,    22,   251,    -1,   255,
      21,   251,    -1,   255,    20,   251,    -1,   255,    19,   251,
      -1,   255,    18,   251,    -1,   255,    17,   251,    -1,   255,
      16,   251,    -1,   255,    15,   251,    -1,   255,    14,   251,
      -1,   254,    60,    -1,    60,   254,    -1,   254,    59,    -1,
      59,   254,    -1,   251,    27,   251,    -1,   251,    28,   251,
      -1,   251,     9,   251,    -1,   251,    11,   251,    -1,   251,
      10,   251,    -1,   251,    29,   251,    -1,   251,    31,   251,
      -1,   251,    30,   251,    -1,   251,    44,   251,    -1,   251,
      42,   251,    -1,   251,    43,   251,    -1,   251,    45,   251,
      -1,   251,    46,   251,    -1,   251,    47,   251,    -1,   251,
      41,   251,    -1,   251,    40,   251,    -1,    42,   251,    -1,
      43,   251,    -1,    48,   251,    -1,    50,   251,    -1,   251,
      33,   251,    -1,   251,    32,   251,    -1,   251,    35,   251,
      -1,   251,    34,   251,    -1,   251,    36,   251,    -1,   251,
      39,   251,    -1,   251,    37,   251,    -1,   251,    38,   251,
      -1,   251,    49,   237,    -1,   145,   251,   146,    -1,   251,
      25,   251,    26,   251,    -1,   251,    25,    26,   251,    -1,
     280,    -1,    58,   251,    -1,    57,   251,    -1,    56,   251,
      -1,    55,   251,    -1,    54,   251,    -1,    53,   251,    -1,
      52,   251,    -1,   105,   241,    -1,    51,   251,    -1,   247,
      -1,    73,   145,   275,   146,    -1,   151,   242,   151,    -1,
      12,   251,    -1,   230,   175,   145,   207,   146,   231,   148,
     162,   149,    -1,   111,    -1,    -1,   140,   145,   232,   146,
      -1,   232,     8,   142,    -1,   232,     8,    31,   142,    -1,
     142,    -1,    31,   142,    -1,    -1,   157,   145,   234,   210,
     146,    -1,   124,   126,   157,   145,   210,   146,    -1,   126,
     157,   145,   210,   146,    -1,   235,   131,   134,   145,   210,
     146,    -1,   235,   131,   260,   145,   210,   146,    -1,   262,
     131,   134,   145,   210,   146,    -1,   262,   131,   260,   145,
     210,   146,    -1,   260,   145,   210,   146,    -1,    72,    -1,
     157,    -1,   124,   126,   157,    -1,   126,   157,    -1,   157,
      -1,   124,   126,   157,    -1,   126,   157,    -1,   235,    -1,
     238,    -1,   264,   128,   268,   239,    -1,   264,    -1,   239,
     240,    -1,    -1,   128,   268,    -1,    -1,   145,   146,    -1,
     145,   251,   146,    -1,    -1,    98,    -1,   277,    -1,    -1,
     145,   210,   146,    -1,   122,    -1,    91,    -1,    85,    -1,
     120,    -1,   107,    -1,    90,    -1,    81,    -1,   123,    -1,
     110,    -1,   125,    -1,   133,    98,   102,    -1,   133,   102,
      -1,   244,    -1,   157,    -1,   124,   126,   157,    -1,   126,
     157,    -1,    42,   245,    -1,    43,   245,    -1,    73,   145,
     248,   146,    -1,   246,    -1,   235,   131,   134,    -1,   135,
      -1,   282,    -1,   157,    -1,   124,   126,   157,    -1,   126,
     157,    -1,   244,    -1,   152,   277,   152,    -1,   133,   277,
     102,    -1,    -1,   250,   249,    -1,    -1,     8,    -1,   250,
       8,   245,    95,   245,    -1,   250,     8,   245,    -1,   245,
      95,   245,    -1,   245,    -1,   252,    -1,   229,    -1,   255,
      -1,   255,    -1,   255,    -1,    -1,   263,   128,   268,   259,
     256,   257,    -1,   263,    -1,   257,   258,    -1,    -1,   128,
     268,   259,    -1,   145,   210,   146,    -1,    -1,   265,    -1,
     271,   265,    -1,   235,   131,   260,    -1,   262,   131,   260,
      -1,   265,    -1,   264,    -1,   233,    -1,   265,    -1,   271,
     265,    -1,   261,    -1,   265,    61,   267,   153,    -1,   265,
     148,   251,   149,    -1,   266,    -1,   142,    -1,   150,   148,
     251,   149,    -1,    -1,   251,    -1,   269,    -1,   260,    -1,
     269,    61,   267,   153,    -1,   269,   148,   251,   149,    -1,
     270,    -1,   134,    -1,   148,   251,   149,    -1,   150,    -1,
     271,   150,    -1,   272,     8,   273,    -1,   273,    -1,   255,
      -1,    -1,   121,   145,   274,   272,   146,    -1,    -1,    -1,
     276,   249,    -1,   276,     8,   251,    95,   251,    -1,   276,
       8,   251,    -1,   251,    95,   251,    -1,   251,    -1,   276,
       8,   251,    95,    31,   253,    -1,   276,     8,    31,   253,
      -1,   251,    95,    31,   253,    -1,    31,   253,    -1,   277,
     278,    -1,   277,    98,    -1,   278,    -1,    98,   278,    -1,
     142,    -1,   142,    61,   279,   153,    -1,   142,   128,   134,
      -1,    94,   251,   149,    -1,    94,   135,    61,   251,   153,
     149,    -1,    87,   255,   149,    -1,   134,    -1,   127,    -1,
     142,    -1,   119,   145,   281,   146,    -1,    97,   145,   255,
     146,    -1,     7,   251,    -1,     6,   251,    -1,     5,   145,
     251,   146,    -1,     4,   251,    -1,     3,   251,    -1,   255,
      -1,   281,     8,   255,    -1,   235,   131,   134,    -1,   262,
     131,   134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   240,   241,   245,   246,   250,   251,   252,
     253,   254,   255,   257,   259,   260,   264,   265,   269,   270,
     271,   272,   276,   277,   281,   282,   286,   287,   288,   289,
     293,   294,   298,   299,   300,   301,   302,   303,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   329,   332,   333,   335,   334,   338,   339,
     343,   344,   348,   349,   353,   353,   358,   359,   363,   367,
     371,   375,   376,   380,   381,   380,   386,   387,   386,   389,
     390,   389,   395,   396,   397,   400,   402,   402,   407,   410,
     412,   412,   416,   418,   418,   423,   424,   427,   429,   433,
     434,   438,   439,   443,   444,   448,   449,   453,   454,   458,
     459,   460,   461,   464,   466,   467,   471,   472,   476,   477,
     480,   482,   485,   487,   490,   492,   495,   497,   501,   502,
     507,   508,   509,   510,   511,   512,   513,   514,   519,   520,
     521,   525,   526,   530,   531,   532,   533,   534,   535,   539,
     540,   544,   545,   546,   550,   551,   552,   553,   557,   558,
     562,   563,   564,   565,   564,   570,   571,   575,   576,   579,
     581,   585,   586,   590,   591,   592,   593,   594,   595,   599,
     600,   601,   602,   606,   608,   612,   613,   616,   618,   622,
     623,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   681,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   703,
     706,   708,   712,   713,   714,   715,   719,   719,   721,   724,
     726,   728,   730,   732,   734,   739,   740,   741,   742,   746,
     747,   748,   752,   753,   757,   759,   763,   764,   768,   771,
     773,   774,   777,   779,   780,   783,   785,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   804,
     805,   806,   807,   808,   809,   810,   811,   815,   819,   820,
     821,   822,   823,   824,   825,   826,   829,   831,   834,   836,
     840,   841,   842,   843,   847,   848,   852,   856,   860,   866,
     864,   868,   872,   873,   877,   882,   883,   887,   888,   892,
     893,   897,   901,   902,   906,   907,   908,   912,   913,   914,
     918,   919,   922,   924,   928,   929,   933,   934,   935,   939,
     940,   944,   945,   949,   950,   954,   955,   955,   956,   959,
     961,   965,   966,   967,   968,   969,   970,   971,   972,   976,
     977,   978,   979,   983,   984,   985,   986,   987,   988,   992,
     993,   994,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1009,
    1010,  1014,  1015
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
  "top_statement_list", "namespace_name", "top_statement",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement",
  "unticked_statement", "$@1", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@2",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@3", "$@4",
  "unticked_class_declaration_statement", "$@5", "$@6", "$@7", "$@8",
  "class_entry_type", "extends_from", "$@9", "interface_entry",
  "interface_extends_list", "$@10", "implements_list", "$@11",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@12", "$@13", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@14", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@15",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@16", "array_pair_list",
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
     158,   158,   158,   158,   158,   158,   159,   159,   160,   160,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   166,   165,   165,   165,
     167,   167,   168,   168,   170,   169,   171,   171,   172,   173,
     174,   175,   175,   177,   178,   176,   180,   181,   179,   182,
     183,   179,   184,   184,   184,   185,   186,   185,   187,   188,
     189,   188,   190,   191,   190,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   199,   199,   200,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     209,   210,   210,   211,   211,   211,   211,   211,   211,   212,
     212,   213,   213,   213,   214,   214,   214,   214,   215,   215,
     216,   216,   217,   218,   216,   219,   219,   220,   220,   221,
     221,   222,   222,   223,   223,   223,   223,   223,   223,   224,
     224,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     231,   231,   232,   232,   232,   232,   234,   233,   233,   233,
     233,   233,   233,   233,   233,   235,   235,   235,   235,   236,
     236,   236,   237,   237,   238,   238,   239,   239,   240,   241,
     241,   241,   242,   242,   242,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   247,   247,
     247,   247,   247,   247,   247,   247,   248,   248,   249,   249,
     250,   250,   250,   250,   251,   251,   252,   253,   254,   256,
     255,   255,   257,   257,   258,   259,   259,   260,   260,   261,
     261,   262,   263,   263,   264,   264,   264,   265,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   269,   269,   270,
     270,   271,   271,   272,   272,   273,   274,   273,   273,   275,
     275,   276,   276,   276,   276,   276,   276,   276,   276,   277,
     277,   277,   277,   278,   278,   278,   278,   278,   278,   279,
     279,   279,   280,   280,   280,   280,   280,   280,   280,   281,
     281,   282,   282
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     3,     7,    10,     5,     7,     9,     5,     2,
       3,     2,     3,     2,     3,     3,     3,     3,     3,     1,
       2,     5,     8,     8,     5,     1,     0,    14,     3,     3,
       1,     0,     1,     2,     0,     9,     1,     3,     1,     1,
       1,     0,     1,     0,     0,    11,     0,     0,     9,     0,
       0,     8,     1,     2,     2,     0,     0,     3,     1,     0,
       0,     3,     0,     0,     3,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     5,     4,     1,     1,     1,     4,
       0,     6,     0,     7,     0,     2,     0,     3,     1,     0,
       2,     3,     5,     4,     4,     5,     7,     6,     0,     1,
       1,     1,     0,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       3,     2,     0,     0,    10,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     3,
       1,     6,     3,     4,     6,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     3,     2,     9,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     6,     5,
       6,     6,     6,     6,     4,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     4,     1,     2,     0,     2,     0,
       2,     3,     0,     1,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     3,     2,     2,     2,     4,     1,     3,     1,     1,
       1,     3,     2,     1,     3,     3,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       6,     1,     2,     0,     3,     3,     0,     1,     2,     3,
       3,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     1,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   275,     0,
       0,    82,   303,     0,   299,     0,     0,   302,   298,     0,
       0,     0,   289,   301,     0,     0,   305,   259,     0,     0,
       0,     0,    49,    88,     0,   300,     0,   297,   304,     0,
     306,     0,     0,     0,     5,   318,     0,     0,     0,     0,
       0,   360,     0,     0,    55,    25,   371,   292,     0,   320,
       3,     0,     7,    30,     8,     9,    69,    70,     0,     0,
     335,    71,   353,     0,   323,   254,     0,   334,     0,   336,
       0,   356,     0,   341,   352,   354,   359,     0,   244,   319,
     275,     0,     5,    71,   408,   407,     0,   405,   404,   257,
     228,   229,   230,   231,   253,   251,   250,   249,   248,   247,
     246,   245,     0,     0,   276,     0,   211,   338,     0,   209,
     196,     0,     0,   276,   282,   295,   283,     0,   285,   354,
       0,    84,    83,   156,     0,   379,    39,     0,     0,    41,
       0,     0,     0,     0,   186,     0,     0,   252,   187,     0,
     151,     0,     0,   150,     0,     0,     0,     0,   378,     0,
       4,     0,   322,    43,   335,     0,   336,     0,     0,     0,
     308,   393,     0,   391,    31,     0,     0,    25,     0,     0,
      18,     0,    17,     0,     0,     0,     0,   293,     0,   294,
       0,     0,     0,   266,     0,    15,    76,    79,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   210,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   362,     0,   372,   355,     0,
       0,     0,   278,     0,     0,     0,   278,     0,   142,   195,
       0,     0,   355,     0,     0,    47,     0,   384,     0,   328,
      40,     0,    42,     0,     0,     0,     0,    48,     0,   290,
       0,     0,   188,   190,   335,   336,     0,   152,   336,     0,
      46,    59,     0,     0,   409,     0,     0,   375,     0,   374,
     321,     0,    11,     4,   142,    44,    45,     0,   318,     0,
     307,   392,     0,     0,   390,   325,   389,     0,    58,     0,
       0,    66,    68,    20,     0,     0,    14,     0,   241,     0,
      32,    24,    26,    27,    28,     0,   256,   324,     6,   142,
       0,    85,    89,    73,   138,   411,   349,   347,     0,   214,
     216,   215,     0,     0,   212,   213,   217,   219,   218,   233,
     232,   235,   234,   236,   238,   239,   237,   227,   226,   221,
     222,   220,   223,   224,   225,   240,     0,   192,   207,   206,
     205,   204,   203,   202,   201,   200,   199,   198,   197,     0,
       0,   141,   335,   336,   412,   350,   369,     0,   365,   346,
     364,   368,   363,     0,     0,   406,   277,     0,     0,   277,
     349,     0,   350,   287,     0,     0,     0,     0,     0,     0,
     310,     0,   309,   157,   316,   154,   388,   337,     0,   255,
     329,   380,    23,     0,     0,     0,     0,   185,   403,   291,
     187,     0,     0,     0,     0,   149,    10,     0,     0,   402,
     376,   378,     0,   142,    13,     0,     0,   398,     0,   396,
     400,   399,   401,     0,   395,     0,     0,     0,     0,     0,
      19,    16,     0,     0,   361,     0,     0,    86,    92,    90,
      80,     0,   140,     0,     0,   279,     0,   128,     0,   139,
     142,   142,   348,   243,     0,     0,   193,   145,   274,     0,
     142,   142,     0,   142,   339,   362,     0,   357,   358,   296,
     284,   313,   314,   326,     0,   312,     0,     0,     0,     0,
     383,     0,   382,   107,     0,    25,   105,    54,     0,     0,
     189,    97,     0,    97,    99,   153,    25,   120,   410,   378,
     373,     0,     0,    12,   269,     0,   394,   113,   113,    38,
       0,    67,    51,    21,    25,   118,    35,     0,   267,    22,
       0,    93,    77,     0,     0,   138,     0,   281,   260,   138,
       0,   130,     0,     0,   242,   295,     0,   335,   336,     0,
       0,   370,     0,   343,     0,     0,     0,   286,   333,     0,
     328,   311,   317,   155,   387,   386,     0,     0,     0,     0,
     187,     0,     0,   100,     0,   122,   124,     0,   191,   268,
       0,   113,     0,   113,     0,     0,     0,    29,    87,     0,
       0,    91,    95,   159,     0,   280,     0,     0,     0,   131,
       0,   270,   271,   194,   148,   272,   273,   345,   340,   366,
     367,   288,     0,   315,   329,   327,     0,   381,   108,     0,
      36,     0,    98,     0,     0,   126,     0,     0,    33,   377,
     397,     0,     0,     0,     0,     0,   109,     0,     0,    94,
     159,     0,   169,    74,     0,    25,     0,   134,     0,   133,
       0,   342,   332,   331,   385,   106,     0,    25,   103,    53,
      52,     0,     0,     0,     0,   125,     0,     0,   116,   117,
      25,   111,   110,     0,   119,   169,    96,   173,   174,   175,
     178,   177,   176,     0,   168,    81,   158,     0,     0,   167,
     171,     0,     0,     0,   264,     0,     0,   135,     0,   132,
     346,     0,    25,   101,    37,     0,     0,    25,     0,     0,
     112,    25,   115,    56,    78,     0,   181,     0,    71,   172,
       0,   161,    25,   265,     0,   261,   258,     0,   137,   344,
     330,     0,     0,     0,   127,    34,     0,   114,     0,     0,
       0,     0,   160,     0,     0,     0,     0,   262,   136,     0,
     104,     0,   121,    25,   184,   182,   179,   162,     0,    75,
     263,   102,    25,     0,     0,     0,   183,   123,    61,   180,
     138,     0,    57,    60,    62,     0,     0,    63,   163,     0,
       0,     0,   165,    25,   164,    64,     0,     0,   166,    25,
       0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   201,   202,    81,   205,   351,
     352,    83,   788,   822,   823,   824,   837,   340,   341,   353,
     354,   219,    86,   501,   742,    87,   361,   640,   362,   584,
      88,   498,   580,    89,   500,   583,   582,   639,   641,   622,
     553,   754,   709,   547,   294,   569,   632,   720,   576,   626,
     675,   678,   713,   506,   507,   508,   410,   411,   172,   173,
     154,   692,   736,   815,   830,   834,   737,   738,   739,   740,
     767,   741,   163,   301,   302,    90,   113,   647,   745,    92,
     359,    93,   509,   145,   146,   530,   607,   167,   208,   279,
      94,   443,   444,    95,   609,   451,   610,    96,    97,   446,
      98,    99,   603,   658,   701,   524,   100,   101,   102,   103,
     104,   105,   106,   423,   419,   420,   421,   107,   318,   319,
     559,   288,   289,   192,   193,   483,   108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -573
static const yytype_int16 yypact[] =
{
    -573,    58,  1854,  -573,  6218,  6218,   -90,  6218,  6218,  6218,
    6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,
    6218,  6218,    12,    12,  6218,   468,   -16,    40,   -63,    20,
    4704,  -573,  -573,     3,  -573,  4828,    26,  -573,  -573,  4554,
    6218,    42,    78,  -573,   122,   132,  -573,  -573,   -72,   155,
     135,   148,  -573,  -573,   154,  -573,   157,  -573,  -573,    81,
    -573,   177,  4952,   103,   108,  -573,   168,  6218,   167,   190,
     101,  -573,   202,  6218,  -573,  -573,   174,   196,   229,   133,
    -573,     8,  -573,  -573,  -573,  -573,  -573,  -573,   240,   247,
    -573,   364,  -573,   276,  -573,  -573,  6677,  -573,    55,  1412,
     264,  -573,   288,   259,  -573,    64,  -573,    96,  -573,  -573,
    -573,   284,  -573,   364,  1540,  1540,  6218,  1540,  1540,  1690,
    -573,  -573,   104,  -573,  -573,  -573,  -573,  -573,  -573,  -573,
    -573,  -573,   319,   177,    51,   313,  -573,  -573,   315,  -573,
    -573,   321,   177,   333,   338,   326,  -573,   343,   347,    -4,
      96,  -573,  -573,   474,    16,  5076,  -573,  6718,   476,  -573,
    6759,   351,   349,    17,  1540,    12,  5200,  -573,  6218,  6218,
    -573,   472,    19,  -573,   334,   350,  6218,    12,   533,   177,
    -573,   106,   150,  -573,   346,  1540,  1209,    12,  6342,   299,
    -573,   -42,   318,  -573,  -573,  6218,  6800,  -573,    12,   177,
     -43,    21,  -573,  6218,  6841,  2004,  6218,    -7,   352,   242,
      -7,   130,   363,  -573,   366,  -573,  -573,  -573,  -573,  -111,
     102,  6218,  6218,  6218,  5350,  6218,  6218,  6218,  6218,  6218,
    6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,
    6218,  6218,  6218,  6218,  6218,  6218,   468,  -573,  -573,  -573,
    5474,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,  6218,
    6218,  6218,  5598,   246,   356,  6218,  6218,   174,   -29,   365,
    6882,   177,    73,   256,   279,   177,   333,   123,  5598,  -573,
     123,   356,   -19,  1193,   359,  -573,    12,  7210,   362,   504,
    -573,  1193,  -573,   502,    27,   375,  6218,  -573,   376,  -573,
    6923,   377,   515,  1540,   451,  1364,  6218,  -573,  -573,   -72,
    -573,  -573,   381,  6964,  -573,    35,   384,  -573,    36,  -573,
     179,  1554,  -573,  -573,  5598,  -573,  -573,   382,   473,   323,
    -573,  -573,   -10,   399,  -573,  -573,  -573,  7005,  -573,  2154,
      37,  -573,  -573,     2,   402,   101,  -573,  7046,  -573,   392,
    -573,  -573,  -573,  -573,  -573,   891,  -573,  -573,  -573,  5598,
     529,   437,   439,  -573,   116,   401,   404,   -19,    96,  7332,
    1992,  1690,  6218,  7292,  2139,  2288,  2437,  2586,  2735,  2885,
    2885,  2885,  2885,  1496,  1496,  1496,  1496,   660,   660,   385,
     385,   385,   104,   104,   104,  -573,   249,  1690,  1690,  1690,
    1690,  1690,  1690,  1690,  1690,  1690,  1690,  1690,  1690,    12,
     405,   542,    38,   955,   407,   410,  -573,  6218,  -573,   412,
      -1,  -573,  1540,   408,  6470,  -573,    74,   401,   407,   333,
    -573,   416,  -573,  -573,  1193,  1193,   413,   438,   177,   158,
     183,   440,  -573,  -573,  -573,   555,  -573,  -573,  5722,  -573,
    5846,  -573,  -573,  1193,   436,  3804,  6218,  1540,  -573,  -573,
    6218,  6218,    12,    80,  6511,  -573,  -573,  3954,    12,  -573,
    -573,   533,   560,  5598,  -573,  1704,   429,  -573,  6218,  -573,
    -573,  -573,  -573,   424,  -573,    -8,   503,    12,   433,   448,
    -573,  -573,  4104,   444,  -573,   447,  1193,  -573,   467,  -573,
    -573,   441,  -573,   458,   177,   333,   449,   577,   -11,  -573,
    5598,  5598,   -19,  1840,  6218,   468,  -573,  -573,  -573,  5970,
    5598,  5598,  6552,  5598,  -573,  6218,  6218,  -573,  -573,  -573,
     471,  -573,  -573,  1193,   177,   291,   498,   469,  1193,    12,
    1540,    12,  7251,  -573,   594,  -573,  -573,  -573,  7087,   461,
    1540,   517,    12,   517,  -573,  -573,  -573,  -573,  -573,   533,
    -573,  6218,   475,  -573,  -573,    63,  -573,   478,   479,  -573,
     482,  -573,  -573,  -573,  -573,  -573,  -573,   481,  -573,  -573,
     215,  -573,  -573,   215,   483,   116,   177,   333,   493,   115,
     495,   622,   492,   494,  1840,   326,    12,    39,  1158,   497,
     499,  -573,   501,  -573,   486,  6593,   356,  -573,   546,   506,
     640,   297,  -573,  -573,  -573,  -573,  6094,  1193,  2304,   511,
    6218,    80,   507,  -573,   514,  3654,   111,    45,  1690,  -573,
     500,  -573,   131,  -573,   -23,   215,  2454,  -573,  -573,   215,
     513,   654,  -573,  -573,   520,   333,   518,   522,    -9,   655,
    1193,  -573,  -573,  -573,  -573,  -573,  -573,  -573,   544,  -573,
    -573,  -573,  1193,  -573,  1193,  -573,    12,  1540,  -573,   526,
    -573,   528,  -573,  4254,  4254,   146,   531,  4554,  -573,  -573,
    -573,   144,  6218,    -5,   535,     0,  -573,   538,   537,   654,
    -573,   215,   368,  -573,    -3,  -573,   545,   673,  1193,  -573,
     356,  -573,  -573,   593,  -573,  -573,  4404,  -573,  -573,  -573,
    -573,   547,   663,   624,  6218,  -573,   548,  6636,  -573,  -573,
    -573,  -573,  -573,   550,  -573,   386,  -573,  -573,  -573,  -573,
    -573,  -573,  -573,   559,  -573,  -573,  -573,   552,   588,   394,
    -573,    22,   562,   558,  -573,    48,  2604,   695,  1193,  -573,
     412,  1193,  -573,  -573,  -573,  2754,  6218,  -573,   567,  7128,
    -573,  -573,  3654,  -573,  -573,   702,   703,    25,   364,  -573,
     583,  -573,  -573,  -573,    28,  -573,  -573,  1193,  -573,  -573,
    -573,  2904,   571,  7169,  3654,  -573,  4554,  3654,   572,  1193,
    1193,   584,  -573,   585,   714,  3054,   587,  -573,  -573,   578,
    -573,   706,  -573,  -573,  -573,  -573,   720,  -573,  1193,  -573,
    -573,  -573,  -573,  3204,  1193,   589,  -573,  3654,   657,  -573,
     116,   592,  -573,   657,  -573,   595,   215,  -573,  -573,   596,
     -66,   597,  -573,  -573,  -573,  -573,  3354,   591,  -573,  -573,
    3504,  -573
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -573,  -573,  -163,   -20,  -573,  -573,   395,  -573,  -148,  -573,
      24,  -573,  -573,  -573,  -573,   -81,  -573,  -573,   258,     5,
       7,  -112,  -573,  -573,  -573,  -573,  -573,  -573,  -573,  -573,
    -573,  -573,  -573,  -573,  -573,  -573,  -573,  -573,   107,   194,
     127,  -573,    76,  -573,  -573,  -573,  -483,    34,  -573,  -573,
    -573,  -573,  -573,  -572,  -573,   163,  -203,  -573,  -573,   446,
    -573,    66,  -573,  -573,  -573,  -573,  -573,  -573,  -573,    29,
    -573,  -573,  -573,  -446,  -573,    68,    -2,  -573,  -573,  -573,
    -573,    15,  -568,  -236,  -573,  -573,  -573,  -573,  -573,   164,
     712,   216,  -573,  -573,  -573,   151,  -573,   832,   600,  -398,
     320,   935,  -573,  -573,  -573,    14,  -212,  -573,   699,  -573,
     -21,    11,  -573,   233,  -275,  -573,  -573,    23,   203,   294,
    -573,  -573,  -573,   300,   193,  -573,  -573,  -573,  -573
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -352
static const yytype_int16 yytable[] =
{
      91,   269,   134,   134,   148,   143,   433,    84,   366,    85,
     395,   517,   638,   644,   549,   642,   214,   321,   567,   332,
     590,   718,   696,   363,   284,   296,    82,   309,   743,   345,
     770,   344,   265,   791,   364,   454,   149,   135,   135,   181,
     144,   182,   265,   468,   471,   487,  -143,  -146,   150,   339,
     200,   415,   418,   471,   682,   116,   774,   265,     3,   796,
     525,   366,   415,   162,   151,   430,   683,   687,   432,   418,
     170,   642,   221,   222,   223,   431,   489,   682,   171,   153,
     187,   832,   833,   212,   110,   634,   333,   188,   224,   683,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   552,   246,   272,   248,   249,  -348,   480,   268,   266,
     152,   476,   276,   726,   481,   265,   686,  -351,   212,   266,
     184,   591,   482,   697,   194,   191,   132,   158,   133,   744,
     568,   614,   719,   615,   266,   134,   112,   526,   681,   722,
     685,   134,   110,   246,    71,   215,   495,   134,   134,   320,
     475,   282,    76,   285,   297,   155,   310,   134,   346,   771,
     797,   161,   792,   455,   671,   676,   677,   212,   134,   343,
     135,   469,   472,   488,  -143,  -146,   135,   165,   502,   502,
     187,   679,   135,   135,   775,  -351,   213,   188,   654,   212,
     212,   189,   135,    91,   132,   190,   133,   179,   682,  -347,
     711,   712,   266,   135,   112,   112,   630,   187,   324,   473,
     683,   682,    71,   166,   188,   148,   143,   199,   334,   180,
      76,   367,   212,   683,   684,   112,   365,   304,    71,   503,
     503,   504,   504,   368,    71,   191,   267,   716,   825,   112,
     112,   426,    76,   322,   323,   429,   536,   149,   829,   212,
     190,   144,  -129,   440,  -276,    71,   134,   168,   704,   150,
     562,   440,   191,    76,   367,   367,   212,   169,   213,   595,
     175,  -278,   357,   187,   367,   367,   368,   368,   367,   174,
     188,   367,   367,   176,   207,   324,   368,   368,   441,   177,
     368,   135,   178,   368,   368,   212,   441,   592,   593,   212,
    -277,   112,   515,   195,  -276,   197,   187,   599,   600,    91,
     602,   110,   206,   188,   473,   200,    84,   210,    85,   187,
     412,   661,   221,   222,   223,   198,   188,    91,   191,   503,
     334,   504,   136,   139,   505,    82,   412,   203,   224,   112,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   191,   246,   132,   216,   133,   134,   209,   211,   512,
     414,   217,   331,   112,   191,   336,   187,   264,    71,   134,
     427,    71,   412,   188,   418,   218,    76,   618,    71,    76,
     331,   330,   336,   331,   336,   187,    76,   220,   625,   262,
     179,   135,   188,   428,   440,   440,   334,   212,   535,   263,
     335,    71,  -278,   212,   135,   750,   636,   412,  -277,    76,
     243,   244,   245,   440,   246,   727,   728,   729,   730,   731,
     732,   191,   134,   134,   273,   271,   274,   275,   134,   441,
     441,   134,   733,   727,   728,   729,   730,   731,   732,   212,
     191,   727,   728,   729,   730,   731,   732,   134,   441,   277,
     733,   278,   479,    91,   280,   281,   440,   135,   135,   546,
      84,   311,    85,   135,   587,   293,   135,   283,   418,   291,
     416,   557,   295,   325,   148,   143,   312,   358,    71,    82,
     360,   445,   135,   356,   417,  -170,    76,   452,   449,   734,
     364,   441,   450,   440,   611,   453,   575,   735,   440,   134,
     456,   134,   458,   461,   460,   462,   149,   734,   466,   470,
     144,   477,   134,   484,   478,   764,   490,   493,   150,   134,
     110,   412,   496,   497,   110,   499,   510,   746,   441,   511,
     519,   518,   520,   441,   135,   521,   135,   523,   533,   755,
     505,   527,   529,   505,   534,   505,   645,   135,   538,   505,
     544,   537,   762,   561,   135,   564,   134,   566,   412,   412,
     572,   570,   573,   581,   586,   589,   585,   597,   412,   412,
     577,   412,   141,   578,   142,   588,   132,   440,   133,   606,
     330,   134,   112,   612,   781,   110,   112,   617,   620,   784,
      71,   135,   621,   787,    71,   505,    91,   367,    76,   505,
     306,   629,    76,    91,   795,   631,   633,   635,   637,   368,
     440,   643,   441,   646,    91,   650,   135,   649,   651,   659,
     652,   662,   440,   655,   440,   656,   134,   657,   664,   680,
     531,   532,   663,   673,   316,   813,   793,   132,   670,   133,
     674,   690,   691,   694,   817,   441,   693,   112,   698,   543,
     695,   505,   700,   705,   706,    71,   714,   441,   440,   441,
     723,   135,   721,    76,   724,   836,   748,   747,   751,   757,
     758,   840,   756,   765,   766,   760,   763,   708,   708,    47,
     773,   715,   240,   241,   242,   243,   244,   245,   777,   246,
     772,   367,   579,   441,   785,   789,   790,   794,   800,   807,
     803,   138,   138,   368,   147,   811,   806,   808,   440,   810,
     753,   440,   812,   814,   820,   821,   768,   826,   831,   839,
     491,   828,   827,   835,    91,   571,   689,   624,   672,   608,
     710,   761,   648,    91,   613,   465,   725,   440,   604,   653,
      91,   665,   627,   441,   779,   560,   441,     0,   769,   440,
     440,   307,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,    91,     0,     0,    91,     0,     0,   440,     0,
       0,     0,   441,    91,   440,     0,     0,     0,     0,     0,
     505,     0,     0,     0,   441,   441,   505,     0,     0,     0,
     802,    91,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,   441,
       0,     0,     0,   668,    91,     0,   114,   115,    91,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,   140,     0,     0,     0,
       0,     0,   157,     0,   138,     0,   699,   160,     0,     0,
     138,     0,   164,     0,     0,     0,   138,   138,   702,     0,
     703,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,   138,     0,   196,
     221,   222,   223,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,   749,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,   147,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   137,     0,
       0,     0,     0,  -144,   778,     0,     0,   780,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
       0,     0,     0,     0,     0,   138,     0,   287,     0,     0,
       0,     0,     0,   798,     0,   442,     0,   186,   300,     0,
     303,   185,     0,   442,     0,   804,   805,     0,   313,     0,
       0,     0,     0,     0,  -338,  -338,     0,     0,     0,     0,
     329,     0,     0,     0,   816,     0,     0,   337,     0,     0,
     819,     0,     0,     0,     0,   347,     0,     0,   355,     0,
     494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,   370,   371,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   185,   138,     0,   422,   424,     0,
     298,  -144,     0,     0,   305,     0,   308,     0,   138,     0,
     185,     0,   314,   317,     0,     0,     0,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,   457,     0,
       0,     0,     0,   342,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,   442,   442,     0,     0,
       0,     0,     0,     0,     0,     0,   185,     0,     0,     0,
       0,   138,   138,     0,     0,   442,  -147,   138,     0,     0,
     138,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,     0,     0,   138,     0,     0,     0,
       0,   185,     0,     0,     0,     0,     0,   413,     0,     0,
       0,     0,     0,     0,   513,     0,     0,     0,   442,     0,
       0,     0,     0,   413,   147,     0,     0,  -338,  -338,     0,
       0,   447,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   434,   435,     0,   138,     0,
     138,     0,     0,     0,     0,   442,     0,     0,     0,   522,
     442,   138,     0,     0,     0,     0,     0,     0,   138,   413,
       0,     0,     0,     0,     0,   110,   436,     0,  -338,  -338,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
     540,     0,   542,    37,    38,     0,     0,     0,   548,     0,
       0,     0,   303,   550,   413,   138,     0,     0,     0,     0,
      43,     0,     0,    46,  -147,   185,     0,     0,     0,     0,
     565,     0,     0,    55,     0,    57,    58,   437,    60,   438,
     138,     0,     0,     0,     0,     0,   439,   112,     0,   442,
       0,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   185,   447,     0,   594,     0,     0,     0,
       0,   185,   185,   185,     0,   185,   326,   422,   605,     0,
       0,     0,   442,     0,     0,   138,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,   442,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
       0,     0,     0,   628,     0,     0,     0,   551,   554,     0,
       0,     0,     0,   558,     0,     0,   317,     0,   413,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,  -338,  -338,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   463,     0,
       0,     0,     0,     0,     0,   413,   413,     0,   667,     0,
       0,     0,   303,     0,   598,   413,   413,     0,   413,     0,
     442,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,  -338,  -338,     0,   447,     0,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   623,     0,   442,
       0,     0,     0,     0,   317,     0,     0,     0,     0,     0,
       0,   442,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   717,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,   447,  -352,  -352,  -352,  -352,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   759,     0,     0,   221,
     222,   223,     0,     0,     0,     0,   554,     4,     5,     6,
       7,     8,     0,     0,     0,   224,     9,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   783,   246,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,   447,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,    33,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,     0,    73,
       0,    74,    75,   474,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,   224,     9,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,    33,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,     0,    73,
       0,    74,    75,   563,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,    33,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,     0,    73,
       0,    74,    75,   223,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   350,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   486,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,   669,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,   688,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   776,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,   782,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,  -352,  -352,  -352,
    -352,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,   799,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   809,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   818,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   838,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,   841,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   349,    51,
       0,    52,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     545,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     574,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     707,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     752,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   156,     0,     0,    76,    77,    78,     0,     0,     0,
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
      71,     0,     0,    73,     0,   159,     0,     0,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    71,     0,     0,    73,     0,   183,
       0,     0,    76,    77,    78,     0,     0,   286,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,     0,    63,   112,    65,     0,     0,     0,     0,
       0,     0,    71,     0,     0,    73,   299,     0,     0,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
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
       0,     0,    71,     0,     0,    73,     0,     0,     0,     0,
      76,    77,    78,     0,     0,   396,     0,     0,     0,     0,
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
       0,     0,     0,     0,    76,    77,    78,     0,     0,   409,
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
      78,     0,     0,   539,     0,     0,     0,     0,     0,     0,
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
       0,     0,    76,    77,    78,     0,     0,   541,     0,     0,
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
       0,   596,     0,     0,     0,     0,     0,     0,     0,     0,
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
      76,    77,    78,     0,     0,   666,     0,     0,     0,     0,
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
      57,    58,   111,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   112,    65,     9,     0,     0,     0,     0,     0,
      71,     0,     0,    73,     0,     0,     0,     0,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,     0,    63,   112,   328,     0,   221,
     222,   223,     0,     0,    71,     0,     0,    73,     0,     0,
       0,     0,    76,    77,    78,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   528,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     555,   224,   718,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   601,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   660,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   719,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   425,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   459,
       0,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   485,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   492,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   619,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   786,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   801,     0,   224,   514,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   222,   223,     0,     0,   616,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246
};

static const yytype_int16 yycheck[] =
{
       2,   113,    22,    23,    25,    25,   281,     2,   220,     2,
     246,   409,   580,   585,   460,   583,     8,   180,    26,    61,
      31,    26,    31,   134,     8,     8,     2,     8,    31,     8,
       8,    74,    61,     8,   145,     8,    25,    22,    23,    59,
      25,    61,    61,     8,     8,     8,     8,     8,    25,   197,
      70,   263,   264,     8,    77,   145,     8,    61,     0,    31,
      61,   273,   274,    39,    80,   277,    89,   635,   280,   281,
     142,   639,     9,    10,    11,   278,    74,    77,   150,   142,
      87,   147,   148,   126,    72,   568,   128,    94,    25,    89,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    31,    49,   133,    59,    60,   145,   127,   107,   148,
      80,   324,   142,   691,   134,    61,   149,   131,   126,   148,
      62,   142,   142,   142,    26,   142,   124,   134,   126,   142,
     148,   539,   147,   541,   148,   165,   134,   148,   631,   149,
     633,   171,    72,    49,   142,   147,   359,   177,   178,   179,
     323,   150,   150,   147,   147,   145,   147,   187,   147,   147,
     142,   145,   147,   146,   620,    64,    65,   126,   198,   199,
     165,   146,   146,   146,   146,   146,   171,   145,    73,    73,
      87,   146,   177,   178,   146,   131,   145,    94,   596,   126,
     126,    98,   187,   205,   124,   102,   126,   126,    77,   145,
      64,    65,   148,   198,   134,   134,   153,    87,   145,   145,
      89,    77,   142,   145,    94,   246,   246,   126,    98,   148,
     150,   220,   126,    89,   103,   134,   134,   169,   142,   124,
     124,   126,   126,   220,   142,   142,   150,   103,   820,   134,
     134,   271,   150,   147,   148,   275,    98,   246,   826,   126,
     102,   246,   146,   283,   131,   142,   286,   145,   666,   246,
     473,   291,   142,   150,   263,   264,   126,   145,   145,   515,
     145,   131,   152,    87,   273,   274,   263,   264,   277,   134,
      94,   280,   281,   145,    98,   145,   273,   274,   283,   145,
     277,   286,   145,   280,   281,   126,   291,   510,   511,   126,
     131,   134,    63,   145,   131,   148,    87,   520,   521,   321,
     523,    72,   148,    94,   145,   345,   321,    98,   321,    87,
     262,   606,     9,    10,    11,   145,    94,   339,   142,   124,
      98,   126,    22,    23,   364,   321,   278,   145,    25,   134,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   142,    49,   124,   134,   126,   396,    77,    78,   368,
     134,   134,   189,   134,   142,   192,    87,   128,   142,   409,
     134,   142,   324,    94,   606,    31,   150,   545,   142,   150,
     207,   102,   209,   210,   211,    87,   150,   131,   556,   145,
     126,   396,    94,   134,   434,   435,    98,   126,   438,   131,
     102,   142,   131,   126,   409,   700,   574,   359,   131,   150,
      45,    46,    47,   453,    49,    67,    68,    69,    70,    71,
      72,   142,   462,   463,   131,   126,   131,   126,   468,   434,
     435,   471,    84,    67,    68,    69,    70,    71,    72,   126,
     142,    67,    68,    69,    70,    71,    72,   487,   453,   131,
      84,   145,   149,   475,   131,   128,   496,   462,   463,   455,
     475,   147,   475,   468,   504,   134,   471,    13,   700,    13,
     134,   467,   143,   147,   515,   515,   146,   134,   142,   475,
     134,   142,   487,   151,   148,   111,   150,   291,   146,   141,
     145,   496,     8,   533,   534,    13,   492,   149,   538,   539,
     145,   541,   146,     8,   147,    74,   515,   141,   147,   145,
     515,   149,   552,   134,    61,   149,   134,   145,   515,   559,
      72,   473,    13,   106,    72,   106,   145,   695,   533,   145,
       8,   146,   145,   538,   539,   145,   541,   145,   145,   707,
     580,   153,   146,   583,   126,   585,   586,   552,    13,   589,
     134,   131,   720,    13,   559,   146,   596,   153,   510,   511,
     147,    78,   134,   116,   126,     8,   145,   519,   520,   521,
     146,   523,   124,   146,   126,   146,   124,   617,   126,   128,
     102,   621,   134,   134,   752,    72,   134,    13,   147,   757,
     142,   596,    95,   761,   142,   635,   618,   606,   150,   639,
     148,   146,   150,   625,   772,   147,   147,   145,   147,   606,
     650,   148,   617,   140,   636,    13,   621,   142,   146,   153,
     146,    95,   662,   146,   664,   146,   666,   146,     8,   149,
     434,   435,   146,   146,   121,   803,   768,   124,   147,   126,
     146,   148,     8,   145,   812,   650,   146,   134,    13,   453,
     148,   691,   128,   147,   146,   142,   145,   662,   698,   664,
     142,   666,   147,   150,   147,   833,    13,   142,    95,    26,
      66,   839,   145,   134,   142,   147,   146,   673,   674,   111,
     142,   677,    42,    43,    44,    45,    46,    47,    13,    49,
     148,   700,   496,   698,   147,    13,    13,   134,   147,   134,
     148,    22,    23,   700,    25,   147,   142,    13,   748,   142,
     706,   751,    26,    13,   145,    78,   738,   145,   142,   148,
     345,   146,   823,   146,   746,   487,   639,   553,   621,   533,
     674,   717,   589,   755,   538,   309,   690,   777,   525,   595,
     762,   610,   559,   748,   750,   471,   751,    -1,   739,   789,
     790,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   781,
      -1,    -1,   784,    -1,    -1,   787,    -1,    -1,   808,    -1,
      -1,    -1,   777,   795,   814,    -1,    -1,    -1,    -1,    -1,
     820,    -1,    -1,    -1,   789,   790,   826,    -1,    -1,    -1,
     786,   813,    -1,    -1,    -1,   817,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,   814,
      -1,    -1,    -1,   617,   836,    -1,     4,     5,   840,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,   165,    -1,   650,    35,    -1,    -1,
     171,    -1,    40,    -1,    -1,    -1,   177,   178,   662,    -1,
     664,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,   198,    -1,    67,
       9,    10,    11,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   698,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,   246,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,     8,   748,    -1,    -1,   751,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,   286,    -1,   155,    -1,    -1,
      -1,    -1,    -1,   777,    -1,   283,    -1,    62,   166,    -1,
     168,   169,    -1,   291,    -1,   789,   790,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
     188,    -1,    -1,    -1,   808,    -1,    -1,   195,    -1,    -1,
     814,    -1,    -1,    -1,    -1,   203,    -1,    -1,   206,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,    -1,
      -1,    -1,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   396,    -1,   265,   266,    -1,
     165,   146,    -1,    -1,   169,    -1,   171,    -1,   409,    -1,
     278,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,   306,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   434,   435,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,   462,   463,    -1,    -1,   453,     8,   468,    -1,    -1,
     471,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,   359,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,
      -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,   278,   515,    -1,    -1,    59,    60,    -1,
      -1,   286,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    42,    43,    -1,   539,    -1,
     541,    -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,   417,
     538,   552,    -1,    -1,    -1,    -1,    -1,    -1,   559,   324,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    59,    60,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
     448,    -1,   450,    90,    91,    -1,    -1,    -1,   456,    -1,
      -1,    -1,   460,   461,   359,   596,    -1,    -1,    -1,    -1,
     107,    -1,    -1,   110,   146,   473,    -1,    -1,    -1,    -1,
     478,    -1,    -1,   120,    -1,   122,   123,   124,   125,   126,
     621,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,   617,
      -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   510,   511,   409,    -1,   514,    -1,    -1,    -1,
      -1,   519,   520,   521,    -1,   523,   147,   525,   526,    -1,
      -1,    -1,   650,    -1,    -1,   666,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   662,    -1,   664,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   561,    -1,    -1,    -1,   462,   463,    -1,
      -1,    -1,    -1,   468,    -1,    -1,   471,    -1,   473,    -1,
     698,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   487,    59,    60,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,   510,   511,    -1,   616,    -1,
      -1,    -1,   620,    -1,   519,   520,   521,    -1,   523,    -1,
     748,    -1,    -1,   751,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,   539,    -1,   541,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   552,    -1,   777,
      -1,    -1,    -1,    -1,   559,    -1,    -1,    -1,    -1,    -1,
      -1,   789,   790,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   682,    -1,    -1,    -1,    -1,    -1,
     808,    -1,    -1,    -1,    -1,    -1,   814,    -1,    -1,    -1,
      -1,   596,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,   714,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,   621,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    25,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   756,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,   666,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    25,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    11,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,   117,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,   145,
      -1,   147,   148,    -1,   150,   151,   152,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,   147,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,    -1,    -1,    -1,
     150,   151,   152,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
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
     122,   123,   124,   125,   126,     3,     4,     5,     6,     7,
      -1,   133,   134,   135,    12,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,     9,
      10,    11,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,   152,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   149,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    25,    -1,    27,    28,    29,    30,    31,
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
      -1,    -1,    -1,    -1,    -1,   147,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    25,    -1,
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
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    10,    11,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49
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
     158,   161,   164,   165,   173,   174,   176,   179,   184,   187,
     229,   230,   233,   235,   244,   247,   251,   252,   254,   255,
     260,   261,   262,   263,   264,   265,   266,   271,   280,   282,
      72,   124,   134,   230,   251,   251,   145,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   124,   126,   157,   235,   254,   255,   262,   254,
     251,   124,   126,   157,   235,   237,   238,   262,   264,   265,
     271,    80,    80,   142,   214,   145,   147,   251,   134,   147,
     251,   145,   164,   226,   251,   145,   145,   241,   145,   145,
     142,   150,   212,   213,   134,   145,   145,   145,   145,   126,
     148,   157,   157,   147,   229,   251,   255,    87,    94,    98,
     102,   142,   277,   278,    26,   145,   251,   148,   145,   126,
     157,   159,   160,   145,   251,   162,   148,    98,   242,   277,
      98,   277,   126,   145,     8,   147,   134,   134,    31,   175,
     131,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   147,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   145,   131,   128,    61,   148,   150,   265,   175,
     251,   126,   157,   131,   131,   126,   157,   131,   145,   243,
     131,   128,   265,    13,     8,   147,    31,   251,   275,   276,
     147,    13,   147,   134,   198,   143,     8,   147,   255,   146,
     251,   227,   228,   251,   229,   255,   148,   252,   255,     8,
     147,   147,   146,   251,   255,   281,   121,   255,   272,   273,
     157,   156,   147,   148,   145,   147,   147,   255,   135,   251,
     102,   278,    61,   128,    98,   102,   278,   251,   147,   162,
     171,   172,   255,   157,    74,     8,   147,   251,   146,   114,
     149,   163,   164,   173,   174,   251,   151,   152,   134,   234,
     134,   180,   182,   134,   145,   134,   260,   265,   271,   251,
     251,   251,    26,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   237,    31,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,    31,
     210,   211,   229,   255,   134,   260,   134,   148,   260,   268,
     269,   270,   251,   267,   251,   146,   157,   134,   134,   157,
     260,   210,   260,   268,    42,    43,    73,   124,   126,   133,
     157,   235,   244,   245,   246,   142,   253,   255,    95,   146,
       8,   249,   245,    13,     8,   146,   145,   251,   146,   146,
     147,     8,    74,    74,   251,   213,   147,   146,     8,   146,
     145,     8,   146,   145,   149,   156,   210,   149,    61,   149,
     127,   134,   142,   279,   134,   146,   149,     8,   146,    74,
     134,   160,   146,   145,   149,   210,    13,   106,   185,   106,
     188,   177,    73,   124,   126,   157,   207,   208,   209,   236,
     145,   145,   265,   251,    26,    63,   255,   253,   146,     8,
     145,   145,   251,   145,   259,    61,   148,   153,   149,   146,
     239,   245,   245,   145,   126,   157,    98,   131,    13,    31,
     251,    31,   251,   245,   134,    26,   164,   197,   251,   227,
     251,   255,    31,   194,   255,   149,    26,   164,   255,   274,
     273,    13,   210,   149,   146,   251,   153,    26,   148,   199,
      78,   172,   147,   134,    26,   164,   202,   146,   146,   245,
     186,   116,   190,   189,   183,   145,   126,   157,   146,     8,
      31,   142,   210,   210,   251,   237,    31,   229,   255,   210,
     210,   149,   210,   256,   267,   251,   128,   240,   245,   248,
     250,   157,   134,   245,   253,   253,    95,    13,   162,   146,
     147,    95,   193,   255,   193,   162,   203,   272,   251,   146,
     153,   147,   200,   147,   200,   145,   162,   147,   236,   191,
     181,   192,   236,   148,   207,   157,   140,   231,   209,   142,
      13,   146,   146,   243,   253,   146,   146,   146,   257,   153,
     149,   268,    95,   146,     8,   249,    31,   251,   245,    99,
     147,   227,   194,   146,   146,   204,    64,    65,   205,   146,
     149,   200,    77,    89,   103,   200,   149,   236,   104,   192,
     148,     8,   215,   146,   145,   148,    31,   142,    13,   245,
     128,   258,   245,   245,   253,   147,   146,    26,   164,   196,
     196,    64,    65,   206,   145,   164,   103,   251,    26,   147,
     201,   147,   149,   142,   147,   215,   236,    67,    68,    69,
      70,    71,    72,    84,   141,   149,   216,   220,   221,   222,
     223,   225,   178,    31,   142,   232,   162,   142,    13,   245,
     268,    95,    26,   164,   195,   162,   145,    26,    66,   251,
     147,   201,   162,   146,   149,   134,   142,   224,   230,   223,
       8,   147,   148,   142,     8,   146,   149,    13,   245,   259,
     245,   162,   101,   251,   162,   147,   146,   162,   166,    13,
      13,     8,   147,   175,   134,   162,    31,   142,   245,   100,
     147,   146,   164,   148,   245,   245,   142,   134,    13,   149,
     142,   147,    26,   162,    13,   217,   245,   162,   149,   245,
     145,    78,   167,   168,   169,   207,   145,   169,   146,   236,
     218,   142,   147,   148,   219,   146,   162,   170,   149,   148,
     162,   149
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

  case 56:

    { observers.ExceptionCatchFound((yyvsp[(8) - (9)])); ;}
    break;

  case 64:

    { observers.ExceptionCatchFound((yyvsp[(4) - (5)])); ;}
    break;

  case 71:

    { (yyval).Token = 0; ;}
    break;

  case 72:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 73:

    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 74:

    { observers.FunctionFound(analyzer.GetLineNumber()); ;}
    break;

  case 75:

    { observers.FunctionEnd((yyvsp[(11) - (11)])); ;}
    break;

  case 76:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 77:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 78:

    { observers.ClassEnd(analyzer.GetLineNumber()); ;}
    break;

  case 79:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 80:

    { observers.ClassFound(analyzer.GetLineNumber()); ;}
    break;

  case 81:

    { observers.ClassEnd(analyzer.GetLineNumber()); ;}
    break;

  case 82:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false, false); ;}
    break;

  case 83:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false, false); ;}
    break;

  case 84:

    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false, false); ;}
    break;

  case 86:

    { observers.QualifiedNameClear(); ;}
    break;

  case 87:

    { observers.ClassSetExtends(); ;}
    break;

  case 88:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true, false); ;}
    break;

  case 90:

    { observers.QualifiedNameClear(); ;}
    break;

  case 93:

    { observers.QualifiedNameClear(); ;}
    break;

  case 95:

    { observers.ClassAddToImplements(); ;}
    break;

  case 96:

    { observers.ClassAddToImplements(); ;}
    break;

  case 99:

    { observers.ForeachVariableFound(); ;}
    break;

  case 100:

    { observers.ForeachVariableFound(); ;}
    break;

  case 130:

    { observers.ParametersListSetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 131:

    { observers.ParametersListSetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 132:

    { observers.ParametersListSetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 133:

    { observers.ParametersListSetName((yyvsp[(2) - (4)]), false); ;}
    break;

  case 134:

    { observers.ParametersListSetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 135:

    { observers.ParametersListSetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 136:

    { observers.ParametersListSetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 137:

    { observers.ParametersListSetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 138:

    { observers.ParametersListCreate(); ;}
    break;

  case 139:

    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 140:

    { observers.ParametersListCreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 143:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 144:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 145:

    { observers.ExpressionAsCallArgument(); ;}
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

  case 151:

    { observers.GlobalVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 154:

    { observers.StaticVariableFound((yyvsp[(3) - (3)])); ;}
    break;

  case 155:

    { observers.StaticVariableFound((yyvsp[(3) - (5)])); ;}
    break;

  case 156:

    { observers.StaticVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 157:

    { observers.StaticVariableFound((yyvsp[(1) - (3)])); ;}
    break;

  case 160:

    { observers.ClassMemberClear(); ;}
    break;

  case 161:

    { observers.ClassMemberClear(); ;}
    break;

  case 162:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 163:

    { observers.ClassMemberFound(false, analyzer.GetLineNumber()); ;}
    break;

  case 164:

    { observers.ClassMemberClear(); ;}
    break;

  case 165:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 166:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 168:

    { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 173:

    { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 174:

    { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 175:

    { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 176:

    { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 177:

    { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 178:

    { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 179:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 180:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 181:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 182:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 183:

    { observers.ClassMemberSetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 184:

    { observers.ClassMemberSetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true, analyzer.GetLineNumber()); ;}
    break;

  case 191:

    {  ;}
    break;

  case 192:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 193:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 194:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 195:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 196:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 197:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 198:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 199:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 209:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 210:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 211:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 212:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 213:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 214:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 229:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 230:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 231:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
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

    { /* no need to push here as this is recursive */ ;}
    break;

  case 242:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 243:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 244:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 247:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 248:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (2)])); ;}
    break;

  case 249:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 250:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 255:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 256:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 258:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 266:

    { observers.FunctionCallStart(); ;}
    break;

  case 267:

    { observers.FunctionCallEnd(analyzer.GetLineNumber()); ;}
    break;

  case 297:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 298:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 299:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 300:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 301:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
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

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 308:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 334:

    { observers.ExpressionFound(); ;}
    break;

  case 335:

    { observers.ExpressionFound(); ;}
    break;

  case 339:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 344:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 345:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 346:

    { (yyval).Token = 0; ;}
    break;

  case 349:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 353:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 360:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 375:

    { observers.ForeachVariableFound(); ;}
    break;

  case 376:

    {;}
    break;

  case 404:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 405:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 407:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 408:

    { observers.IncludeFound(analyzer.GetLineNumber()); ;}
    break;

  case 411:

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





