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
#define yyparse         php53_lint_parse
#define yylex           php53_lint_lex
#define yyerror         php53_lint_error
#define yylval          php53_lint_lval
#define yychar          php53_lint_char
#define yydebug         php53_lint_debug
#define yynerrs         php53_lint_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/pelet/src/Php53LintParser.y"

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
#define php53_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php53_lint_error pelet::LintGrammarError



/* Line 268 of yacc.c  */
#line 123 "/home/roberto/workspace/pelet/src/Php53LintParser.cpp"

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
#line 294 "/home/roberto/workspace/pelet/src/Php53LintParser.cpp"

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
#define YYLAST   7601

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNRULES -- Number of states.  */
#define YYNSTATES  826

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
     278,   280,   290,   298,   305,   307,   310,   313,   314,   317,
     319,   320,   323,   324,   327,   329,   333,   334,   337,   339,
     342,   344,   349,   351,   356,   358,   363,   367,   373,   377,
     382,   387,   393,   394,   400,   405,   407,   409,   411,   416,
     417,   424,   425,   433,   434,   437,   438,   442,   444,   445,
     448,   452,   458,   463,   468,   474,   482,   489,   490,   492,
     494,   496,   497,   499,   501,   504,   508,   512,   517,   521,
     523,   525,   528,   533,   537,   543,   545,   549,   552,   553,
     557,   560,   569,   571,   575,   577,   579,   580,   582,   584,
     587,   589,   591,   593,   595,   597,   599,   603,   609,   611,
     615,   621,   626,   630,   632,   633,   635,   639,   641,   648,
     652,   657,   664,   668,   671,   675,   679,   683,   687,   691,
     695,   699,   703,   707,   711,   715,   718,   721,   724,   727,
     731,   735,   739,   743,   747,   751,   755,   759,   763,   767,
     771,   775,   779,   783,   787,   791,   794,   797,   800,   803,
     807,   811,   815,   819,   823,   827,   831,   835,   839,   843,
     849,   854,   856,   859,   862,   865,   868,   871,   874,   877,
     880,   883,   885,   890,   894,   897,   907,   909,   910,   915,
     919,   924,   926,   929,   934,   941,   947,   954,   961,   968,
     975,   980,   982,   984,   988,   991,   993,   997,  1000,  1002,
    1004,  1009,  1011,  1014,  1015,  1018,  1019,  1022,  1026,  1027,
    1029,  1031,  1032,  1036,  1038,  1040,  1042,  1044,  1046,  1048,
    1050,  1052,  1054,  1056,  1060,  1063,  1065,  1067,  1071,  1074,
    1077,  1080,  1085,  1087,  1091,  1093,  1095,  1097,  1101,  1104,
    1106,  1110,  1114,  1115,  1118,  1119,  1121,  1127,  1131,  1135,
    1137,  1139,  1141,  1143,  1145,  1147,  1153,  1155,  1158,  1159,
    1163,  1167,  1168,  1170,  1173,  1177,  1181,  1183,  1185,  1187,
    1189,  1192,  1194,  1199,  1204,  1206,  1208,  1213,  1214,  1216,
    1218,  1220,  1225,  1230,  1232,  1234,  1238,  1240,  1243,  1247,
    1249,  1251,  1256,  1257,  1258,  1261,  1267,  1271,  1275,  1277,
    1284,  1289,  1294,  1297,  1300,  1303,  1305,  1308,  1310,  1315,
    1319,  1323,  1330,  1334,  1336,  1338,  1340,  1345,  1350,  1353,
    1356,  1361,  1364,  1367,  1369,  1373,  1377
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
     136,    13,   235,    -1,    85,   136,    13,   235,    -1,   166,
     167,    -1,    -1,   168,    -1,   175,    -1,   176,    -1,   115,
     151,   152,   153,    -1,   169,    -1,   136,    26,    -1,   149,
     166,   150,    -1,   116,   151,   241,   152,   168,   196,   198,
      -1,   116,   151,   241,   152,    26,   166,   197,   199,    66,
     153,    -1,   147,   151,   241,   152,   195,    -1,    93,   168,
     147,   151,   241,   152,   153,    -1,   109,   151,   218,   153,
     218,   153,   218,   152,   188,    -1,   138,   151,   241,   152,
     192,    -1,    76,   153,    -1,    76,   241,   153,    -1,    87,
     153,    -1,    87,   241,   153,    -1,   134,   153,    -1,   134,
     220,   153,    -1,   134,   245,   153,    -1,   113,   205,   153,
      -1,    72,   207,   153,    -1,    97,   217,   153,    -1,   118,
      -1,   241,   153,    -1,   143,   151,   173,   152,   153,    -1,
     110,   151,   245,    74,   187,   186,   152,   189,    -1,   110,
     151,   220,    74,   245,   186,   152,   189,    -1,    89,   151,
     191,   152,   190,    -1,   153,    -1,   142,   149,   166,   150,
      79,   151,   226,   146,   152,   149,   166,   150,   170,    -1,
     139,   241,   153,    -1,   114,   136,   153,    -1,   171,    -1,
      -1,   172,    -1,   171,   172,    -1,    79,   151,   226,   146,
     152,   149,   166,   150,    -1,   174,    -1,   173,     8,   174,
      -1,   245,    -1,   178,    -1,   179,    -1,    -1,    31,    -1,
     221,   177,   136,   151,   200,   152,   149,   166,   150,    -1,
     180,   136,   181,   184,   149,   208,   150,    -1,   182,   136,
     183,   149,   208,   150,    -1,    81,    -1,    71,    81,    -1,
      70,    81,    -1,    -1,   107,   226,    -1,   120,    -1,    -1,
     107,   185,    -1,    -1,   117,   185,    -1,   226,    -1,   185,
       8,   226,    -1,    -1,    96,   187,    -1,   245,    -1,    31,
     245,    -1,   168,    -1,    26,   166,   101,   153,    -1,   168,
      -1,    26,   166,   102,   153,    -1,   168,    -1,    26,   166,
     100,   153,    -1,   136,    13,   235,    -1,   191,     8,   136,
      13,   235,    -1,   149,   193,   150,    -1,   149,   153,   193,
     150,    -1,    26,   193,   104,   153,    -1,    26,   153,   193,
     104,   153,    -1,    -1,   193,    78,   241,   194,   166,    -1,
     193,    90,   194,   166,    -1,    26,    -1,   153,    -1,   168,
      -1,    26,   166,   105,   153,    -1,    -1,   196,    64,   151,
     241,   152,   168,    -1,    -1,   197,    64,   151,   241,   152,
      26,   166,    -1,    -1,    65,   168,    -1,    -1,    65,    26,
     166,    -1,   201,    -1,    -1,   202,   146,    -1,   202,    31,
     146,    -1,   202,    31,   146,    13,   235,    -1,   202,   146,
      13,   235,    -1,   201,     8,   202,   146,    -1,   201,     8,
     202,    31,   146,    -1,   201,     8,   202,    31,   146,    13,
     235,    -1,   201,     8,   202,   146,    13,   235,    -1,    -1,
     226,    -1,    73,    -1,   204,    -1,    -1,   220,    -1,   245,
      -1,    31,   243,    -1,   204,     8,   220,    -1,   204,     8,
     245,    -1,   204,     8,    31,   243,    -1,   205,     8,   206,
      -1,   206,    -1,   146,    -1,   155,   242,    -1,   155,   149,
     241,   150,    -1,   207,     8,   146,    -1,   207,     8,   146,
      13,   235,    -1,   146,    -1,   146,    13,   235,    -1,   208,
     209,    -1,    -1,   211,   215,   153,    -1,   216,   153,    -1,
     212,   221,   177,   136,   151,   200,   152,   210,    -1,   153,
      -1,   149,   166,   150,    -1,   213,    -1,   145,    -1,    -1,
     213,    -1,   214,    -1,   213,   214,    -1,    67,    -1,    68,
      -1,    69,    -1,    72,    -1,    71,    -1,    70,    -1,   215,
       8,   146,    -1,   215,     8,   146,    13,   235,    -1,   146,
      -1,   146,    13,   235,    -1,   216,     8,   136,    13,   235,
      -1,    85,   136,    13,   235,    -1,   217,     8,   241,    -1,
     241,    -1,    -1,   219,    -1,   219,     8,   241,    -1,   241,
      -1,   123,   151,   261,   152,    13,   241,    -1,   245,    13,
     241,    -1,   245,    13,    31,   245,    -1,   245,    13,    31,
      63,   227,   233,    -1,    63,   227,   233,    -1,    62,   241,
      -1,   245,    24,   241,    -1,   245,    23,   241,    -1,   245,
      22,   241,    -1,   245,    21,   241,    -1,   245,    20,   241,
      -1,   245,    19,   241,    -1,   245,    18,   241,    -1,   245,
      17,   241,    -1,   245,    16,   241,    -1,   245,    15,   241,
      -1,   245,    14,   241,    -1,   244,    59,    -1,    59,   244,
      -1,   244,    58,    -1,    58,   244,    -1,   241,    27,   241,
      -1,   241,    28,   241,    -1,   241,     9,   241,    -1,   241,
      11,   241,    -1,   241,    10,   241,    -1,   241,    29,   241,
      -1,   241,    31,   241,    -1,   241,    30,   241,    -1,   241,
      44,   241,    -1,   241,    42,   241,    -1,   241,    43,   241,
      -1,   241,    45,   241,    -1,   241,    46,   241,    -1,   241,
      47,   241,    -1,   241,    41,   241,    -1,   241,    40,   241,
      -1,    42,   241,    -1,    43,   241,    -1,    48,   241,    -1,
      50,   241,    -1,   241,    33,   241,    -1,   241,    32,   241,
      -1,   241,    35,   241,    -1,   241,    34,   241,    -1,   241,
      36,   241,    -1,   241,    39,   241,    -1,   241,    37,   241,
      -1,   241,    38,   241,    -1,   241,    49,   227,    -1,   151,
     241,   152,    -1,   241,    25,   241,    26,   241,    -1,   241,
      25,    26,   241,    -1,   268,    -1,    57,   241,    -1,    56,
     241,    -1,    55,   241,    -1,    54,   241,    -1,    53,   241,
      -1,    52,   241,    -1,    51,   241,    -1,   106,   231,    -1,
      60,   241,    -1,   237,    -1,    73,   151,   263,   152,    -1,
     154,   232,   154,    -1,    12,   241,    -1,   221,   177,   151,
     200,   152,   222,   149,   166,   150,    -1,   112,    -1,    -1,
     144,   151,   223,   152,    -1,   223,     8,   146,    -1,   223,
       8,    31,   146,    -1,   146,    -1,    31,   146,    -1,   161,
     151,   203,   152,    -1,   126,   128,   161,   151,   203,   152,
      -1,   128,   161,   151,   203,   152,    -1,   225,   133,   136,
     151,   203,   152,    -1,   225,   133,   249,   151,   203,   152,
      -1,   251,   133,   136,   151,   203,   152,    -1,   251,   133,
     249,   151,   203,   152,    -1,   249,   151,   203,   152,    -1,
      72,    -1,   161,    -1,   126,   128,   161,    -1,   128,   161,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     225,    -1,   228,    -1,   253,   130,   257,   229,    -1,   253,
      -1,   229,   230,    -1,    -1,   130,   257,    -1,    -1,   151,
     152,    -1,   151,   241,   152,    -1,    -1,    99,    -1,   265,
      -1,    -1,   151,   203,   152,    -1,   124,    -1,    92,    -1,
      86,    -1,   122,    -1,   108,    -1,    91,    -1,    82,    -1,
     125,    -1,   111,    -1,   127,    -1,   135,    99,   103,    -1,
     135,   103,    -1,   234,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,    42,   235,    -1,    43,   235,    -1,
      73,   151,   238,   152,    -1,   236,    -1,   225,   133,   136,
      -1,   137,    -1,   270,    -1,   161,    -1,   126,   128,   161,
      -1,   128,   161,    -1,   234,    -1,   156,   265,   156,    -1,
     135,   265,   103,    -1,    -1,   240,   239,    -1,    -1,     8,
      -1,   240,     8,   235,    96,   235,    -1,   240,     8,   235,
      -1,   235,    96,   235,    -1,   235,    -1,   242,    -1,   220,
      -1,   245,    -1,   245,    -1,   245,    -1,   252,   130,   257,
     248,   246,    -1,   252,    -1,   246,   247,    -1,    -1,   130,
     257,   248,    -1,   151,   203,   152,    -1,    -1,   254,    -1,
     260,   254,    -1,   225,   133,   249,    -1,   251,   133,   249,
      -1,   254,    -1,   253,    -1,   224,    -1,   254,    -1,   260,
     254,    -1,   250,    -1,   254,    61,   256,   157,    -1,   254,
     149,   241,   150,    -1,   255,    -1,   146,    -1,   155,   149,
     241,   150,    -1,    -1,   241,    -1,   258,    -1,   249,    -1,
     258,    61,   256,   157,    -1,   258,   149,   241,   150,    -1,
     259,    -1,   136,    -1,   149,   241,   150,    -1,   155,    -1,
     260,   155,    -1,   261,     8,   262,    -1,   262,    -1,   245,
      -1,   123,   151,   261,   152,    -1,    -1,    -1,   264,   239,
      -1,   264,     8,   241,    96,   241,    -1,   264,     8,   241,
      -1,   241,    96,   241,    -1,   241,    -1,   264,     8,   241,
      96,    31,   243,    -1,   264,     8,    31,   243,    -1,   241,
      96,    31,   243,    -1,    31,   243,    -1,   265,   266,    -1,
     265,    99,    -1,   266,    -1,    99,   266,    -1,   146,    -1,
     146,    61,   267,   157,    -1,   146,   130,   136,    -1,    95,
     241,   150,    -1,    95,   137,    61,   241,   157,   150,    -1,
      88,   245,   150,    -1,   136,    -1,   129,    -1,   146,    -1,
     121,   151,   269,   152,    -1,    98,   151,   245,   152,    -1,
       7,   241,    -1,     6,   241,    -1,     5,   151,   241,   152,
      -1,     4,   241,    -1,     3,   241,    -1,   245,    -1,   269,
       8,   245,    -1,   225,   133,   136,    -1,   251,   133,   136,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   225,   225,   229,   230,   234,   235,   239,   240,   241,
     242,   243,   244,   246,   248,   249,   253,   254,   258,   259,
     260,   261,   265,   266,   270,   271,   276,   277,   278,   279,
     284,   285,   289,   290,   291,   292,   293,   294,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   321,   325,   326,   327,   333,   334,   339,
     340,   344,   345,   350,   355,   356,   360,   364,   368,   372,
     374,   379,   384,   390,   400,   401,   402,   405,   407,   411,
     414,   416,   419,   421,   425,   426,   429,   431,   436,   437,
     441,   442,   447,   448,   453,   454,   459,   460,   465,   466,
     467,   468,   472,   474,   475,   480,   481,   486,   487,   492,
     494,   498,   500,   504,   506,   510,   512,   517,   518,   523,
     524,   525,   526,   527,   528,   529,   530,   534,   536,   537,
     542,   543,   548,   549,   550,   551,   552,   553,   557,   558,
     563,   564,   565,   570,   571,   572,   573,   579,   580,   585,
     586,   587,   593,   594,   598,   599,   602,   604,   608,   609,
     613,   614,   615,   616,   617,   618,   622,   623,   624,   625,
     629,   630,   634,   635,   639,   641,   645,   646,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     704,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   725,   728,   730,   734,
     735,   736,   737,   741,   744,   747,   750,   753,   756,   759,
     762,   768,   769,   770,   771,   775,   776,   777,   783,   784,
     789,   792,   797,   798,   803,   806,   808,   809,   812,   814,
     815,   819,   821,   826,   827,   828,   829,   830,   831,   832,
     833,   834,   835,   836,   837,   842,   843,   844,   845,   846,
     847,   848,   849,   853,   857,   858,   859,   860,   861,   862,
     863,   864,   868,   870,   873,   875,   879,   880,   881,   882,
     886,   887,   892,   897,   901,   905,   908,   912,   913,   918,
     922,   925,   929,   930,   934,   935,   940,   944,   945,   950,
     951,   952,   956,   957,   958,   963,   964,   967,   969,   974,
     975,   979,   980,   981,   985,   986,   990,   991,   995,   996,
    1001,  1002,  1003,  1007,  1009,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1024,  1025,  1026,  1027,  1033,  1034,  1035,
    1036,  1037,  1038,  1043,  1044,  1045,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1060,  1061,  1065,  1066
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
  "class_statement_list", "class_statement", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "expr_without_variable", "function",
  "lexical_vars", "lexical_var_list", "function_call", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
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
     177,   178,   179,   179,   180,   180,   180,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     192,   192,   193,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   201,   201,   201,   201,   201,   201,   202,   202,   202,
     203,   203,   204,   204,   204,   204,   204,   204,   205,   205,
     206,   206,   206,   207,   207,   207,   207,   208,   208,   209,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   213,
     214,   214,   214,   214,   214,   214,   215,   215,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   221,   222,   222,   223,
     223,   223,   223,   224,   224,   224,   224,   224,   224,   224,
     224,   225,   225,   225,   225,   226,   226,   226,   227,   227,
     228,   228,   229,   229,   230,   231,   231,   231,   232,   232,
     232,   233,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   235,   235,   235,   235,   235,
     235,   235,   235,   236,   237,   237,   237,   237,   237,   237,
     237,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   241,   242,   243,   244,   245,   245,   246,   246,   247,
     248,   248,   249,   249,   250,   250,   251,   252,   252,   253,
     253,   253,   254,   254,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     262,   262,   262,   263,   263,   264,   264,   264,   264,   264,
     264,   264,   264,   265,   265,   265,   265,   266,   266,   266,
     266,   266,   266,   267,   267,   267,   268,   268,   268,   268,
     268,   268,   268,   269,   269,   270,   270
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
       1,     9,     7,     6,     1,     2,     2,     0,     2,     1,
       0,     2,     0,     2,     1,     3,     0,     2,     1,     2,
       1,     4,     1,     4,     1,     4,     3,     5,     3,     4,
       4,     5,     0,     5,     4,     1,     1,     1,     4,     0,
       6,     0,     7,     0,     2,     0,     3,     1,     0,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     3,
       2,     8,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     3,     1,     6,     3,
       4,     6,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     4,     3,     2,     9,     1,     0,     4,     3,
       4,     1,     2,     4,     6,     5,     6,     6,     6,     6,
       4,     1,     1,     3,     2,     1,     3,     2,     1,     1,
       4,     1,     2,     0,     2,     0,     2,     3,     0,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     3,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     3,     2,     1,
       3,     3,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     5,     1,     2,     0,     3,
       3,     0,     1,     2,     3,     3,     1,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     0,     1,     1,
       1,     4,     4,     1,     1,     3,     1,     2,     3,     1,
       1,     4,     0,     0,     2,     5,     3,     3,     1,     6,
       4,     4,     2,     2,     2,     1,     2,     1,     4,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     2,     2,
       4,     2,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
       0,    74,   289,     0,   285,     0,     0,   288,   284,     0,
       0,     0,   275,   287,     0,     0,   291,   246,     0,     0,
       0,     0,    49,    79,     0,   286,     0,   283,   290,     0,
     292,     0,     0,     0,     5,   304,     0,     0,     0,     0,
       0,   345,     0,    25,     0,    55,   278,   356,     0,   306,
       3,     0,     7,    30,     8,     9,    67,    68,     0,     0,
     321,    69,   338,     0,   309,   241,     0,   320,     0,   322,
       0,   341,     0,   326,   337,   339,   344,     0,   231,   305,
     261,     0,     5,    69,   392,   391,     0,   389,   388,   244,
     215,   216,   217,   218,   238,   237,   236,   235,   234,   233,
     232,     0,     0,   262,     0,   198,   324,     0,   196,   240,
     183,     0,     0,   262,   268,   281,   269,     0,   271,   339,
       0,    76,    75,   145,     0,   363,    39,     0,     0,    41,
       0,     0,     0,     0,   173,     0,     0,   239,   174,     0,
     140,     0,     0,   139,     0,     0,     0,     0,   362,     0,
       4,     0,   308,    43,   321,     0,   322,     0,     0,     0,
     294,   377,     0,   375,    31,     0,     0,    25,     0,     0,
      18,     0,    17,     0,     0,     0,   279,     0,   280,     0,
       0,     0,     0,   131,     0,    15,    77,    80,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   197,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,     0,   347,     0,   357,   340,     0,
       0,     0,   264,     0,     0,     0,   264,     0,   131,   182,
       0,     0,   340,     0,     0,    47,     0,   368,     0,   314,
      40,     0,    42,     0,     0,     0,     0,    48,     0,   276,
       0,     0,   175,   177,   321,   322,     0,   141,   322,     0,
      46,    58,     0,     0,   393,     0,     0,   360,     0,   359,
     307,     0,     4,    11,   131,    44,    45,     0,   304,     0,
     293,   376,     0,     0,   374,   311,   373,     0,    57,     0,
       0,    64,    66,    20,     0,     0,    14,     0,     0,    32,
      24,    26,    27,    28,   228,   243,     0,   310,     6,     0,
       0,   130,   321,   322,     0,     0,    82,     0,     0,     0,
     127,   395,   334,   332,     0,   201,   203,   202,     0,     0,
     199,   200,   204,   206,   205,   220,   219,   222,   221,   223,
     225,   226,   224,   214,   213,   208,   209,   207,   210,   211,
     212,   227,     0,   179,   194,   193,   192,   191,   190,   189,
     188,   187,   186,   185,   184,     0,   396,   335,   354,     0,
     350,   331,   349,   353,   348,     0,     0,   390,   263,     0,
       0,   263,   334,     0,   335,   273,     0,     0,     0,     0,
       0,     0,   296,     0,   295,   146,   302,   143,   372,   323,
       0,   242,   315,   364,    23,     0,     0,     0,     0,   172,
     387,   277,   174,     0,     0,     0,     0,   138,    10,     0,
       0,   386,   362,   362,     0,   131,    13,     0,     0,   382,
       0,   380,   384,   383,   385,     0,   379,     0,     0,     0,
       0,     0,    19,    16,     0,     0,   346,   134,   253,     0,
       0,     0,     0,   265,    78,     0,     0,    81,    84,   148,
     127,   129,     0,   117,     0,   128,   131,   131,   333,   230,
       0,     0,   180,   260,   131,   131,     0,   131,   328,   347,
       0,   342,   343,   282,   270,   299,   300,   312,     0,   298,
       0,     0,     0,     0,   367,     0,   366,    96,     0,    25,
      94,    54,     0,     0,   176,    86,     0,    86,    88,   142,
      25,   109,   394,     0,   358,     0,     0,    12,   255,     0,
     378,   102,   102,    38,     0,    65,    51,    21,    25,   107,
      35,     0,     0,   321,   322,    22,     0,   267,    83,   148,
       0,   156,     0,   247,   127,     0,   119,     0,     0,   229,
     281,     0,     0,   355,     0,   325,     0,     0,     0,   272,
     319,     0,   314,   297,   303,   144,   371,   370,     0,     0,
       0,     0,   174,     0,     0,    89,     0,   111,   113,   361,
     178,   254,     0,   102,     0,   102,     0,     0,     0,    29,
     137,   266,   156,    85,   160,   161,   162,   165,   164,   163,
       0,   155,    73,   147,     0,     0,   154,   158,     0,     0,
       0,     0,     0,   120,     0,   256,   257,   181,   258,   259,
     330,     0,   327,   351,   352,   274,     0,   301,   315,   313,
       0,   365,    97,     0,    36,     0,    87,     0,     0,   115,
       0,     0,    33,   381,     0,     0,     0,     0,     0,    98,
       0,     0,    72,     0,   168,     0,    69,   159,     0,   150,
      25,     0,    25,     0,   123,     0,   122,   331,   318,   317,
     369,    95,     0,    25,    92,    53,    52,     0,     0,     0,
       0,   114,     0,     0,   105,   106,    25,   100,    99,     0,
     108,     0,     0,     0,   149,     0,     0,     0,     0,   251,
       0,     0,   124,     0,   121,   329,     0,    25,    90,    37,
       0,     0,    25,     0,     0,   101,    25,   104,     0,   171,
     169,   166,     0,     0,    71,   252,     0,   248,   245,     0,
     126,   316,     0,     0,     0,   116,    34,     0,   103,    25,
       0,   127,   170,     0,   249,   125,     0,    93,     0,   110,
       0,   167,     0,   250,    91,    25,    60,     0,   112,     0,
      56,    59,    61,    25,   152,   151,     0,    62,     0,     0,
     153,     0,     0,    25,     0,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   201,   202,    81,   204,   350,
     351,    83,   810,   811,   812,   340,   341,   352,   353,   219,
      86,    87,    88,   366,    89,   368,   506,   507,   624,   557,
     759,   725,   551,   294,   573,   634,   736,   580,   628,   689,
     692,   729,   512,   513,   514,   360,   361,   172,   173,   154,
     591,   653,   815,   654,   655,   656,   657,   705,   658,   163,
     301,   302,    90,   113,   661,   750,    92,    93,   515,   145,
     146,   534,   609,   167,   207,   279,    94,   445,   446,    95,
     611,   453,   612,    96,    97,   448,    98,    99,   605,   672,
     528,   100,   101,   102,   103,   104,   105,   106,   425,   421,
     422,   423,   107,   318,   319,   288,   289,   192,   193,   485,
     108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -531
static const yytype_int16 yypact[] =
{
    -531,    61,  1856,  -531,  6294,  6294,  -121,  6294,  6294,  6294,
    6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,
    6294,   126,   126,  6294,  6294,   279,   -14,    27,    50,    76,
    4782,  -531,  -531,     5,  -531,  4908,    83,  -531,  -531,  4628,
    6294,    91,    92,  -531,   102,   108,  -531,  -531,   101,    82,
     153,   155,  -531,  -531,   164,  -531,   166,  -531,  -531,   -29,
    -531,   140,  5034,   360,   251,  -531,   167,  6294,   177,   178,
     -22,  -531,   184,  -531,  6294,  -531,   408,   191,   410,   -74,
    -531,    12,  -531,  -531,  -531,  -531,  -531,  -531,   147,   210,
    -531,   323,  -531,   224,  -531,  -531,  6552,  -531,   -10,   825,
     209,  -531,   234,   244,  -531,   -36,  -531,   115,  -531,  -531,
    -531,   249,  -531,   323,  7475,  7475,  6294,  7475,  7475,  1688,
    -531,  -531,   329,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,   252,   140,   -94,   246,  -531,  -531,   248,  -531,  -531,
    -531,   255,   140,   256,   262,   250,  -531,   286,   280,    -6,
     115,  -531,  -531,   396,    13,  5160,  -531,  6593,   416,  -531,
    6634,   303,   290,    15,  7475,   126,  5286,  -531,  6294,  6294,
    -531,   272,    16,  -531,   287,   289,  6294,   126,   276,   140,
    -531,   -85,   -57,  -531,   304,  7475,   190,   126,  6420,   134,
    -531,   -32,   373,  -531,  -531,  6294,  6679,  -531,   126,   140,
       0,    18,  -531,  6294,  2010,  6720,   -37,   288,   450,  6294,
     -37,   348,   320,  5412,   326,  -531,   366,   370,  -531,   -41,
     278,  6294,  6294,  6294,  5538,  6294,  6294,  6294,  6294,  6294,
    6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,
    6294,  6294,  6294,  6294,  6294,  6294,   279,  -531,  -531,  -531,
    5664,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,  6294,
    6294,  6294,  5412,   328,   277,  6294,  6294,   191,   -30,   316,
    6761,   140,   -35,   374,   375,   140,   256,   118,  5412,  -531,
     118,   277,    -5,  1262,   342,  -531,   126,  7350,   339,   485,
    -531,  1262,  -531,   484,    24,   362,  6294,  -531,   347,  -531,
    6806,   359,   523,  7475,   463,   951,  6294,  -531,  -531,   101,
    -531,  -531,   387,  6848,  -531,    25,   392,  -531,    29,  -531,
     -55,  1548,  -531,  -531,  5412,  -531,  -531,   397,   487,  7100,
    -531,  -531,    99,   415,  -531,  -531,  -531,  6889,  -531,  2164,
      30,  -531,  -531,    88,   419,   -22,  -531,  6932,   395,  -531,
    -531,  -531,  -531,  -531,  -531,  -531,  7141,  -531,  -531,   126,
     405,   550,    36,    67,   546,   353,   443,   353,   412,   413,
     302,   414,   424,    -5,   115,  7515,  7552,  1688,  6294,  7434,
    1995,  1024,  1436,  2146,  2299,  2453,  2453,  2453,  2453,   823,
    1001,  1001,  1001,   588,   588,   148,   148,   148,   329,   329,
     329,  -531,   206,  1688,  1688,  1688,  1688,  1688,  1688,  1688,
    1688,  1688,  1688,  1688,  1688,   411,   425,   426,  -531,  6294,
    -531,   428,    -1,  -531,  7475,   423,  7184,  -531,    72,   414,
     425,   256,  -531,   429,  -531,  -531,  1262,  1262,   433,   457,
     140,    53,   132,   453,  -531,  -531,  -531,   574,  -531,  -531,
    5790,  -531,  5916,  -531,  -531,  1262,   452,  3858,  6294,  7475,
    -531,  -531,  6294,  6294,   126,   161,  7226,  -531,  -531,  4012,
     126,  -531,   276,   276,   578,  5412,  -531,  1702,   440,  -531,
    6294,  -531,  -531,  -531,  -531,   436,  -531,    -7,   515,   126,
     449,   468,  -531,  -531,  4166,   460,  -531,  -531,  -531,  6042,
    1262,   488,   140,   256,  -531,   353,   464,   607,  -531,  -531,
     302,  -531,   470,   618,     4,  -531,  5412,  5412,    -5,  1842,
    6294,   279,  -531,  -531,  5412,  5412,  7267,  5412,  -531,  6294,
    6294,  -531,  -531,  -531,   497,  -531,  -531,  1262,   140,   172,
     535,   504,  1262,   126,  7475,   126,  7391,  -531,   630,  -531,
    -531,  -531,  6974,   492,  7475,   551,   126,   551,  -531,  -531,
    -531,  -531,  -531,    37,  -531,  6294,   494,  -531,  -531,   867,
    -531,   495,   501,  -531,   506,  -531,  -531,  -531,  -531,  -531,
    -531,   508,   126,    38,   116,  -531,   140,   256,   607,  -531,
     353,   301,   507,   518,   173,   517,   651,   513,   514,  1842,
     250,   519,   520,  -531,   521,   537,   512,  7308,   277,  -531,
     579,   522,   668,   180,  -531,  -531,  -531,  -531,  6168,  1262,
    2318,   524,  6294,   161,   526,  -531,   527,  3704,   120,  -531,
    1688,  -531,   530,  -531,   146,  -531,    14,   353,  2472,  -531,
    -531,   256,   321,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
     547,  -531,  -531,  -531,   538,   573,   539,  -531,    19,   541,
     536,   542,    34,   673,  1262,  -531,  -531,  -531,  -531,  -531,
    -531,   277,  -531,  -531,  -531,  -531,  1262,  -531,  1262,  -531,
     126,  7475,  -531,   540,  -531,   545,  -531,  4320,  4320,   156,
     543,  4628,  -531,  -531,   154,  6294,    -4,   548,    33,  -531,
     552,   549,  -531,   686,   687,    20,   323,  -531,   567,  -531,
    -531,    69,  -531,   558,   692,  1262,  -531,   428,  -531,   610,
    -531,  -531,  4474,  -531,  -531,  -531,  -531,   557,   683,   644,
    6294,  -531,   559,  1223,  -531,  -531,  -531,  -531,  -531,   561,
    -531,  1262,  1262,   565,  -531,   580,   701,  2626,   569,  -531,
      39,  2780,   704,  1262,  -531,  -531,  1262,  -531,  -531,  -531,
    2934,  6294,  -531,   566,  7015,  -531,  -531,  3704,   571,  -531,
    -531,   711,   575,  1262,  -531,  -531,    71,  -531,  -531,  1262,
    -531,  -531,  3088,   572,  7058,  3704,  -531,  4628,  3704,  -531,
    1262,   302,  -531,   581,  -531,  -531,   576,  -531,   702,  -531,
    3242,  -531,   582,  -531,  -531,  -531,   652,   200,  3704,   584,
    -531,   652,  -531,  -531,  -531,  -531,   353,  -531,  3396,   586,
    -531,   585,   589,  -531,  3550,  -531
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -531,  -531,  -162,   -20,  -531,  -531,   385,  -531,  -184,  -531,
       1,  -531,  -531,  -531,   -71,  -531,   253,     9,    10,  -105,
    -531,  -531,  -531,  -531,  -531,  -531,  -531,   236,   186,   121,
    -531,    58,  -531,  -531,  -531,  -530,    21,  -531,  -531,  -531,
    -531,  -531,  -493,  -531,   157,  -161,  -531,  -531,   438,  -531,
     163,  -531,  -531,  -531,  -531,  -531,    94,  -531,  -531,  -531,
    -452,  -531,    17,    -2,  -531,  -531,  -531,   337,  -351,  -239,
    -531,  -531,  -531,  -531,  -531,   160,   746,   786,  -531,  -531,
    -531,   143,  -531,   919,   590,  -344,   219,   125,  -531,  -531,
      40,  -211,  -531,   829,  -531,   -21,    11,  -531,   227,  -275,
    -531,  -531,    47,   291,   293,  -531,  -531,    77,   361,  -531,
    -531,  -531,  -531
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -337
static const yytype_int16 yytable[] =
{
      91,   133,   133,    82,   148,   143,   435,   401,   269,   372,
     553,    84,    85,   339,   504,   497,   508,   592,   321,   571,
     214,   284,   734,   296,   309,   265,   345,   708,   743,   332,
     116,   265,   456,   470,   212,   595,   149,   473,   489,   181,
     162,   182,   636,   212,  -132,   473,  -135,   776,   248,   249,
     200,   187,   417,   420,   212,   265,   265,   213,   188,  -262,
     529,     3,   372,   417,   322,   713,   432,   151,   323,   434,
     420,   212,   150,   212,   344,  -133,  -264,   213,  -263,   184,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   695,   212,   324,   369,   475,  -336,   333,   179,
     748,   415,   793,   694,   696,   698,   199,   112,   152,   191,
     370,   695,   272,   266,   112,  -332,   324,   433,   268,   266,
     180,  -333,   276,   696,  -136,  -324,  -324,  -336,   212,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   158,   572,   266,   266,   133,   136,   136,   530,   735,
     596,   133,   540,   208,   508,   211,   190,   133,   133,   320,
     477,   282,   491,   478,   699,   215,   285,   133,   297,   310,
     685,   346,   709,   744,  -324,  -324,   457,   471,   133,   343,
     714,   474,   490,   738,   690,   691,   304,   186,  -132,   629,
    -135,   777,   556,   243,   244,   245,   153,   246,   110,   616,
     212,   617,    91,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   749,   212,   794,   174,  -133,
     727,   728,   187,   475,   695,   148,   143,   155,   482,   188,
     362,   373,   695,   110,   161,   483,   696,   330,   640,   643,
     135,   138,   165,   166,   696,   484,   511,   170,  -324,  -324,
     697,   428,   131,   168,   132,   431,   171,   149,   732,   169,
     212,    71,   112,   442,    71,  -262,   133,   374,  -136,   521,
     267,   442,    71,    77,   373,   373,   112,   194,   110,   362,
     191,    77,   600,   216,   373,   373,   700,   131,   373,   132,
     298,   373,   373,   150,   305,   362,   308,   112,   802,   501,
     212,   502,   314,   317,   175,  -264,   176,    71,   212,   112,
     374,   374,   327,  -263,   566,   177,    77,   178,   195,    91,
     374,   374,    82,   342,   374,   200,   197,   374,   374,   198,
      84,    85,   131,   675,   132,   203,   720,    91,   363,   133,
     209,   362,   112,   326,   110,   503,   217,   503,   110,   813,
     503,   110,    71,   814,   218,   597,   598,   220,   134,   134,
     262,    77,   144,   601,   602,   620,   604,   263,   644,   645,
     646,   647,   648,   649,   264,   511,   627,   179,   246,   273,
     271,   274,   133,   275,   212,   518,   650,   363,   644,   645,
     646,   647,   648,   649,   638,   277,   717,   420,   131,   316,
     132,   278,   131,   363,   132,   141,   650,   142,   112,   283,
     281,   449,   112,   418,   371,   112,   442,   442,    71,   280,
     539,   306,    71,    71,    71,    71,   419,    77,   501,   291,
     502,    77,    77,    77,    77,   442,   187,   295,   112,   293,
     311,   312,   355,   188,   133,   133,   651,   334,   187,   363,
     133,   652,   133,   133,  -118,   188,   358,   325,   550,   189,
     420,   187,   364,   190,   416,   819,   651,   370,   188,   133,
     561,   702,   334,   365,    71,    91,   335,   367,    82,   501,
     442,   502,   587,    77,   449,   503,    84,    85,   447,   112,
     503,   451,   362,   452,   191,   579,   187,   455,   187,   460,
     148,   143,   134,   188,   357,   188,   191,   206,   134,   210,
     429,   430,   462,   458,   134,   134,   583,   442,   613,   191,
      71,    71,   442,   133,   134,   133,   747,   522,   751,    77,
      77,   463,   149,   362,   362,   134,   133,   464,   187,   760,
     468,   362,   362,   472,   362,   188,   495,   479,   480,   334,
     331,   486,   767,   336,   191,   492,   191,   498,   499,   500,
     505,   509,   133,   523,   510,   516,   641,   331,   150,   336,
     503,   331,   336,   782,   503,   517,   524,   525,   785,   527,
     531,   533,   788,   144,   537,   538,   541,   542,   548,   555,
     558,   565,   568,   570,   574,   562,   191,   317,   317,   442,
     363,   745,   576,   133,   577,   800,   644,   645,   646,   647,
     648,   649,   581,   589,   342,   590,   586,   503,    91,   373,
     443,   808,   593,   134,   584,    91,   594,   608,   443,   818,
     240,   241,   242,   243,   244,   245,    91,   246,   330,   824,
     614,   363,   363,   619,   442,   622,   631,   623,   633,   363,
     363,  -157,   363,   706,   635,   374,   442,   637,   442,   659,
     133,   639,   660,   663,   664,   665,   666,   671,   449,   673,
     449,   668,   669,   670,   677,   676,   678,   684,   687,   688,
     693,   625,   373,   703,   704,    47,   715,   711,   724,   724,
     710,   712,   731,   721,   730,   442,   134,   722,   739,   741,
     742,   737,   740,   746,   752,   753,   756,   449,   761,   762,
     763,   771,   765,   768,   773,   775,   772,   779,   374,   786,
     789,   442,   442,   758,   790,   797,   791,   803,   805,   804,
     493,   809,   821,   442,   807,   816,   442,   822,   823,   134,
     817,   588,   575,   626,   686,    91,   726,   467,   558,    91,
     707,   662,   642,   442,   766,   679,   606,   755,    91,   442,
     667,   307,     0,   563,     0,    91,   564,     0,     0,     0,
     442,   503,     0,   443,   443,     0,     0,     0,     0,     0,
      91,     0,     0,    91,     0,     0,    91,     0,   799,     0,
       0,     0,   443,     0,     0,     0,   503,     0,    91,     0,
       0,   134,   134,     0,     0,   449,    91,   134,     0,   134,
     134,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,    91,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     137,   137,     0,     0,   147,     0,     0,     0,   144,  -337,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,   443,     0,   221,   222,   223,   443,
     134,     0,   134,  -324,  -324,     0,     0,     0,     0,     0,
       0,     0,   224,   134,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,   134,
       0,     0,     0,   114,   115,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   139,   140,     0,     0,     0,     0,     0,   157,
       0,     0,     0,     0,   160,     0,   443,     0,     0,   164,
     134,     0,     0,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,     0,     0,     0,     0,
       0,   185,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   205,   137,     0,     0,     0,     0,     0,
     137,   443,     0,     0,     0,     0,   137,   137,     0,  -324,
    -324,     0,     0,   443,     0,   443,   137,   134,     0,     0,
       0,     0,     0,     0,   632,   465,     0,   137,     0,   444,
       0,     0,     0,     0,     0,   270,     0,   444,  -337,  -337,
    -337,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,   443,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   287,   147,     0,   454,   443,   443,
       0,     0,     0,     0,     0,   300,     0,   303,   185,     0,
     443,     0,     0,   443,     0,   313,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
     443,     0,     0,     0,   337,   137,   443,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,   443,   356,     0,
       0,     0,   185,     0,     0,     0,     0,     0,     0,     0,
     375,   376,   377,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   185,   444,   444,   424,   426,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,   444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,     0,   535,   536,     0,   466,     0,     0,     0,     0,
       0,   137,   221,   222,   223,     0,     0,     0,     0,     0,
       0,   547,     0,   185,     0,     0,   444,     0,   224,   734,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,   585,     0,   444,     0,
       0,     0,     0,   137,   137,     0,     0,   519,     0,   137,
       0,   137,   137,     0,   436,   437,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,     0,
       0,     0,     0,   610,     0,     0,     0,     0,   615,     0,
       0,     0,     0,     0,   110,   438,     0,     0,   526,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
     147,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,   544,
      43,   546,   137,    46,   137,     0,   735,   552,     0,     0,
       0,   303,   554,     0,    55,   137,    57,    58,   439,    60,
     440,     0,     0,     0,   185,     0,     0,   441,   112,   569,
       0,     0,     0,     0,     0,   682,     0,     0,     0,     0,
     444,   137,     0,     0,     0,     0,     0,     0,   185,     0,
       0,     0,   444,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   185,     0,     0,   599,
       0,     0,     0,   185,   185,     0,   185,     0,   424,   607,
     716,     0,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   444,   718,     0,   719,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   630,   246,     0,   444,   444,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   444,
       0,   754,   444,     0,     0,     0,     0,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   444,
       0,     0,     0,     0,     0,   444,     0,   769,   770,     0,
       0,     0,     0,     0,     0,     0,   444,   681,     0,   780,
       0,   303,   781,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,   792,
       9,     0,     0,     0,     0,   795,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   801,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,   733,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,    33,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,   764,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
     784,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,    70,     0,    71,    72,     0,    73,   476,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,   224,     9,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,    33,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,    70,     0,    71,    72,
       0,    73,   567,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,    33,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
      70,     0,    71,    72,     0,    73,     0,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   348,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
     349,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     111,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,   488,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,   683,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,   348,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,  -337,  -337,  -337,  -337,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,   701,    42,     0,
      43,    44,    45,    46,    47,    48,    49,   348,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,     0,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,   111,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,   774,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   348,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
     778,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,   783,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     111,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,   796,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,   348,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,   348,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,   806,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,   111,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,   820,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   348,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
     825,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     111,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   549,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,    30,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,    52,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   560,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,    30,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    51,     0,
      52,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,     0,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    51,     0,    52,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     757,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,    30,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,    52,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,     0,   156,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,   159,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     112,    65,     9,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    74,     0,   183,    76,    77,
      78,   286,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   112,    65,     9,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   112,    65,     9,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,   299,     0,
      76,    77,    78,   359,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,   378,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,     0,    76,    77,    78,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     112,    65,     9,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    74,     0,     0,    76,    77,
      78,   543,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   112,    65,     9,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   111,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   112,    65,     9,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
      76,    77,    78,   582,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   110,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   111,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   112,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,     0,     0,    76,    77,    78,   680,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     110,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   112,    65,     9,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,     0,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   110,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     112,    65,     9,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    74,     0,     0,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   111,    60,    61,     0,
       0,     0,     0,     0,     0,    63,   112,   328,     0,     0,
       0,   221,   222,   223,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   247,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   290,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   292,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   338,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   427,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   461,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     469,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   487,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   494,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   621,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   787,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     798,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     481,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   496,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   532,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   559,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   603,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,   221,   222,   223,   450,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   674,   224,
     520,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,   618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   223,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-531))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-337))

static const yytype_int16 yycheck[] =
{
       2,    21,    22,     2,    25,    25,   281,   246,   113,   220,
     462,     2,     2,   197,   365,   359,   367,   510,   180,    26,
       8,     8,    26,     8,     8,    61,     8,     8,     8,    61,
     151,    61,     8,     8,   128,    31,    25,     8,     8,    59,
      39,    61,   572,   128,     8,     8,     8,     8,    58,    59,
      70,    88,   263,   264,   128,    61,    61,   151,    95,   133,
      61,     0,   273,   274,   149,    31,   277,    81,   153,   280,
     281,   128,    25,   128,    74,     8,   133,   151,   133,    62,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    78,   128,   151,   136,   151,   133,   130,   128,
      31,   262,    31,   633,    90,   635,   128,   136,    81,   146,
     151,    78,   132,   149,   136,   151,   151,   278,   107,   149,
     149,   151,   142,    90,     8,    58,    59,   133,   128,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   136,   149,   149,   149,   165,    21,    22,   149,   153,
     146,   171,    99,    76,   505,    78,   103,   177,   178,   179,
     322,   150,    74,   324,   150,   153,   153,   187,   153,   153,
     622,   153,   153,   153,    58,    59,   152,   152,   198,   199,
     146,   152,   152,   150,    64,    65,   169,    62,   152,   152,
     152,   152,    31,    45,    46,    47,   146,    49,    72,   543,
     128,   545,   204,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   146,   128,   146,   136,   152,
      64,    65,    88,   151,    78,   246,   246,   151,   129,    95,
     213,   220,    78,    72,   151,   136,    90,   103,   582,   590,
      21,    22,   151,   151,    90,   146,    73,   146,    58,    59,
     104,   271,   126,   151,   128,   275,   155,   246,   104,   151,
     128,   146,   136,   283,   146,   133,   286,   220,   152,    63,
     155,   291,   146,   155,   263,   264,   136,    26,    72,   262,
     146,   155,   521,   136,   273,   274,   637,   126,   277,   128,
     165,   280,   281,   246,   169,   278,   171,   136,   791,   126,
     128,   128,   177,   178,   151,   133,   151,   146,   128,   136,
     263,   264,   187,   133,   475,   151,   155,   151,   151,   321,
     273,   274,   321,   198,   277,   345,   149,   280,   281,   151,
     321,   321,   126,   608,   128,   151,   680,   339,   213,   359,
     149,   324,   136,   153,    72,   365,   136,   367,    72,   149,
     370,    72,   146,   153,    31,   516,   517,   133,    21,    22,
     151,   155,    25,   524,   525,   549,   527,   133,    67,    68,
      69,    70,    71,    72,   130,    73,   560,   128,    49,   133,
     128,   133,   402,   128,   128,   374,    85,   262,    67,    68,
      69,    70,    71,    72,   578,   133,   671,   608,   126,   123,
     128,   151,   126,   278,   128,   126,    85,   128,   136,    13,
     130,   286,   136,   136,   136,   136,   436,   437,   146,   133,
     440,   149,   146,   146,   146,   146,   149,   155,   126,    13,
     128,   155,   155,   155,   155,   455,    88,   147,   136,   136,
     153,   152,   154,    95,   464,   465,   145,    99,    88,   324,
     470,   150,   472,   473,   152,    95,   136,   153,   457,    99,
     671,    88,   136,   103,   136,   816,   145,   151,    95,   489,
     469,   150,    99,   107,   146,   477,   103,   107,   477,   126,
     500,   128,   502,   155,   359,   505,   477,   477,   146,   136,
     510,   152,   475,     8,   146,   494,    88,    13,    88,   152,
     521,   521,   165,    95,   156,    95,   146,    99,   171,    99,
     136,   136,   153,   151,   177,   178,   499,   537,   538,   146,
     146,   146,   542,   543,   187,   545,   710,   402,   712,   155,
     155,     8,   521,   516,   517,   198,   556,    74,    88,   723,
     153,   524,   525,   151,   527,    95,   151,   150,    61,    99,
     189,   136,   736,   192,   146,   136,   146,   152,     8,    13,
     117,   149,   582,   152,   151,   151,   586,   206,   521,   208,
     590,   210,   211,   757,   594,   151,   151,   151,   762,   151,
     157,   152,   766,   246,   151,   128,   133,    13,   136,   464,
     465,    13,   152,   157,    79,   470,   146,   472,   473,   619,
     475,   706,   153,   623,   136,   789,    67,    68,    69,    70,
      71,    72,   152,   149,   489,     8,   128,   637,   620,   608,
     283,   805,   152,   286,   499,   627,     8,   130,   291,   813,
      42,    43,    44,    45,    46,    47,   638,    49,   103,   823,
     136,   516,   517,    13,   664,   153,   152,    96,   153,   524,
     525,   112,   527,   655,   153,   608,   676,   151,   678,   152,
     680,   153,   144,   146,    13,   152,   152,   130,   543,   157,
     545,   152,   152,   152,   152,    96,     8,   153,   152,   152,
     150,   556,   671,   136,   146,   112,    13,   151,   687,   688,
     149,   149,   691,   153,   151,   715,   359,   152,   146,    13,
      13,   153,   153,   136,   146,    13,    96,   582,   151,    26,
      66,   146,   153,   152,    13,   146,   136,    13,   671,   153,
     149,   741,   742,   722,    13,   153,   151,   146,    26,   153,
     345,    79,   146,   753,   152,   151,   756,   152,   149,   402,
     811,   505,   489,   557,   623,   747,   688,   309,   623,   751,
     656,   594,   589,   773,   733,   612,   529,   717,   760,   779,
     600,   171,    -1,   472,    -1,   767,   473,    -1,    -1,    -1,
     790,   791,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,
     782,    -1,    -1,   785,    -1,    -1,   788,    -1,   787,    -1,
      -1,    -1,   455,    -1,    -1,    -1,   816,    -1,   800,    -1,
      -1,   464,   465,    -1,    -1,   680,   808,   470,    -1,   472,
     473,    -1,    -1,    -1,    -1,    -1,   818,    -1,    -1,    -1,
      -1,    -1,   824,    -1,    -1,    -1,   489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,   521,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,   537,    -1,     9,    10,    11,   542,
     543,    -1,   545,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   556,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,   582,
      -1,    -1,    -1,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,   619,    -1,    -1,    40,
     623,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,   165,    -1,    -1,    -1,    -1,    -1,
     171,   664,    -1,    -1,    -1,    -1,   177,   178,    -1,    58,
      59,    -1,    -1,   676,    -1,   678,   187,   680,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    74,    -1,   198,    -1,   283,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   291,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   715,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,   155,   246,    -1,   291,   741,   742,
      -1,    -1,    -1,    -1,    -1,   166,    -1,   168,   169,    -1,
     753,    -1,    -1,   756,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
     773,    -1,    -1,    -1,   195,   286,   779,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,   790,   209,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,    -1,    -1,    -1,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   436,   437,   265,   266,    -1,    -1,   359,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
      -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,   436,   437,    -1,   306,    -1,    -1,    -1,    -1,
      -1,   402,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   455,    -1,   324,    -1,    -1,   500,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   537,    -1,    -1,   500,    -1,   542,    -1,
      -1,    -1,    -1,   464,   465,    -1,    -1,   378,    -1,   470,
      -1,   472,   473,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,   537,    -1,    -1,    -1,    -1,   542,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
     521,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   619,    -1,    -1,    -1,   450,
     108,   452,   543,   111,   545,    -1,   153,   458,    -1,    -1,
      -1,   462,   463,    -1,   122,   556,   124,   125,   126,   127,
     128,    -1,    -1,    -1,   475,    -1,    -1,   135,   136,   480,
      -1,    -1,    -1,    -1,    -1,   619,    -1,    -1,    -1,    -1,
     664,   582,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,   676,    -1,   678,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   516,   517,    -1,    -1,   520,
      -1,    -1,    -1,   524,   525,    -1,   527,    -1,   529,   530,
     664,    -1,   623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   715,   676,    -1,   678,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   565,    49,    -1,   741,   742,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,
      -1,   715,   756,    -1,    -1,    -1,    -1,    -1,    -1,   680,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,
      -1,    -1,    -1,    -1,    -1,   779,    -1,   741,   742,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   790,   618,    -1,   753,
      -1,   622,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,   773,
      12,    -1,    -1,    -1,    -1,   779,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   790,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,   695,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,   730,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
     761,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    25,    12,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
     144,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,   101,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
     156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,   152,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    26,    -1,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    25,    -1,    27,
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
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
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
     150,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     9,    10,    11,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    96,    -1,    -1,
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
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    81,    82,    85,    86,    87,    89,    91,    92,    93,
      97,    98,   106,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   134,   135,   136,   137,   138,   139,   142,   143,
     144,   146,   147,   149,   151,   153,   154,   155,   156,   161,
     162,   165,   168,   169,   175,   176,   178,   179,   180,   182,
     220,   221,   224,   225,   234,   237,   241,   242,   244,   245,
     249,   250,   251,   252,   253,   254,   255,   260,   268,   270,
      72,   126,   136,   221,   241,   241,   151,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   126,   128,   161,   225,   244,   245,   251,   244,   241,
     241,   126,   128,   161,   225,   227,   228,   251,   253,   254,
     260,    81,    81,   146,   207,   151,   153,   241,   136,   153,
     241,   151,   168,   217,   241,   151,   151,   231,   151,   151,
     146,   155,   205,   206,   136,   151,   151,   151,   151,   128,
     149,   161,   161,   153,   220,   241,   245,    88,    95,    99,
     103,   146,   265,   266,    26,   151,   241,   149,   151,   128,
     161,   163,   164,   151,   166,   241,    99,   232,   265,   149,
      99,   265,   128,   151,     8,   153,   136,   136,    31,   177,
     133,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   153,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   151,   133,   130,    61,   149,   155,   254,   177,
     241,   128,   161,   133,   133,   128,   161,   133,   151,   233,
     133,   130,   254,    13,     8,   153,    31,   241,   263,   264,
     153,    13,   153,   136,   191,   147,     8,   153,   245,   152,
     241,   218,   219,   241,   220,   245,   149,   242,   245,     8,
     153,   153,   152,   241,   245,   269,   123,   245,   261,   262,
     161,   160,   149,   153,   151,   153,   153,   245,   137,   241,
     103,   266,    61,   130,    99,   103,   266,   241,   153,   166,
     173,   174,   245,   161,    74,     8,   153,   241,   115,   150,
     167,   168,   175,   176,   152,   154,   241,   156,   136,    31,
     203,   204,   220,   245,   136,   107,   181,   107,   183,   136,
     151,   136,   249,   254,   260,   241,   241,   241,    26,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   227,    31,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   203,   136,   249,   136,   149,
     249,   257,   258,   259,   241,   256,   241,   152,   161,   136,
     136,   161,   249,   203,   249,   257,    42,    43,    73,   126,
     128,   135,   161,   225,   234,   235,   236,   146,   243,   245,
      96,   152,     8,   239,   235,    13,     8,   152,   151,   241,
     152,   152,   153,     8,    74,    74,   241,   206,   153,   152,
       8,   152,   151,     8,   152,   151,   150,   160,   203,   150,
      61,   150,   129,   136,   146,   267,   136,   152,   150,     8,
     152,    74,   136,   164,   152,   151,   150,   243,   152,     8,
      13,   126,   128,   161,   226,   117,   184,   185,   226,   149,
     151,    73,   200,   201,   202,   226,   151,   151,   254,   241,
      26,    63,   245,   152,   151,   151,   241,   151,   248,    61,
     149,   157,   150,   152,   229,   235,   235,   151,   128,   161,
      99,   133,    13,    31,   241,    31,   241,   235,   136,    26,
     168,   190,   241,   218,   241,   245,    31,   187,   245,   150,
      26,   168,   245,   261,   262,    13,   203,   150,   152,   241,
     157,    26,   149,   192,    79,   174,   153,   136,    26,   168,
     195,   152,    31,   220,   245,   235,   128,   161,   185,   149,
       8,   208,   200,   152,     8,    31,   146,   203,   203,   241,
     227,   203,   203,   150,   203,   246,   256,   241,   130,   230,
     235,   238,   240,   161,   136,   235,   243,   243,    96,    13,
     166,   152,   153,    96,   186,   245,   186,   166,   196,   152,
     241,   152,   157,   153,   193,   153,   193,   151,   166,   153,
     243,   161,   208,   226,    67,    68,    69,    70,    71,    72,
      85,   145,   150,   209,   211,   212,   213,   214,   216,   152,
     144,   222,   202,   146,    13,   152,   152,   233,   152,   152,
     152,   130,   247,   157,   150,   257,    96,   152,     8,   239,
      31,   241,   235,   100,   153,   218,   187,   152,   152,   197,
      64,    65,   198,   150,   193,    78,    90,   104,   193,   150,
     226,   105,   150,   136,   146,   215,   221,   214,     8,   153,
     149,   151,   149,    31,   146,    13,   235,   257,   235,   235,
     243,   153,   152,    26,   168,   189,   189,    64,    65,   199,
     151,   168,   104,   241,    26,   153,   194,   153,   150,   146,
     153,    13,    13,     8,   153,   177,   136,   166,    31,   146,
     223,   166,   146,    13,   235,   248,    96,    26,   168,   188,
     166,   151,    26,    66,   241,   153,   194,   166,   152,   235,
     235,   146,   136,    13,   150,   146,     8,   152,   150,    13,
     235,   235,   166,   102,   241,   166,   153,   152,   166,   149,
      13,   151,   235,    31,   146,   235,   101,   153,   152,   168,
     166,   235,   200,   146,   153,    26,   150,   152,   166,    79,
     170,   171,   172,   149,   153,   210,   151,   172,   166,   226,
     150,   146,   152,   149,   166,   150
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
#line 3711 "/home/roberto/workspace/pelet/src/Php53LintParser.cpp"
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
#line 1069 "/home/roberto/workspace/pelet/src/Php53LintParser.y"


