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
#define yyparse         php53_resource_parse
#define yylex           php53_resource_lex
#define yyerror         php53_resource_error
#define yylval          php53_resource_lval
#define yychar          php53_resource_char
#define yydebug         php53_resource_debug
#define yynerrs         php53_resource_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"

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
#define php53_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php53_resource_error pelet::ResourceGrammarError



/* Line 268 of yacc.c  */
#line 124 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.cpp"

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
#line 295 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.cpp"

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
#define YYLAST   7504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNRULES -- Number of states.  */
#define YYNSTATES  841

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
     317,   320,   323,   324,   327,   329,   330,   333,   334,   337,
     339,   343,   344,   347,   349,   352,   354,   359,   361,   366,
     368,   373,   377,   383,   387,   392,   397,   403,   404,   410,
     415,   417,   419,   421,   426,   427,   434,   435,   443,   444,
     447,   448,   452,   454,   455,   458,   462,   468,   473,   478,
     484,   492,   499,   500,   502,   504,   506,   507,   509,   511,
     514,   518,   522,   527,   531,   533,   535,   538,   543,   547,
     553,   555,   559,   562,   563,   567,   570,   571,   581,   583,
     587,   589,   591,   592,   594,   596,   599,   601,   603,   605,
     607,   609,   611,   615,   621,   623,   627,   633,   638,   642,
     644,   645,   647,   651,   653,   660,   664,   669,   676,   680,
     683,   687,   691,   695,   699,   703,   707,   711,   715,   719,
     723,   727,   730,   733,   736,   739,   743,   747,   751,   755,
     759,   763,   767,   771,   775,   779,   783,   787,   791,   795,
     799,   803,   806,   809,   812,   815,   819,   823,   827,   831,
     835,   839,   843,   847,   851,   855,   861,   866,   868,   871,
     874,   877,   880,   883,   886,   889,   892,   895,   897,   902,
     906,   909,   910,   921,   923,   924,   929,   933,   938,   940,
     943,   944,   950,   957,   958,   965,   972,   979,   986,   993,
     998,  1000,  1002,  1006,  1009,  1011,  1015,  1018,  1020,  1022,
    1027,  1029,  1032,  1033,  1036,  1037,  1040,  1044,  1045,  1047,
    1049,  1050,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1070,  1072,  1074,  1078,  1081,  1083,  1085,  1089,  1092,  1095,
    1098,  1103,  1105,  1109,  1111,  1113,  1115,  1119,  1122,  1124,
    1128,  1132,  1133,  1136,  1137,  1139,  1145,  1149,  1153,  1155,
    1157,  1159,  1161,  1163,  1165,  1166,  1167,  1175,  1177,  1180,
    1181,  1185,  1189,  1190,  1192,  1195,  1199,  1203,  1205,  1207,
    1209,  1211,  1214,  1216,  1221,  1226,  1228,  1230,  1235,  1236,
    1238,  1240,  1242,  1247,  1252,  1254,  1256,  1260,  1262,  1265,
    1269,  1271,  1273,  1278,  1279,  1280,  1283,  1289,  1293,  1297,
    1299,  1306,  1311,  1316,  1319,  1322,  1325,  1327,  1330,  1332,
    1337,  1341,  1345,  1352,  1356,  1358,  1360,  1362,  1367,  1372,
    1373,  1377,  1378,  1382,  1387,  1388,  1392,  1393,  1397,  1399,
    1403,  1407
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
     136,    -1,   167,     8,   136,    13,   244,    -1,    85,   136,
      13,   244,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   250,
     152,   170,   201,   203,    -1,   116,   151,   250,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   250,   152,
     200,    -1,    93,   170,   147,   151,   250,   152,   153,    -1,
     109,   151,   224,   153,   224,   153,   224,   152,   193,    -1,
     138,   151,   250,   152,   197,    -1,    76,   153,    -1,    76,
     250,   153,    -1,    87,   153,    -1,    87,   250,   153,    -1,
     134,   153,    -1,   134,   226,   153,    -1,   134,   254,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     223,   153,    -1,   118,    -1,   250,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   254,    74,   192,   191,
     152,   194,    -1,   110,   151,   226,    74,   254,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   235,   146,   152,   149,
     168,   150,   172,    -1,   139,   250,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   235,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   254,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   228,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
      70,    81,    -1,    -1,   107,   235,    -1,   120,    -1,    -1,
     107,   190,    -1,    -1,   117,   190,    -1,   235,    -1,   190,
       8,   235,    -1,    -1,    96,   192,    -1,   254,    -1,    31,
     254,    -1,   170,    -1,    26,   168,   101,   153,    -1,   170,
      -1,    26,   168,   102,   153,    -1,   170,    -1,    26,   168,
     100,   153,    -1,   136,    13,   244,    -1,   196,     8,   136,
      13,   244,    -1,   149,   198,   150,    -1,   149,   153,   198,
     150,    -1,    26,   198,   104,   153,    -1,    26,   153,   198,
     104,   153,    -1,    -1,   198,    78,   250,   199,   168,    -1,
     198,    90,   199,   168,    -1,    26,    -1,   153,    -1,   170,
      -1,    26,   168,   105,   153,    -1,    -1,   201,    64,   151,
     250,   152,   170,    -1,    -1,   202,    64,   151,   250,   152,
      26,   168,    -1,    -1,    65,   170,    -1,    -1,    65,    26,
     168,    -1,   206,    -1,    -1,   207,   146,    -1,   207,    31,
     146,    -1,   207,    31,   146,    13,   244,    -1,   207,   146,
      13,   244,    -1,   206,     8,   207,   146,    -1,   206,     8,
     207,    31,   146,    -1,   206,     8,   207,    31,   146,    13,
     244,    -1,   206,     8,   207,   146,    13,   244,    -1,    -1,
     235,    -1,    73,    -1,   209,    -1,    -1,   226,    -1,   254,
      -1,    31,   252,    -1,   209,     8,   226,    -1,   209,     8,
     254,    -1,   209,     8,    31,   252,    -1,   210,     8,   211,
      -1,   211,    -1,   146,    -1,   155,   251,    -1,   155,   149,
     250,   150,    -1,   212,     8,   146,    -1,   212,     8,   146,
      13,   244,    -1,   146,    -1,   146,    13,   244,    -1,   213,
     214,    -1,    -1,   217,   221,   153,    -1,   222,   153,    -1,
      -1,   218,   228,   179,   136,   151,   205,   152,   215,   216,
      -1,   153,    -1,   149,   168,   150,    -1,   219,    -1,   145,
      -1,    -1,   219,    -1,   220,    -1,   219,   220,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   221,     8,   146,    -1,   221,     8,   146,    13,   244,
      -1,   146,    -1,   146,    13,   244,    -1,   222,     8,   136,
      13,   244,    -1,    85,   136,    13,   244,    -1,   223,     8,
     250,    -1,   250,    -1,    -1,   225,    -1,   225,     8,   250,
      -1,   250,    -1,   123,   151,   272,   152,    13,   250,    -1,
     254,    13,   250,    -1,   254,    13,    31,   254,    -1,   254,
      13,    31,    63,   236,   242,    -1,    63,   236,   242,    -1,
      62,   250,    -1,   254,    24,   250,    -1,   254,    23,   250,
      -1,   254,    22,   250,    -1,   254,    21,   250,    -1,   254,
      20,   250,    -1,   254,    19,   250,    -1,   254,    18,   250,
      -1,   254,    17,   250,    -1,   254,    16,   250,    -1,   254,
      15,   250,    -1,   254,    14,   250,    -1,   253,    59,    -1,
      59,   253,    -1,   253,    58,    -1,    58,   253,    -1,   250,
      27,   250,    -1,   250,    28,   250,    -1,   250,     9,   250,
      -1,   250,    11,   250,    -1,   250,    10,   250,    -1,   250,
      29,   250,    -1,   250,    31,   250,    -1,   250,    30,   250,
      -1,   250,    44,   250,    -1,   250,    42,   250,    -1,   250,
      43,   250,    -1,   250,    45,   250,    -1,   250,    46,   250,
      -1,   250,    47,   250,    -1,   250,    41,   250,    -1,   250,
      40,   250,    -1,    42,   250,    -1,    43,   250,    -1,    48,
     250,    -1,    50,   250,    -1,   250,    33,   250,    -1,   250,
      32,   250,    -1,   250,    35,   250,    -1,   250,    34,   250,
      -1,   250,    36,   250,    -1,   250,    39,   250,    -1,   250,
      37,   250,    -1,   250,    38,   250,    -1,   250,    49,   236,
      -1,   151,   250,   152,    -1,   250,    25,   250,    26,   250,
      -1,   250,    25,    26,   250,    -1,   279,    -1,    57,   250,
      -1,    56,   250,    -1,    55,   250,    -1,    54,   250,    -1,
      53,   250,    -1,    52,   250,    -1,    51,   250,    -1,   106,
     240,    -1,    60,   250,    -1,   246,    -1,    73,   151,   274,
     152,    -1,   154,   241,   154,    -1,    12,   250,    -1,    -1,
     228,   179,   151,   205,   152,   229,   149,   227,   168,   150,
      -1,   112,    -1,    -1,   144,   151,   230,   152,    -1,   230,
       8,   146,    -1,   230,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   151,   232,   208,   152,    -1,
     126,   128,   161,   151,   208,   152,    -1,    -1,   128,   161,
     151,   233,   208,   152,    -1,   234,   133,   136,   151,   208,
     152,    -1,   234,   133,   260,   151,   208,   152,    -1,   262,
     133,   136,   151,   208,   152,    -1,   262,   133,   260,   151,
     208,   152,    -1,   260,   151,   208,   152,    -1,    72,    -1,
     161,    -1,   126,   128,   161,    -1,   128,   161,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   234,    -1,
     237,    -1,   264,   130,   268,   238,    -1,   264,    -1,   238,
     239,    -1,    -1,   130,   268,    -1,    -1,   151,   152,    -1,
     151,   250,   152,    -1,    -1,    99,    -1,   276,    -1,    -1,
     151,   208,   152,    -1,   124,    -1,    92,    -1,    86,    -1,
     122,    -1,   108,    -1,    91,    -1,    82,    -1,   125,    -1,
     111,    -1,   127,    -1,   135,    99,   103,    -1,   135,   103,
      -1,   243,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,    42,   244,    -1,    43,   244,    -1,    73,   151,
     247,   152,    -1,   245,    -1,   234,   133,   136,    -1,   137,
      -1,   285,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   243,    -1,   156,   276,   156,    -1,   135,   276,
     103,    -1,    -1,   249,   248,    -1,    -1,     8,    -1,   249,
       8,   244,    96,   244,    -1,   249,     8,   244,    -1,   244,
      96,   244,    -1,   244,    -1,   251,    -1,   226,    -1,   254,
      -1,   254,    -1,   254,    -1,    -1,    -1,   263,   130,   255,
     268,   259,   256,   257,    -1,   263,    -1,   257,   258,    -1,
      -1,   130,   268,   259,    -1,   151,   208,   152,    -1,    -1,
     265,    -1,   271,   265,    -1,   234,   133,   260,    -1,   262,
     133,   260,    -1,   265,    -1,   264,    -1,   231,    -1,   265,
      -1,   271,   265,    -1,   261,    -1,   265,    61,   267,   157,
      -1,   265,   149,   250,   150,    -1,   266,    -1,   146,    -1,
     155,   149,   250,   150,    -1,    -1,   250,    -1,   269,    -1,
     260,    -1,   269,    61,   267,   157,    -1,   269,   149,   250,
     150,    -1,   270,    -1,   136,    -1,   149,   250,   150,    -1,
     155,    -1,   271,   155,    -1,   272,     8,   273,    -1,   273,
      -1,   254,    -1,   123,   151,   272,   152,    -1,    -1,    -1,
     275,   248,    -1,   275,     8,   250,    96,   250,    -1,   275,
       8,   250,    -1,   250,    96,   250,    -1,   250,    -1,   275,
       8,   250,    96,    31,   252,    -1,   275,     8,    31,   252,
      -1,   250,    96,    31,   252,    -1,    31,   252,    -1,   276,
     277,    -1,   276,    99,    -1,   277,    -1,    99,   277,    -1,
     146,    -1,   146,    61,   278,   157,    -1,   146,   130,   136,
      -1,    95,   250,   150,    -1,    95,   137,    61,   250,   157,
     150,    -1,    88,   254,   150,    -1,   136,    -1,   129,    -1,
     146,    -1,   121,   151,   284,   152,    -1,    98,   151,   254,
     152,    -1,    -1,     7,   280,   250,    -1,    -1,     6,   281,
     250,    -1,     5,   151,   250,   152,    -1,    -1,     4,   282,
     250,    -1,    -1,     3,   283,   250,    -1,   254,    -1,   284,
       8,   254,    -1,   234,   133,   136,    -1,   262,   133,   136,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   341,   341,   345,   346,   350,   351,   355,   356,   357,
     358,   359,   364,   364,   369,   369,   375,   376,   380,   382,
     386,   389,   392,   395,   401,   407,   416,   417,   421,   422,
     423,   424,   428,   429,   433,   434,   438,   442,   443,   444,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   470,   473,   474,   475,   481,
     482,   486,   487,   491,   492,   496,   501,   502,   506,   510,
     514,   518,   519,   524,   523,   537,   536,   558,   557,   568,
     569,   570,   574,   575,   582,   586,   587,   592,   593,   598,
     601,   605,   606,   610,   611,   615,   616,   620,   621,   625,
     626,   630,   631,   635,   636,   637,   638,   642,   643,   644,
     648,   649,   653,   654,   658,   659,   665,   666,   672,   673,
     677,   678,   682,   683,   687,   688,   689,   690,   691,   692,
     693,   694,   698,   699,   700,   704,   705,   709,   716,   723,
     730,   731,   732,   736,   737,   741,   742,   743,   747,   748,
     749,   750,   754,   755,   759,   760,   762,   761,   775,   776,
     780,   781,   787,   788,   792,   793,   797,   798,   799,   800,
     801,   802,   806,   812,   818,   824,   833,   840,   849,   850,
     854,   855,   859,   860,   864,   865,   878,   883,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   938,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   955,   954,   962,   966,   967,   971,   972,   973,   974,
     978,   978,   995,   998,   998,  1015,  1017,  1019,  1021,  1023,
    1028,  1029,  1030,  1031,  1035,  1036,  1037,  1041,  1042,  1046,
    1048,  1053,  1054,  1058,  1062,  1063,  1064,  1068,  1069,  1070,
    1075,  1076,  1081,  1090,  1100,  1109,  1110,  1111,  1112,  1113,
    1114,  1115,  1116,  1117,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1133,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1149,  1150,  1154,  1155,  1159,  1160,  1161,  1162,  1166,
    1167,  1172,  1177,  1181,  1186,  1191,  1185,  1204,  1208,  1209,
    1214,  1218,  1219,  1223,  1224,  1228,  1229,  1234,  1238,  1248,
    1252,  1253,  1254,  1258,  1259,  1260,  1265,  1266,  1270,  1271,
    1275,  1276,  1280,  1281,  1282,  1286,  1287,  1291,  1292,  1296,
    1297,  1302,  1303,  1304,  1308,  1309,  1313,  1314,  1315,  1316,
    1317,  1318,  1319,  1320,  1324,  1325,  1326,  1327,  1331,  1332,
    1333,  1334,  1335,  1336,  1340,  1341,  1342,  1346,  1347,  1348,
    1348,  1354,  1354,  1360,  1361,  1361,  1367,  1367,  1376,  1377,
    1381,  1382
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
  "class_statement_list", "class_statement", "$@6", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "expr_without_variable", "$@7", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@8", "$@9",
  "class_name", "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@10", "$@11",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "$@12", "$@13",
  "$@14", "$@15", "isset_variables", "class_constant", 0
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
     185,   185,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   197,   197,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   207,   207,   207,   208,   208,   209,   209,   209,
     209,   209,   209,   210,   210,   211,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   215,   214,   216,   216,
     217,   217,   218,   218,   219,   219,   220,   220,   220,   220,
     220,   220,   221,   221,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   226,   228,   229,   229,   230,   230,   230,   230,
     232,   231,   231,   233,   231,   231,   231,   231,   231,   231,
     234,   234,   234,   234,   235,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   240,   240,   240,   241,   241,   241,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   244,   244,   244,   244,   244,   244,
     244,   244,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   247,   247,   248,   248,   249,   249,   249,   249,   250,
     250,   251,   252,   253,   255,   256,   254,   254,   257,   257,
     258,   259,   259,   260,   260,   261,   261,   262,   263,   263,
     264,   264,   264,   265,   265,   265,   266,   266,   267,   267,
     268,   268,   269,   269,   269,   270,   270,   271,   271,   272,
     272,   273,   273,   273,   274,   274,   275,   275,   275,   275,
     275,   275,   275,   275,   276,   276,   276,   276,   277,   277,
     277,   277,   277,   277,   278,   278,   278,   279,   279,   280,
     279,   281,   279,   279,   282,   279,   283,   279,   284,   284,
     285,   285
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
       2,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     1,     4,     1,     4,     1,
       4,     3,     5,     3,     4,     4,     5,     0,     5,     4,
       1,     1,     1,     4,     0,     6,     0,     7,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     3,     2,     0,     9,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     3,     1,     6,     3,     4,     6,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     4,     3,
       2,     0,    10,     1,     0,     4,     3,     4,     1,     2,
       0,     5,     6,     0,     6,     6,     6,     6,     6,     4,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     4,
       1,     2,     0,     2,     0,     2,     3,     0,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     2,     2,     2,
       4,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     1,     2,     0,
       3,     3,     0,     1,     2,     3,     3,     1,     1,     1,
       1,     2,     1,     4,     4,     1,     1,     4,     0,     1,
       1,     1,     4,     4,     1,     1,     3,     1,     2,     3,
       1,     1,     4,     0,     0,     2,     5,     3,     3,     1,
       6,     4,     4,     2,     2,     2,     1,     2,     1,     4,
       3,     3,     6,     3,     1,     1,     1,     4,     4,     0,
       3,     0,     3,     4,     0,     3,     0,     3,     1,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   406,   404,     0,   401,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,    79,   298,     0,   294,     0,     0,   297,   293,     0,
       0,     0,   284,   296,     0,     0,   300,   253,     0,     0,
       0,     0,    51,    84,     0,   295,     0,   292,   299,     0,
     301,     0,     0,     0,     5,   313,     0,     0,     0,     0,
       0,   356,     0,    27,     0,    57,   287,   367,     0,   315,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     330,    71,   349,     0,   318,   247,     0,   329,     0,   331,
       0,   352,     0,   337,   348,   350,   355,     0,   237,   314,
       0,     0,     0,     0,     0,   270,     0,     5,    71,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   271,     0,   204,   333,     0,   202,   246,
     189,     0,     0,   271,   277,   290,   278,     0,   280,   350,
       0,    81,    80,   150,     0,   374,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   373,     0,
      14,     0,   317,    45,   330,     0,   331,     0,     0,     0,
     303,   388,     0,   386,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   288,     0,   289,     0,
       0,     0,     0,   260,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   334,   358,     0,   368,   351,   407,
     405,     0,   402,   400,     0,     0,   273,     0,     0,     0,
     273,     0,   136,   188,     0,     0,   351,     0,     0,    49,
       0,   379,     0,   323,    42,     0,    44,     0,     0,     0,
       0,    50,     0,   285,     0,     0,   181,   183,   330,   331,
       0,   146,   331,     0,    48,    60,     0,     0,   408,     0,
       0,   371,     0,   370,   316,     4,    12,    11,   263,    46,
      47,     0,   313,     0,   302,   387,     0,     0,   385,   320,
     384,     0,    59,     0,     0,    66,    68,    22,     0,     0,
      16,     0,     0,    34,    26,    28,    29,    30,   234,   249,
       0,   319,     6,   136,     0,     0,    87,     0,    77,     0,
     132,   410,   345,   343,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,     0,   135,   330,   331,
     411,   346,     0,   359,     0,     0,   403,   272,     0,     0,
     272,   345,     0,   346,   365,     0,   361,   282,   360,   364,
       0,     0,     0,     0,     0,     0,   305,     0,   304,   151,
     311,   148,   383,   332,     0,   248,   324,   375,    25,     0,
       0,     0,     0,   178,   398,   286,   180,     0,     0,     0,
       0,   143,    10,     0,     0,   397,   373,   373,     0,   136,
       0,     4,   136,   393,     0,   391,   395,   394,   396,     0,
     390,     0,     0,     0,     0,     0,    21,    18,     0,     0,
     357,     0,     0,     0,     0,   274,    83,     0,    75,    86,
      89,     0,   132,   134,     0,   122,     0,   133,   136,   136,
     344,   236,     0,     0,   186,   139,   269,     0,   136,   136,
     342,   353,   354,   291,     0,   279,   358,     0,   308,   309,
     321,     0,   307,     0,     0,     0,     0,   378,     0,   377,
     101,     0,    27,    99,    56,     0,     0,   182,    91,     0,
      91,    93,   147,    27,   114,   409,     0,   369,     0,     0,
      15,     0,     0,     0,   389,   107,   107,    40,     0,    67,
      53,    23,    27,   112,    37,     0,   261,    24,     0,   276,
      88,     0,     0,   153,     0,   254,   132,     0,   124,     0,
       0,   235,   290,     0,   330,   331,     0,     0,   136,   335,
     366,     0,   281,     0,     0,   328,     0,   323,   306,   312,
     149,   382,   381,     0,     0,     0,     0,   180,     0,     0,
      94,     0,   116,   118,   372,   184,   262,    13,   264,     0,
     107,     0,   107,     0,     0,     0,    31,   275,   153,    90,
     162,    73,     0,     0,     0,   125,     0,   265,   266,   187,
     142,   267,   268,     0,   339,   283,   362,   363,     0,   310,
     324,   322,     0,   376,   102,     0,    38,     0,    92,     0,
       0,   120,     0,     0,    35,   392,     0,     0,     0,     0,
       0,   103,     0,     0,   162,   166,   167,   168,   171,   170,
     169,     0,   161,    78,   152,     0,     0,   160,   164,     0,
       0,     0,   251,     0,   128,     0,   127,   341,   336,   327,
     326,   380,   100,     0,    27,    97,    55,    54,     0,     0,
       0,     0,   119,     0,     0,   110,   111,    27,   105,   104,
       0,   113,    76,     0,   174,     0,    71,   165,     0,   155,
      27,     0,   258,     0,    27,   129,     0,   126,     0,   338,
       0,    27,    95,    39,     0,     0,    27,     0,     0,   106,
      27,   109,     0,     0,     0,     0,   154,     0,     0,     0,
     259,     0,   255,     0,     0,   131,   342,   325,     0,     0,
       0,   121,    36,     0,   108,    27,   177,   175,   172,     0,
       0,    74,     0,   256,   252,   130,   340,     0,    98,     0,
     115,     0,     0,   132,   176,   257,    96,    27,    62,   173,
       0,   117,     0,    58,    61,    63,   156,     0,    64,     0,
       0,    27,   158,   157,     0,     0,     0,   159,    27,     0,
      65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   481,   325,   201,   202,    81,
     204,   354,   355,    83,   823,   824,   825,   344,   345,   356,
     357,   219,    86,   710,    87,   591,   511,    88,   366,    89,
     368,   508,   509,   629,   560,   763,   726,   554,   298,   577,
     641,   737,   584,   633,   681,   684,   730,   514,   515,   516,
     416,   417,   172,   173,   154,   650,   704,   829,   833,   705,
     706,   707,   708,   745,   709,   163,   305,   306,    90,   754,
     118,   653,   753,    92,   363,   482,    93,   517,   145,   146,
     535,   612,   167,   207,   283,    94,   449,   450,    95,   616,
     457,   617,    96,    97,   452,    98,    99,   422,   664,   718,
     759,   609,   100,   101,   102,   103,   104,   105,   106,   424,
     437,   438,   439,   107,   322,   323,   292,   293,   192,   193,
     489,   108,   114,   113,   111,   110,   319,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -530
static const yytype_int16 yypact[] =
{
    -530,    48,  1803,  -530,  -530,  -530,   -22,  -530,  -530,  6242,
    6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,
    6242,   275,   275,  6242,  6242,   372,   120,   150,    60,   101,
    4729,  -530,  -530,   121,  -530,  4855,   126,  -530,  -530,  4575,
    6242,   139,   146,  -530,   162,   164,  -530,  -530,    73,   218,
     180,   215,  -530,  -530,   222,  -530,   230,  -530,  -530,   228,
    -530,   234,  4981,   280,   249,  -530,   236,  6242,   242,   251,
     201,  -530,   255,  -530,  6242,  -530,   168,   259,   376,   206,
    -530,    10,  -530,  -530,  -530,  -530,  -530,  -530,   278,   293,
    -530,   116,  -530,   283,  -530,  -530,  1158,  -530,    92,  1337,
     269,  -530,   289,   307,  -530,   -23,  -530,    89,  -530,  -530,
    6242,  6242,  6242,  6242,  6242,  -530,   312,  -530,   116,  1635,
    -530,  -530,   392,  -530,  -530,  -530,  -530,  -530,  -530,  -530,
    -530,   315,   234,     7,   314,  -530,  -530,   320,  -530,  -530,
    -530,   360,   234,   366,   363,   328,  -530,   370,   375,   -10,
      89,  -530,  -530,   508,    12,  5107,  -530,  6500,   517,  -530,
    6541,   396,   386,    13,  7378,   275,  5233,  -530,  6242,  6242,
    -530,   264,    15,  -530,   384,   389,  6242,   275,   421,   234,
    -530,    83,   207,  -530,   385,  7378,    84,   275,  6368,   152,
    -530,     8,   351,  -530,  -530,  6242,  6582,  -530,   275,   234,
     -12,    16,  -530,  6242,  1957,  6627,    69,   394,   451,  6242,
      69,   272,   415,  -530,   423,  -530,   453,   457,  -530,   -15,
     219,  6242,  6242,  6242,  5360,  6242,  6242,  6242,  6242,  6242,
    6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,
    6242,  6242,  6242,  6242,  6242,  6242,   372,  -530,  -530,  -530,
    5486,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,  6242,
    6242,  6242,  5612,   331,  -530,  6242,  6242,   259,   -32,  7378,
    7378,  6668,  7378,  7378,   414,   234,    94,   346,   379,   234,
     366,   130,  5612,  -530,   130,   250,   -29,  1213,   422,  -530,
     275,  7253,   418,   565,  -530,  1213,  -530,   561,    22,   426,
    6242,  -530,   429,  -530,  6709,   425,   577,  7378,   516,   975,
    6242,  -530,  -530,    73,  -530,  -530,   439,  6753,  -530,    23,
     442,  -530,    25,  -530,   256,  -530,  -530,  -530,  -530,  -530,
    -530,   444,   534,  7005,  -530,  -530,   319,   460,  -530,  -530,
    -530,  6794,  -530,  2111,    26,  -530,  -530,    -4,   463,   201,
    -530,  6835,   449,  -530,  -530,  -530,  -530,  -530,  -530,  -530,
    7046,  -530,  -530,  5612,   591,   344,   491,   344,  -530,   458,
      61,   459,   461,   -29,    89,  7418,  7455,  1635,  6242,  7337,
    1942,  1234,  2094,  1367,  2246,  2400,  2400,  2400,  2400,   886,
     619,   619,   619,   630,   630,   509,   509,   509,   392,   392,
     392,  -530,   -14,  1635,  1635,  1635,  1635,  1635,  1635,  1635,
    1635,  1635,  1635,  1635,  1635,   275,   464,   605,    27,   286,
     466,   467,   250,  7378,   465,  7087,  -530,    97,   459,   466,
     366,  -530,   468,  -530,  -530,  6242,  -530,  -530,   -18,  -530,
    1213,  1213,   470,   487,   234,   -49,   284,   492,  -530,  -530,
    -530,   611,  -530,  -530,  5738,  -530,  5864,  -530,  -530,  1213,
     490,  3805,  6242,  7378,  -530,  -530,  6242,  6242,   275,   223,
    7129,  -530,  -530,  3959,   275,  -530,   421,   421,   615,  5612,
    1495,  -530,  5612,  -530,  6242,  -530,  -530,  -530,  -530,   474,
    -530,    35,   562,   275,   494,   504,  -530,  -530,  4113,   493,
    -530,   496,  1213,   521,   234,   366,  -530,   344,  -530,   636,
    -530,   501,    61,  -530,   500,   646,    -6,  -530,  5612,  5612,
     -29,  1789,  6242,   372,  -530,  -530,  -530,  5990,  5612,  5612,
     518,  -530,  -530,  -530,  7170,   540,  6242,  6242,  -530,  -530,
    1213,   234,   333,   579,   547,  1213,   275,  7378,   275,  7294,
    -530,   674,  -530,  -530,  -530,  6879,   537,  7378,   596,   275,
     596,  -530,  -530,  -530,  -530,  -530,    28,  -530,  6242,   543,
    -530,  1649,   544,  1483,  -530,   549,   550,  -530,   546,  -530,
    -530,  -530,  -530,  -530,  -530,   552,  -530,  -530,   234,   366,
     636,   551,   344,  -530,   554,   564,   125,   563,   701,   567,
     568,  1789,   328,   275,    31,   304,   569,   570,  5612,  -530,
    -530,   250,  -530,   559,  7211,   621,   571,   710,   340,  -530,
    -530,  -530,  -530,  6116,  1213,  2265,   572,  6242,   223,   574,
    -530,   575,  3651,   153,  -530,  1635,  -530,  -530,  -530,   578,
    -530,    55,  -530,    40,   344,  2419,  -530,   366,  -530,  -530,
     124,  -530,   581,   580,     6,   717,  1213,  -530,  -530,  -530,
    -530,  -530,  -530,   582,  -530,  -530,  -530,  -530,  1213,  -530,
    1213,  -530,   275,  7378,  -530,   583,  -530,   585,  -530,  4267,
    4267,   195,   584,  4575,  -530,  -530,   122,  6242,    -7,   588,
      66,  -530,   587,   589,   364,  -530,  -530,  -530,  -530,  -530,
    -530,   602,  -530,  -530,  -530,   598,   634,   566,  -530,    18,
     599,    21,  -530,   601,   736,  1213,  -530,  -530,   622,  -530,
     655,  -530,  -530,  4421,  -530,  -530,  -530,  -530,   603,   727,
     689,  6242,  -530,   606,    46,  -530,  -530,  -530,  -530,  -530,
     608,  -530,  -530,   751,   753,    19,   116,  -530,   632,  -530,
    -530,   624,  -530,    33,  -530,   758,  1213,  -530,   250,  -530,
    1213,  -530,  -530,  -530,  2573,  6242,  -530,   620,  6920,  -530,
    -530,  3651,   623,  1213,  1213,   628,  -530,   639,   765,  2727,
    -530,    78,  -530,  2881,  1213,  -530,   518,  -530,  3035,   626,
    6961,  3651,  -530,  4575,  3651,  -530,  -530,  -530,   767,   631,
    1213,  -530,   638,  -530,  -530,  -530,  -530,   644,  -530,   759,
    -530,  3189,  1213,    61,  -530,  -530,  -530,  -530,   708,  -530,
     648,  3651,   647,  -530,   708,  -530,  -530,   344,  -530,   227,
     656,  -530,  -530,  -530,   649,  3343,   657,  -530,  -530,  3497,
    -530
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -530,  -530,  -308,   -17,  -530,  -530,  -530,  -530,   455,  -530,
     149,  -530,     1,  -530,  -530,  -530,   -16,  -530,   318,     9,
      11,  -117,  -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530,
    -530,  -530,   298,   247,   184,  -530,   133,  -530,  -530,  -530,
    -529,    80,  -530,  -530,  -530,  -530,  -530,  -502,  -530,   225,
    -236,  -530,  -530,   502,  -530,   170,  -530,  -530,  -530,  -530,
    -530,  -530,   115,  -530,  -530,  -530,  -451,  -530,    34,  -530,
      -2,  -530,  -530,  -530,  -530,  -530,    43,  -358,  -232,  -530,
    -530,  -530,  -530,  -530,   221,   248,   676,  -530,  -530,  -530,
     208,  -530,   847,   653,  -393,   321,   769,  -530,  -530,  -530,
    -530,    42,  -218,  -530,   217,  -530,   -19,   -13,  -530,   290,
    -406,  -530,  -530,     3,   353,   355,  -530,  -530,   110,   395,
    -530,  -530,  -530,  -530,  -530,  -530,  -530,  -530
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -348
static const yytype_int16 yytable[] =
{
      91,   274,   372,    82,   133,   133,   148,   506,   143,   510,
     594,    84,   149,    85,   401,   556,   530,   480,   214,   735,
     288,   300,   525,   313,   349,   597,   748,   775,   150,   265,
     460,   474,   265,   477,   493,  -137,   477,   713,   265,  -140,
     162,   781,   181,   536,   182,   421,   432,   643,     3,   523,
     543,   265,   751,   200,   190,   221,   222,   223,   115,   372,
     421,   575,   348,   431,   134,   134,   433,   436,   144,   336,
     495,   224,   735,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   268,   246,   184,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   802,
    -347,   686,   131,   690,   132,   276,   212,   266,   687,  -344,
     266,   369,   117,  -347,   212,   280,   266,   501,  -343,   112,
     688,   537,    71,   687,   513,   212,   370,   286,   337,   266,
     598,    77,  -333,  -333,   687,   688,   736,   218,   133,   510,
     248,   249,   714,   621,   133,   622,   688,   187,   213,   689,
     133,   133,   324,   215,   188,   289,   301,   752,   314,   350,
     133,   749,   776,   571,   461,   475,   677,   478,   494,  -137,
     634,   133,   347,  -140,   576,   782,   208,   503,   211,   504,
     691,   695,   696,   697,   698,   699,   700,   117,   513,   736,
     687,   151,    91,   308,   436,   665,   153,   373,   134,   701,
     660,   212,   688,  -123,   134,   191,   739,   682,   683,   170,
     134,   134,   212,   374,   803,   212,   733,   148,   171,   143,
     134,   152,   326,   149,   649,    71,   327,   330,   137,   137,
     187,   134,   147,   569,   267,   328,   572,   188,   479,   150,
     373,   503,   155,   504,   559,   334,   187,   158,   427,   728,
     729,   117,   430,   188,   373,   373,   374,   206,   373,   702,
     446,   373,   373,   133,   703,   194,    71,   161,   446,   721,
     374,   374,   599,   600,   374,    77,   692,   374,   374,   144,
     165,   602,   606,   607,  -138,   115,   418,   166,   191,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   820,  -141,   168,   191,   169,   418,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   199,
     447,   175,   200,   134,   212,   212,   115,   117,   447,  -271,
    -273,    91,   135,   138,  -333,  -333,   343,   115,   505,   131,
     505,   132,   786,   505,   174,   371,   179,   213,   328,   117,
     187,   520,  -333,  -333,   117,    71,   176,   188,   187,    71,
     117,   338,   663,   177,    77,   188,   831,   180,    77,   189,
     832,   178,   137,   190,   212,   133,   434,   195,   137,  -272,
     131,   197,   132,   436,   137,   137,    71,   418,   133,   435,
     117,   131,   198,   132,   137,    77,   203,   479,   209,   373,
      71,   117,   212,   310,   216,   137,   220,  -271,   191,    77,
     262,    71,   263,   446,   446,   374,   191,   542,   361,   217,
      77,   695,   696,   697,   698,   699,   700,   264,  -138,   187,
     179,   246,   446,   275,   115,   134,   188,   277,   486,   701,
     338,   133,   133,   278,   339,   487,  -141,   133,   134,   133,
     133,   212,   553,   147,   187,   488,  -273,   420,   212,   830,
     503,   188,   504,  -272,   564,   210,   133,    71,    91,   282,
     117,    82,   428,   447,   447,   446,    77,   589,   279,    84,
     505,    85,    71,   115,   212,   505,   281,   191,   141,   583,
     142,    77,   447,   284,   148,   285,   143,   137,   117,   702,
     149,   134,   134,   418,   742,   429,   418,   134,    71,   134,
     134,   287,   191,   446,   618,    71,   150,    77,   446,   133,
     295,   133,   297,   299,    77,   448,   134,   315,   329,   187,
     436,   316,   133,   448,   320,   447,   188,   131,   359,   132,
     338,   362,   418,   418,   243,   244,   245,   117,   246,   364,
     365,   604,   418,   418,   367,   370,   144,    71,   451,    91,
     455,   647,    82,   456,   459,   505,    77,   462,   466,   505,
      84,   464,    85,   447,   335,   467,   133,   340,   447,   134,
     468,   134,   472,   476,   483,   484,   490,   191,   373,   496,
     499,   335,   134,   340,   502,   335,   340,   446,   507,   512,
     518,   133,   519,   527,   374,   541,   526,   528,   529,   137,
     533,   540,   531,    91,   545,   544,   551,   505,   568,   777,
      91,   574,   137,   695,   696,   697,   698,   699,   700,   446,
     581,   578,   418,    91,   592,   585,   134,   580,   586,   588,
     593,   446,   595,   446,   596,   133,  -348,  -348,  -348,   238,
     239,   240,   241,   242,   243,   244,   245,   447,   246,   608,
     611,   134,   240,   241,   242,   243,   244,   245,  -163,   246,
     725,   725,   334,   619,   732,   137,   137,   624,   448,   448,
     627,   137,   628,   137,   137,   636,   638,   644,   446,   447,
     648,   625,   640,   642,   746,   646,   651,   448,   652,   655,
     137,   447,   632,   447,   656,   134,   666,   668,   670,   657,
     658,   661,   662,   669,   762,   676,   679,   680,   685,   712,
     715,   645,   711,   740,   717,   731,   722,   723,   743,   446,
     147,   738,   741,   446,   744,   373,    47,   755,   750,   756,
     448,   760,   758,   766,   765,   767,   446,   446,   447,   769,
     772,   374,    91,   137,   773,   137,   774,   446,   778,    91,
     780,   784,   795,   792,   798,   799,   137,    91,   800,   808,
     812,    91,   813,   446,   815,   817,    91,   822,   448,    91,
     136,   136,    91,   448,   810,   446,   505,   816,   827,   447,
     826,   836,   834,   447,   497,   590,   838,   631,   828,    91,
     505,   579,   678,   727,   770,   471,   447,   447,   694,    91,
     137,   654,   747,   659,   311,   671,   613,   447,   806,   566,
       0,   186,   567,    91,     0,     0,     0,    91,     0,     0,
       0,     0,     0,   447,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     139,   140,   448,   764,     0,     0,     0,   157,     0,     0,
       0,     0,   160,     0,     0,     0,   771,   164,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   779,
       0,     0,     0,   783,   448,     0,     0,     0,     0,   185,
     788,     0,     0,     0,   196,   791,   448,     0,   448,   794,
       0,   205,  -348,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   302,   246,     0,     0,   309,     0,
     312,     0,     0,     0,   811,     0,   318,   321,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   269,   270,   271,
     272,   273,     0,   448,     0,     0,   821,   346,     0,     0,
       0,   458,     0,     0,     0,     0,     0,     0,     0,     0,
     835,     0,     0,     0,     0,     0,     0,   839,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
       0,     0,   291,     0,   448,     0,     0,     0,   448,     0,
       0,     0,     0,   304,     0,   307,   185,     0,     0,     0,
       0,   448,   448,   317,     0,     0,     0,     0,     0,     0,
       0,   419,   448,  -333,  -333,   333,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,   448,   469,
     351,   419,     0,     0,     0,     0,   360,     0,     0,   453,
     448,     0,     0,     0,     0,     0,     0,     0,   375,   376,
     377,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   185,
       0,     0,   423,   425,     0,     0,   538,   539,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
       0,     0,   419,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   221,   222,   223,
       0,   524,     0,     0,     0,     0,     0,     0,   587,     0,
       0,     0,     0,   224,   453,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
     185,     0,     0,     0,     0,     0,   615,     0,     0,     0,
       0,   620,     0,     0,     0,   521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   558,   561,     0,
       0,     0,     0,   565,     0,   321,   321,     0,   419,     0,
       0,   419,     0,     0,     0,   440,   441,     0,     0,     0,
       0,     0,   346,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   534,   246,     0,   115,   442,   419,   419,     0,
       0,     0,     0,     0,     0,    32,   605,   419,   419,    34,
     674,   547,     0,   549,    37,    38,     0,     0,     0,   555,
       0,   247,     0,   307,   557,   453,     0,   453,     0,     0,
       0,    43,     0,     0,    46,     0,   185,     0,   630,   185,
       0,   573,   716,     0,     0,    55,     0,    57,    58,   443,
      60,   444,     0,     0,   719,     0,   720,     0,   445,   117,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,     0,     0,     0,   185,   185,     0,     0,   601,
       0,     0,   453,     0,   185,   185,   185,   419,     0,     0,
       0,     0,     0,   423,   614,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,  -333,  -333,   561,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   635,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   785,     0,     0,     0,   787,     0,     0,     0,
       0,   453,     0,     0,     0,     0,     0,     0,     0,   796,
     797,     0,     0,     0,     0,   185,     0,     0,     0,     0,
     805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     673,     0,     0,     0,   307,     0,   814,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   819,     0,
       0,     0,   221,   222,   223,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,   734,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,   768,     0,
      33,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   790,    52,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,    70,
     639,    71,    72,     0,    73,   570,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
     224,     9,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,    33,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,    70,     0,    71,    72,     0,    73,   637,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    31,    32,     0,     0,    33,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,    70,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,   352,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,   116,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,   353,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,   352,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,   116,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,   492,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,   675,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
     352,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,   116,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,  -348,  -348,  -348,  -348,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,   693,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   352,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,   116,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,     0,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,   789,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   352,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,   116,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,   352,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,   116,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,   801,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,   352,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,   116,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,   804,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,   807,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
     352,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,   116,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   352,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,   116,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,   818,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   352,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,   116,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,   837,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,   352,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,   116,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,   840,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,   352,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,   116,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   552,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    51,     0,    52,     0,     0,    54,    55,    56,    57,
      58,   116,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   563,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,    30,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,     0,
      54,    55,    56,    57,    58,   116,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,     0,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   582,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,     0,    54,    55,    56,    57,    58,   116,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    51,     0,    52,     0,     0,    54,    55,
      56,    57,    58,   116,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,     0,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,    30,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    51,     0,    52,
       0,     0,    54,    55,    56,    57,    58,   116,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    51,     0,    52,     0,     0,    54,    55,    56,    57,
      58,   116,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   116,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   117,    65,     9,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,   156,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   116,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   117,    65,     9,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,   159,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   115,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   116,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   117,    65,     9,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,     0,   183,    76,    77,    78,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   115,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   116,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   117,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   116,
      60,    61,     0,     4,     5,     6,     7,     8,    63,   117,
      65,     0,     9,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,   303,   378,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   115,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   116,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   117,    65,     9,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   116,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   117,    65,     9,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
      76,    77,    78,   415,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   116,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   117,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,     0,     0,    76,    77,    78,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   116,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   117,    65,     9,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,     0,    76,    77,    78,   548,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   115,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     116,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     117,    65,     9,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    74,     0,     0,    76,    77,
      78,   603,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   115,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   116,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   117,    65,     9,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,   672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   116,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   117,    65,     9,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   116,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   117,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,     0,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     0,     0,
       0,     0,     0,    63,   117,   332,     0,     0,     0,   221,
     222,   223,     0,     0,    71,     0,     0,     0,     0,    74,
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
       0,   246,     0,     0,     0,     0,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   294,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   296,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   342,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   358,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     426,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   465,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   473,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   491,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   498,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   626,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   793,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   809,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   485,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   500,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   532,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   562,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     610,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,   221,   222,   223,   454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   667,   224,   522,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
     623,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   223,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-530))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-348))

static const yytype_int16 yycheck[] =
{
       2,   118,   220,     2,    21,    22,    25,   365,    25,   367,
     512,     2,    25,     2,   246,   466,   422,   325,     8,    26,
       8,     8,   415,     8,     8,    31,     8,     8,    25,    61,
       8,     8,    61,     8,     8,     8,     8,    31,    61,     8,
      39,     8,    59,    61,    61,   263,   282,   576,     0,    63,
      99,    61,    31,    70,   103,     9,    10,    11,    72,   277,
     278,    26,    74,   281,    21,    22,   284,   285,    25,    61,
      74,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   107,    49,    62,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    31,
     133,   640,   126,   642,   128,   132,   128,   149,    78,   151,
     149,   136,   136,   133,   128,   142,   149,   363,   151,   151,
      90,   149,   146,    78,    73,   128,   151,   150,   130,   149,
     146,   155,    58,    59,    78,    90,   153,    31,   165,   507,
      58,    59,   146,   546,   171,   548,    90,    88,   151,   104,
     177,   178,   179,   153,    95,   153,   153,   146,   153,   153,
     187,   153,   153,   481,   152,   152,   627,   152,   152,   152,
     152,   198,   199,   152,   149,   152,    76,   126,    78,   128,
     150,    67,    68,    69,    70,    71,    72,   136,    73,   153,
      78,    81,   204,   169,   422,   611,   146,   220,   165,    85,
     603,   128,    90,   152,   171,   146,   150,    64,    65,   146,
     177,   178,   128,   220,   146,   128,   104,   246,   155,   246,
     187,    81,   149,   246,   592,   146,   153,   153,    21,    22,
      88,   198,    25,   479,   155,   151,   482,    95,   151,   246,
     263,   126,   151,   128,    31,   103,    88,   136,   275,    64,
      65,   136,   279,    95,   277,   278,   263,    99,   281,   145,
     287,   284,   285,   290,   150,    26,   146,   151,   295,   672,
     277,   278,   518,   519,   281,   155,   644,   284,   285,   246,
     151,   523,   528,   529,     8,    72,   262,   151,   146,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   813,     8,   151,   146,   151,   282,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   128,
     287,   151,   349,   290,   128,   128,    72,   136,   295,   133,
     133,   343,    21,    22,    58,    59,   197,    72,   365,   126,
     367,   128,   758,   370,   136,   136,   128,   151,   151,   136,
      88,   374,    58,    59,   136,   146,   151,    95,    88,   146,
     136,    99,   608,   151,   155,    95,   149,   149,   155,    99,
     153,   151,   165,   103,   128,   402,   136,   151,   171,   133,
     126,   149,   128,   611,   177,   178,   146,   363,   415,   149,
     136,   126,   151,   128,   187,   155,   151,   151,   149,   422,
     146,   136,   128,   149,   136,   198,   133,   133,   146,   155,
     151,   146,   133,   440,   441,   422,   146,   444,   156,   136,
     155,    67,    68,    69,    70,    71,    72,   130,   152,    88,
     128,    49,   459,   128,    72,   402,    95,   133,   129,    85,
      99,   468,   469,   133,   103,   136,   152,   474,   415,   476,
     477,   128,   461,   246,    88,   146,   133,   136,   128,   827,
     126,    95,   128,   133,   473,    99,   493,   146,   480,   151,
     136,   480,   136,   440,   441,   502,   155,   504,   128,   480,
     507,   480,   146,    72,   128,   512,   133,   146,   126,   498,
     128,   155,   459,   133,   523,   130,   523,   290,   136,   145,
     523,   468,   469,   479,   150,   136,   482,   474,   146,   476,
     477,    13,   146,   540,   541,   146,   523,   155,   545,   546,
      13,   548,   136,   147,   155,   287,   493,   153,   153,    88,
     758,   152,   559,   295,   123,   502,    95,   126,   154,   128,
      99,   136,   518,   519,    45,    46,    47,   136,    49,   136,
     107,   527,   528,   529,   107,   151,   523,   146,   146,   571,
     152,   588,   571,     8,    13,   592,   155,   151,   153,   596,
     571,   152,   571,   540,   189,     8,   603,   192,   545,   546,
      74,   548,   153,   151,   150,    61,   136,   146,   611,   136,
     151,   206,   559,   208,    13,   210,   211,   624,   117,   151,
     151,   628,   151,     8,   611,   128,   152,   151,   151,   402,
     152,   151,   157,   625,    13,   133,   136,   644,    13,   746,
     632,   157,   415,    67,    68,    69,    70,    71,    72,   656,
     136,    79,   608,   645,     8,   152,   603,   153,   152,   128,
     149,   668,   152,   670,     8,   672,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   624,    49,   151,
     130,   628,    42,    43,    44,    45,    46,    47,   112,    49,
     679,   680,   103,   136,   683,   468,   469,    13,   440,   441,
     153,   474,    96,   476,   477,   152,   152,   151,   715,   656,
     149,   552,   153,   153,   706,   153,   152,   459,   144,   146,
     493,   668,   563,   670,    13,   672,   157,    96,     8,   152,
     152,   152,   152,   152,   723,   153,   152,   152,   150,   149,
      13,   582,   151,   146,   152,   151,   153,   152,   136,   756,
     523,   153,   153,   760,   146,   758,   112,   146,   149,    13,
     502,    96,   130,    26,   151,    66,   773,   774,   715,   153,
     152,   758,   764,   546,    13,   548,    13,   784,   136,   771,
     146,    13,   149,   153,   146,   136,   559,   779,    13,   153,
      13,   783,   151,   800,   146,    26,   788,    79,   540,   791,
      21,    22,   794,   545,   793,   812,   813,   153,   151,   756,
     152,   152,   146,   760,   349,   507,   149,   560,   824,   811,
     827,   493,   628,   680,   734,   313,   773,   774,   648,   821,
     603,   596,   707,   602,   171,   617,   536,   784,   786,   476,
      -1,    62,   477,   835,    -1,    -1,    -1,   839,    -1,    -1,
      -1,    -1,    -1,   800,    -1,   628,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   812,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,   624,   724,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,   737,    40,    -1,   672,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   750,
      -1,    -1,    -1,   754,   656,    -1,    -1,    -1,    -1,    62,
     761,    -1,    -1,    -1,    67,   766,   668,    -1,   670,   770,
      -1,    74,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   165,    49,    -1,    -1,   169,    -1,
     171,    -1,    -1,    -1,   795,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,   110,   111,   112,
     113,   114,    -1,   715,    -1,    -1,   817,   198,    -1,    -1,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     831,    -1,    -1,    -1,    -1,    -1,    -1,   838,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,   155,    -1,   756,    -1,    -1,    -1,   760,    -1,
      -1,    -1,    -1,   166,    -1,   168,   169,    -1,    -1,    -1,
      -1,   773,   774,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,   784,    58,    59,   188,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,   800,    74,
     203,   282,    -1,    -1,    -1,    -1,   209,    -1,    -1,   290,
     812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,    -1,    -1,   440,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
      -1,    -1,   363,    -1,    -1,   459,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    25,   415,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
     363,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,    -1,
      -1,   545,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,   469,    -1,
      -1,    -1,    -1,   474,    -1,   476,   477,    -1,   479,    -1,
      -1,   482,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,   493,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   435,    49,    -1,    72,    73,   518,   519,    -1,
      -1,    -1,    -1,    -1,    -1,    82,   527,   528,   529,    86,
     624,   454,    -1,   456,    91,    92,    -1,    -1,    -1,   462,
      -1,   153,    -1,   466,   467,   546,    -1,   548,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,   479,    -1,   559,   482,
      -1,   484,   656,    -1,    -1,   122,    -1,   124,   125,   126,
     127,   128,    -1,    -1,   668,    -1,   670,    -1,   135,   136,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,   518,   519,    -1,    -1,   522,
      -1,    -1,   603,    -1,   527,   528,   529,   608,    -1,    -1,
      -1,    -1,    -1,   536,   537,    -1,    -1,    -1,    -1,    -1,
      -1,   715,    -1,    -1,    -1,    58,    59,   628,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   568,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   756,    -1,    -1,    -1,   760,    -1,    -1,    -1,
      -1,   672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,
     774,    -1,    -1,    -1,    -1,   608,    -1,    -1,    -1,    -1,
     784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     623,    -1,    -1,    -1,   627,    -1,   800,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   812,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,   687,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,   731,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   765,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,   144,
     157,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      25,    12,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,   144,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,   144,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,   156,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,     3,     4,     5,     6,     7,   135,   136,
     137,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,   151,   152,    26,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    25,    -1,    27,    28,    29,
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
      -1,    49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   153,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    81,    82,    85,    86,    87,    89,    91,    92,    93,
      97,    98,   106,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   134,   135,   136,   137,   138,   139,   142,   143,
     144,   146,   147,   149,   151,   153,   154,   155,   156,   161,
     162,   167,   170,   171,   177,   178,   180,   182,   185,   187,
     226,   228,   231,   234,   243,   246,   250,   251,   253,   254,
     260,   261,   262,   263,   264,   265,   266,   271,   279,   285,
     283,   282,   151,   281,   280,    72,   126,   136,   228,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   126,   128,   161,   234,   253,   254,   262,   253,   250,
     250,   126,   128,   161,   234,   236,   237,   262,   264,   265,
     271,    81,    81,   146,   212,   151,   153,   250,   136,   153,
     250,   151,   170,   223,   250,   151,   151,   240,   151,   151,
     146,   155,   210,   211,   136,   151,   151,   151,   151,   128,
     149,   161,   161,   153,   226,   250,   254,    88,    95,    99,
     103,   146,   276,   277,    26,   151,   250,   149,   151,   128,
     161,   165,   166,   151,   168,   250,    99,   241,   276,   149,
      99,   276,   128,   151,     8,   153,   136,   136,    31,   179,
     133,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   153,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   151,   133,   130,    61,   149,   155,   265,   250,
     250,   250,   250,   250,   179,   128,   161,   133,   133,   128,
     161,   133,   151,   242,   133,   130,   265,    13,     8,   153,
      31,   250,   274,   275,   153,    13,   153,   136,   196,   147,
       8,   153,   254,   152,   250,   224,   225,   250,   226,   254,
     149,   251,   254,     8,   153,   153,   152,   250,   254,   284,
     123,   254,   272,   273,   161,   164,   149,   153,   151,   153,
     153,   254,   137,   250,   103,   277,    61,   130,    99,   103,
     277,   250,   153,   168,   175,   176,   254,   161,    74,     8,
     153,   250,   115,   150,   169,   170,   177,   178,   152,   154,
     250,   156,   136,   232,   136,   107,   186,   107,   188,   136,
     151,   136,   260,   265,   271,   250,   250,   250,    26,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   236,    31,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,    31,   208,   209,   226,   254,
     136,   260,   255,   250,   267,   250,   152,   161,   136,   136,
     161,   260,   208,   260,   136,   149,   260,   268,   269,   270,
      42,    43,    73,   126,   128,   135,   161,   234,   243,   244,
     245,   146,   252,   254,    96,   152,     8,   248,   244,    13,
       8,   152,   151,   250,   152,   152,   153,     8,    74,    74,
     250,   211,   153,   152,     8,   152,   151,     8,   152,   151,
     160,   163,   233,   150,    61,   150,   129,   136,   146,   278,
     136,   152,   150,     8,   152,    74,   136,   166,   152,   151,
     150,   208,    13,   126,   128,   161,   235,   117,   189,   190,
     235,   184,   151,    73,   205,   206,   207,   235,   151,   151,
     265,   250,    26,    63,   254,   252,   152,     8,   151,   151,
     268,   157,   150,   152,   250,   238,    61,   149,   244,   244,
     151,   128,   161,    99,   133,    13,    31,   250,    31,   250,
     244,   136,    26,   170,   195,   250,   224,   250,   254,    31,
     192,   254,   150,    26,   170,   254,   272,   273,    13,   208,
     150,   160,   208,   250,   157,    26,   149,   197,    79,   176,
     153,   136,    26,   170,   200,   152,   152,   244,   128,   161,
     190,   183,     8,   149,   205,   152,     8,    31,   146,   208,
     208,   250,   236,    31,   226,   254,   208,   208,   151,   259,
     150,   130,   239,   267,   250,   244,   247,   249,   161,   136,
     244,   252,   252,    96,    13,   168,   152,   153,    96,   191,
     254,   191,   168,   201,   152,   250,   152,   150,   152,   157,
     153,   198,   153,   198,   151,   168,   153,   161,   149,   235,
     213,   152,   144,   229,   207,   146,    13,   152,   152,   242,
     252,   152,   152,   208,   256,   268,   157,   150,    96,   152,
       8,   248,    31,   250,   244,   100,   153,   224,   192,   152,
     152,   202,    64,    65,   203,   150,   198,    78,    90,   104,
     198,   150,   235,   105,   213,    67,    68,    69,    70,    71,
      72,    85,   145,   150,   214,   217,   218,   219,   220,   222,
     181,   151,   149,    31,   146,    13,   244,   152,   257,   244,
     244,   252,   153,   152,    26,   170,   194,   194,    64,    65,
     204,   151,   170,   104,   250,    26,   153,   199,   153,   150,
     146,   153,   150,   136,   146,   221,   228,   220,     8,   153,
     149,    31,   146,   230,   227,   146,    13,   244,   130,   258,
      96,    26,   170,   193,   168,   151,    26,    66,   250,   153,
     199,   168,   152,    13,    13,     8,   153,   179,   136,   168,
     146,     8,   152,   168,    13,   244,   268,   244,   168,   102,
     250,   168,   153,   152,   168,   149,   244,   244,   146,   136,
      13,   150,    31,   146,   150,   244,   259,   101,   153,   152,
     170,   168,    13,   151,   244,   146,   153,    26,   150,   244,
     205,   168,    79,   172,   173,   174,   152,   151,   174,   215,
     235,   149,   153,   216,   146,   168,   152,   150,   149,   168,
     150
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
#line 341 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 345 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 346 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 350 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 351 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AppendName((yyvsp[(3) - (3)].lexeme)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 355 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 356 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 357 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 358 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 359 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 364 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 365 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 369 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 370 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 375 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 376 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 381 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 382 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 386 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 389 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 392 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 395 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 401 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 407 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 416 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 417 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 424 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 428 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 429 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 433 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 434 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 438 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 442 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 452 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 453 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 454 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 455 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 456 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 458 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 459 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 460 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 461 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 462 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 463 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 464 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 465 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 466 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 469 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 473 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 474 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 481 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 482 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 486 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 487 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 501 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 502 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 506 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 518 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isReference) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 519 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isReference) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 524 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 525 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction((yyvsp[(3) - (10)].lexeme), (yyvsp[(2) - (10)].isReference), (yyvsp[(1) - (10)].lexeme), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].token), (yyvsp[(10) - (10)].token),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(9) - (10)].statementList);
											  (yyval.statementList)->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 537 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 538 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);
											  
											   /* at the end of a class, see if any assigned properties were not explicitly
											    * defined and it so make them as defined
											    * very important to use $$ as we want the returned to list to be modified
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
#line 558 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 559 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 568 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 569 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 570 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 574 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 576 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 582 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 586 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 588 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 592 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 594 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 598 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
															}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 601 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 605 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 606 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 610 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 611 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 615 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 616 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 620 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 621 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 625 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 626 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 630 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 631 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 635 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 636 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 637 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 638 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 642 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 643 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 644 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 649 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 653 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 654 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 658 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 659 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 665 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 666 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 672 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 673 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 677 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 678 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 682 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 683 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = 0; }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 687 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 688 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 689 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 690 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 691 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 692 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 693 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 694 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 698 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 699 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 700 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array"), 0, 0); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 704 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) =  0; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 709 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    {  if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 730 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 731 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 732 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 741 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 742 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 743 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 747 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 748 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 749 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 750 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 754 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 755 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 759 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 760 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 762 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 763 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetDeclaredNamespace()); 															  
															  AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushFront(memberSymbol);
															  (yyval.statementList)->PushAll(&((yyvsp[(9) - (9)].classMemberSymbol)->MethodStatements));
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 775 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 776 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 780 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 781 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 787 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 788 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 792 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 793 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 800 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 806 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 812 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 818 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 824 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 834 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 840 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 849 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 850 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 854 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 855 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 859 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 860 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 864 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 865 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 186:

/* Line 1806 of yacc.c  */
#line 878 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (4)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (4)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (4)].statement);
																			  }
																			}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 883 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (6)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (6)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (6)].statement);
																			  }	
																			}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 888 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 889 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 890 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 891 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 892 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 893 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 894 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 895 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 896 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 897 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 898 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 899 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 900 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 901 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 902 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 903 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 904 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 905 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 906 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 907 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 908 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 909 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 910 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 911 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 912 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 913 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 914 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 915 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 916 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 917 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 918 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 919 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 920 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 921 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 922 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 923 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 924 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 925 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 926 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 927 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 928 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 929 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 930 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 931 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 932 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 933 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 934 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 937 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 939 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 940 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 941 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 942 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 943 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 944 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 945 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 946 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 947 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 948 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 949 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 950 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 951 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 952 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 953 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 955 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 956 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.EndAnonymousFunction();
																			  (yyval.statement) = 0;
																			}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 966 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 967 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 971 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 972 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 973 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 974 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 978 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true;
																						  }
																						}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 983 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 262:

/* Line 1806 of yacc.c  */
#line 997 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 998 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true;
																						  }
																						}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1003 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 265:

/* Line 1806 of yacc.c  */
#line 1016 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1018 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1020 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1022 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1024 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1028 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1029 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1030 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1031 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1035 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1036 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1037 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1041 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1042 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1047 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1048 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1053 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1054 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1058 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1063 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1064 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1068 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1069 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1070 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1075 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1076 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1081 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 293:

/* Line 1806 of yacc.c  */
#line 1090 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { 
																			  if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1100 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 295:

/* Line 1806 of yacc.c  */
#line 1109 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1110 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1111 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1112 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1113 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1114 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1115 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1116 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1117 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1122 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1123 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1124 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1125 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1126 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1127 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1128 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1129 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1133 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1137 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1138 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1139 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1140 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1141 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1142 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1143 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1144 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1149 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1150 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1154 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1155 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1166 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1167 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1186 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { if ((yyvsp[(1) - (2)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (2)].statement)->Type) {
													observers.DoCaptureProperties = true;	
												  }
												}
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1191 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.DoCaptureProperties = false; }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1192 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 337:

/* Line 1806 of yacc.c  */
#line 1204 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1208 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1209 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1214 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1218 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isMethod) = 1; }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1219 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.isMethod) = 0; }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1224 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1228 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1229 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1234 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1238 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
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

  case 349:

/* Line 1806 of yacc.c  */
#line 1248 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1252 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1253 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1254 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1258 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1259 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1260 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1265 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);	}
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1266 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1270 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1271 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1275 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1276 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1280 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1281 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1282 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1286 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = observers.DoCaptureProperties ? ((yyvsp[(1) - (1)].lexeme)) : 0; }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1287 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1291 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1292 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1302 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1303 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1304 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1308 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1309 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1313 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1314 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1315 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1316 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1317 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1318 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1319 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1320 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1324 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1325 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1326 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1327 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1331 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1332 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1333 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1334 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1335 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1336 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1340 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1341 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1342 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1346 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1347 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1348 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1349 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1354 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1355 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1360 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1361 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1362 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1367 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1368 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1376 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1377 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1381 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1382 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"
    { (yyval.unused) = 0; }
    break;



/* Line 1806 of yacc.c  */
#line 6676 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.cpp"
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
#line 1385 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53ResourceParser.y"


