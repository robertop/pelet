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
#define yyparse         php54_lint_parse
#define yylex           php54_lint_lex
#define yyerror         php54_lint_error
#define yylval          php54_lint_lval
#define yychar          php54_lint_char
#define yydebug         php54_lint_debug
#define yynerrs         php54_lint_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/pelet/src/Php54LintParser.y"


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
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE int

// so that both bison parses call the same lex function
#define php54_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php54_lint_error pelet::LintGrammarError



/* Line 268 of yacc.c  */
#line 124 "/home/roberto/workspace/pelet/src/Php54LintParser.cpp"

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
#line 295 "/home/roberto/workspace/pelet/src/Php54LintParser.cpp"

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
#define YYLAST   7816

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  443
/* YYNRULES -- Number of states.  */
#define YYNSTATES  910

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
      21,    26,    30,    36,    41,    45,    48,    52,    54,    56,
      60,    63,    68,    74,    79,    82,    83,    85,    87,    89,
      94,    96,    99,   103,   111,   122,   128,   136,   146,   152,
     155,   159,   162,   166,   169,   173,   177,   181,   185,   189,
     191,   194,   200,   209,   218,   224,   226,   240,   244,   248,
     250,   251,   253,   256,   265,   267,   271,   273,   275,   277,
     278,   280,   290,   298,   305,   307,   310,   312,   315,   316,
     319,   321,   322,   325,   326,   329,   331,   335,   336,   339,
     341,   344,   346,   351,   353,   358,   360,   365,   369,   375,
     379,   384,   389,   395,   396,   402,   407,   409,   411,   413,
     418,   419,   426,   427,   435,   436,   439,   440,   444,   446,
     447,   450,   454,   460,   465,   470,   476,   484,   491,   492,
     494,   496,   498,   500,   501,   503,   505,   508,   512,   516,
     521,   525,   527,   529,   532,   537,   541,   547,   549,   553,
     556,   557,   561,   564,   566,   575,   579,   581,   585,   587,
     591,   592,   594,   596,   599,   602,   605,   609,   611,   615,
     617,   619,   623,   628,   632,   633,   635,   637,   641,   643,
     645,   646,   648,   650,   653,   655,   657,   659,   661,   663,
     665,   669,   675,   677,   681,   687,   692,   696,   698,   699,
     701,   705,   707,   710,   712,   717,   721,   724,   726,   728,
     729,   731,   735,   742,   746,   751,   758,   761,   765,   769,
     773,   777,   781,   785,   789,   793,   797,   801,   805,   808,
     811,   814,   817,   821,   825,   829,   833,   837,   841,   845,
     849,   853,   857,   861,   865,   869,   873,   877,   881,   884,
     887,   890,   893,   897,   901,   905,   909,   913,   917,   921,
     925,   929,   933,   935,   940,   946,   951,   953,   956,   959,
     962,   965,   968,   971,   974,   977,   980,   982,   987,   991,
     995,   998,  1008,  1019,  1021,  1022,  1027,  1031,  1036,  1038,
    1041,  1046,  1053,  1059,  1066,  1073,  1080,  1087,  1092,  1094,
    1096,  1100,  1103,  1105,  1109,  1112,  1114,  1116,  1121,  1123,
    1126,  1127,  1130,  1131,  1134,  1138,  1139,  1141,  1143,  1144,
    1148,  1150,  1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,
    1168,  1172,  1175,  1177,  1179,  1183,  1186,  1189,  1192,  1197,
    1201,  1203,  1205,  1209,  1211,  1213,  1215,  1219,  1222,  1224,
    1228,  1232,  1234,  1235,  1238,  1239,  1241,  1247,  1251,  1255,
    1257,  1259,  1261,  1263,  1265,  1267,  1273,  1275,  1278,  1279,
    1283,  1288,  1293,  1297,  1299,  1301,  1302,  1304,  1307,  1311,
    1315,  1317,  1322,  1327,  1329,  1331,  1333,  1335,  1338,  1340,
    1345,  1350,  1352,  1354,  1359,  1360,  1362,  1364,  1366,  1371,
    1376,  1378,  1380,  1384,  1386,  1389,  1393,  1395,  1397,  1402,
    1403,  1404,  1407,  1413,  1417,  1421,  1423,  1430,  1435,  1440,
    1443,  1446,  1449,  1451,  1454,  1456,  1461,  1465,  1469,  1476,
    1480,  1482,  1484,  1486,  1491,  1496,  1499,  1502,  1507,  1510,
    1513,  1515,  1519,  1523
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   168,    -1,   175,    -1,   176,
      -1,   115,   151,   152,   153,    -1,   126,   161,   153,    -1,
     126,   161,   149,   160,   150,    -1,   126,   149,   160,   150,
      -1,   144,   163,   153,    -1,   165,   153,    -1,   163,     8,
     164,    -1,   164,    -1,   161,    -1,   161,    74,   136,    -1,
     128,   161,    -1,   128,   161,    74,   136,    -1,   165,     8,
     136,    13,   252,    -1,    85,   136,    13,   252,    -1,   166,
     167,    -1,    -1,   168,    -1,   175,    -1,   176,    -1,   115,
     151,   152,   153,    -1,   169,    -1,   136,    26,    -1,   149,
     166,   150,    -1,   116,   151,   258,   152,   168,   196,   198,
      -1,   116,   151,   258,   152,    26,   166,   197,   199,    66,
     153,    -1,   147,   151,   258,   152,   195,    -1,    93,   168,
     147,   151,   258,   152,   153,    -1,   109,   151,   230,   153,
     230,   153,   230,   152,   188,    -1,   138,   151,   258,   152,
     192,    -1,    76,   153,    -1,    76,   258,   153,    -1,    87,
     153,    -1,    87,   258,   153,    -1,   134,   153,    -1,   134,
     237,   153,    -1,   134,   262,   153,    -1,   113,   205,   153,
      -1,    72,   207,   153,    -1,    97,   229,   153,    -1,   118,
      -1,   258,   153,    -1,   143,   151,   173,   152,   153,    -1,
     110,   151,   262,    74,   187,   186,   152,   189,    -1,   110,
     151,   237,    74,   262,   186,   152,   189,    -1,    89,   151,
     191,   152,   190,    -1,   153,    -1,   142,   149,   166,   150,
      79,   151,   243,   146,   152,   149,   166,   150,   170,    -1,
     139,   258,   153,    -1,   114,   136,   153,    -1,   171,    -1,
      -1,   172,    -1,   171,   172,    -1,    79,   151,   243,   146,
     152,   149,   166,   150,    -1,   174,    -1,   173,     8,   174,
      -1,   262,    -1,   178,    -1,   179,    -1,    -1,    31,    -1,
     238,   177,   136,   151,   200,   152,   149,   166,   150,    -1,
     180,   136,   181,   184,   149,   208,   150,    -1,   182,   136,
     183,   149,   208,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   243,    -1,   120,
      -1,    -1,   107,   185,    -1,    -1,   117,   185,    -1,   243,
      -1,   185,     8,   243,    -1,    -1,    96,   187,    -1,   262,
      -1,    31,   262,    -1,   168,    -1,    26,   166,   101,   153,
      -1,   168,    -1,    26,   166,   102,   153,    -1,   168,    -1,
      26,   166,   100,   153,    -1,   136,    13,   252,    -1,   191,
       8,   136,    13,   252,    -1,   149,   193,   150,    -1,   149,
     153,   193,   150,    -1,    26,   193,   104,   153,    -1,    26,
     153,   193,   104,   153,    -1,    -1,   193,    78,   258,   194,
     166,    -1,   193,    90,   194,   166,    -1,    26,    -1,   153,
      -1,   168,    -1,    26,   166,   105,   153,    -1,    -1,   196,
      64,   151,   258,   152,   168,    -1,    -1,   197,    64,   151,
     258,   152,    26,   166,    -1,    -1,    65,   168,    -1,    -1,
      65,    26,   166,    -1,   201,    -1,    -1,   202,   146,    -1,
     202,    31,   146,    -1,   202,    31,   146,    13,   252,    -1,
     202,   146,    13,   252,    -1,   201,     8,   202,   146,    -1,
     201,     8,   202,    31,   146,    -1,   201,     8,   202,    31,
     146,    13,   252,    -1,   201,     8,   202,   146,    13,   252,
      -1,    -1,    73,    -1,    77,    -1,   243,    -1,   204,    -1,
      -1,   237,    -1,   262,    -1,    31,   260,    -1,   204,     8,
     237,    -1,   204,     8,   262,    -1,   204,     8,    31,   260,
      -1,   205,     8,   206,    -1,   206,    -1,   146,    -1,   155,
     259,    -1,   155,   149,   258,   150,    -1,   207,     8,   146,
      -1,   207,     8,   146,    13,   252,    -1,   146,    -1,   146,
      13,   252,    -1,   208,   209,    -1,    -1,   223,   227,   153,
      -1,   228,   153,    -1,   210,    -1,   224,   238,   177,   136,
     151,   200,   152,   222,    -1,   144,   211,   212,    -1,   243,
      -1,   211,     8,   243,    -1,   153,    -1,   149,   213,   150,
      -1,    -1,   214,    -1,   215,    -1,   214,   215,    -1,   216,
     153,    -1,   220,   153,    -1,   219,   119,   217,    -1,   243,
      -1,   217,     8,   243,    -1,   136,    -1,   219,    -1,   243,
     133,   136,    -1,   218,    74,   221,   136,    -1,   218,    74,
     226,    -1,    -1,   226,    -1,   153,    -1,   149,   166,   150,
      -1,   225,    -1,   145,    -1,    -1,   225,    -1,   226,    -1,
     225,   226,    -1,    67,    -1,    68,    -1,    69,    -1,    72,
      -1,    71,    -1,    70,    -1,   227,     8,   146,    -1,   227,
       8,   146,    13,   252,    -1,   146,    -1,   146,    13,   252,
      -1,   228,     8,   136,    13,   252,    -1,    85,   136,    13,
     252,    -1,   229,     8,   258,    -1,   258,    -1,    -1,   231,
      -1,   231,     8,   258,    -1,   258,    -1,   232,   264,    -1,
     264,    -1,   233,    61,   276,   157,    -1,    61,   276,   157,
      -1,   233,   232,    -1,   233,    -1,   232,    -1,    -1,   234,
      -1,    63,   244,   250,    -1,   123,   151,   281,   152,    13,
     258,    -1,   262,    13,   258,    -1,   262,    13,    31,   262,
      -1,   262,    13,    31,    63,   244,   250,    -1,    62,   258,
      -1,   262,    24,   258,    -1,   262,    23,   258,    -1,   262,
      22,   258,    -1,   262,    21,   258,    -1,   262,    20,   258,
      -1,   262,    19,   258,    -1,   262,    18,   258,    -1,   262,
      17,   258,    -1,   262,    16,   258,    -1,   262,    15,   258,
      -1,   262,    14,   258,    -1,   261,    59,    -1,    59,   261,
      -1,   261,    58,    -1,    58,   261,    -1,   258,    27,   258,
      -1,   258,    28,   258,    -1,   258,     9,   258,    -1,   258,
      11,   258,    -1,   258,    10,   258,    -1,   258,    29,   258,
      -1,   258,    31,   258,    -1,   258,    30,   258,    -1,   258,
      44,   258,    -1,   258,    42,   258,    -1,   258,    43,   258,
      -1,   258,    45,   258,    -1,   258,    46,   258,    -1,   258,
      47,   258,    -1,   258,    41,   258,    -1,   258,    40,   258,
      -1,    42,   258,    -1,    43,   258,    -1,    48,   258,    -1,
      50,   258,    -1,   258,    33,   258,    -1,   258,    32,   258,
      -1,   258,    35,   258,    -1,   258,    34,   258,    -1,   258,
      36,   258,    -1,   258,    39,   258,    -1,   258,    37,   258,
      -1,   258,    38,   258,    -1,   258,    49,   244,    -1,   151,
     258,   152,    -1,   236,    -1,   151,   236,   152,   235,    -1,
     258,    25,   258,    26,   258,    -1,   258,    25,    26,   258,
      -1,   288,    -1,    57,   258,    -1,    56,   258,    -1,    55,
     258,    -1,    54,   258,    -1,    53,   258,    -1,    52,   258,
      -1,    51,   258,    -1,   106,   248,    -1,    60,   258,    -1,
     254,    -1,    73,   151,   283,   152,    -1,    61,   283,   157,
      -1,   154,   249,   154,    -1,    12,   258,    -1,   238,   177,
     151,   200,   152,   239,   149,   166,   150,    -1,    72,   238,
     177,   151,   200,   152,   239,   149,   166,   150,    -1,   112,
      -1,    -1,   144,   151,   240,   152,    -1,   240,     8,   146,
      -1,   240,     8,    31,   146,    -1,   146,    -1,    31,   146,
      -1,   161,   151,   203,   152,    -1,   126,   128,   161,   151,
     203,   152,    -1,   128,   161,   151,   203,   152,    -1,   242,
     133,   136,   151,   203,   152,    -1,   242,   133,   268,   151,
     203,   152,    -1,   270,   133,   136,   151,   203,   152,    -1,
     270,   133,   268,   151,   203,   152,    -1,   268,   151,   203,
     152,    -1,    72,    -1,   161,    -1,   126,   128,   161,    -1,
     128,   161,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   242,    -1,   245,    -1,   273,   130,   277,   246,
      -1,   273,    -1,   246,   247,    -1,    -1,   130,   277,    -1,
      -1,   151,   152,    -1,   151,   258,   152,    -1,    -1,    99,
      -1,   285,    -1,    -1,   151,   203,   152,    -1,   124,    -1,
      92,    -1,    86,    -1,   122,    -1,   108,    -1,    91,    -1,
     141,    -1,   125,    -1,   111,    -1,   127,    -1,   135,    99,
     103,    -1,   135,   103,    -1,   251,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,    42,   252,    -1,    43,
     252,    -1,    73,   151,   255,   152,    -1,    61,   255,   157,
      -1,   253,    -1,    82,    -1,   242,   133,   136,    -1,   137,
      -1,   290,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   251,    -1,   156,   285,   156,    -1,   135,   285,
     103,    -1,    82,    -1,    -1,   257,   256,    -1,    -1,     8,
      -1,   257,     8,   252,    96,   252,    -1,   257,     8,   252,
      -1,   252,    96,   252,    -1,   252,    -1,   259,    -1,   237,
      -1,   262,    -1,   262,    -1,   262,    -1,   272,   130,   277,
     267,   263,    -1,   272,    -1,   263,   264,    -1,    -1,   130,
     277,   267,    -1,   265,    61,   276,   157,    -1,   266,    61,
     276,   157,    -1,   151,   203,   152,    -1,   266,    -1,   265,
      -1,    -1,   274,    -1,   280,   274,    -1,   242,   133,   268,
      -1,   270,   133,   268,    -1,   274,    -1,   271,    61,   276,
     157,    -1,   241,    61,   276,   157,    -1,   273,    -1,   271,
      -1,   241,    -1,   274,    -1,   280,   274,    -1,   269,    -1,
     274,    61,   276,   157,    -1,   274,   149,   258,   150,    -1,
     275,    -1,   146,    -1,   155,   149,   258,   150,    -1,    -1,
     258,    -1,   278,    -1,   268,    -1,   278,    61,   276,   157,
      -1,   278,   149,   258,   150,    -1,   279,    -1,   136,    -1,
     149,   258,   150,    -1,   155,    -1,   280,   155,    -1,   281,
       8,   282,    -1,   282,    -1,   262,    -1,   123,   151,   281,
     152,    -1,    -1,    -1,   284,   256,    -1,   284,     8,   258,
      96,   258,    -1,   284,     8,   258,    -1,   258,    96,   258,
      -1,   258,    -1,   284,     8,   258,    96,    31,   260,    -1,
     284,     8,    31,   260,    -1,   258,    96,    31,   260,    -1,
      31,   260,    -1,   285,   286,    -1,   285,    99,    -1,   286,
      -1,    99,   286,    -1,   146,    -1,   146,    61,   287,   157,
      -1,   146,   130,   136,    -1,    95,   258,   150,    -1,    95,
     137,    61,   258,   157,   150,    -1,    88,   262,   150,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   151,   289,   152,
      -1,    98,   151,   262,   152,    -1,     7,   258,    -1,     6,
     258,    -1,     5,   151,   258,   152,    -1,     4,   258,    -1,
       3,   258,    -1,   262,    -1,   289,     8,   262,    -1,   242,
     133,   136,    -1,   270,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   227,   227,   231,   232,   236,   237,   241,   242,   243,
     244,   245,   246,   248,   250,   251,   255,   257,   261,   262,
     263,   264,   268,   269,   273,   274,   278,   279,   280,   281,
     285,   286,   290,   291,   292,   293,   294,   295,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   321,   324,   325,   326,   330,   331,   335,
     336,   340,   341,   345,   350,   351,   355,   359,   363,   366,
     368,   372,   378,   381,   387,   388,   389,   390,   393,   395,
     400,   403,   405,   409,   411,   416,   417,   420,   422,   426,
     427,   431,   432,   436,   437,   441,   442,   446,   447,   451,
     452,   453,   454,   457,   459,   460,   464,   465,   469,   470,
     473,   475,   478,   480,   483,   485,   488,   490,   494,   495,
     500,   501,   502,   503,   504,   505,   506,   507,   510,   512,
     513,   514,   518,   519,   523,   524,   525,   526,   527,   528,
     532,   533,   537,   538,   539,   543,   544,   545,   546,   550,
     551,   555,   556,   557,   558,   564,   569,   570,   575,   576,
     581,   583,   587,   588,   592,   593,   597,   602,   603,   607,
     608,   612,   616,   617,   620,   622,   626,   627,   631,   632,
     635,   637,   641,   642,   646,   647,   648,   649,   650,   651,
     655,   656,   657,   658,   662,   664,   668,   669,   672,   674,
     678,   679,   683,   684,   688,   689,   693,   694,   695,   698,
     700,   704,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   763,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   783,   788,   791,   793,   797,   798,   799,   800,
     804,   806,   809,   811,   813,   815,   817,   819,   824,   825,
     826,   827,   831,   832,   833,   837,   838,   842,   844,   848,
     849,   853,   856,   858,   859,   862,   864,   865,   868,   870,
     874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   902,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   917,   919,   922,   924,   928,   929,   930,   931,
     935,   936,   940,   944,   948,   952,   956,   960,   961,   965,
     970,   971,   975,   979,   980,   981,   985,   986,   990,   991,
     995,   999,  1000,  1004,  1005,  1006,  1010,  1011,  1012,  1016,
    1017,  1018,  1022,  1023,  1026,  1028,  1032,  1033,  1037,  1038,
    1039,  1043,  1044,  1048,  1049,  1053,  1054,  1058,  1059,  1060,
    1063,  1065,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1080,  1081,  1082,  1083,  1087,  1088,  1089,  1090,  1091,  1092,
    1096,  1097,  1098,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1112,  1113,  1117,  1118
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
  "top_statement", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement",
  "unticked_class_declaration_statement", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "trait_use_statement",
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
     162,   162,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   167,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   171,   171,   172,   173,   173,   174,   175,   176,   177,
     177,   178,   179,   179,   180,   180,   180,   180,   181,   181,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   201,   201,   201,   201,   201,   202,   202,
     202,   202,   203,   203,   204,   204,   204,   204,   204,   204,
     205,   205,   206,   206,   206,   207,   207,   207,   207,   208,
     208,   209,   209,   209,   209,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   217,   217,   218,
     218,   219,   220,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     227,   227,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   234,   235,
     235,   236,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   238,   239,   239,   240,   240,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   242,   242,
     242,   242,   243,   243,   243,   244,   244,   245,   245,   246,
     246,   247,   248,   248,   248,   249,   249,   249,   250,   250,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   255,   255,   256,   256,   257,   257,   257,   257,
     258,   258,   259,   260,   261,   262,   262,   263,   263,   264,
     265,   265,   266,   267,   267,   267,   268,   268,   269,   269,
     270,   271,   271,   272,   272,   272,   273,   273,   273,   274,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     278,   279,   279,   280,   280,   281,   281,   282,   282,   282,
     283,   283,   284,   284,   284,   284,   284,   284,   284,   284,
     285,   285,   285,   285,   286,   286,   286,   286,   286,   286,
     287,   287,   287,   288,   288,   288,   288,   288,   288,   288,
     289,   289,   290,   290
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     3,     7,    10,     5,     7,     9,     5,     2,
       3,     2,     3,     2,     3,     3,     3,     3,     3,     1,
       2,     5,     8,     8,     5,     1,    13,     3,     3,     1,
       0,     1,     2,     8,     1,     3,     1,     1,     1,     0,
       1,     9,     7,     6,     1,     2,     1,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     5,     4,     1,     1,     1,     4,
       0,     6,     0,     7,     0,     2,     0,     3,     1,     0,
       2,     3,     5,     4,     4,     5,     7,     6,     0,     1,
       1,     1,     1,     0,     1,     1,     2,     3,     3,     4,
       3,     1,     1,     2,     4,     3,     5,     1,     3,     2,
       0,     3,     2,     1,     8,     3,     1,     3,     1,     3,
       0,     1,     1,     2,     2,     2,     3,     1,     3,     1,
       1,     3,     4,     3,     0,     1,     1,     3,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     3,     5,     4,     3,     1,     0,     1,
       3,     1,     2,     1,     4,     3,     2,     1,     1,     0,
       1,     3,     6,     3,     4,     6,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     4,     5,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     4,     3,     3,
       2,     9,    10,     1,     0,     4,     3,     4,     1,     2,
       4,     6,     5,     6,     6,     6,     6,     4,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     4,     1,     2,
       0,     2,     0,     2,     3,     0,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     1,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     5,     1,     2,     0,     3,
       4,     4,     3,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     4,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     1,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     4,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     2,     2,     4,     2,     2,
       1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410,     0,     0,     0,     0,   298,
       0,     0,    74,   351,     0,   322,     0,     0,   325,   321,
       0,     0,     0,   312,   324,     0,     0,   328,   283,     0,
       0,     0,     0,    49,    80,     0,   323,     0,   320,   327,
       0,   329,     0,     0,     0,     5,   343,     0,     0,    76,
     326,     0,     0,     0,   392,     0,    25,     0,    55,   315,
     403,     0,   345,     3,     0,     7,    30,     8,     9,    67,
      68,     0,     0,   262,   361,    69,   385,     0,   348,   276,
       0,   360,     0,   362,     0,   388,     0,   384,   366,   383,
     386,   391,     0,   266,   344,   298,     0,     5,    69,   439,
     438,     0,   436,   435,   280,   248,   249,   250,   251,   273,
     272,   271,   270,   269,   268,   267,   298,     0,     0,   299,
       0,   231,   364,     0,   229,   275,     0,   415,     0,   354,
     216,     0,     0,   299,   305,   318,   306,     0,   308,   386,
       0,    77,    75,   147,     0,    69,   410,    39,     0,     0,
      41,     0,     0,     0,     0,   197,     0,     0,   274,   198,
       0,   142,     0,     0,   141,     0,     0,     0,     0,   409,
       0,     4,     0,   347,    43,   361,     0,   362,     0,     0,
       0,   331,   424,     0,   422,    31,     0,     0,    25,     0,
       0,    18,     0,    17,     0,     0,   262,     0,   316,     0,
     317,     0,     0,     0,     0,   133,     0,    15,    78,    81,
      70,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,   230,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   394,     0,   394,
       0,   404,   387,     0,     0,     0,   301,     0,     0,   419,
     363,     0,   278,   355,   411,     0,   301,     0,   133,   211,
       0,     0,   387,     0,     0,    47,     0,     0,    40,     0,
      42,     0,     0,     0,     0,    48,     0,   313,     0,     0,
     199,   201,   361,   362,     0,   143,   362,     0,    46,    58,
       0,     0,   440,     0,     0,   407,     0,   406,   346,     0,
       4,    11,   133,    44,    45,     0,   343,     0,   330,   423,
       0,     0,   421,   350,   420,     0,    57,     0,     0,    64,
      66,    20,     0,     0,    14,     0,     0,    32,    24,    26,
      27,    28,   209,   261,   279,     0,   349,     6,     0,     0,
     132,   361,   362,     0,     0,    83,     0,     0,     0,   128,
     395,     0,   442,   378,   376,     0,   234,   236,   235,     0,
       0,   232,   233,   237,   239,   238,   253,   252,   255,   254,
     256,   258,   259,   257,   247,   246,   241,   242,   240,   243,
     244,   245,   260,     0,   213,   227,   226,   225,   224,   223,
     222,   221,   220,   219,   218,   217,     0,   443,   379,     0,
     401,     0,   397,   375,   396,   400,     0,     0,   437,   300,
       0,     0,     0,   414,     0,   413,   300,   378,     0,   379,
     310,     0,     0,   352,     0,   341,     0,     0,     0,   333,
       0,   332,   148,   340,   145,   128,   277,    23,     0,     0,
       0,     0,   196,   434,   314,   198,     0,     0,     0,     0,
     140,    10,     0,     0,   433,   409,   409,     0,   133,    13,
       0,     0,   429,     0,   427,   431,   430,   432,     0,   426,
       0,     0,     0,     0,     0,    19,    16,     0,     0,   394,
       0,   208,   207,   210,   263,   203,   393,   136,   290,     0,
       0,     0,     0,   302,    79,     0,     0,    82,    85,   150,
     128,   129,   130,     0,   118,     0,   131,   382,   133,   133,
     377,   265,     0,     0,   214,   297,   133,   133,   381,     0,
     133,   374,   373,   368,   394,     0,   389,   390,   418,   417,
       0,   319,   307,   336,   337,   359,     0,   354,   352,     0,
     335,     0,     0,     0,     0,    97,     0,    25,    95,    54,
       0,     0,   200,    87,     0,    87,    89,   144,    25,   110,
     441,     0,   405,     0,     0,    12,   292,     0,   425,   103,
     103,    38,     0,    65,    51,    21,    25,   108,    35,     0,
       0,   375,   202,   394,   206,     0,   361,   362,    22,     0,
     304,    84,   150,     0,   180,     0,   284,   128,     0,   120,
       0,     0,   264,   318,     0,     0,   402,     0,   394,   394,
     365,     0,     0,     0,   412,     0,   309,     0,   339,   355,
     353,     0,   334,   342,   146,   284,     0,     0,     0,   198,
       0,     0,    90,     0,   112,   114,   408,   212,   291,     0,
     103,     0,   103,     0,     0,     0,    29,   205,   369,     0,
     139,   303,   180,    86,   184,   185,   186,   189,   188,   187,
       0,     0,   179,    73,   149,   153,     0,     0,   178,   182,
       0,     0,     0,     0,     0,   121,     0,   293,   294,   215,
     295,   296,   372,     0,     0,   367,   398,   399,   416,   311,
     358,   357,   338,     0,    98,     0,    36,     0,    88,     0,
       0,   116,     0,     0,    33,   428,     0,     0,     0,     0,
       0,    99,     0,     0,   204,    72,     0,     0,   156,   192,
       0,    69,   183,     0,   152,    25,     0,    25,     0,   124,
       0,   123,   370,   371,     0,    25,    96,     0,    25,    93,
      53,    52,     0,     0,     0,     0,   115,     0,     0,   106,
     107,    25,   101,   100,     0,   109,     0,     0,   160,   158,
     155,     0,     0,   151,     0,     0,     0,     0,   288,     0,
       0,   125,     0,   122,   356,     0,    25,    91,    37,     0,
       0,    25,     0,     0,   102,    25,   105,     0,   195,   157,
       5,     0,   161,   162,     0,     0,   170,     0,     0,   193,
     190,     0,     0,    71,   289,     0,   285,   281,     0,   127,
     282,     0,     0,     0,   117,    34,     0,   104,    25,   159,
     163,   164,   174,     0,   165,     0,     0,   128,   194,     0,
     286,   126,     0,    94,     0,   111,     0,     0,   173,   166,
     167,   171,   191,     0,   287,    92,    25,    60,   172,     0,
       0,   113,     0,    56,    59,    61,   168,    25,   176,   154,
       0,    62,     0,     0,   177,     0,     0,    25,     0,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   212,   213,    84,   215,   368,
     369,    86,   893,   894,   895,   358,   359,   370,   371,   231,
      89,    90,    91,   385,    92,   387,   536,   537,   671,   595,
     818,   780,   589,   312,   611,   681,   791,   618,   675,   741,
     744,   784,   543,   544,   545,   379,   380,   183,   184,   164,
     634,   704,   705,   757,   800,   831,   832,   833,   834,   879,
     835,   836,   837,   877,   899,   706,   707,   708,   709,   760,
     710,   174,   319,   320,   521,   522,   523,   524,    93,    94,
     118,   713,   809,    96,    97,   546,   155,   156,   572,   656,
     178,   219,   299,    98,   575,   473,    99,   576,   294,   577,
     100,   101,   289,   102,   103,   650,   525,   561,   562,   563,
     104,   105,   106,   107,   108,   109,   110,   111,   391,   443,
     444,   445,   112,   336,   337,   148,   149,   203,   204,   508,
     113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -692
static const yytype_int16 yypact[] =
{
    -692,    25,  1916,  -692,  6508,  6508,   -32,  6508,  6508,  6508,
    6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,
    6508,   225,   225,  6508,  4996,  6508,   242,    62,    71,   -24,
      90,  5122,  -692,  -692,    48,  -692,  5248,    96,  -692,  -692,
    4842,  6508,   117,   136,  -692,   139,   152,  -692,  -692,   -22,
      67,   159,   172,  -692,  -692,   203,  -692,   206,  -692,  -692,
     168,  -692,   108,  5374,   334,   315,  -692,   248,  6508,  -692,
    -692,   228,   266,    18,  -692,   267,  -692,  6508,  -692,   189,
     244,   332,   -41,  -692,    14,  -692,  -692,  -692,  -692,  -692,
    -692,   276,   285,  -692,  -692,   397,   363,   305,  -692,  -692,
    6767,  -692,    13,  1002,   288,  -692,   317,   383,   321,  -692,
      60,  -692,    59,  -692,  -692,   342,   329,  -692,   397,  7690,
    7690,  6508,  7690,  7690,  1748,  -692,  -692,   410,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,   344,   108,   -17,
     348,  -692,  -692,   351,  -692,  -692,   225,  7565,   320,   479,
    -692,   367,   108,   372,   368,   365,  -692,   369,   387,     9,
      59,  -692,  -692,   505,    21,   397,  4996,  -692,  6808,   510,
    -692,  6849,   388,   378,    22,  7690,   225,  5500,  -692,  6508,
    6508,  -692,   190,    23,  -692,   381,   374,  6508,   225,   256,
     108,  -692,    93,    97,  -692,   386,  7690,   742,   225,  6634,
     183,  -692,    -7,   357,  -692,  -692,  6508,  6894,  -692,   225,
     108,   -19,    24,  -692,  6508,  2070,   379,  6935,    -9,   384,
     391,  6508,    -9,   239,   405,  5626,   407,  -692,   437,   438,
    -692,   -71,  6508,   194,  6508,  6508,  6508,  5752,  6508,  6508,
    6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,
    6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,  6508,   242,
    -692,  -692,  -692,  5878,  6508,  6508,  6508,  6508,  6508,  6508,
    6508,  6508,  6508,  6508,  6508,  5626,   226,  6508,   166,  6508,
    6508,   244,    55,   403,  6976,   108,    80,   294,   373,  -692,
    -692,  6004,  -692,  6130,  -692,   108,   372,   118,  5626,  -692,
     118,   166,     6,  1423,   411,  -692,   409,   404,  -692,  1423,
    -692,   551,    20,   415,  6508,  -692,   416,  -692,  7021,   417,
     554,  7690,   495,   972,  6508,  -692,  -692,   -22,  -692,  -692,
     418,  7063,  -692,    31,   425,  -692,    33,  -692,   123,  1608,
    -692,  -692,  5626,  -692,  -692,   427,   524,  7315,  -692,  -692,
     114,   451,  -692,  -692,  -692,  7104,  -692,  2224,    35,  -692,
    -692,    -8,   452,    18,  -692,  7147,   439,  -692,  -692,  -692,
    -692,  -692,    -1,  -692,  -692,  7356,  -692,  -692,   225,   445,
     581,    36,    82,   586,   224,   485,   224,   454,   455,    74,
    7690,   450,   457,   459,     6,    59,  7730,  7767,  1748,  6508,
    7649,  2055,  2208,  2361,  2514,  2667,  2821,  2821,  2821,  2821,
    1196,   795,   795,   795,   506,   506,   549,   549,   549,   410,
     410,   410,  -692,   -11,  1748,  1748,  1748,  1748,  1748,  1748,
    1748,  1748,  1748,  1748,  1748,  1748,   460,   463,   467,   462,
    -692,  6508,  -692,   469,    47,  -692,   465,  7399,  -692,   101,
     457,   463,   225,  7690,   225,  7606,   372,  -692,   471,  -692,
    -692,  1423,  1423,  1423,   473,  -692,   483,   108,    98,   192,
     493,  -692,  -692,  -692,   614,    74,  -692,  -692,  1423,   492,
    4072,  6508,  7690,  -692,  -692,  6508,  6508,   225,     2,  7441,
    -692,  -692,  4226,   225,  -692,   256,   256,   616,  5626,  -692,
    1762,   478,  -692,  6508,  -692,  -692,  -692,  -692,   474,  -692,
      11,   553,   225,   482,   500,  -692,  -692,  4380,   486,  6508,
     166,   511,     1,  -692,  -692,  -692,  -692,  -692,  -692,  6256,
    1423,   514,   108,   372,  -692,   224,   494,   637,  -692,  -692,
      74,  -692,  -692,   496,   643,     3,  -692,  -692,  5626,  5626,
       6,  1902,  6508,   242,  -692,  -692,  5626,  5626,  -692,  7482,
    5626,   591,   592,  -692,  6508,  6508,  -692,  -692,  -692,  -692,
    6382,  -692,   525,  -692,  -692,   558,   499,   649,  1423,   108,
     261,   556,   526,  1423,   509,  -692,   650,  -692,  -692,  -692,
    7189,   515,  7690,   571,   225,   571,  -692,  -692,  -692,  -692,
    -692,    39,  -692,  6508,   517,  -692,  -692,  1596,  -692,   520,
     521,  -692,   519,  -692,  -692,  -692,  -692,  -692,  -692,   522,
     523,   469,  -692,  6508,   511,   225,    40,   944,  -692,   108,
     372,   637,  -692,   224,   148,   527,   532,   109,   531,   665,
     533,   535,  1902,   365,   536,   538,  -692,   540,  6508,  6508,
     511,   537,  7523,   225,  7690,   166,  -692,  1423,  -692,  1423,
    -692,   541,   268,  -692,  -692,   532,  1423,  2378,   542,  6508,
       2,   550,  -692,   552,  3918,   158,  -692,  1748,  -692,   534,
    -692,   -15,  -692,   -14,   224,  2532,  -692,  -692,  -692,   544,
    -692,   372,   338,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
     567,   224,  -692,  -692,  -692,  -692,   560,   342,   394,  -692,
      27,   559,   562,   561,    15,   696,  1423,  -692,  -692,  -692,
    -692,  -692,  -692,   557,   563,  -692,  -692,  -692,  -692,  -692,
    -692,   615,  -692,   568,  -692,   566,  -692,   564,  -692,  4534,
    4534,   311,   570,  4842,  -692,  -692,   150,  6508,    -3,   569,
      -5,  -692,   577,   573,  -692,  -692,   714,    10,  -692,   715,
      28,   397,  -692,   593,  -692,  -692,    52,  -692,   585,   721,
    1423,  -692,  -692,  -692,  1423,  -692,  -692,  4688,  -692,  -692,
    -692,  -692,   584,   711,   672,  6508,  -692,   587,  1241,  -692,
    -692,  -692,  -692,  -692,   589,  -692,  1423,   224,   385,  -692,
    -692,  1423,   596,  -692,   603,   730,  2686,   600,  -692,    42,
    2840,   734,  1423,  -692,  -692,  2994,  -692,  -692,  -692,  3148,
    6508,  -692,   598,  7230,  -692,  -692,  3918,   604,  -692,  -692,
     678,   618,   385,  -692,   617,   695,   652,   619,   640,  -692,
     761,   624,  1423,  -692,  -692,    53,  -692,  -692,  1423,  -692,
    -692,  3302,   626,  7273,  3918,  -692,  4842,  3918,  -692,  -692,
    -692,  -692,   512,   224,  -692,   644,  1423,    74,  -692,   638,
    -692,  -692,   630,  -692,   759,  -692,  3456,   651,   653,   778,
    -692,  -692,  -692,   636,  -692,  -692,  -692,   712,  -692,   224,
     210,  3918,   642,  -692,   712,  -692,  -692,  -692,  -692,  -692,
     224,  -692,  3610,   648,  -692,   645,   646,  -692,  3764,  -692
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -692,  -692,  -175,   -20,  -692,  -692,   433,  -692,  -200,  -692,
       5,  -692,  -692,  -692,   -96,  -692,   287,     7,     8,  -114,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,   270,   207,   133,
    -692,    66,  -692,  -692,  -692,  -516,    19,  -692,  -692,  -692,
    -692,  -692,  -463,  -692,   173,  -249,  -692,  -692,   484,  -692,
     177,  -692,  -692,  -692,  -692,  -692,  -692,   -18,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -691,  -692,
    -692,  -692,  -474,  -692,   296,  -692,  -692,  -692,   739,    44,
      -2,   154,  -692,  -692,   237,  -328,  -244,  -692,  -692,  -692,
    -692,  -692,   178,  -130,   732,  -692,  -692,   245,   249,  -692,
     907,   647,  -340,   393,   913,  -692,  -497,  -692,  -692,   204,
    -219,  -692,   866,  -692,  -692,   -23,   -21,  -692,  -258,  -288,
    -692,  -692,    -6,   335,   331,   679,  -692,   243,   271,  -692,
    -692,  -692,  -692
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -381
static const yytype_int16 yytable[] =
{
      95,   139,   139,   158,   283,   159,   153,    85,   357,    87,
      88,   591,   584,   460,   393,   422,   339,   762,   797,   439,
     160,   446,   226,   789,   622,     3,   436,   165,   479,   304,
     314,   327,   363,   594,   638,   763,   802,   609,   527,   493,
     192,   496,   193,   512,  -134,   173,   768,   496,  -137,   458,
     845,   306,   553,   211,   350,   362,   534,   438,   538,   442,
     519,   136,   623,   747,   747,   388,   514,   279,   393,   438,
     279,   261,   262,   747,   136,   748,   748,   635,   457,   198,
     389,   459,   442,   807,   869,   748,   199,   224,    48,   749,
    -135,   282,  -299,   501,   683,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   195,   564,   224,
     225,   224,   568,   165,   569,   137,   279,   138,   286,   121,
     224,   279,   163,   351,   181,   117,   139,   622,   137,   520,
     138,   520,   296,   182,   225,    74,   751,   202,   117,   302,
    -364,  -364,  -380,   161,    80,   793,   210,   541,    74,   639,
     790,   542,   162,   725,   117,   280,   139,    80,   280,   798,
     610,   769,   139,   799,   746,   500,   750,   227,   139,   139,
     338,   878,   480,   471,   305,   315,   328,   364,   139,   471,
     764,   803,   541,   494,   169,   497,   542,   513,  -134,   139,
     361,   676,  -137,  -380,   846,   737,   565,   581,   808,   870,
     531,   201,   532,   185,   280,    74,  -377,   538,   224,   280,
     117,  -376,   394,    95,   281,   694,   695,   696,   697,   698,
     699,   224,   742,   743,   322,   224,  -119,   395,   747,   224,
    -301,   342,   621,   700,  -135,   531,   158,   532,   159,   153,
     748,   166,   340,   505,   117,   117,   341,   172,   342,   604,
     506,   224,   498,   160,   787,   394,  -300,   394,   140,   140,
     507,   620,   136,   154,    74,   449,   394,   394,   176,   381,
     395,   198,   395,    80,   498,   456,   394,   198,   199,   394,
     394,   395,   395,   469,   199,   690,   348,   177,   218,   469,
     179,   395,   701,   702,   395,   395,   190,   136,   703,   640,
     641,   442,   440,   180,   117,   693,   651,   644,   645,   643,
     186,   647,    74,   728,   136,   441,   137,   191,   138,   381,
     224,    80,   220,   187,   223,  -299,   117,   198,   136,   202,
     392,   471,   471,   471,   199,   202,    74,    95,   352,   324,
      74,   205,   381,   211,    85,    80,    87,    88,   471,    80,
     531,   137,   532,   138,   188,    95,   752,   189,   139,   897,
     117,   117,   437,   898,   533,   689,   533,   729,   151,   533,
     152,    74,    74,   758,   550,   782,   783,   208,   117,   334,
      80,    80,   137,   140,   138,   202,   381,   667,    74,   224,
     723,   724,   117,   221,  -301,   376,   224,    80,   674,   206,
     471,  -300,    74,   139,   883,   694,   695,   696,   697,   698,
     699,    80,   228,   140,   141,   144,   685,   209,   214,   140,
     198,   229,   198,   700,   232,   140,   140,   199,   230,   199,
     450,   222,   139,   200,   139,   140,   442,   201,   233,   275,
      74,   469,   469,   469,   277,   198,   140,   580,   471,    80,
     276,   278,   199,   471,    48,   533,   352,   190,   469,   259,
     353,   694,   695,   696,   697,   698,   699,   139,   139,   829,
     838,   349,   285,   139,   354,   139,   139,   292,   202,   198,
     202,   287,   701,   702,   288,   588,   199,   293,   755,   349,
     352,   354,   139,   349,   354,   295,   154,   599,    95,   394,
     224,   297,   300,   202,   838,    85,  -181,    87,    88,   451,
     469,   531,   630,   532,   395,   533,   298,   301,   303,    74,
     533,   830,   617,   309,   311,   313,   330,   471,    80,   471,
     158,   372,   159,   153,   329,   880,   471,   202,   374,   343,
     470,   377,   381,   383,   384,   386,   470,   160,   253,   254,
     255,   256,   257,   258,   389,   259,   476,   474,   469,   662,
     475,   896,   486,   469,   478,   806,   481,   810,   483,   487,
     485,   491,   903,   626,   139,   815,   495,   502,   819,   694,
     695,   696,   697,   698,   699,   503,   471,   509,   515,   529,
     518,   826,   381,   381,   256,   257,   258,   528,   259,   530,
     381,   381,   535,   539,   381,   139,   540,   547,   548,   691,
     549,   579,   555,   533,   556,   140,   851,   533,   557,   558,
     560,   854,   566,   571,   578,   857,   582,   583,   586,   603,
     606,   608,   612,   139,   394,   614,   615,   469,   619,   469,
     471,   520,   629,   632,   471,   633,   469,   804,   636,   395,
     139,   637,   648,   649,   657,   655,   658,   659,   876,   348,
     140,   665,   663,   666,   533,    95,   471,   670,   669,   678,
     684,   471,    95,   680,   682,   686,   712,   715,   716,   711,
     687,   533,   471,    95,   745,   717,   891,   718,   720,   140,
     721,   140,   722,   732,   726,   736,   469,   902,   470,   470,
     470,   754,   739,   756,   740,   761,   759,   908,   765,   770,
     767,   774,   471,   766,   772,   470,   777,   775,   471,   776,
     773,   785,   792,   794,   140,   140,   795,   796,   801,   805,
     140,   811,   140,   140,   812,   820,   471,   821,   822,   841,
     824,   827,   840,   842,   779,   779,   844,   848,   786,   140,
     469,   855,  -169,   858,   469,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   470,   859,   862,
     861,   863,   864,   865,   866,   867,   469,   533,   533,   873,
     881,   469,   817,   885,   884,   886,   889,   888,   890,  -175,
     154,   892,   469,   900,   905,   907,   516,   906,   901,   613,
    -364,  -364,   673,   738,    95,   631,   781,   825,    95,   692,
     714,   490,   533,    95,   860,   470,   216,    95,   624,   733,
     470,   719,   469,   661,    95,   688,   660,   602,   469,   325,
     601,   140,  -381,  -381,  -381,   251,   252,   253,   254,   255,
     256,   257,   258,   533,   259,   307,   469,   533,     0,    95,
       0,     0,    95,     0,     0,    95,     0,     0,     0,     0,
       0,   875,   140,     0,     0,     0,     0,     0,     0,   533,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
     533,     0,     0,     0,     0,     0,     0,   143,   143,    95,
     140,     0,   157,     0,   470,   344,   470,     0,     0,     0,
      95,     0,     0,   470,     0,     0,    95,   140,     0,     0,
       0,   119,   120,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
     145,   147,   150,     0,   142,   142,     0,     0,   168,     0,
       0,     0,     0,   171,     0,     0,     0,     0,   175,     0,
       0,     0,  -138,   470,     0,     0,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
     196,     0,     0,     0,     0,   207,   197,     0,     0,     0,
       0,     0,     0,     0,   217,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,  -364,  -364,     0,     0,     0,   470,     0,     0,
       0,   470,   143,     0,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,   284,     0,
    -364,  -364,     0,   470,     0,   472,     0,     0,   470,     0,
       0,   477,   143,     0,     0,     0,   488,     0,   143,   470,
       0,     0,     0,     0,   143,   143,     0,     0,     0,   290,
    -364,  -364,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,   143,     0,     0,     0,   470,
       0,     0,     0,     0,   318,   470,   321,   196,     0,   316,
       0,     0,     0,   323,   331,   326,  -138,     0,     0,     0,
       0,   332,   335,   470,     0,     0,   347,     0,     0,     0,
       0,   345,     0,   355,     0,     0,     0,     0,     0,     0,
       0,   365,   360,     0,     0,   157,     0,     0,   375,     0,
       0,     0,   196,     0,     0,     0,     0,     0,   382,   390,
       0,   396,   397,   398,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,     0,     0,     0,     0,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   196,     0,   390,     0,   390,   447,   382,     0,
       0,     0,     0,   573,   574,     0,     0,     0,   453,     0,
     455,     0,     0,     0,     0,   196,     0,     0,     0,     0,
     585,   382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   489,  -381,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   143,   259,     0,     0,     0,   196,
     234,   235,   236,     0,     0,   382,     0,     0,     0,     0,
       0,     0,   628,     0,     0,     0,   237,   789,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   143,
     259,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,     0,
       0,     0,     0,     0,     0,   664,     0,     0,   143,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   554,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   559,     0,
       0,     0,     0,   143,   143,     0,     0,     0,     0,   143,
       0,   143,   143,     0,     0,   290,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   590,   730,
       0,   731,   321,   592,   790,     0,     0,     0,   734,     0,
     593,   596,     0,     0,     0,   196,   600,     0,   335,   335,
     607,   382,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,     0,     0,     0,   360,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,   627,     0,     0,     0,     0,     0,   771,     0,
       0,     0,     0,     0,     0,   196,   196,     0,     0,   642,
     143,   382,   382,   196,   196,   461,   462,   196,     0,   382,
     382,   390,   652,   382,     0,     0,     0,   654,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   136,   464,     0,     0,     0,
       0,     0,   813,     0,     0,   465,   814,   672,     0,    35,
     677,     0,     0,     0,    38,    39,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,   828,     0,
     390,    44,     0,   839,    47,     0,   143,     0,   290,     0,
       0,     0,     0,     0,   849,    56,     0,    58,    59,   466,
      61,   467,     0,     0,     0,   390,   390,     0,   468,   117,
       0,     0,     0,     0,    70,     0,   290,     0,     0,     0,
       0,     0,     0,     0,   868,     0,   321,     0,     0,     0,
     871,     0,     0,   596,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   882,     0,
       0,     0,     0,     0,     0,   234,   235,   236,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
      10,    11,     0,     0,   788,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,   823,    34,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,   853,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   679,    74,    75,     0,    76,   499,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,   237,     9,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,    34,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
       0,    76,   605,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,    10,    11,
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
      73,     0,    74,    75,     0,    76,     0,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   366,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
     367,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   366,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,   511,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,   735,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   366,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,     0,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,   753,    43,     0,
      44,    45,    46,    47,    48,    49,    50,   366,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,   116,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   366,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,   843,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,  -381,  -381,  -381,  -381,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   366,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
     847,    77,     0,    78,    79,    80,    81,     4,     5,     6,
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
      43,     0,    44,    45,    46,    47,    48,    49,    50,   366,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,   850,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
     852,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   366,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,     0,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,   872,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,   366,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,   116,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
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
      50,   366,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   116,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,   887,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
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
      46,    47,    48,    49,    50,   366,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   116,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
     904,    77,     0,    78,    79,    80,    81,     4,     5,     6,
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
      43,     0,    44,    45,    46,    47,    48,    49,    50,   366,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,   909,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   366,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,     0,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,     0,    52,     0,
      53,     0,     0,    55,    56,    57,    58,    59,   116,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   598,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    74,    75,     0,    76,     0,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   616,     0,     0,     0,
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
       0,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     778,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      74,    75,     0,    76,     0,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   816,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,    31,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,     0,    52,     0,    53,     0,     0,    55,
      56,    57,    58,    59,   116,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    70,
      71,    72,     0,     0,    74,    75,     0,    76,     0,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,     0,    52,     0,
      53,     0,     0,    55,    56,    57,    58,    59,   116,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
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
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,     0,   167,    79,    80,    81,     0,
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
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,   170,    79,    80,    81,     0,     0,     0,     0,     0,
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
      74,     0,     0,     0,     0,    77,     0,   194,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    70,     0,     0,     0,     0,    74,     0,     0,     0,
       0,    77,   317,     0,    79,    80,    81,   378,     0,     0,
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
       0,     0,    74,     0,     0,     0,     0,    77,   399,     0,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,     0,     0,    79,    80,    81,   423,
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
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,   452,     0,     0,     0,     0,
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
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,   454,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    70,     0,     0,     0,     0,    74,     0,     0,     0,
       0,    77,     0,     0,    79,    80,    81,   625,     0,     0,
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
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,   653,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,     0,     0,    79,    80,    81,     0,
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
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   115,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     116,    61,    62,     0,     0,     0,     0,     0,     0,    64,
     117,   346,     0,     0,     0,    70,   234,   235,   236,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     260,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   308,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   310,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   356,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   484,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   492,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   510,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   517,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   668,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   856,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   874,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   504,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   526,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   567,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   597,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   646,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   234,   235,
     236,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   727,   237,   552,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,   570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   236,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-692))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-381))

static const yytype_int16 yycheck[] =
{
       2,    21,    22,    26,   118,    26,    26,     2,   208,     2,
       2,   485,   475,   301,   233,   259,   191,   708,     8,   277,
      26,   279,     8,    26,   521,     0,   275,    29,     8,     8,
       8,     8,     8,    31,    31,     8,     8,    26,   378,     8,
      60,     8,    62,     8,     8,    40,    31,     8,     8,   298,
       8,   165,    63,    73,    61,    74,   384,   276,   386,   278,
      61,    72,    61,    78,    78,   136,    74,    61,   287,   288,
      61,    58,    59,    78,    72,    90,    90,   540,   297,    88,
     151,   300,   301,    31,    31,    90,    95,   128,   112,   104,
       8,   112,   133,   342,   610,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    63,    61,   128,
     151,   128,   452,   115,   454,   126,    61,   128,   138,   151,
     128,    61,   146,   130,   146,   136,   146,   624,   126,   130,
     128,   130,   152,   155,   151,   146,   150,   146,   136,   160,
      58,    59,   133,    81,   155,   150,   128,    73,   146,   146,
     153,    77,    81,   650,   136,   149,   176,   155,   149,   149,
     149,   146,   182,   153,   680,   340,   682,   153,   188,   189,
     190,   862,   152,   303,   153,   153,   153,   153,   198,   309,
     153,   153,    73,   152,   136,   152,    77,   152,   152,   209,
     210,   152,   152,   133,   152,   669,   149,    99,   146,   146,
     126,   103,   128,   136,   149,   146,   151,   535,   128,   149,
     136,   151,   233,   215,   155,    67,    68,    69,    70,    71,
      72,   128,    64,    65,   180,   128,   152,   233,    78,   128,
     133,   151,   520,    85,   152,   126,   259,   128,   259,   259,
      90,   151,   149,   129,   136,   136,   153,   151,   151,   498,
     136,   128,   151,   259,   104,   276,   133,   278,    21,    22,
     146,   519,    72,    26,   146,   285,   287,   288,   151,   225,
     276,    88,   278,   155,   151,   295,   297,    88,    95,   300,
     301,   287,   288,   303,    95,   625,   103,   151,    99,   309,
     151,   297,   144,   145,   300,   301,   128,    72,   150,   548,
     549,   520,   136,   151,   136,   633,   564,   556,   557,   553,
     151,   560,   146,   653,    72,   149,   126,   149,   128,   275,
     128,   155,    79,   151,    81,   133,   136,    88,    72,   146,
     136,   461,   462,   463,    95,   146,   146,   339,    99,   149,
     146,    26,   298,   363,   339,   155,   339,   339,   478,   155,
     126,   126,   128,   128,   151,   357,   684,   151,   378,   149,
     136,   136,   136,   153,   384,   623,   386,   655,   126,   389,
     128,   146,   146,   701,   395,    64,    65,   149,   136,   123,
     155,   155,   126,   146,   128,   146,   342,   587,   146,   128,
     648,   649,   136,   149,   133,   156,   128,   155,   598,   151,
     530,   133,   146,   423,   867,    67,    68,    69,    70,    71,
      72,   155,   136,   176,    21,    22,   616,   151,   151,   182,
      88,   136,    88,    85,    61,   188,   189,    95,    31,    95,
     136,    99,   452,    99,   454,   198,   655,   103,   133,   151,
     146,   461,   462,   463,    61,    88,   209,   467,   578,   155,
     133,   130,    95,   583,   112,   475,    99,   128,   478,    49,
     103,    67,    68,    69,    70,    71,    72,   487,   488,   797,
     798,   200,   128,   493,   203,   495,   496,   157,   146,    88,
     146,   133,   144,   145,   133,   480,    95,     8,   150,   218,
      99,   220,   512,   222,   223,   128,   259,   492,   500,   520,
     128,   133,   133,   146,   832,   500,   112,   500,   500,   136,
     530,   126,   532,   128,   520,   535,   151,   130,    13,   146,
     540,   136,   517,    13,   136,   147,   152,   657,   155,   659,
     553,   152,   553,   553,   153,   863,   666,   146,   154,   153,
     303,   136,   498,   136,   107,   107,   309,   553,    42,    43,
      44,    45,    46,    47,   151,    49,   152,   146,   578,   579,
     151,   889,     8,   583,    13,   765,   151,   767,   152,    74,
     153,   153,   900,   529,   594,   775,   151,   150,   778,    67,
      68,    69,    70,    71,    72,    61,   716,   136,   136,     8,
     151,   791,   548,   549,    45,    46,    47,   152,    49,    13,
     556,   557,   117,   149,   560,   625,   151,   157,   151,   629,
     151,   128,   152,   633,   151,   378,   816,   637,   151,   157,
     151,   821,   157,   152,   151,   825,   133,    13,   136,    13,
     152,   157,    79,   653,   655,   153,   136,   657,   152,   659,
     770,   130,   128,   149,   774,     8,   666,   761,   152,   655,
     670,     8,    61,    61,    96,   130,   157,     8,   858,   103,
     423,   152,   136,    13,   684,   667,   796,    96,   153,   152,
     151,   801,   674,   153,   153,   153,   144,   146,    13,   152,
     157,   701,   812,   685,   150,   152,   886,   152,   152,   452,
     152,   454,   152,   152,   157,   153,   716,   897,   461,   462,
     463,   157,   152,   136,   152,   707,   146,   907,   149,    13,
     149,    96,   842,   151,   157,   478,   152,   149,   848,   153,
     157,   151,   153,   146,   487,   488,   153,    13,    13,   136,
     493,   146,   495,   496,    13,   151,   866,    26,    66,   136,
     153,   152,   146,    13,   739,   740,   146,    13,   743,   512,
     770,   153,    74,   149,   774,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   530,   150,    74,
     153,   119,   153,   133,    13,   151,   796,   797,   798,   153,
     136,   801,   777,   153,   146,    26,     8,   136,   152,   136,
     553,    79,   812,   151,   146,   149,   363,   152,   894,   512,
      58,    59,   595,   670,   806,   535,   740,   788,   810,   632,
     637,   327,   832,   815,   832,   578,    77,   819,   522,   665,
     583,   643,   842,   578,   826,   621,   577,   496,   848,   182,
     495,   594,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   863,    49,   166,   866,   867,    -1,   851,
      -1,    -1,   854,    -1,    -1,   857,    -1,    -1,    -1,    -1,
      -1,   856,   625,    -1,    -1,    -1,    -1,    -1,    -1,   889,
      -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,
     900,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,   891,
     653,    -1,    26,    -1,   657,   153,   659,    -1,    -1,    -1,
     902,    -1,    -1,   666,    -1,    -1,   908,   670,    -1,    -1,
      -1,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    21,    22,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,     8,   716,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      63,    -1,    -1,    -1,    -1,    68,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,   770,    -1,    -1,
      -1,   774,   146,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,   121,    -1,
      58,    59,    -1,   796,    -1,   303,    -1,    -1,   801,    -1,
      -1,   309,   176,    -1,    -1,    -1,    74,    -1,   182,   812,
      -1,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,   146,
      58,    59,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   209,    -1,    -1,    -1,   842,
      -1,    -1,    -1,    -1,   177,   848,   179,   180,    -1,   176,
      -1,    -1,    -1,   180,   187,   182,   152,    -1,    -1,    -1,
      -1,   188,   189,   866,    -1,    -1,   199,    -1,    -1,    -1,
      -1,   198,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   214,   209,    -1,    -1,   259,    -1,    -1,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,   225,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,    -1,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,    -1,   277,    -1,   279,   280,   275,    -1,
      -1,    -1,    -1,   461,   462,    -1,    -1,    -1,   291,    -1,
     293,    -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,
     478,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   324,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   378,    49,    -1,    -1,    -1,   342,
       9,    10,    11,    -1,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,   530,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   423,
      49,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   583,    -1,    -1,   452,    -1,
     454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,
      -1,    -1,    -1,   487,   488,    -1,    -1,    -1,    -1,   493,
      -1,   495,   496,    -1,    -1,   452,    -1,   454,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,   657,
      -1,   659,   485,   486,   153,    -1,    -1,    -1,   666,    -1,
     487,   488,    -1,    -1,    -1,   498,   493,    -1,   495,   496,
     503,   498,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   553,
      -1,    -1,    -1,    -1,    -1,   512,   519,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   529,    -1,    -1,    -1,
      -1,    -1,   529,    -1,    -1,    -1,    -1,    -1,   716,    -1,
      -1,    -1,    -1,    -1,    -1,   548,   549,    -1,    -1,   552,
     594,   548,   549,   556,   557,    42,    43,   560,    -1,   556,
     557,   564,   565,   560,    -1,    -1,    -1,   570,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,   625,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,   770,    -1,    -1,    82,   774,   594,    -1,    86,
     603,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,   653,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   796,    -1,
     623,   108,    -1,   801,   111,    -1,   670,    -1,   625,    -1,
      -1,    -1,    -1,    -1,   812,   122,    -1,   124,   125,   126,
     127,   128,    -1,    -1,    -1,   648,   649,    -1,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,   653,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   842,    -1,   669,    -1,    -1,    -1,
     848,    -1,    -1,   670,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   866,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,   747,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,   785,    85,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,   820,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   157,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    25,    12,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
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
     144,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
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
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
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
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
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
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
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
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
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
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
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
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
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
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
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
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
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
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
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
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
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
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,    -1,
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
      -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
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
     146,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   151,   152,    -1,   154,   155,   156,    31,    -1,    -1,
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
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    26,    -1,
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,
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
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,    -1,    -1,   141,     9,    10,    11,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
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
      -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    11,    49,
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
     141,   142,   143,   144,   146,   147,   149,   151,   153,   154,
     155,   156,   161,   162,   165,   168,   169,   175,   176,   178,
     179,   180,   182,   236,   237,   238,   241,   242,   251,   254,
     258,   259,   261,   262,   268,   269,   270,   271,   272,   273,
     274,   275,   280,   288,   290,    72,   126,   136,   238,   258,
     258,   151,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,    72,   126,   128,   161,
     242,   261,   262,   270,   261,   258,    31,   258,   283,   284,
     258,   126,   128,   161,   242,   244,   245,   270,   273,   274,
     280,    81,    81,   146,   207,   238,   151,   153,   258,   136,
     153,   258,   151,   168,   229,   258,   151,   151,   248,   151,
     151,   146,   155,   205,   206,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   237,   258,   262,    88,    95,
      99,   103,   146,   285,   286,    26,   151,   258,   149,   151,
     128,   161,   163,   164,   151,   166,   236,   258,    99,   249,
     285,   149,    99,   285,   128,   151,     8,   153,   136,   136,
      31,   177,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   130,    61,
     149,   155,   274,   177,   258,   128,   161,   133,   133,   260,
     262,    96,   157,     8,   256,   128,   161,   133,   151,   250,
     133,   130,   274,    13,     8,   153,   177,   283,   153,    13,
     153,   136,   191,   147,     8,   153,   262,   152,   258,   230,
     231,   258,   237,   262,   149,   259,   262,     8,   153,   153,
     152,   258,   262,   289,   123,   262,   281,   282,   161,   160,
     149,   153,   151,   153,   153,   262,   137,   258,   103,   286,
      61,   130,    99,   103,   286,   258,   153,   166,   173,   174,
     262,   161,    74,     8,   153,   258,   115,   150,   167,   168,
     175,   176,   152,   152,   154,   258,   156,   136,    31,   203,
     204,   237,   262,   136,   107,   181,   107,   183,   136,   151,
     258,   276,   136,   268,   274,   280,   258,   258,   258,    26,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   244,    31,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   203,   136,   268,   276,
     136,   149,   268,   277,   278,   279,   276,   258,   152,   161,
     136,   136,    31,   258,    31,   258,   161,   268,   203,   268,
     277,    42,    43,    61,    73,    82,   126,   128,   135,   161,
     242,   251,   252,   253,   146,   151,   152,   252,    13,     8,
     152,   151,   258,   152,   152,   153,     8,    74,    74,   258,
     206,   153,   152,     8,   152,   151,     8,   152,   151,   150,
     160,   203,   150,    61,   150,   129,   136,   146,   287,   136,
     152,   150,     8,   152,    74,   136,   164,   152,   151,    61,
     130,   232,   233,   234,   235,   264,   150,   260,   152,     8,
      13,   126,   128,   161,   243,   117,   184,   185,   243,   149,
     151,    73,    77,   200,   201,   202,   243,   157,   151,   151,
     274,   258,    26,    63,   262,   152,   151,   151,   157,   258,
     151,   265,   266,   267,    61,   149,   157,   150,   260,   260,
      96,   152,   246,   252,   252,   252,   255,   257,   151,   128,
     161,    99,   133,    13,   200,   252,   136,    26,   168,   190,
     258,   230,   258,   262,    31,   187,   262,   150,    26,   168,
     262,   281,   282,    13,   203,   150,   152,   258,   157,    26,
     149,   192,    79,   174,   153,   136,    26,   168,   195,   152,
     276,   277,   264,    61,   232,    31,   237,   262,   252,   128,
     161,   185,   149,     8,   208,   200,   152,     8,    31,   146,
     203,   203,   258,   244,   203,   203,   150,   203,    61,    61,
     263,   276,   258,    31,   258,   130,   247,    96,   157,     8,
     256,   255,   161,   136,   252,   152,    13,   166,   152,   153,
      96,   186,   262,   186,   166,   196,   152,   258,   152,   157,
     153,   193,   153,   193,   151,   166,   153,   157,   267,   276,
     260,   161,   208,   243,    67,    68,    69,    70,    71,    72,
      85,   144,   145,   150,   209,   210,   223,   224,   225,   226,
     228,   152,   144,   239,   202,   146,    13,   152,   152,   250,
     152,   152,   152,   276,   276,   264,   157,   150,   260,   277,
     252,   252,   152,   239,   252,   100,   153,   230,   187,   152,
     152,   197,    64,    65,   198,   150,   193,    78,    90,   104,
     193,   150,   243,   105,   157,   150,   136,   211,   243,   146,
     227,   238,   226,     8,   153,   149,   151,   149,    31,   146,
      13,   252,   157,   157,    96,   149,   153,   152,    26,   168,
     189,   189,    64,    65,   199,   151,   168,   104,   258,    26,
     153,   194,   153,   150,   146,   153,    13,     8,   149,   153,
     212,    13,     8,   153,   177,   136,   166,    31,   146,   240,
     166,   146,    13,   252,   252,   166,    26,   168,   188,   166,
     151,    26,    66,   258,   153,   194,   166,   152,   252,   243,
     136,   213,   214,   215,   216,   218,   219,   220,   243,   252,
     146,   136,    13,   150,   146,     8,   152,   150,    13,   252,
     150,   166,   102,   258,   166,   153,   152,   166,   149,   150,
     215,   153,    74,   119,   153,   133,    13,   151,   252,    31,
     146,   252,   101,   153,   152,   168,   166,   221,   226,   217,
     243,   136,   252,   200,   146,   153,    26,   150,   136,     8,
     152,   166,    79,   170,   171,   172,   243,   149,   153,   222,
     151,   172,   166,   243,   150,   146,   152,   149,   166,   150
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
      yyerror (analyzer, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, analyzer)
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
		  Type, Value, analyzer); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
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
		       		       , analyzer);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, analyzer); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);

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
int yyparse (pelet::LexicalAnalyzerClass &analyzer);
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
yyparse (pelet::LexicalAnalyzerClass &analyzer)
#else
int
yyparse (analyzer)
    pelet::LexicalAnalyzerClass &analyzer;
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
      

/* Line 1806 of yacc.c  */
#line 3824 "/home/roberto/workspace/pelet/src/Php54LintParser.cpp"
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
      yyerror (analyzer, YY_("syntax error"));
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
        yyerror (analyzer, yymsgp);
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
		      yytoken, &yylval, analyzer);
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
		  yystos[yystate], yyvsp, analyzer);
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
  yyerror (analyzer, YY_("memory exhausted"));
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
                  yytoken, &yylval, analyzer);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, analyzer);
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
#line 1121 "/home/roberto/workspace/pelet/src/Php54LintParser.y"

