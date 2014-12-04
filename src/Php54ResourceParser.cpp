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
#define yyparse         php54_resource_parse
#define yylex           php54_resource_lex
#define yyerror         php54_resource_error
#define yylval          php54_resource_lval
#define yychar          php54_resource_char
#define yydebug         php54_resource_debug
#define yynerrs         php54_resource_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"


/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
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
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ResourceParserObserverClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ResourceParserTypeClass

// so that both bison parses call the same lex function
#define php54_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php54_resource_error pelet::ResourceGrammarError



/* Line 268 of yacc.c  */
#line 125 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"

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
#line 296 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"

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
#define YYLAST   7862

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  149
/* YYNRULES -- Number of rules.  */
#define YYNRULES  459
/* YYNRULES -- Number of states.  */
#define YYNSTATES  926

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
    1023,  1035,  1037,  1038,  1043,  1047,  1052,  1054,  1057,  1058,
    1064,  1071,  1072,  1079,  1086,  1093,  1100,  1107,  1112,  1114,
    1116,  1120,  1123,  1125,  1129,  1132,  1134,  1136,  1141,  1143,
    1146,  1147,  1150,  1151,  1154,  1158,  1159,  1161,  1163,  1164,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,
    1188,  1192,  1195,  1197,  1199,  1203,  1206,  1209,  1212,  1217,
    1219,  1223,  1225,  1229,  1231,  1233,  1235,  1239,  1242,  1244,
    1248,  1252,  1254,  1255,  1258,  1259,  1261,  1267,  1271,  1275,
    1277,  1279,  1281,  1283,  1285,  1287,  1288,  1289,  1297,  1299,
    1302,  1303,  1307,  1312,  1317,  1321,  1323,  1325,  1326,  1328,
    1331,  1335,  1339,  1341,  1346,  1351,  1353,  1355,  1357,  1359,
    1362,  1364,  1369,  1374,  1376,  1378,  1383,  1384,  1386,  1388,
    1390,  1395,  1400,  1402,  1404,  1408,  1410,  1413,  1417,  1419,
    1421,  1426,  1427,  1428,  1431,  1437,  1441,  1445,  1447,  1454,
    1459,  1464,  1467,  1470,  1473,  1475,  1478,  1480,  1485,  1489,
    1493,  1500,  1504,  1506,  1508,  1510,  1515,  1520,  1521,  1525,
    1526,  1530,  1535,  1536,  1540,  1541,  1545,  1547,  1551,  1555
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
     136,    -1,   167,     8,   136,    13,   262,    -1,    85,   136,
      13,   262,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   268,
     152,   170,   201,   203,    -1,   116,   151,   268,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   268,   152,
     200,    -1,    93,   170,   147,   151,   268,   152,   153,    -1,
     109,   151,   236,   153,   236,   153,   236,   152,   193,    -1,
     138,   151,   268,   152,   197,    -1,    76,   153,    -1,    76,
     268,   153,    -1,    87,   153,    -1,    87,   268,   153,    -1,
     134,   153,    -1,   134,   243,   153,    -1,   134,   272,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     235,   153,    -1,   118,    -1,   268,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   272,    74,   192,   191,
     152,   194,    -1,   110,   151,   243,    74,   272,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   253,   146,   152,   149,
     168,   150,   172,    -1,   139,   268,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   253,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   272,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   246,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   253,    -1,   120,
      -1,    -1,   107,   190,    -1,    -1,   117,   190,    -1,   253,
      -1,   190,     8,   253,    -1,    -1,    96,   192,    -1,   272,
      -1,    31,   272,    -1,   170,    -1,    26,   168,   101,   153,
      -1,   170,    -1,    26,   168,   102,   153,    -1,   170,    -1,
      26,   168,   100,   153,    -1,   136,    13,   262,    -1,   196,
       8,   136,    13,   262,    -1,   149,   198,   150,    -1,   149,
     153,   198,   150,    -1,    26,   198,   104,   153,    -1,    26,
     153,   198,   104,   153,    -1,    -1,   198,    78,   268,   199,
     168,    -1,   198,    90,   199,   168,    -1,    26,    -1,   153,
      -1,   170,    -1,    26,   168,   105,   153,    -1,    -1,   201,
      64,   151,   268,   152,   170,    -1,    -1,   202,    64,   151,
     268,   152,    26,   168,    -1,    -1,    65,   170,    -1,    -1,
      65,    26,   168,    -1,   206,    -1,    -1,   207,   146,    -1,
     207,    31,   146,    -1,   207,    31,   146,    13,   262,    -1,
     207,   146,    13,   262,    -1,   206,     8,   207,   146,    -1,
     206,     8,   207,    31,   146,    -1,   206,     8,   207,    31,
     146,    13,   262,    -1,   206,     8,   207,   146,    13,   262,
      -1,    -1,   253,    -1,    73,    -1,    77,    -1,   209,    -1,
      -1,   243,    -1,   272,    -1,    31,   270,    -1,   209,     8,
     243,    -1,   209,     8,   272,    -1,   209,     8,    31,   270,
      -1,   210,     8,   211,    -1,   211,    -1,   146,    -1,   155,
     269,    -1,   155,   149,   268,   150,    -1,   212,     8,   146,
      -1,   212,     8,   146,    13,   262,    -1,   146,    -1,   146,
      13,   262,    -1,   213,   214,    -1,    -1,   229,   233,   153,
      -1,   234,   153,    -1,   216,    -1,    -1,   230,   246,   179,
     136,   151,   205,   152,   215,   228,    -1,   144,   217,   218,
      -1,   253,    -1,   217,     8,   253,    -1,   153,    -1,   149,
     219,   150,    -1,    -1,   220,    -1,   221,    -1,   220,   221,
      -1,   222,   153,    -1,   226,   153,    -1,   225,   119,   223,
      -1,   253,    -1,   223,     8,   253,    -1,   136,    -1,   225,
      -1,   253,   133,   136,    -1,   224,    74,   227,   136,    -1,
     224,    74,   232,    -1,    -1,   232,    -1,   153,    -1,   149,
     168,   150,    -1,   231,    -1,   145,    -1,    -1,   231,    -1,
     232,    -1,   231,   232,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   233,     8,   146,
      -1,   233,     8,   146,    13,   262,    -1,   146,    -1,   146,
      13,   262,    -1,   234,     8,   136,    13,   262,    -1,    85,
     136,    13,   262,    -1,   235,     8,   268,    -1,   268,    -1,
      -1,   237,    -1,   237,     8,   268,    -1,   268,    -1,   238,
     276,    -1,   276,    -1,   239,    61,   288,   157,    -1,    61,
     288,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   254,   260,    -1,   123,   151,   293,
     152,    13,   268,    -1,   272,    13,   268,    -1,   272,    13,
      31,   272,    -1,   272,    13,    31,    63,   254,   260,    -1,
      62,   268,    -1,   272,    24,   268,    -1,   272,    23,   268,
      -1,   272,    22,   268,    -1,   272,    21,   268,    -1,   272,
      20,   268,    -1,   272,    19,   268,    -1,   272,    18,   268,
      -1,   272,    17,   268,    -1,   272,    16,   268,    -1,   272,
      15,   268,    -1,   272,    14,   268,    -1,   271,    59,    -1,
      59,   271,    -1,   271,    58,    -1,    58,   271,    -1,   268,
      27,   268,    -1,   268,    28,   268,    -1,   268,     9,   268,
      -1,   268,    11,   268,    -1,   268,    10,   268,    -1,   268,
      29,   268,    -1,   268,    31,   268,    -1,   268,    30,   268,
      -1,   268,    44,   268,    -1,   268,    42,   268,    -1,   268,
      43,   268,    -1,   268,    45,   268,    -1,   268,    46,   268,
      -1,   268,    47,   268,    -1,   268,    41,   268,    -1,   268,
      40,   268,    -1,    42,   268,    -1,    43,   268,    -1,    48,
     268,    -1,    50,   268,    -1,   268,    33,   268,    -1,   268,
      32,   268,    -1,   268,    35,   268,    -1,   268,    34,   268,
      -1,   268,    36,   268,    -1,   268,    39,   268,    -1,   268,
      37,   268,    -1,   268,    38,   268,    -1,   268,    49,   254,
      -1,   151,   268,   152,    -1,   242,    -1,   151,   242,   152,
     241,    -1,   268,    25,   268,    26,   268,    -1,   268,    25,
      26,   268,    -1,   300,    -1,    57,   268,    -1,    56,   268,
      -1,    55,   268,    -1,    54,   268,    -1,    53,   268,    -1,
      52,   268,    -1,    51,   268,    -1,   106,   258,    -1,    60,
     268,    -1,   264,    -1,    73,   151,   295,   152,    -1,    61,
     295,   157,    -1,   154,   259,   154,    -1,    12,   268,    -1,
      -1,   246,   179,   151,   205,   152,   247,   149,   244,   168,
     150,    -1,    -1,    72,   246,   179,   151,   205,   152,   247,
     149,   245,   168,   150,    -1,   112,    -1,    -1,   144,   151,
     248,   152,    -1,   248,     8,   146,    -1,   248,     8,    31,
     146,    -1,   146,    -1,    31,   146,    -1,    -1,   161,   151,
     250,   208,   152,    -1,   126,   128,   161,   151,   208,   152,
      -1,    -1,   128,   161,   151,   251,   208,   152,    -1,   252,
     133,   291,   151,   208,   152,    -1,   252,   133,   280,   151,
     208,   152,    -1,   282,   133,   291,   151,   208,   152,    -1,
     282,   133,   280,   151,   208,   152,    -1,   280,   151,   208,
     152,    -1,    72,    -1,   161,    -1,   126,   128,   161,    -1,
     128,   161,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   252,    -1,   255,    -1,   285,   130,   289,   256,
      -1,   285,    -1,   256,   257,    -1,    -1,   130,   289,    -1,
      -1,   151,   152,    -1,   151,   268,   152,    -1,    -1,    99,
      -1,   297,    -1,    -1,   151,   208,   152,    -1,   124,    -1,
      92,    -1,    86,    -1,   122,    -1,   108,    -1,    91,    -1,
     141,    -1,   125,    -1,   111,    -1,   127,    -1,   135,    99,
     103,    -1,   135,   103,    -1,   261,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,    42,   262,    -1,    43,
     262,    -1,    73,   151,   265,   152,    -1,   263,    -1,    61,
     265,   157,    -1,    82,    -1,   252,   133,   136,    -1,   137,
      -1,   306,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   261,    -1,   156,   297,   156,    -1,   135,   297,
     103,    -1,    82,    -1,    -1,   267,   266,    -1,    -1,     8,
      -1,   267,     8,   262,    96,   262,    -1,   267,     8,   262,
      -1,   262,    96,   262,    -1,   262,    -1,   269,    -1,   243,
      -1,   272,    -1,   272,    -1,   272,    -1,    -1,    -1,   284,
     273,   130,   289,   279,   274,   275,    -1,   284,    -1,   275,
     276,    -1,    -1,   130,   289,   279,    -1,   277,    61,   288,
     157,    -1,   278,    61,   288,   157,    -1,   151,   208,   152,
      -1,   278,    -1,   277,    -1,    -1,   286,    -1,   292,   286,
      -1,   252,   133,   280,    -1,   282,   133,   280,    -1,   286,
      -1,   283,    61,   288,   157,    -1,   249,    61,   288,   157,
      -1,   285,    -1,   283,    -1,   249,    -1,   286,    -1,   292,
     286,    -1,   281,    -1,   286,    61,   288,   157,    -1,   286,
     149,   268,   150,    -1,   287,    -1,   146,    -1,   155,   149,
     268,   150,    -1,    -1,   268,    -1,   290,    -1,   280,    -1,
     290,    61,   288,   157,    -1,   290,   149,   268,   150,    -1,
     291,    -1,   136,    -1,   149,   268,   150,    -1,   155,    -1,
     292,   155,    -1,   293,     8,   294,    -1,   294,    -1,   272,
      -1,   123,   151,   293,   152,    -1,    -1,    -1,   296,   266,
      -1,   296,     8,   268,    96,   268,    -1,   296,     8,   268,
      -1,   268,    96,   268,    -1,   268,    -1,   296,     8,   268,
      96,    31,   270,    -1,   296,     8,    31,   270,    -1,   268,
      96,    31,   270,    -1,    31,   270,    -1,   297,   298,    -1,
     297,    99,    -1,   298,    -1,    99,   298,    -1,   146,    -1,
     146,    61,   299,   157,    -1,   146,   130,   136,    -1,    95,
     268,   150,    -1,    95,   137,    61,   268,   157,   150,    -1,
      88,   272,   150,    -1,   136,    -1,   129,    -1,   146,    -1,
     121,   151,   305,   152,    -1,    98,   151,   272,   152,    -1,
      -1,     7,   301,   268,    -1,    -1,     6,   302,   268,    -1,
       5,   151,   268,   152,    -1,    -1,     4,   303,   268,    -1,
      -1,     3,   304,   268,    -1,   272,    -1,   305,     8,   272,
      -1,   252,   133,   136,    -1,   282,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   360,   360,   364,   365,   369,   370,   374,   375,   376,
     377,   378,   383,   383,   388,   388,   394,   395,   399,   401,
     405,   408,   411,   414,   420,   426,   435,   436,   440,   441,
     442,   443,   447,   448,   452,   453,   457,   461,   462,   463,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   489,   492,   493,   494,   500,
     501,   505,   506,   510,   511,   515,   520,   521,   525,   529,
     533,   537,   538,   543,   542,   560,   559,   579,   578,   589,
     590,   591,   592,   596,   597,   604,   608,   609,   614,   615,
     620,   623,   627,   628,   632,   633,   637,   638,   642,   643,
     647,   648,   652,   653,   657,   658,   659,   660,   664,   665,
     666,   670,   671,   675,   676,   680,   681,   687,   688,   694,
     695,   699,   700,   704,   705,   709,   710,   711,   712,   713,
     714,   715,   716,   720,   721,   722,   723,   727,   728,   732,
     739,   746,   753,   754,   755,   759,   760,   764,   765,   766,
     770,   771,   772,   773,   777,   778,   782,   783,   784,   786,
     785,   802,   807,   808,   813,   814,   818,   819,   823,   824,
     828,   829,   833,   838,   839,   843,   846,   850,   856,   857,
     861,   862,   866,   867,   871,   872,   878,   879,   883,   884,
     888,   889,   890,   891,   892,   893,   897,   903,   909,   915,
     924,   931,   940,   941,   945,   946,   950,   951,   955,   956,
     960,   961,   965,   966,   967,   971,   972,   976,   980,   981,
     994,   999,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1055,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,  1070,  1071,  1073,  1072,  1078,
    1077,  1085,  1089,  1090,  1094,  1095,  1096,  1097,  1101,  1101,
    1124,  1127,  1127,  1150,  1152,  1154,  1156,  1158,  1163,  1164,
    1165,  1166,  1170,  1171,  1172,  1176,  1177,  1181,  1183,  1187,
    1188,  1192,  1196,  1197,  1198,  1202,  1203,  1204,  1208,  1209,
    1213,  1222,  1231,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1259,
    1260,  1261,  1265,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1281,  1282,  1286,  1287,  1291,  1292,  1293,  1294,
    1298,  1299,  1303,  1307,  1311,  1315,  1320,  1315,  1333,  1337,
    1338,  1342,  1346,  1347,  1351,  1355,  1356,  1357,  1361,  1362,
    1366,  1367,  1371,  1375,  1376,  1380,  1390,  1391,  1396,  1397,
    1398,  1402,  1403,  1404,  1408,  1409,  1413,  1414,  1418,  1419,
    1423,  1424,  1425,  1429,  1430,  1434,  1435,  1439,  1440,  1444,
    1445,  1446,  1450,  1451,  1455,  1456,  1457,  1458,  1459,  1460,
    1461,  1462,  1466,  1467,  1468,  1469,  1473,  1474,  1475,  1476,
    1477,  1478,  1482,  1483,  1484,  1488,  1489,  1490,  1490,  1496,
    1496,  1502,  1503,  1503,  1509,  1509,  1517,  1518,  1522,  1523
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
  "lexical_var_list", "function_call", "$@9", "$@10", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@11", "$@12",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "$@13", "$@14",
  "$@15", "$@16", "isset_variables", "class_constant", 0
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
     243,   246,   247,   247,   248,   248,   248,   248,   250,   249,
     249,   251,   249,   249,   249,   249,   249,   249,   252,   252,
     252,   252,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   258,   258,   258,   259,   259,   259,   260,   260,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   263,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   265,   265,   266,   266,   267,   267,   267,   267,
     268,   268,   269,   270,   271,   273,   274,   272,   272,   275,
     275,   276,   277,   277,   278,   279,   279,   279,   280,   280,
     281,   281,   282,   283,   283,   284,   284,   284,   285,   285,
     285,   286,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   294,   295,   295,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   297,   297,   298,   298,   298,   298,
     298,   298,   299,   299,   299,   300,   300,   301,   300,   302,
     300,   300,   303,   300,   304,   300,   305,   305,   306,   306
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
      11,     1,     0,     4,     3,     4,     1,     2,     0,     5,
       6,     0,     6,     6,     6,     6,     6,     4,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     4,     1,     2,
       0,     2,     0,     2,     3,     0,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     2,     2,     4,     1,
       3,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     1,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     0,     7,     1,     2,
       0,     3,     4,     4,     3,     1,     1,     0,     1,     2,
       3,     3,     1,     4,     4,     1,     1,     1,     1,     2,
       1,     4,     4,     1,     1,     4,     0,     1,     1,     1,
       4,     4,     1,     1,     3,     1,     2,     3,     1,     1,
       4,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     1,     2,     1,     4,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     0,     3,     0,
       3,     4,     0,     3,     0,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   454,   452,     0,   449,   447,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   422,     0,     0,     0,     0,   308,
       0,     0,    79,   361,     0,   332,     0,     0,   335,   331,
       0,     0,     0,   322,   334,     0,     0,   338,   291,     0,
       0,     0,     0,    51,    85,     0,   333,     0,   330,   337,
       0,   339,     0,     0,     0,     5,   353,     0,     0,    81,
     336,     0,     0,     0,   404,     0,    27,     0,    57,   325,
     415,     0,   355,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   371,    71,   397,     0,   358,   282,
       0,   370,     0,   372,     0,   400,     0,   396,   378,   395,
     398,   403,     0,   272,   354,     0,     0,     0,     0,     0,
     308,     0,     5,    71,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   308,     0,     0,   309,
       0,   237,   374,     0,   235,   281,     0,   427,     0,   364,
     222,     0,     0,   309,   315,   328,   316,     0,   318,   398,
       0,    82,    80,   152,     0,    71,   422,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   421,
       0,    14,     0,   357,    45,   371,     0,   372,     0,     0,
       0,   341,   436,     0,   434,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   326,     0,
     327,     0,     0,     0,     0,   298,     0,    17,    83,    86,
      72,     0,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   406,     0,   406,
       0,   416,   399,   455,   453,     0,   450,   448,     0,     0,
     311,     0,     0,   431,   373,     0,   284,   365,   423,     0,
     311,     0,   138,   217,     0,     0,   399,     0,     0,    49,
       0,     0,    42,     0,    44,     0,     0,     0,     0,    50,
       0,   323,     0,     0,   205,   207,   371,   372,     0,   148,
     372,     0,    48,    60,     0,     0,   456,     0,     0,   419,
       0,   418,   356,     4,    12,    11,   301,    46,    47,     0,
     353,     0,   340,   435,     0,     0,   433,   360,   432,     0,
      59,     0,     0,    66,    68,    22,     0,     0,    16,     0,
       0,    34,    26,    28,    29,    30,   215,   267,   285,     0,
     359,     6,   138,     0,     0,    88,     0,    77,     0,   133,
     407,     0,   458,     0,   390,   388,     0,     0,   240,   242,
     241,     0,     0,   238,   239,   243,   245,   244,   259,   258,
     261,   260,   262,   264,   265,   263,   253,   252,   247,   248,
     246,   249,   250,   251,   266,     0,   219,   233,   232,   231,
     230,   229,   228,   227,   226,   225,   224,   223,     0,     0,
     137,   371,   372,   459,   391,     0,     0,     0,     0,     0,
     451,   310,   413,     0,   426,     0,   425,   310,   390,     0,
     391,   409,   320,   408,   412,     0,     0,   362,     0,   351,
       0,     0,     0,   343,     0,   342,   153,   349,   150,   133,
     283,    25,     0,     0,     0,     0,   202,   446,   324,   204,
       0,     0,     0,     0,   145,    10,     0,     0,   445,   421,
     421,     0,   138,     0,     4,   138,   441,     0,   439,   443,
     442,   444,     0,   438,     0,     0,     0,     0,     0,    21,
      18,     0,     0,   406,     0,   214,   213,   216,   269,   209,
     405,     0,     0,     0,     0,   312,    84,     0,    75,    87,
      90,     0,   133,   135,   136,     0,   123,     0,   134,   394,
       0,   138,   138,   389,   271,     0,     0,   220,   141,   307,
       0,   138,   138,   393,   387,   401,   402,   430,   429,     0,
     329,   317,   406,     0,   346,   347,   369,     0,   364,   362,
       0,   345,     0,     0,     0,     0,   102,     0,    27,   100,
      56,     0,     0,   206,    92,     0,    92,    94,   149,    27,
     115,   457,     0,   417,     0,     0,    15,     0,     0,     0,
     437,   108,   108,    40,     0,    67,    53,    23,    27,   113,
      37,     0,     0,   387,   208,   406,   212,   299,    24,     0,
     314,    89,     0,     0,   155,     0,   292,   133,     0,   125,
     414,     0,     0,   270,   328,     0,   371,   372,     0,     0,
     138,   386,   385,   376,     0,   424,     0,   319,     0,     0,
       0,   350,   365,   363,     0,   344,   352,   151,   292,     0,
       0,     0,   204,     0,     0,    95,     0,   117,   119,   420,
     218,   300,    13,   302,     0,   108,     0,   108,     0,     0,
       0,    31,   211,   381,     0,   313,   155,    91,   186,    73,
       0,     0,     0,   126,     0,   304,   303,   221,   144,   306,
     305,     0,   406,   406,   380,   428,   321,   410,   411,   368,
     367,   348,     0,   103,     0,    38,     0,    93,     0,     0,
     121,     0,     0,    35,   440,     0,     0,     0,     0,     0,
     104,     0,     0,   210,   186,   190,   191,   192,   195,   194,
     193,     0,     0,   185,    78,   154,   158,     0,     0,   184,
     188,     0,     0,     0,   287,     0,   129,     0,   128,   384,
       0,     0,   377,     0,   289,   101,     0,    27,    98,    55,
      54,     0,     0,     0,     0,   120,     0,     0,   111,   112,
      27,   106,   105,     0,   114,    76,     0,     0,   162,   198,
       0,    71,   189,     0,   157,    27,     0,   296,     0,    27,
     130,     0,   127,   382,   383,   379,   366,    27,    27,    96,
      39,     0,     0,    27,     0,     0,   107,    27,   110,     0,
       0,     0,   166,   164,   161,     0,     0,   156,     0,     0,
       0,   297,     0,   293,     0,     0,   132,     0,     0,     0,
       0,   122,    36,     0,   109,    27,   201,   163,     5,     0,
     167,   168,     0,     0,   176,     0,     0,   199,   196,     0,
       0,    74,     0,   294,   288,   131,   290,     0,    99,     0,
     116,     0,   165,   169,   170,   180,     0,   171,     0,     0,
     133,   200,   295,    97,    27,    62,     0,   179,   172,   173,
     177,   197,     0,   118,     0,    58,    61,    63,   178,     0,
     159,     0,    64,   174,     0,     0,    27,   182,   160,     0,
       0,     0,   183,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   504,   343,   212,   213,    84,
     215,   372,   373,    86,   905,   906,   907,   362,   363,   374,
     375,   231,    89,   762,    90,   632,   541,    91,   385,    92,
     387,   538,   539,   674,   596,   820,   779,   590,   316,   613,
     686,   790,   620,   678,   730,   733,   783,   545,   546,   547,
     439,   440,   183,   184,   164,   698,   755,   914,   756,   797,
     834,   859,   860,   861,   862,   898,   863,   864,   865,   896,
     918,   757,   758,   759,   760,   800,   761,   174,   323,   324,
     525,   526,   527,   528,    93,    94,   809,   817,   123,   701,
     808,    96,   382,   505,    97,   548,   155,   156,   571,   657,
     178,   219,   303,    98,   576,   477,    99,   577,   298,   578,
     100,   101,   293,   102,   103,   278,   714,   772,   529,   651,
     652,   653,   104,   105,   106,   107,   108,   109,   110,   111,
     391,   462,   463,   464,   112,   340,   341,   148,   149,   203,
     204,   512,   113,   119,   118,   116,   115,   337,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -736
static const yytype_int16 yypact[] =
{
    -736,   109,  1961,  -736,  -736,  -736,    -6,  -736,  -736,  6554,
    6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,
    6554,   528,   528,  6554,  5041,  6554,   544,    74,   122,   -31,
      58,  5167,  -736,  -736,   118,  -736,  5293,   135,  -736,  -736,
    4887,  6554,   174,   183,  -736,   198,   200,  -736,  -736,   -38,
     137,   205,   210,  -736,  -736,   215,  -736,   217,  -736,  -736,
     -29,  -736,   227,  5419,   195,   349,  -736,   229,  6554,  -736,
    -736,   239,   254,   -46,  -736,   255,  -736,  6554,  -736,   157,
     241,   354,   -50,  -736,    13,  -736,  -736,  -736,  -736,  -736,
    -736,   273,   274,  -736,  -736,   391,   362,   292,  -736,  -736,
    6813,  -736,   285,  1563,   281,  -736,   301,   382,   310,  -736,
       9,  -736,    47,  -736,  -736,  6554,  6554,  6554,  6554,  6554,
     339,   326,  -736,   391,  1793,  -736,  -736,   406,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,   329,   227,    76,
     325,  -736,  -736,   327,  -736,  -736,   528,  7611,   304,   451,
    -736,   338,   227,   348,   334,   331,  -736,   344,   350,    51,
      47,  -736,  -736,   472,    14,   391,  5041,  -736,  6854,   476,
    -736,  6895,   355,   351,    15,  7736,   528,  5545,  -736,  6554,
    6554,  -736,   142,    17,  -736,   343,   345,  6554,   528,   358,
     227,  -736,    90,   -37,  -736,   361,  7736,   744,   528,  6680,
     353,  -736,    19,   316,  -736,  -736,  6554,  6940,  -736,   528,
     227,   -43,    18,  -736,  6554,  2115,   364,  6981,   218,   363,
     380,  6554,   218,   149,   385,  -736,   388,  -736,   428,   429,
    -736,    61,  6554,   272,  6554,  6554,  6554,  5672,  6554,  6554,
    6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,
    6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,   544,
    -736,  -736,  -736,  5798,  6554,  6554,  6554,  6554,  6554,  6554,
    6554,  6554,  6554,  6554,  6554,  5924,   374,  6554,   408,  6554,
    6554,   241,    45,  7736,  7736,  7022,  7736,  7736,   394,   227,
      80,   379,   379,  -736,  -736,  6050,  -736,  6176,  -736,   227,
     348,    87,  5924,  -736,    87,   379,    10,  1385,   396,  -736,
     397,   398,  -736,  1385,  -736,   536,    24,   403,  6554,  -736,
     401,  -736,  7067,   410,   547,  7736,   493,  1256,  6554,  -736,
    -736,   -38,  -736,  -736,   415,  7109,  -736,    25,   419,  -736,
      27,  -736,   -35,  -736,  -736,  -736,  -736,  -736,  -736,   421,
     512,  7361,  -736,  -736,   -57,   439,  -736,  -736,  -736,  7150,
    -736,  2269,    29,  -736,  -736,    70,   440,   -46,  -736,  7193,
     427,  -736,  -736,  -736,  -736,  -736,    93,  -736,  -736,  7402,
    -736,  -736,  5924,   567,   192,   466,   192,  -736,   434,   133,
    7736,   430,   443,  6554,   444,    10,   447,    47,  7776,  7813,
    1793,  6554,  7695,  2100,  2253,  2406,  2559,  1645,  2712,  2712,
    2712,  2712,  1360,  1255,  1255,  1255,   585,   585,   367,   367,
     367,   406,   406,   406,  -736,   212,  1793,  1793,  1793,  1793,
    1793,  1793,  1793,  1793,  1793,  1793,  1793,  1793,   528,   438,
     591,    30,    36,   443,   450,   453,   454,   379,   457,  7445,
    -736,   112,  -736,   528,  7736,   528,  7652,   348,  -736,   458,
    -736,  -736,  -736,    23,  -736,  1385,  1385,  1385,   464,  -736,
     505,   227,   213,   113,   488,  -736,  -736,  -736,   623,   133,
    -736,  -736,  1385,   502,  4117,  6554,  7736,  -736,  -736,  6554,
    6554,   528,    79,  7487,  -736,  -736,  4271,   528,  -736,   358,
     358,   626,  5924,  1653,  -736,  5924,  -736,  6554,  -736,  -736,
    -736,  -736,   483,  -736,    42,   564,   528,   492,   510,  -736,
    -736,  4425,   495,  6554,   379,   518,   102,  -736,  -736,  -736,
    -736,   499,  1385,   529,   227,   348,  -736,   192,  -736,   652,
    -736,   516,   133,  -736,  -736,   514,   659,    11,  -736,  -736,
    7528,  5924,  5924,    10,  1947,  6554,   544,  -736,  -736,  -736,
    6302,  5924,  5924,  -736,   520,  -736,  -736,  -736,  -736,  6428,
    -736,   546,  6554,  6554,  -736,  -736,   582,   524,   676,  1385,
     227,   125,   583,   553,  1385,   539,  -736,   679,  -736,  -736,
    -736,  7235,   540,  7736,   599,   528,   599,  -736,  -736,  -736,
    -736,  -736,    31,  -736,  6554,   549,  -736,  1807,   551,    94,
    -736,   543,   545,  -736,   555,  -736,  -736,  -736,  -736,  -736,
    -736,   554,   563,   520,  -736,  6554,   518,  -736,  -736,   227,
     348,   652,   559,   192,  -736,   552,   568,   253,   565,   709,
    -736,   571,   572,  1947,   331,   528,    33,   378,   573,   575,
    5924,   667,   669,  -736,   528,  7736,   379,  -736,   574,  7569,
    1385,  -736,  1385,  -736,   580,   154,  -736,  -736,   568,  1385,
    2423,   584,  6554,    79,   581,  -736,   587,  3963,   290,  -736,
    1793,  -736,  -736,  -736,   586,  -736,   232,  -736,    -4,   192,
    2577,  -736,  -736,  -736,   588,   348,  -736,  -736,   302,  -736,
     589,   592,    16,   729,  1385,  -736,  -736,  -736,  -736,  -736,
    -736,   594,  6554,  6554,  -736,  -736,  -736,  -736,  -736,  -736,
     651,  -736,   600,  -736,   590,  -736,   598,  -736,  4579,  4579,
     318,   601,  4887,  -736,  -736,   233,  6554,     3,   616,   121,
    -736,   607,   617,  -736,   402,  -736,  -736,  -736,  -736,  -736,
    -736,   618,   192,  -736,  -736,  -736,  -736,   627,   339,   490,
    -736,    20,   625,    34,  -736,   629,   759,  1385,  -736,  -736,
     619,   620,   518,  1385,  -736,  -736,  4733,  -736,  -736,  -736,
    -736,   628,   752,   715,  6554,  -736,   630,  1019,  -736,  -736,
    -736,  -736,  -736,   632,  -736,  -736,   772,    12,  -736,   774,
      22,   391,  -736,   653,  -736,  -736,   644,  -736,    37,  -736,
     778,  1385,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  2731,  6554,  -736,   640,  7276,  -736,  -736,  3963,   645,
    1385,   192,   224,  -736,  -736,  1385,   650,  -736,   661,   787,
    2885,  -736,    44,  -736,  3039,  1385,  -736,  3193,  3347,   648,
    7319,  3963,  -736,  4887,  3963,  -736,  -736,  -736,   724,   654,
     224,  -736,   655,   731,   687,   656,   677,  -736,   798,   663,
    1385,  -736,   666,  -736,  -736,  -736,  -736,   662,  -736,   790,
    -736,  3501,  -736,  -736,  -736,   647,   192,  -736,   681,  1385,
     133,  -736,  -736,  -736,  -736,   739,   684,   685,   814,  -736,
    -736,  -736,   671,  3963,   673,  -736,   739,  -736,  -736,   192,
    -736,   192,  -736,  -736,   178,   682,  -736,  -736,  -736,   675,
    3655,   680,  -736,  -736,  3809,  -736
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -736,  -736,  -330,    40,  -736,  -736,  -736,  -736,   465,  -736,
    -168,  -736,     6,  -736,  -736,  -736,   -81,  -736,   315,     0,
       5,  -122,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,   296,   238,   162,  -736,   107,  -736,  -736,  -736,
    -425,    50,  -736,  -736,  -736,  -736,  -736,  -473,  -736,   202,
    -285,  -736,  -736,   509,  -736,   145,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   -17,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -735,  -736,  -736,  -736,  -477,  -736,
     321,  -736,  -736,  -736,   767,   101,  -736,  -736,    -2,   180,
    -736,  -736,  -736,  -736,   126,  -368,  -255,  -736,  -736,  -736,
    -736,  -736,   206,   781,   785,  -736,  -736,   275,   277,  -736,
     963,   674,  -419,    66,   921,  -736,  -736,  -736,  -515,  -736,
    -736,   230,  -228,  -736,   895,  -736,  -736,   -23,    41,  -736,
    -268,  -432,  -736,    86,   -12,   359,   357,   694,  -736,   228,
     366,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -414
static const yytype_int16 yytable[] =
{
      95,   288,    87,   158,   424,   394,   585,    88,    85,   446,
     624,   448,   592,   503,   160,   564,   536,   459,   540,   558,
     831,   226,   308,   318,   802,   331,   367,   165,   803,   788,
     836,   366,   483,   497,   567,   500,   568,   516,  -139,   500,
     361,  -142,   638,   310,  -140,   842,   173,   765,   444,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   139,   139,   394,   444,   806,   153,   159,   611,   635,
     279,   279,   509,   458,   736,   872,   460,   461,   224,   510,
     354,    48,   210,  -309,   572,   224,   737,   141,   144,   511,
     122,   224,   623,   224,  -374,  -374,  -311,   531,  -310,   190,
     192,   225,   193,   234,   235,   236,   279,   122,   181,     3,
     595,   624,   279,   211,   346,   163,   502,   182,   165,   237,
     191,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  -392,   259,   518,   117,   740,   140,   140,   355,
     897,   136,   154,   282,   523,   161,   789,   639,   280,   280,
    -388,   832,   766,   625,   195,   833,   227,   309,   319,   540,
     332,   368,   573,   804,   607,   837,   484,   498,   290,   501,
     807,   517,  -139,   679,  -392,  -142,   139,   688,  -140,   843,
     873,   612,   300,    74,   280,   726,  -389,   388,   224,   736,
     280,   306,   281,   162,   224,   137,   543,   138,   224,   166,
     544,   737,   389,    95,   136,   122,   139,   605,   224,   461,
     608,   397,   139,   524,   716,    74,   708,   225,   139,   139,
     342,   346,   524,    74,    80,   715,   158,   198,   139,   344,
     224,   224,    80,   345,   199,   198,  -309,   160,   356,   139,
     365,   684,   199,   224,   169,   622,   218,   815,  -311,   533,
     735,   534,   739,   502,   397,   697,   641,   642,   137,   122,
     138,   792,   140,   185,   395,   556,   648,   649,   122,   397,
     397,   326,   224,   198,   136,  -124,   172,  -310,    74,   397,
     199,   328,   397,   397,   200,   202,   461,    80,   201,   153,
     159,   644,   140,   202,   658,   380,   198,   220,   140,   223,
     736,   736,   582,   199,   140,   140,   201,   395,   533,   396,
     534,   741,   737,   737,   140,   176,   543,   916,   122,   451,
     544,   917,   395,   395,   177,   140,   738,   786,   137,   457,
     138,   202,   395,   261,   262,   395,   395,   473,   122,   179,
     533,   180,   534,   473,   731,   732,   186,   694,    74,    95,
     858,   187,   445,   122,   202,   711,   188,    80,   189,   745,
     746,   747,   748,   749,   750,   205,   441,   396,   445,   533,
     206,   534,   781,   782,   798,   154,  -143,   751,   208,   122,
     221,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   441,   198,   209,   214,   211,   392,   228,
     229,   199,   256,   257,   258,   356,   259,   902,    74,   357,
     670,   393,   230,   232,   535,   233,   535,    80,   461,   535,
     136,   677,   275,   474,   276,   397,  -374,  -374,   553,   474,
    -375,   198,   198,   277,   770,   771,   752,   753,   199,   199,
     690,    48,   754,   222,   190,   259,   352,   289,   291,   297,
     292,   296,   202,   857,   866,   139,   299,   301,   198,   745,
     746,   747,   748,   749,   750,   199,   224,   304,   139,   356,
     305,   338,   302,   441,   137,   307,   138,   751,   395,   313,
     589,   315,   866,   139,   122,   139,   333,   334,   317,   202,
     202,    95,   600,    87,    74,   473,   473,   473,    88,    85,
     443,   581,   397,    80,   347,   452,   376,   378,   899,   535,
      74,   381,   473,   393,   383,    74,   202,   619,   393,    80,
    -143,   139,   139,   158,    80,   384,   386,   139,   447,   139,
     139,   913,   478,   915,   160,   389,   752,   753,   479,   482,
     480,   140,   795,   487,   485,   490,   139,   745,   746,   747,
     748,   749,   750,   489,   140,   395,   353,   491,   495,   358,
     499,   506,   473,   507,   630,   513,   519,   535,   522,   140,
     532,   140,   535,   537,   353,   542,   358,   549,   353,   358,
     559,   474,   474,   474,  -413,   551,   153,   159,   552,   560,
     136,   561,  -187,   441,   562,    95,   441,    87,   474,   821,
     570,   563,    88,    85,   565,   579,   136,   140,   140,   473,
     665,   583,   828,   140,   473,   140,   140,   253,   254,   255,
     256,   257,   258,   580,   259,   139,   584,   840,   587,   604,
     610,   844,   140,   614,   397,   616,   617,   621,   524,   847,
     848,   627,   441,   441,   137,   851,   138,   629,   474,   854,
     633,   646,   441,   441,   122,   634,   636,   637,    95,   695,
     151,   650,   152,   535,    74,    95,   656,   535,   660,   838,
     122,   661,   154,    80,   662,   139,   352,   881,    95,   666,
      74,   668,   669,   672,   139,   673,   685,   395,   687,    80,
     473,   681,   473,   683,   699,   474,   689,   691,   696,   473,
     474,   703,   700,   139,   745,   746,   747,   748,   749,   750,
     692,   140,   704,   705,   706,   709,   903,   710,   712,   535,
     713,   717,   721,   728,   778,   778,   734,   725,   785,   729,
     763,   764,   767,   775,   473,   743,   769,   773,   920,   774,
     776,   441,   784,   793,   796,   924,   801,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   791,
     794,   140,   811,   799,   805,   810,   813,   814,   823,   822,
     140,   824,   819,   826,   829,   830,   474,   835,   474,   839,
     841,   845,   535,   852,   855,   474,   868,   869,  -175,   140,
     870,   878,  -374,  -374,   882,   885,   886,   473,   884,   887,
     888,   889,   892,   473,   890,   893,   894,   900,   904,    95,
     908,  -181,   909,   910,   911,   912,    95,   921,   919,   923,
     474,   615,   520,   631,   676,   727,   780,   827,    95,   702,
     494,   744,    95,   883,   216,    95,    95,   626,   722,    95,
     707,   473,    95,   693,   664,   663,   329,   603,   602,   880,
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     473,   535,   535,     0,     0,   473,     0,     0,     0,    95,
       0,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,   474,     0,     0,     0,   348,     0,   474,
     535,    95,     0,     0,     0,     0,     0,     0,     0,     0,
     473,     0,     0,     0,     0,     0,   143,   143,    95,     0,
       0,   157,    95,     0,     0,     0,   535,     0,     0,   473,
     535,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,     0,   142,   142,     0,     0,     0,     0,     0,   535,
       0,   535,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   474,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   197,     0,   145,   147,   150,     0,
       0,     0,     0,     0,   168,     0,   474,     0,     0,   171,
       0,     0,     0,     0,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,   234,   235,
     236,   207,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   143,     0,     0,   237,   788,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   294,   259,     0,
       0,   143,     0,     0,     0,     0,     0,   143,   283,   284,
     285,   286,   287,   143,   143,     0,     0,     0,   475,     0,
       0,     0,   476,   143,   475,     0,     0,   320,   481,     0,
       0,   327,     0,   330,   143,     0,     0,     0,     0,   336,
     339,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     322,     0,   325,   196,     0,     0,     0,     0,     0,     0,
     335,     0,     0,     0,   157,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,     0,   359,
       0,     0,   789,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,   379,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   390,   442,   398,   399,   400,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,     0,   442,     0,     0,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   196,     0,
     390,     0,   390,   449,     0,     0,   475,   475,   475,     0,
     574,   575,     0,     0,     0,     0,     0,     0,   454,     0,
     456,     0,     0,   475,     0,   196,     0,   586,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   486,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   493,  -414,  -414,  -414,   251,   252,   253,   254,   255,
     256,   257,   258,   442,   259,     0,     0,     0,     0,     0,
       0,     0,     0,   475,  -374,  -374,     0,   628,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     492,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   557,     0,   143,     0,
     143,     0,     0,     0,     0,     0,   550,     0,     0,   294,
     475,     0,     0,     0,   554,   475,     0,     0,     0,   667,
       0,     0,     0,     0,   294,     0,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,   143,     0,     0,
       0,     0,   143,     0,   143,   143,  -414,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   143,   594,   597,     0,     0,     0,     0,   601,     0,
     339,   339,     0,   442,     0,     0,   442,   465,   466,     0,
       0,     0,     0,     0,     0,     0,     0,   364,     0,     0,
       0,   475,     0,   475,     0,   719,   467,   720,   591,     0,
     475,   157,   325,   593,   723,     0,     0,   136,   468,     0,
       0,     0,     0,     0,     0,   196,     0,   469,   196,     0,
     609,    35,   442,   442,     0,     0,    38,    39,     0,     0,
       0,   647,   442,   442,     0,   475,   390,     0,     0,   768,
     143,     0,     0,    44,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    58,
      59,   470,    61,   471,   196,   196,   675,     0,   643,     0,
     472,   122,     0,   196,   196,   196,    70,     0,     0,     0,
       0,     0,   655,     0,     0,   390,   659,     0,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,   475,   143,
       0,     0,   812,     0,   475,     0,     0,     0,   816,     0,
       0,     0,     0,     0,     0,     0,   294,   680,   143,     0,
       0,   442,     0,     0,     0,   294,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   390,     0,
       0,     0,   475,     0,   597,     0,   846,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   475,     0,   196,     0,   856,   475,     0,     0,     0,
     867,  -374,  -374,     0,     0,     0,   475,     0,     0,     0,
     875,     0,     0,     0,     0,   325,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   475,     0,     0,     0,   891,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
     475,     0,     0,     0,   901,   390,   390,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,    10,    11,     0,     0,   787,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,    34,    35,
      36,     0,    37,     0,    38,    39,    40,   825,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,   850,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,   606,    77,     0,    78,    79,    80,    81,
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
      72,    73,     0,    74,    75,     0,    76,   682,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
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
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
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
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   371,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   515,
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
      41,    42,     0,   724,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,   742,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,  -414,  -414,  -414,  -414,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,   849,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
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
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   871,    77,     0,    78,    79,
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
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   874,
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
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   876,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,   877,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
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
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   895,    77,     0,    78,    79,    80,    81,     4,     5,
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
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   922,    77,     0,    78,    79,
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
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   925,
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
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   588,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   599,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   777,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   818,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    52,
       0,    53,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       4,     5,     6,     7,     8,     0,    64,   122,    66,     9,
       0,     0,    70,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    77,     0,     0,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   122,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
     167,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     4,     5,     6,     7,     8,     0,    64,   122,
      66,     9,     0,     0,    70,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    77,     0,   170,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     4,     5,
       6,     7,     8,     0,    64,   122,    66,     9,     0,     0,
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,   194,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     4,     5,     6,     7,     8,
      64,   122,    66,     0,     9,     0,    70,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    77,   321,   401,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   122,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    77,     0,     0,    79,    80,    81,   425,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     122,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,   453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     4,
       5,     6,     7,     8,     0,    64,   122,    66,     9,     0,
       0,    70,     0,     0,     0,     0,    74,     0,     0,     0,
       0,    77,     0,     0,    79,    80,    81,   455,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   120,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   121,    61,    62,     4,     5,     6,     7,     8,
       0,    64,   122,    66,     9,     0,     0,    70,     0,     0,
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,   645,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   122,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    77,     0,     0,    79,    80,    81,   654,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     122,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,     0,    64,   122,   350,     0,     0,
       0,    70,   234,   235,   236,     0,    74,     0,     0,     0,
       0,    77,     0,     0,    79,    80,    81,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   260,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   312,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   314,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   360,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   377,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   450,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   488,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   496,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   514,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   521,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   671,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   853,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   879,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   508,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   530,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   566,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   598,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   640,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,   295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   718,
     237,   555,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,   569,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   236,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-736))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-414))

static const yytype_int16 yycheck[] =
{
       2,   123,     2,    26,   259,   233,   479,     2,     2,   277,
     525,   279,   489,   343,    26,   447,   384,   302,   386,   438,
       8,     8,     8,     8,   759,     8,     8,    29,     8,    26,
       8,    74,     8,     8,   453,     8,   455,     8,     8,     8,
     208,     8,    31,   165,     8,     8,    40,    31,   276,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    21,    22,   291,   292,    31,    26,    26,    26,   542,
      61,    61,   129,   301,    78,    31,   304,   305,   128,   136,
      61,   112,   128,   133,    61,   128,    90,    21,    22,   146,
     136,   128,   524,   128,    58,    59,   133,   382,   133,   128,
      60,   151,    62,     9,    10,    11,    61,   136,   146,     0,
      31,   626,    61,    73,   151,   146,   151,   155,   120,    25,
     149,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   133,    49,    74,   151,   150,    21,    22,   130,
     885,    72,    26,   112,    61,    81,   153,   146,   149,   149,
     151,   149,   146,    61,    63,   153,   153,   153,   153,   537,
     153,   153,   149,   153,   504,   153,   152,   152,   138,   152,
     146,   152,   152,   152,   133,   152,   146,   612,   152,   152,
     146,   149,   152,   146,   149,   672,   151,   136,   128,    78,
     149,   160,   155,    81,   128,   126,    73,   128,   128,   151,
      77,    90,   151,   215,    72,   136,   176,   502,   128,   447,
     505,   233,   182,   130,   656,   146,   645,   151,   188,   189,
     190,   151,   130,   146,   155,   654,   259,    88,   198,   149,
     128,   128,   155,   153,    95,    88,   133,   259,    99,   209,
     210,   157,    95,   128,   136,   523,    99,   772,   133,   126,
     685,   128,   687,   151,   276,   633,   551,   552,   126,   136,
     128,   150,   146,   136,   233,    63,   561,   562,   136,   291,
     292,   180,   128,    88,    72,   152,   151,   133,   146,   301,
      95,   149,   304,   305,    99,   146,   524,   155,   103,   259,
     259,   556,   176,   146,   572,   156,    88,    79,   182,    81,
      78,    78,    99,    95,   188,   189,   103,   276,   126,   233,
     128,   689,    90,    90,   198,   151,    73,   149,   136,   289,
      77,   153,   291,   292,   151,   209,   104,   104,   126,   299,
     128,   146,   301,    58,    59,   304,   305,   307,   136,   151,
     126,   151,   128,   313,    64,    65,   151,   625,   146,   361,
     136,   151,   276,   136,   146,   650,   151,   155,   151,    67,
      68,    69,    70,    71,    72,    26,   275,   291,   292,   126,
     151,   128,    64,    65,   752,   259,     8,    85,   149,   136,
     149,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   302,    88,   151,   151,   367,   136,   136,
     136,    95,    45,    46,    47,    99,    49,   890,   146,   103,
     588,   149,    31,    61,   384,   133,   386,   155,   656,   389,
      72,   599,   151,   307,   133,   447,    58,    59,   397,   313,
     130,    88,    88,    61,   712,   713,   144,   145,    95,    95,
     618,   112,   150,    99,   128,    49,   103,   128,   133,     8,
     133,   157,   146,   831,   832,   425,   128,   133,    88,    67,
      68,    69,    70,    71,    72,    95,   128,   133,   438,    99,
     130,   123,   151,   382,   126,    13,   128,    85,   447,    13,
     484,   136,   860,   453,   136,   455,   153,   152,   147,   146,
     146,   503,   496,   503,   146,   465,   466,   467,   503,   503,
     136,   471,   524,   155,   153,   136,   152,   154,   886,   479,
     146,   136,   482,   149,   136,   146,   146,   521,   149,   155,
     152,   491,   492,   556,   155,   107,   107,   497,   130,   499,
     500,   909,   146,   911,   556,   151,   144,   145,   151,    13,
     152,   425,   150,   152,   151,     8,   516,    67,    68,    69,
      70,    71,    72,   153,   438,   524,   200,    74,   153,   203,
     151,   150,   532,    61,   534,   136,   136,   537,   151,   453,
      13,   455,   542,   117,   218,   151,   220,   157,   222,   223,
     152,   465,   466,   467,   151,   151,   556,   556,   151,     8,
      72,   151,   112,   502,   151,   607,   505,   607,   482,   777,
     152,   157,   607,   607,   157,   151,    72,   491,   492,   579,
     580,   133,   790,   497,   584,   499,   500,    42,    43,    44,
      45,    46,    47,   128,    49,   595,    13,   805,   136,    13,
     157,   809,   516,    79,   656,   153,   136,   152,   130,   817,
     818,   152,   551,   552,   126,   823,   128,   128,   532,   827,
       8,   560,   561,   562,   136,   149,   152,     8,   670,   629,
     126,   151,   128,   633,   146,   677,   130,   637,    96,   801,
     136,   157,   556,   155,     8,   645,   103,   855,   690,   136,
     146,   152,    13,   153,   654,    96,   153,   656,   153,   155,
     660,   152,   662,   152,   152,   579,   151,   153,   149,   669,
     584,   146,   144,   673,    67,    68,    69,    70,    71,    72,
     157,   595,    13,   152,   152,   152,   894,   152,    61,   689,
      61,   157,   152,   152,   728,   729,   150,   153,   732,   152,
     151,   149,    13,   153,   704,   157,   152,    96,   916,   149,
     152,   650,   151,   146,   136,   923,   758,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   153,
     153,   645,    13,   146,   149,   146,   157,   157,    26,   151,
     654,    66,   776,   153,   152,    13,   660,    13,   662,   136,
     146,    13,   752,   153,   149,   669,   146,   136,    74,   673,
      13,   153,    58,    59,   150,    74,   119,   767,   153,   153,
     133,    13,   146,   773,   151,   153,    26,   136,    79,   821,
     136,   136,     8,   152,   151,   906,   828,   152,   146,   149,
     704,   516,   367,   537,   596,   673,   729,   787,   840,   637,
     331,   696,   844,   860,    77,   847,   848,   526,   668,   851,
     644,   811,   854,   623,   579,   578,   182,   500,   499,   853,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     830,   831,   832,    -1,    -1,   835,    -1,    -1,    -1,   881,
      -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   767,    -1,    -1,    -1,   153,    -1,   773,
     860,   903,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     870,    -1,    -1,    -1,    -1,    -1,    21,    22,   920,    -1,
      -1,    26,   924,    -1,    -1,    -1,   886,    -1,    -1,   889,
     890,    -1,    -1,    -1,    -1,    -1,    -1,   811,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,   909,
      -1,   911,    -1,    -1,    -1,    -1,   830,    -1,    -1,    -1,
      -1,   835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   845,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    63,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,   870,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   889,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,     9,    10,
      11,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,   146,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   146,    49,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,   182,   115,   116,
     117,   118,   119,   188,   189,    -1,    -1,    -1,   307,    -1,
      -1,    -1,   307,   198,   313,    -1,    -1,   176,   313,    -1,
      -1,   180,    -1,   182,   209,    -1,    -1,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,   275,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,    -1,   302,    -1,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
     277,    -1,   279,   280,    -1,    -1,   465,   466,   467,    -1,
     465,   466,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,
     297,    -1,    -1,   482,    -1,   302,    -1,   482,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   382,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   532,    58,    59,    -1,   532,    -1,    -1,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   382,   425,    -1,   453,    -1,
     455,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,   438,
     579,    -1,    -1,    -1,   401,   584,    -1,    -1,    -1,   584,
      -1,    -1,    -1,    -1,   453,    -1,   455,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,   492,    -1,    -1,
      -1,    -1,   497,    -1,   499,   500,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,   516,   491,   492,    -1,    -1,    -1,    -1,   497,    -1,
     499,   500,    -1,   502,    -1,    -1,   505,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,
      -1,   660,    -1,   662,    -1,   660,    61,   662,   485,    -1,
     669,   556,   489,   490,   669,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,   502,    -1,    82,   505,    -1,
     507,    86,   551,   552,    -1,    -1,    91,    92,    -1,    -1,
      -1,   560,   561,   562,    -1,   704,   523,    -1,    -1,   704,
     595,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,   128,   551,   552,   595,    -1,   555,    -1,
     135,   136,    -1,   560,   561,   562,   141,    -1,    -1,    -1,
      -1,    -1,   569,    -1,    -1,   572,   573,    -1,    -1,    -1,
     645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   767,   654,
      -1,    -1,   767,    -1,   773,    -1,    -1,    -1,   773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   645,   604,   673,    -1,
      -1,   650,    -1,    -1,    -1,   654,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   625,    -1,
      -1,    -1,   811,    -1,   673,    -1,   811,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   830,    -1,   650,    -1,   830,   835,    -1,    -1,    -1,
     835,    58,    59,    -1,    -1,    -1,   845,    -1,    -1,    -1,
     845,    -1,    -1,    -1,    -1,   672,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   870,    -1,    -1,    -1,   870,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
     889,    -1,    -1,    -1,   889,   712,   713,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    42,    43,    -1,    -1,   736,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    91,    92,    93,   784,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,   822,    -1,   134,   135,   136,
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
     143,   144,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
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
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
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
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
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
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,   111,   112,
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
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,
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
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     125,   126,   127,   128,    -1,     3,     4,     5,     6,     7,
     135,   136,   137,    -1,    12,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,   152,    26,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
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
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,
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
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,
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
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
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
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
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
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
      -1,   141,     9,    10,    11,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
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
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
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
      -1,    49,    -1,    -1,     9,    10,    11,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,
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
     141,   142,   143,   144,   146,   147,   149,   151,   153,   154,
     155,   156,   161,   162,   167,   170,   171,   177,   178,   180,
     182,   185,   187,   242,   243,   246,   249,   252,   261,   264,
     268,   269,   271,   272,   280,   281,   282,   283,   284,   285,
     286,   287,   292,   300,   306,   304,   303,   151,   302,   301,
      72,   126,   136,   246,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,    72,   126,   128,   161,
     252,   271,   272,   282,   271,   268,    31,   268,   295,   296,
     268,   126,   128,   161,   252,   254,   255,   282,   285,   286,
     292,    81,    81,   146,   212,   246,   151,   153,   268,   136,
     153,   268,   151,   170,   235,   268,   151,   151,   258,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   268,   272,    88,    95,
      99,   103,   146,   297,   298,    26,   151,   268,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   268,    99,   259,
     297,   149,    99,   297,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   273,    61,
     149,   155,   286,   268,   268,   268,   268,   268,   179,   128,
     161,   133,   133,   270,   272,    96,   157,     8,   266,   128,
     161,   133,   151,   260,   133,   130,   286,    13,     8,   153,
     179,   295,   153,    13,   153,   136,   196,   147,     8,   153,
     272,   152,   268,   236,   237,   268,   243,   272,   149,   269,
     272,     8,   153,   153,   152,   268,   272,   305,   123,   272,
     293,   294,   161,   164,   149,   153,   151,   153,   153,   272,
     137,   268,   103,   298,    61,   130,    99,   103,   298,   268,
     153,   168,   175,   176,   272,   161,    74,     8,   153,   268,
     115,   150,   169,   170,   177,   178,   152,   152,   154,   268,
     156,   136,   250,   136,   107,   186,   107,   188,   136,   151,
     268,   288,   136,   149,   280,   286,   291,   292,   268,   268,
     268,    26,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   254,    31,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,    31,   208,
     209,   243,   272,   136,   280,   291,   288,   130,   288,   268,
     152,   161,   136,    31,   268,    31,   268,   161,   280,   208,
     280,   280,   289,   290,   291,    42,    43,    61,    73,    82,
     126,   128,   135,   161,   252,   261,   262,   263,   146,   151,
     152,   262,    13,     8,   152,   151,   268,   152,   152,   153,
       8,    74,    74,   268,   211,   153,   152,     8,   152,   151,
       8,   152,   151,   160,   163,   251,   150,    61,   150,   129,
     136,   146,   299,   136,   152,   150,     8,   152,    74,   136,
     166,   152,   151,    61,   130,   238,   239,   240,   241,   276,
     150,   208,    13,   126,   128,   161,   253,   117,   189,   190,
     253,   184,   151,    73,    77,   205,   206,   207,   253,   157,
     268,   151,   151,   286,   268,    26,    63,   272,   270,   152,
       8,   151,   151,   157,   289,   157,   150,   270,   270,    96,
     152,   256,    61,   149,   262,   262,   262,   265,   267,   151,
     128,   161,    99,   133,    13,   205,   262,   136,    26,   170,
     195,   268,   236,   268,   272,    31,   192,   272,   150,    26,
     170,   272,   293,   294,    13,   208,   150,   160,   208,   268,
     157,    26,   149,   197,    79,   176,   153,   136,    26,   170,
     200,   152,   288,   289,   276,    61,   238,   152,   262,   128,
     161,   190,   183,     8,   149,   205,   152,     8,    31,   146,
     150,   208,   208,   268,   254,    31,   243,   272,   208,   208,
     151,   277,   278,   279,    31,   268,   130,   257,   288,   268,
      96,   157,     8,   266,   265,   161,   136,   262,   152,    13,
     168,   152,   153,    96,   191,   272,   191,   168,   201,   152,
     268,   152,   150,   152,   157,   153,   198,   153,   198,   151,
     168,   153,   157,   279,   288,   161,   149,   253,   213,   152,
     144,   247,   207,   146,    13,   152,   152,   260,   270,   152,
     152,   208,    61,    61,   274,   270,   289,   157,   150,   262,
     262,   152,   247,   262,   100,   153,   236,   192,   152,   152,
     202,    64,    65,   203,   150,   198,    78,    90,   104,   198,
     150,   253,   105,   157,   213,    67,    68,    69,    70,    71,
      72,    85,   144,   145,   150,   214,   216,   229,   230,   231,
     232,   234,   181,   151,   149,    31,   146,    13,   262,   152,
     288,   288,   275,    96,   149,   153,   152,    26,   170,   194,
     194,    64,    65,   204,   151,   170,   104,   268,    26,   153,
     199,   153,   150,   146,   153,   150,   136,   217,   253,   146,
     233,   246,   232,     8,   153,   149,    31,   146,   248,   244,
     146,    13,   262,   157,   157,   276,   262,   245,    26,   170,
     193,   168,   151,    26,    66,   268,   153,   199,   168,   152,
      13,     8,   149,   153,   218,    13,     8,   153,   179,   136,
     168,   146,     8,   152,   168,    13,   262,   168,   168,   102,
     268,   168,   153,   152,   168,   149,   262,   253,   136,   219,
     220,   221,   222,   224,   225,   226,   253,   262,   146,   136,
      13,   150,    31,   146,   150,   262,   150,   101,   153,   152,
     170,   168,   150,   221,   153,    74,   119,   153,   133,    13,
     151,   262,   146,   153,    26,   150,   227,   232,   223,   253,
     136,   262,   205,   168,    79,   172,   173,   174,   136,     8,
     152,   151,   174,   253,   215,   253,   149,   153,   228,   146,
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
int yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers);
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
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
#line 360 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 364 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 365 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 369 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 370 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AppendName((yyvsp[(3) - (3)].lexeme)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 374 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 375 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 376 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 377 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 378 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 383 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 384 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 388 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 389 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 394 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 395 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 400 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 401 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 405 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 408 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 411 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 414 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 420 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 426 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 436 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 447 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 448 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 452 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 453 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 461 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 462 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 471 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 473 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 474 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 475 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 476 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 477 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 479 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 480 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 481 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 482 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 483 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 484 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 485 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 488 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 493 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 500 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 501 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 505 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 506 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 510 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 511 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 516 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 520 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 521 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 525 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 537 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isReference) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 538 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isReference) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 543 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName(NULL); 
											  observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); 
											  observers.HasCallToFuncGetArg = false;  
											}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 547 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction((yyvsp[(3) - (10)].lexeme), (yyvsp[(2) - (10)].isReference), (yyvsp[(1) - (10)].lexeme), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].token), (yyvsp[(10) - (10)].token),
												observers.GetScope(), observers.GetDeclaredNamespace(),
												observers.HasCallToFuncGetArg);
											  (yyval.statementList) = (yyvsp[(9) - (10)].statementList);
											  (yyval.statementList)->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 560 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 561 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);
											  
											  /* at the end of a class, see if any assigned properties were not explicitly
											   * defined and it so make them as defined
											   *  very important to use $$ as we want the returned to list to be modified
											   */
											  observers.DeclareAssignedProperties((yyval.statementList));
											  
											  /*
											   * parse out property and method PHP docs
											   */
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											  observers.SetCurrentClassName(NULL);
											}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 579 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 580 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 589 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 590 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 591 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, true); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 592 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 596 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 598 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 604 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 608 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 610 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 614 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 616 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 620 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
															}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 623 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 627 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 628 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 632 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 633 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 637 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 638 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 642 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 643 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 647 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 652 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 653 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 657 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 658 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 659 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 660 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 664 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 665 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 666 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 670 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 671 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 675 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 676 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 680 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 681 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 687 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 688 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 694 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 695 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 699 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 700 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 704 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = 0; }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 709 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 710 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 711 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 712 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 713 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 714 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 715 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 720 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 721 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 722 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array"), 0, 0); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("callable"), 0, 0); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 727 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 728 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) =  0; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 732 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 739 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  } 
																			}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 746 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 753 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 754 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 755 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 764 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 765 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 766 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 770 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 771 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 772 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 773 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 777 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 778 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 782 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 783 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 784 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 786 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); 
															  observers.HasCallToFuncGetArg = false;
															}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 789 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetDeclaredNamespace(),
																observers.HasCallToFuncGetArg); 
															  AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushFront(memberSymbol);
															  (yyval.statementList)->PushAll(&((yyvsp[(9) - (9)].classMemberSymbol)->MethodStatements));
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 803 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList)->PushFront((yyvsp[(2) - (3)].traitUse)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 807 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitUse), pelet::TraitUseClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 809 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitUse) = (yyvsp[(1) - (3)].traitUse)->AppendUse((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 813 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 814 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 818 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 819 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 823 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 824 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->Push((yyvsp[(2) - (2)].statement)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 828 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitInsteadOf); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 829 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitAlias); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 834 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(3) - (3)].traitInsteadOf)->SetMethodReference((yyvsp[(1) - (3)].traitAlias)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 838 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitInsteadOf), pelet::TraitInsteadOfClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 839 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(1) - (3)].traitInsteadOf)->AppendInsteadOf((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 843 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
														  (yyval.traitAlias)->SetMethodReference((yyvsp[(1) - (1)].lexeme), NULL, observers.GetScope(), observers.GetDeclaredNamespace()); 
														}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 846 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 850 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
																	  (yyval.traitAlias)->SetMethodReference((yyvsp[(3) - (3)].lexeme), (yyvsp[(1) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace());
																	}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 856 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (4)].traitAlias)->SetModifiers((yyvsp[(3) - (4)].lexeme))->SetAlias((yyvsp[(4) - (4)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 857 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (3)].traitAlias)->SetModifiers((yyvsp[(3) - (3)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 861 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 862 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 866 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 867 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 871 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 872 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 878 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 879 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 883 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 884 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 897 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 903 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 909 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 915 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 925 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 931 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 940 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 941 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 945 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 946 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 950 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 951 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 956 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 961 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 971 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 972 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 976 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 980 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 981 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    {
																			  /* 
																			   * since this parser only looks for defines or property assignments
																			   * and there could never be both in one expression we can return
																			   * just one
																			   */
																			  if ((yyvsp[(1) - (3)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (3)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (3)].statement);
																			  }
																			  else {
																				(yyval.statement) = (yyvsp[(3) - (3)].statement);
																			  } 
																			}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 994 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (4)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (4)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (4)].statement);
																			  }
																			}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 999 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (6)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (6)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (6)].statement);
																			  }
																			}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1004 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1005 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1006 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1007 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1008 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1009 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1010 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1011 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1012 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1013 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1014 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1015 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1016 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1017 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1018 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1019 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1020 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1021 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1022 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1023 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1024 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1025 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1026 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1027 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1028 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1029 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1030 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1031 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1032 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1033 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1034 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1035 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1036 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1037 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1038 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1039 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1040 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1041 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1042 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1043 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1044 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1045 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1046 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1047 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1048 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1049 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1050 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1051 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1054 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1056 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1057 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1058 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1059 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1060 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1061 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1063 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1064 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1065 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1066 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1067 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1068 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1069 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1070 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1071 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1073 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1074 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.EndAnonymousFunction();
																			  (yyval.statement) = 0; 
																			}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1078 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1079 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.EndAnonymousFunction(); 
																			  (yyval.statement) = 0; 
																			}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1089 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1090 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1094 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1095 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1096 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1097 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1101 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true; 
																						  }
																						  if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("func_get_arg"), 0) == 0) {
																							observers.HasCallToFuncGetArg = true;
																						  }
																						  if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("func_get_args"), 0) == 0) {
																							observers.HasCallToFuncGetArg = true;
																						  }
																						}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1112 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(1) - (5)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }
																						  observers.DoCaptureScalars = false;	
																						  observers.DoCaptureCallArguments = false; 
																						}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1126 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1127 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true; 
																						  }
																						  if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("func_get_arg"), 0) == 0) {
																							observers.HasCallToFuncGetArg = true;
																						  }
																						  if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("func_get_args"), 0) == 0) {
																							observers.HasCallToFuncGetArg = true;
																						  }
																						}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1138 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(2) - (6)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }	
																						  observers.DoCaptureScalars = false;
																						  observers.DoCaptureCallArguments = false; 
																						}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1151 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1153 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1155 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1157 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1159 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1163 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1164 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1165 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1166 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1170 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1171 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1172 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1176 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1177 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1182 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1183 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1187 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1188 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1192 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1196 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1197 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1198 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1202 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1203 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1204 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1208 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1209 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1213 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1222 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1231 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1240 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1241 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1242 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1243 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1244 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1245 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1246 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1247 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1248 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1252 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1253 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1254 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1255 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1256 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1257 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1258 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1259 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1260 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1261 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1265 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1269 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1270 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1271 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1272 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1273 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1274 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1275 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1276 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1277 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1281 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1282 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1286 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1287 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1298 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1299 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1315 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (1)].statement)->Type) {
													observers.DoCaptureProperties = true;	
												  }
												}
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1320 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureProperties = false; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1321 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { 
													if ((yyvsp[(1) - (7)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (7)].statement)->Type && (yyvsp[(4) - (7)].lexeme) && !(yyvsp[(5) - (7)].isMethod)) {
														AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
														
														/* need to cast because we are returning a statement pointer from this rule */
														(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeVariable((yyvsp[(4) - (7)].lexeme), (yyvsp[(4) - (7)].lexeme), false, (yyvsp[(4) - (7)].lexeme)->Pos, 
														observers.GetScope(), observers.GetDeclaredNamespace());
													}
													else {
														(yyval.statement) = 0; 
													}													
												}
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1333 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1337 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1338 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1342 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1346 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1347 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1351 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1355 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 1; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1356 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 0; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1357 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 0; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1362 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1366 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1367 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1371 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1380 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].lexeme) && (yyvsp[(1) - (1)].lexeme)->Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) == 0) {
										AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
										
										/* need to cast because we are returning a statement pointer from this rule */
										(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace());
									  }
									  else {
										(yyval.statement) = 0; 
									  }
									}
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1390 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1391 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1396 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1397 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1398 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1402 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1403 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1404 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1408 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);	}
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1409 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1413 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1414 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1423 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1424 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1425 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1429 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = observers.DoCaptureProperties ? ((yyvsp[(1) - (1)].lexeme)) : 0; }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1430 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1434 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1444 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1445 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1446 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1450 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1451 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1455 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1456 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 1457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 1458 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 1459 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 1460 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 1461 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 1462 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 1466 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 1467 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 1468 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 1469 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 1473 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 1474 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 1475 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 1476 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 1477 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 1478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 1482 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 1483 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 1484 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 1488 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 1489 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 1490 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 1491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 1496 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 1497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 1502 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 1503 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 1504 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 1509 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 1510 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 1517 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 1518 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 1522 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 1523 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;



/* Line 1806 of yacc.c  */
#line 7103 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"
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
#line 1526 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"

