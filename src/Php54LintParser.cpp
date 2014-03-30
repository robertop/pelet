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
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54LintParser.y"


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
#line 124 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54LintParser.cpp"

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
#line 295 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54LintParser.cpp"

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
#define YYLAST   7951

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
     133,   279,   151,   203,   152,    -1,   242,   133,   268,   151,
     203,   152,    -1,   270,   133,   279,   151,   203,   152,    -1,
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
     395,     0,   442,     0,   378,   376,     0,     0,   234,   236,
     235,     0,     0,   232,   233,   237,   239,   238,   253,   252,
     255,   254,   256,   258,   259,   257,   247,   246,   241,   242,
     240,   243,   244,   245,   260,     0,   213,   227,   226,   225,
     224,   223,   222,   221,   220,   219,   218,   217,     0,   443,
     379,     0,     0,   401,   397,   375,   396,   400,     0,     0,
     437,   300,     0,   414,     0,   413,   300,   378,     0,   379,
     310,     0,     0,   352,     0,   341,     0,     0,     0,   333,
       0,   332,   148,   340,   145,   128,   277,    23,     0,     0,
       0,     0,   196,   434,   314,   198,     0,     0,     0,     0,
     140,    10,     0,     0,   433,   409,   409,     0,   133,    13,
       0,     0,   429,     0,   427,   431,   430,   432,     0,   426,
       0,     0,     0,     0,     0,    19,    16,     0,     0,   394,
       0,   208,   207,   210,   263,   203,   393,   136,   290,     0,
       0,     0,     0,   302,    79,     0,     0,    82,    85,   150,
     128,   129,   130,     0,   118,     0,   131,   382,     0,   133,
     133,   377,   265,     0,     0,   214,   297,   133,   133,   381,
     133,   374,   373,   368,   394,     0,   389,   390,   418,   417,
       0,   319,   307,   336,   337,   359,     0,   354,   352,     0,
     335,     0,     0,     0,     0,    97,     0,    25,    95,    54,
       0,     0,   200,    87,     0,    87,    89,   144,    25,   110,
     441,     0,   405,     0,     0,    12,   292,     0,   425,   103,
     103,    38,     0,    65,    51,    21,    25,   108,    35,     0,
       0,   375,   202,   394,   206,     0,   361,   362,    22,     0,
     304,    84,   150,     0,   180,     0,   284,   128,     0,   120,
     402,     0,     0,   264,   318,     0,     0,     0,   394,   394,
     365,     0,     0,     0,   412,     0,   309,     0,   339,   355,
     353,     0,   334,   342,   146,   284,     0,     0,     0,   198,
       0,     0,    90,     0,   112,   114,   408,   212,   291,     0,
     103,     0,   103,     0,     0,     0,    29,   205,   369,     0,
     139,   303,   180,    86,   184,   185,   186,   189,   188,   187,
       0,     0,   179,    73,   149,   153,     0,     0,   178,   182,
       0,     0,     0,     0,     0,   121,     0,   294,   293,   215,
     296,   295,   372,     0,     0,   367,   398,   399,   416,   311,
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
     104,   105,   106,   107,   108,   109,   110,   111,   391,   445,
     446,   447,   112,   336,   337,   148,   149,   203,   204,   508,
     113,   333,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -691
static const yytype_int16 yypact[] =
{
    -691,    64,  1967,  -691,  6559,  6559,   -81,  6559,  6559,  6559,
    6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,
    6559,   202,   202,  6559,  5047,  6559,   268,    66,    79,   -57,
     -52,  5173,  -691,  -691,   -24,  -691,  5299,   -37,  -691,  -691,
    4893,  6559,   -30,    68,  -691,    71,    97,  -691,  -691,   -26,
      30,   111,   117,  -691,  -691,   139,  -691,   176,  -691,  -691,
     226,  -691,    59,  5425,   294,   204,  -691,   180,  6559,  -691,
    -691,   107,   199,   -48,  -691,   230,  -691,  6559,  -691,   147,
     235,   275,   -11,  -691,    20,  -691,  -691,  -691,  -691,  -691,
    -691,   256,   263,  -691,  -691,   357,   354,   285,  -691,  -691,
    6818,  -691,   276,   972,   279,  -691,   305,   383,   315,  -691,
       0,  -691,     9,  -691,  -691,   337,   322,  -691,   357,  7825,
    7825,  6559,  7825,  7825,  1799,  -691,  -691,   404,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,   328,    59,   -61,
     324,  -691,  -691,   333,  -691,  -691,   202,  7702,   308,   463,
    -691,   351,    59,   353,   355,   335,  -691,   358,   363,    25,
       9,  -691,  -691,   474,    23,   357,  5047,  -691,  6859,   487,
    -691,  6900,   366,   359,    24,  7825,   202,  5551,  -691,  6559,
    6559,  -691,    82,    26,  -691,   356,   361,  6559,   202,   213,
      59,  -691,   -34,    92,  -691,   364,  7825,    87,   202,  6685,
     183,  -691,     4,   334,  -691,  -691,  6559,  6945,  -691,   202,
      59,   -36,    27,  -691,  6559,  2121,   367,  6986,   -22,   369,
     332,  6559,   -22,   146,   382,  5677,   389,  -691,   419,   422,
    -691,   -68,  6559,   196,  6559,  6559,  6559,  5803,  6559,  6559,
    6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,
    6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,  6559,   268,
    -691,  -691,  -691,  5929,  6559,  6559,  6559,  6559,  6559,  6559,
    6559,  6559,  6559,  6559,  6559,  5677,   411,  6559,   449,  6559,
    6559,   235,    -7,   379,  7027,    59,   101,   449,   449,  -691,
    -691,  6055,  -691,  6181,  -691,    59,   353,   105,  5677,  -691,
     105,   449,    16,  7582,   393,  -691,   387,   391,  -691,  7582,
    -691,   528,    35,   394,  6559,  -691,   403,  -691,  7072,   416,
     548,  7825,   470,   742,  6559,  -691,  -691,   -26,  -691,  -691,
     418,  7114,  -691,    36,   413,  -691,    39,  -691,    93,  1659,
    -691,  -691,  5677,  -691,  -691,   426,   522,  7366,  -691,  -691,
     118,   453,  -691,  -691,  -691,  7155,  -691,  2275,    40,  -691,
    -691,    -5,   460,   -48,  -691,  7198,   450,  -691,  -691,  -691,
    -691,  -691,    55,  -691,  -691,  7407,  -691,  -691,   202,   448,
     594,    42,   302,   590,   346,   489,   346,   459,   461,   375,
    7825,   454,   467,  6559,   468,    16,   469,     9,  7865,  7902,
    1799,  6559,  7784,  1952,  1252,  2104,  1280,  1018,  1551,  1551,
    1551,  1551,   980,  1226,  1226,  1226,   610,   610,   535,   535,
     535,   404,   404,   404,  -691,    78,  1799,  1799,  1799,  1799,
    1799,  1799,  1799,  1799,  1799,  1799,  1799,  1799,   458,   467,
     472,   473,   457,  -691,  -691,   481,    18,  -691,   465,  7450,
    -691,   145,   202,  7825,   202,  7743,   353,  -691,   483,  -691,
    -691,  7582,  7582,  7582,   485,  -691,   510,    59,   112,   252,
     507,  -691,  -691,  -691,   628,   375,  -691,  -691,  7582,   506,
    4123,  6559,  7825,  -691,  -691,  6559,  6559,   202,     2,  7492,
    -691,  -691,  4277,   202,  -691,   213,   213,   630,  5677,  -691,
    1813,   492,  -691,  6559,  -691,  -691,  -691,  -691,   488,  -691,
      10,   569,   202,   508,   524,  -691,  -691,  4431,   511,  6559,
     449,   537,    70,  -691,  -691,  -691,  -691,  -691,  -691,  6307,
    7582,   538,    59,   353,  -691,   346,   519,   661,  -691,  -691,
     375,  -691,  -691,   518,   663,     6,  -691,  -691,  7533,  5677,
    5677,    16,  1457,  6559,   268,  -691,  -691,  5677,  5677,  -691,
    5677,   612,   613,  -691,  6559,  6559,  -691,  -691,  -691,  -691,
    6433,  -691,   545,  -691,  -691,   580,   520,   670,  7582,    59,
     267,   576,   544,  7582,   532,  -691,   672,  -691,  -691,  -691,
    7240,   534,  7825,   592,   202,   592,  -691,  -691,  -691,  -691,
    -691,    44,  -691,  6559,   540,  -691,  -691,  1325,  -691,   541,
     542,  -691,   539,  -691,  -691,  -691,  -691,  -691,  -691,   551,
     549,   481,  -691,  6559,   537,   202,    49,   941,  -691,    59,
     353,   661,  -691,   346,   339,   556,   557,   451,   547,   696,
    -691,   560,   562,  1457,   335,   564,   565,   566,  6559,  6559,
     537,   563,  7574,   202,  7825,   449,  -691,  7582,  -691,  7582,
    -691,   567,   284,  -691,  -691,   557,  7582,  2429,   568,  6559,
       2,   570,  -691,   571,  3969,   288,  -691,  1799,  -691,   577,
    -691,   119,  -691,   -15,   346,  2583,  -691,  -691,  -691,   572,
    -691,   353,   392,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
     595,   346,  -691,  -691,  -691,  -691,   582,   337,   482,  -691,
      31,   585,   575,   586,    15,   723,  7582,  -691,  -691,  -691,
    -691,  -691,  -691,   581,   583,  -691,  -691,  -691,  -691,  -691,
    -691,   641,  -691,   593,  -691,   588,  -691,   587,  -691,  4585,
    4585,   307,   596,  4893,  -691,  -691,   209,  6559,   -10,   598,
     127,  -691,   597,   599,  -691,  -691,   733,    22,  -691,   740,
      33,   357,  -691,   632,  -691,  -691,    47,  -691,   623,   757,
    7582,  -691,  -691,  -691,  7582,  -691,  -691,  4739,  -691,  -691,
    -691,  -691,   620,   746,   707,  6559,  -691,   621,  1596,  -691,
    -691,  -691,  -691,  -691,   627,  -691,  7582,   346,   471,  -691,
    -691,  7582,   629,  -691,   644,   770,  2737,   638,  -691,    51,
    2891,   772,  7582,  -691,  -691,  3045,  -691,  -691,  -691,  3199,
    6559,  -691,   633,  7281,  -691,  -691,  3969,   639,  -691,  -691,
     713,   640,   471,  -691,   636,   719,   675,   642,   664,  -691,
     783,   647,  7582,  -691,  -691,    56,  -691,  -691,  7582,  -691,
    -691,  3353,   646,  7324,  3969,  -691,  4893,  3969,  -691,  -691,
    -691,  -691,   559,   346,  -691,   666,  7582,   375,  -691,   657,
    -691,  -691,   652,  -691,   780,  -691,  3507,   671,   673,   802,
    -691,  -691,  -691,   659,  -691,  -691,  -691,   735,  -691,   346,
     135,  3969,   667,  -691,   735,  -691,  -691,  -691,  -691,  -691,
     346,  -691,  3661,   677,  -691,   669,   676,  -691,  3815,  -691
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -691,  -691,  -177,   -20,  -691,  -691,   456,  -691,  -200,  -691,
       5,  -691,  -691,  -691,   -67,  -691,   314,     7,     8,  -114,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,   295,   234,   162,
    -691,    94,  -691,  -691,  -691,  -585,    45,  -691,  -691,  -691,
    -691,  -691,  -464,  -691,   198,  -249,  -691,  -691,   509,  -691,
     205,  -691,  -691,  -691,  -691,  -691,  -691,    12,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -690,  -691,
    -691,  -691,  -470,  -691,   316,  -691,  -691,  -691,   763,   153,
      -2,   177,  -691,  -691,   237,  -328,  -247,  -691,  -691,  -691,
    -691,  -691,   197,  -280,   536,  -691,  -691,   270,   273,  -691,
     907,   674,  -356,   380,  1053,  -691,  -497,  -691,  -691,   232,
    -216,  -691,  1021,  -691,  -691,   -23,   -21,  -691,  -258,  -288,
    -691,  -151,    -6,   362,   368,   685,  -691,   233,   370,  -691,
    -691,  -691,  -691
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -402
static const yytype_int16 yytable[] =
{
      95,   139,   139,   158,   283,   159,   153,    85,   357,    87,
      88,   584,   424,   460,   339,   591,   789,   394,   762,   442,
     160,   448,   527,   471,   622,   683,   438,   165,   226,   471,
     797,   304,   314,   594,   327,   363,   609,   638,   362,   763,
     192,   802,   193,   479,   493,   173,   768,   496,   512,   458,
    -134,   306,   496,   211,   279,    48,   534,  -137,   538,   845,
     440,   279,   444,   747,     3,   350,   198,   224,   388,   514,
     121,   394,   440,   199,   136,   748,   635,   279,   807,   564,
     210,   457,   396,   389,   459,   444,   279,   869,   117,   163,
     225,   282,   224,   501,   224,   746,   568,   750,   569,   166,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   169,   165,   172,   340,   519,   224,   286,   341,
     181,   176,  -299,   224,   202,   441,   139,   622,   137,   182,
     138,   623,   296,  -380,   351,   751,   396,   441,   117,   302,
     225,   554,   280,   790,  -377,  -364,  -364,   161,    74,   280,
     136,  -376,   639,   725,   136,    74,   139,    80,  -380,   610,
     162,   769,   139,   500,   281,   280,   185,   565,   139,   139,
     338,   798,   878,   227,   280,   799,   305,   315,   139,   328,
     364,   471,   471,   471,   764,   520,   803,   480,   494,   139,
     361,   497,   513,   808,  -134,   117,   676,   747,   471,   737,
     520,  -137,   870,   846,   137,   747,   138,   538,   137,   748,
     138,   581,   395,    95,   117,   201,   195,   748,   117,   177,
     224,   224,   179,   749,    74,  -301,  -300,   397,    74,   224,
     205,   324,   621,    80,   198,   198,   158,    80,   159,   153,
     344,   199,   199,   342,   498,   352,   218,   505,   180,   604,
     471,    74,   342,   160,   506,   395,   208,   395,   140,   140,
      80,   620,   186,   154,   507,   451,   395,   395,   187,   690,
     397,   198,   397,   224,   136,   456,   395,   793,   199,   395,
     395,   397,   397,   469,   897,   136,   348,   747,   898,   469,
     188,   397,   202,   202,   397,   397,   498,   728,   471,   748,
     641,   642,   376,   471,   444,   693,   651,   644,   645,   646,
    -135,   647,   220,   787,   223,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   189,   137,   202,
     138,   206,   392,   322,   261,   262,   334,    95,   117,   137,
     136,   138,    74,   211,    85,   393,    87,    88,    74,   117,
     209,    80,   742,   743,   190,    95,   752,    80,   139,    74,
    -364,  -364,   117,   198,   533,   689,   533,   729,    80,   533,
     199,   782,   783,   758,   222,   191,   551,   471,   381,   471,
     224,   214,   198,   140,   221,  -299,   471,   667,   230,   199,
     723,   724,   228,   200,   151,   224,   152,   201,   674,   229,
    -301,   141,   144,   883,   117,   139,   694,   695,   696,   697,
     698,   699,   224,   140,    74,   232,   685,  -300,   233,   140,
     198,   202,   198,    80,   700,   140,   140,   199,   381,   199,
     275,   352,   139,   352,   139,   140,   471,   353,   276,   444,
     202,   469,   469,   469,   277,   278,   140,   580,   541,    48,
     190,   381,   542,   259,  -135,   533,   285,   287,   469,   694,
     695,   696,   697,   698,   699,   292,   288,   139,   139,   829,
     838,   293,   531,   139,   532,   139,   139,   700,   202,   295,
     202,   224,   117,   701,   702,   588,   298,   303,   297,   703,
     471,   300,   139,   301,   471,   381,   154,   599,    95,   395,
     309,   531,   311,   532,   838,    85,   313,    87,    88,   329,
     469,   117,   630,   330,   397,   533,   471,   343,   377,   372,
     533,   471,   617,   374,   541,   383,   384,  -119,   542,   386,
     389,   158,   471,   159,   153,   880,   701,   702,   475,   474,
     470,   478,   755,   476,   487,   481,   470,   439,   160,   694,
     695,   696,   697,   698,   699,   483,   486,    74,   469,   662,
     393,   896,   471,   469,   495,   806,    80,   810,   471,   485,
     349,   491,   903,   354,   139,   815,   502,   531,   819,   532,
     256,   257,   258,   503,   259,   443,   471,   117,   349,   509,
     354,   826,   349,   354,  -181,    74,   515,   531,   393,   532,
     528,   518,   529,   530,    80,   139,   535,   830,   539,   691,
     556,   547,   540,   533,   559,   140,   851,   533,  -401,   549,
     550,   854,   566,   557,   558,   857,   694,   695,   696,   697,
     698,   699,   560,   139,   395,   571,   578,   469,   579,   469,
     582,   583,   586,   603,   606,   608,   469,   804,   612,   397,
     139,   381,   253,   254,   255,   256,   257,   258,   876,   259,
     615,   614,   140,   619,   533,    95,   629,   520,   632,   633,
     636,   637,    95,   648,   649,   655,   657,   658,   659,   348,
     663,   533,   626,    95,   665,   666,   891,   669,   670,   140,
     684,   140,   678,   715,   680,   682,   469,   902,   470,   470,
     470,   712,   381,   381,   686,   761,   687,   908,   711,   716,
     381,   381,   717,   381,   718,   470,   720,   721,   722,   732,
     726,   736,   739,   740,   140,   140,   766,   745,   759,   754,
     140,   756,   140,   140,   765,   767,   770,   774,   772,   777,
     773,   776,   775,   794,   779,   779,   796,   785,   786,   140,
     469,   792,   795,   801,   469,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   470,   805,   811,
     812,   820,   821,   822,   824,   840,   469,   533,   533,   827,
     841,   469,   817,   842,   844,   848,   855,  -169,   858,   861,
     859,   154,   469,   862,   863,   864,   866,   865,   867,   873,
    -364,  -364,   881,   884,    95,   885,   886,   888,    95,  -175,
     889,   890,   533,    95,   892,   470,   488,    95,   900,   516,
     470,   906,   469,   905,    95,   907,   613,   901,   469,   673,
     631,   140,   738,   825,   781,   714,   490,   692,   624,   472,
     216,   719,   733,   533,   860,   477,   469,   533,   661,    95,
     660,   307,    95,   688,     0,    95,   325,   601,     0,     0,
       0,   875,   140,     0,   602,     0,     0,     0,     0,   533,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
     533,     0,     0,     0,     0,     0,     0,     0,     0,    95,
     140,     0,     0,     0,   470,     0,   470,     0,     0,     0,
      95,     0,     0,   470,     0,     0,    95,   140,     0,     0,
       0,   119,   120,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
     145,   147,   150,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,   171,     0,     0,     0,     0,   175,  -138,
       0,     0,     0,   470,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,     0,     0,     0,
     196,     0,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   573,   574,  -364,
    -364,     0,     0,     0,     0,     0,     0,   470,     0,     0,
       0,   470,     0,     0,   585,     0,  -402,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   284,   259,
    -364,  -364,     0,   470,     0,     0,     0,     0,   470,     0,
       0,     0,   143,   143,     0,     0,     0,   157,     0,   470,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   628,   259,     0,     0,
       0,     0,     0,   147,   142,   142,     0,     0,     0,   470,
       0,     0,     0,     0,   318,   470,   321,   196,     0,     0,
       0,     0,     0,  -138,   331,     0,     0,     0,     0,     0,
       0,     0,     0,   470,     0,     0,   347,     0,     0,     0,
       0,     0,     0,   355,     0,     0,   197,     0,     0,   664,
       0,   365,     0,     0,     0,     0,     0,     0,   375,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,   390,
       0,   398,   399,   400,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,     0,   143,     0,     0,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   196,     0,   390,     0,   390,   449,     0,     0,
       0,     0,     0,   730,     0,   731,     0,   143,   453,   290,
     455,     0,   734,   143,     0,   196,     0,     0,     0,   143,
     143,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,   482,     0,     0,     0,     0,     0,     0,     0,   316,
     143,   489,     0,   323,     0,   326,     0,     0,     0,     0,
       0,   332,   335,     0,     0,     0,     0,     0,     0,   196,
       0,   345,   771,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,  -402,  -402,  -402,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   382,     0,
     157,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     548,   259,     0,     0,     0,     0,   813,     0,   552,     0,
     814,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   382,   259,
       0,     0,   828,     0,   234,   235,   236,   839,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   849,     0,
     237,   382,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,   868,     0,
       0,     0,     0,     0,   871,     0,     0,     0,   590,     0,
       0,     0,   321,   592,     0,   382,     0,     0,     0,   143,
       0,     0,   882,     0,     0,   196,     0,     0,     0,     0,
     607,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   390,     0,     0,     0,
       0,   290,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,   196,     0,     0,
     643,     0,     0,     0,   196,   196,     0,   196,     0,     0,
       0,   390,   652,   143,     0,   143,     0,   654,   555,     0,
       0,     0,   679,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   290,   259,   290,   143,   143,
     677,     0,     0,     0,   143,     0,   143,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     390,     0,     0,   143,     0,     0,     0,     0,     0,     0,
     593,   596,     0,     0,     0,     0,   600,     0,   335,   335,
       0,   382,     0,     0,     0,   390,   390,     0,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   321,     0,     0,     0,
       0,     0,   627,  -402,  -402,  -402,  -402,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,   382,   382,     0,   234,   235,   236,     0,     0,
     382,   382,     0,   382,     0,   143,     0,     0,     0,     0,
       0,   237,   789,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   143,   672,     0,     0,
       0,     0,     0,     0,   788,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,   143,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   823,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,   290,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   596,     0,     0,     0,   853,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,    34,    35,    36,     0,    37,   790,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,   499,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,   237,     9,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,    34,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,   605,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,    10,
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
       0,     0,     0,     9,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
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
       0,    74,    75,     0,    76,   511,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,   735,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
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
      41,    42,     0,     0,     0,     0,     0,     0,   753,    43,
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
      72,     0,     0,    74,    75,     0,    76,   843,    77,     0,
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
      76,   847,    77,     0,    78,    79,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,   850,    77,     0,    78,    79,
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
       0,   852,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   366,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   116,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
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
      41,    42,     0,     0,   872,     0,     0,     0,     0,    43,
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
      76,   904,    77,     0,    78,    79,    80,    81,     4,     5,
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
       0,    74,    75,     0,    76,   909,    77,     0,    78,    79,
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
       0,     0,     0,     0,     0,     0,     0,   616,     0,     0,
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
       0,   778,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   816,     0,     0,     0,     0,
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
       0,     0,    77,     0,     0,    79,    80,    81,   625,     0,
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
       0,    79,    80,    81,   653,     0,     0,     0,     0,     0,
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
       0,   237,   668,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   856,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   874,   238,   239,   240,
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
     257,   258,     0,   259,   461,   462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   597,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   465,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,   640,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    58,    59,   466,    61,
     467,   234,   235,   236,     0,     0,     0,   468,   117,     0,
       0,     0,     0,    70,   727,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     553,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,   570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   236,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-691))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-402))

static const yytype_int16 yycheck[] =
{
       2,    21,    22,    26,   118,    26,    26,     2,   208,     2,
       2,   475,   259,   301,   191,   485,    26,   233,   708,   277,
      26,   279,   378,   303,   521,   610,   275,    29,     8,   309,
       8,     8,     8,    31,     8,     8,    26,    31,    74,     8,
      60,     8,    62,     8,     8,    40,    31,     8,     8,   298,
       8,   165,     8,    73,    61,   112,   384,     8,   386,     8,
     276,    61,   278,    78,     0,    61,    88,   128,   136,    74,
     151,   287,   288,    95,    72,    90,   540,    61,    31,    61,
     128,   297,   233,   151,   300,   301,    61,    31,   136,   146,
     151,   112,   128,   342,   128,   680,   452,   682,   454,   151,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   136,   115,   151,   149,    61,   128,   138,   153,
     146,   151,   133,   128,   146,   276,   146,   624,   126,   155,
     128,    61,   152,   133,   130,   150,   287,   288,   136,   160,
     151,    63,   149,   153,   151,    58,    59,    81,   146,   149,
      72,   151,   146,   650,    72,   146,   176,   155,   133,   149,
      81,   146,   182,   340,   155,   149,   136,   149,   188,   189,
     190,   149,   862,   153,   149,   153,   153,   153,   198,   153,
     153,   461,   462,   463,   153,   130,   153,   152,   152,   209,
     210,   152,   152,   146,   152,   136,   152,    78,   478,   669,
     130,   152,   146,   152,   126,    78,   128,   535,   126,    90,
     128,    99,   233,   215,   136,   103,    63,    90,   136,   151,
     128,   128,   151,   104,   146,   133,   133,   233,   146,   128,
      26,   149,   520,   155,    88,    88,   259,   155,   259,   259,
     153,    95,    95,   151,   151,    99,    99,   129,   151,   498,
     530,   146,   151,   259,   136,   276,   149,   278,    21,    22,
     155,   519,   151,    26,   146,   285,   287,   288,   151,   625,
     276,    88,   278,   128,    72,   295,   297,   150,    95,   300,
     301,   287,   288,   303,   149,    72,   103,    78,   153,   309,
     151,   297,   146,   146,   300,   301,   151,   653,   578,    90,
     549,   550,   156,   583,   520,   633,   564,   554,   557,   558,
       8,   560,    79,   104,    81,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   151,   126,   146,
     128,   151,   136,   180,    58,    59,   123,   339,   136,   126,
      72,   128,   146,   363,   339,   149,   339,   339,   146,   136,
     151,   155,    64,    65,   128,   357,   684,   155,   378,   146,
      58,    59,   136,    88,   384,   623,   386,   655,   155,   389,
      95,    64,    65,   701,    99,   149,   397,   657,   225,   659,
     128,   151,    88,   146,   149,   133,   666,   587,    31,    95,
     648,   649,   136,    99,   126,   128,   128,   103,   598,   136,
     133,    21,    22,   867,   136,   425,    67,    68,    69,    70,
      71,    72,   128,   176,   146,    61,   616,   133,   133,   182,
      88,   146,    88,   155,    85,   188,   189,    95,   275,    95,
     151,    99,   452,    99,   454,   198,   716,   103,   133,   655,
     146,   461,   462,   463,    61,   130,   209,   467,    73,   112,
     128,   298,    77,    49,   152,   475,   128,   133,   478,    67,
      68,    69,    70,    71,    72,   157,   133,   487,   488,   797,
     798,     8,   126,   493,   128,   495,   496,    85,   146,   128,
     146,   128,   136,   144,   145,   480,   151,    13,   133,   150,
     770,   133,   512,   130,   774,   342,   259,   492,   500,   520,
      13,   126,   136,   128,   832,   500,   147,   500,   500,   153,
     530,   136,   532,   152,   520,   535,   796,   153,   136,   152,
     540,   801,   517,   154,    73,   136,   107,   152,    77,   107,
     151,   554,   812,   554,   554,   863,   144,   145,   151,   146,
     303,    13,   150,   152,    74,   151,   309,   136,   554,    67,
      68,    69,    70,    71,    72,   152,     8,   146,   578,   579,
     149,   889,   842,   583,   151,   765,   155,   767,   848,   153,
     200,   153,   900,   203,   594,   775,   150,   126,   778,   128,
      45,    46,    47,    61,    49,   136,   866,   136,   218,   136,
     220,   791,   222,   223,   112,   146,   136,   126,   149,   128,
     152,   151,     8,    13,   155,   625,   117,   136,   149,   629,
     152,   157,   151,   633,   157,   378,   816,   637,   151,   151,
     151,   821,   157,   151,   151,   825,    67,    68,    69,    70,
      71,    72,   151,   653,   655,   152,   151,   657,   128,   659,
     133,    13,   136,    13,   152,   157,   666,   761,    79,   655,
     670,   498,    42,    43,    44,    45,    46,    47,   858,    49,
     136,   153,   425,   152,   684,   667,   128,   130,   149,     8,
     152,     8,   674,    61,    61,   130,    96,   157,     8,   103,
     136,   701,   529,   685,   152,    13,   886,   153,    96,   452,
     151,   454,   152,   146,   153,   153,   716,   897,   461,   462,
     463,   144,   549,   550,   153,   707,   157,   907,   152,    13,
     557,   558,   152,   560,   152,   478,   152,   152,   152,   152,
     157,   153,   152,   152,   487,   488,   151,   150,   146,   157,
     493,   136,   495,   496,   149,   149,    13,    96,   157,   152,
     157,   153,   149,   146,   739,   740,    13,   151,   743,   512,
     770,   153,   153,    13,   774,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   530,   136,   146,
      13,   151,    26,    66,   153,   146,   796,   797,   798,   152,
     136,   801,   777,    13,   146,    13,   153,    74,   149,   153,
     150,   554,   812,    74,   119,   153,    13,   133,   151,   153,
      58,    59,   136,   146,   806,   153,    26,   136,   810,   136,
       8,   152,   832,   815,    79,   578,    74,   819,   151,   363,
     583,   152,   842,   146,   826,   149,   512,   894,   848,   595,
     535,   594,   670,   788,   740,   637,   327,   632,   522,   303,
      77,   644,   665,   863,   832,   309,   866,   867,   578,   851,
     577,   166,   854,   621,    -1,   857,   182,   495,    -1,    -1,
      -1,   856,   625,    -1,   496,    -1,    -1,    -1,    -1,   889,
      -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,
     900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   891,
     653,    -1,    -1,    -1,   657,    -1,   659,    -1,    -1,    -1,
     902,    -1,    -1,   666,    -1,    -1,   908,   670,    -1,    -1,
      -1,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,     8,
      -1,    -1,    -1,   716,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   461,   462,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,   770,    -1,    -1,
      -1,   774,    -1,    -1,   478,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   121,    49,
      58,    59,    -1,   796,    -1,    -1,    -1,    -1,   801,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,   812,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   530,    49,    -1,    -1,
      -1,    -1,    -1,   166,    21,    22,    -1,    -1,    -1,   842,
      -1,    -1,    -1,    -1,   177,   848,   179,   180,    -1,    -1,
      -1,    -1,    -1,   152,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   866,    -1,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    63,    -1,    -1,   583,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,    -1,   146,    -1,    -1,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,    -1,   277,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   657,    -1,   659,    -1,   176,   291,   146,
     293,    -1,   666,   182,    -1,   298,    -1,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
     209,   324,    -1,   180,    -1,   182,    -1,    -1,    -1,    -1,
      -1,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,   198,   716,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,   225,    -1,
     259,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     393,    49,    -1,    -1,    -1,    -1,   770,    -1,   401,    -1,
     774,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   275,    49,
      -1,    -1,   796,    -1,     9,    10,    11,   801,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   812,    -1,
      25,   298,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,   842,    -1,
      -1,    -1,    -1,    -1,   848,    -1,    -1,    -1,   481,    -1,
      -1,    -1,   485,   486,    -1,   342,    -1,    -1,    -1,   378,
      -1,    -1,   866,    -1,    -1,   498,    -1,    -1,    -1,    -1,
     503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
      -1,   378,    -1,    -1,    -1,    -1,   529,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   549,   550,    -1,    -1,
     553,    -1,    -1,    -1,   557,   558,    -1,   560,    -1,    -1,
      -1,   564,   565,   452,    -1,   454,    -1,   570,   425,    -1,
      -1,    -1,   157,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   452,    49,   454,   487,   488,
     603,    -1,    -1,    -1,   493,    -1,   495,   496,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     623,    -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,
     487,   488,    -1,    -1,    -1,    -1,   493,    -1,   495,   496,
      -1,   498,    -1,    -1,    -1,   648,   649,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   554,   669,    -1,    -1,    -1,
      -1,    -1,   529,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   549,   550,    -1,     9,    10,    11,    -1,    -1,
     557,   558,    -1,   560,    -1,   594,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,   625,   594,    -1,    -1,
      -1,    -1,    -1,    -1,   747,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,   653,    -1,    -1,    -1,   625,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   670,   785,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,   653,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   670,    -1,    -1,    -1,   820,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    86,    87,    -1,    89,   153,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    25,    12,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
      -1,    -1,    -1,    12,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
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
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
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
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
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
      -1,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
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
      45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49
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
     258,   276,   136,   149,   268,   274,   279,   280,   258,   258,
     258,    26,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   244,    31,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   203,   136,
     268,   279,   276,   136,   268,   277,   278,   279,   276,   258,
     152,   161,    31,   258,    31,   258,   161,   268,   203,   268,
     277,    42,    43,    61,    73,    82,   126,   128,   135,   161,
     242,   251,   252,   253,   146,   151,   152,   252,    13,     8,
     152,   151,   258,   152,   152,   153,     8,    74,    74,   258,
     206,   153,   152,     8,   152,   151,     8,   152,   151,   150,
     160,   203,   150,    61,   150,   129,   136,   146,   287,   136,
     152,   150,     8,   152,    74,   136,   164,   152,   151,    61,
     130,   232,   233,   234,   235,   264,   150,   260,   152,     8,
      13,   126,   128,   161,   243,   117,   184,   185,   243,   149,
     151,    73,    77,   200,   201,   202,   243,   157,   258,   151,
     151,   274,   258,    26,    63,   262,   152,   151,   151,   157,
     151,   265,   266,   267,    61,   149,   157,   150,   260,   260,
      96,   152,   246,   252,   252,   252,   255,   257,   151,   128,
     161,    99,   133,    13,   200,   252,   136,    26,   168,   190,
     258,   230,   258,   262,    31,   187,   262,   150,    26,   168,
     262,   281,   282,    13,   203,   150,   152,   258,   157,    26,
     149,   192,    79,   174,   153,   136,    26,   168,   195,   152,
     276,   277,   264,    61,   232,    31,   237,   262,   252,   128,
     161,   185,   149,     8,   208,   200,   152,     8,    31,   146,
     150,   203,   203,   258,   244,   203,   203,   203,    61,    61,
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
#line 3852 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54LintParser.cpp"
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
#line 1121 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54LintParser.y"

