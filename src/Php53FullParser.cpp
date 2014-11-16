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
#define yyparse         php53parse
#define yylex           php53lex
#define yyerror         php53error
#define yylval          php53lval
#define yychar          php53char
#define yydebug         php53debug
#define yynerrs         php53nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"

	
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
#include <pelet/FullParserObserverClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ParserType

// all PHP parsers will use same lex function
#define php53lex pelet::FullLex

// all PHP parsers will use the same error function
#define php53error pelet::FullGrammarError



/* Line 268 of yacc.c  */
#line 123 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.cpp"

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

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 289 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.cpp"

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
#define YYLAST   7341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  403
/* YYNRULES -- Number of states.  */
#define YYNSTATES  833

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
       2,     2,     2,    48,   152,     2,   151,    47,    31,     2,
     147,   148,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   149,
      36,    13,    37,    25,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   153,    30,     2,   150,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   145,    29,   146,    50,     2,     2,     2,
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
      27,    76,     2,    77,    78,    79,    80,    81,    62,    82,
      83,    20,    84,    85,    86,    87,    58,    88,    89,    90,
      21,    91,    92,    93,    94,    95,    56,    96,    65,    64,
      97,    98,    99,   100,   101,   102,    66,   103,   104,     5,
     105,   106,   107,    70,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    59,     7,     6,   117,    49,     2,    57,
     118,    35,    38,    33,    34,    32,   119,    39,   120,   121,
     122,    11,     9,    10,   123,    23,    19,    22,   124,    63,
     125,   126,   127,    53,   128,   129,   130,    17,   131,    24,
      12,    69,    68,    67,     4,     3,   132,    41,    15,    40,
      14,   133,    72,   134,    55,   135,   136,   137,     2,     2,
     138,   139,    51,   140,   141,   142,   143,   144,    16,     2
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
     943,   948,   955,   961,   968,   975,   982,   989,   994,   996,
     998,  1002,  1005,  1007,  1011,  1014,  1016,  1018,  1023,  1025,
    1028,  1029,  1032,  1033,  1036,  1040,  1041,  1043,  1045,  1046,
    1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1070,  1074,  1077,  1079,  1081,  1085,  1088,  1091,  1094,  1099,
    1101,  1105,  1107,  1109,  1111,  1115,  1118,  1120,  1124,  1128,
    1129,  1132,  1133,  1135,  1141,  1145,  1149,  1151,  1153,  1155,
    1157,  1159,  1161,  1167,  1169,  1172,  1173,  1177,  1181,  1182,
    1184,  1187,  1191,  1195,  1197,  1199,  1201,  1203,  1206,  1208,
    1213,  1218,  1220,  1222,  1227,  1228,  1230,  1232,  1234,  1239,
    1244,  1246,  1248,  1252,  1254,  1257,  1261,  1263,  1265,  1270,
    1271,  1272,  1275,  1281,  1285,  1289,  1291,  1298,  1303,  1308,
    1311,  1314,  1317,  1319,  1322,  1324,  1329,  1333,  1337,  1344,
    1348,  1350,  1352,  1354,  1359,  1364,  1367,  1370,  1375,  1378,
    1381,  1383,  1387,  1391
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,   156,    -1,   156,   158,    -1,    -1,   134,
      -1,   157,   126,   134,    -1,   166,    -1,   173,    -1,   174,
      -1,   114,   147,   148,   149,    -1,   124,   157,   149,    -1,
      -1,   124,   157,   145,   159,   156,   146,    -1,    -1,   124,
     145,   160,   156,   146,    -1,   140,   161,   149,    -1,   163,
     149,    -1,   161,     8,   162,    -1,   162,    -1,   157,    -1,
     157,    74,   134,    -1,   126,   157,    -1,   126,   157,    74,
     134,    -1,   163,     8,   134,    13,   238,    -1,    84,   134,
      13,   238,    -1,   164,   165,    -1,    -1,   166,    -1,   173,
      -1,   174,    -1,   114,   147,   148,   149,    -1,   167,    -1,
     134,    26,    -1,   145,   164,   146,    -1,   115,   147,   244,
     148,   166,   197,   199,    -1,   115,   147,   244,   148,    26,
     164,   198,   200,    66,   149,    -1,   143,   147,   244,   148,
     196,    -1,    92,   166,   143,   147,   244,   148,   149,    -1,
     108,   147,   220,   149,   220,   149,   220,   148,   189,    -1,
     136,   147,   244,   148,   193,    -1,    76,   149,    -1,    76,
     244,   149,    -1,    86,   149,    -1,    86,   244,   149,    -1,
     132,   149,    -1,   132,   222,   149,    -1,   132,   248,   149,
      -1,   112,   206,   149,    -1,    72,   208,   149,    -1,    96,
     219,   149,    -1,   117,    -1,   244,   149,    -1,   139,   147,
     171,   148,   149,    -1,   109,   147,   248,    74,   188,   187,
     148,   190,    -1,   109,   147,   222,    74,   248,   187,   148,
     190,    -1,    88,   147,   192,   148,   191,    -1,   149,    -1,
     138,   145,   164,   146,    78,   147,   229,   142,   148,   145,
     164,   146,   168,    -1,   137,   244,   149,    -1,   113,   134,
     149,    -1,   169,    -1,    -1,   170,    -1,   169,   170,    -1,
      78,   147,   229,   142,   148,   145,   164,   146,    -1,   172,
      -1,   171,     8,   172,    -1,   248,    -1,   176,    -1,   178,
      -1,    -1,    31,    -1,    -1,   224,   175,   134,   147,   201,
     148,   177,   145,   164,   146,    -1,    -1,   181,   134,   182,
     185,   179,   145,   209,   146,    -1,    -1,   183,   134,   184,
     180,   145,   209,   146,    -1,    80,    -1,    71,    80,    -1,
      70,    80,    -1,    -1,   106,   229,    -1,   118,    -1,    -1,
     106,   186,    -1,    -1,   116,   186,    -1,   229,    -1,   186,
       8,   229,    -1,    -1,    95,   188,    -1,   248,    -1,    31,
     248,    -1,   166,    -1,    26,   164,   100,   149,    -1,   166,
      -1,    26,   164,   101,   149,    -1,   166,    -1,    26,   164,
      99,   149,    -1,   134,    13,   238,    -1,   192,     8,   134,
      13,   238,    -1,   145,   194,   146,    -1,   145,   149,   194,
     146,    -1,    26,   194,   103,   149,    -1,    26,   149,   194,
     103,   149,    -1,    -1,   194,    77,   244,   195,   164,    -1,
     194,    89,   195,   164,    -1,    26,    -1,   149,    -1,   166,
      -1,    26,   164,   104,   149,    -1,    -1,   197,    64,   147,
     244,   148,   166,    -1,    -1,   198,    64,   147,   244,   148,
      26,   164,    -1,    -1,    65,   166,    -1,    -1,    65,    26,
     164,    -1,   202,    -1,    -1,   203,   142,    -1,   203,    31,
     142,    -1,   203,    31,   142,    13,   238,    -1,   203,   142,
      13,   238,    -1,   202,     8,   203,   142,    -1,   202,     8,
     203,    31,   142,    -1,   202,     8,   203,    31,   142,    13,
     238,    -1,   202,     8,   203,   142,    13,   238,    -1,    -1,
     229,    -1,    73,    -1,   205,    -1,    -1,   222,    -1,   248,
      -1,    31,   246,    -1,   205,     8,   222,    -1,   205,     8,
     248,    -1,   205,     8,    31,   246,    -1,   206,     8,   207,
      -1,   207,    -1,   142,    -1,   151,   245,    -1,   151,   145,
     244,   146,    -1,   208,     8,   142,    -1,   208,     8,   142,
      13,   238,    -1,   142,    -1,   142,    13,   238,    -1,   209,
     210,    -1,    -1,   213,   217,   149,    -1,   218,   149,    -1,
      -1,   214,   224,   175,   134,   147,   201,   148,   211,   212,
      -1,   149,    -1,   145,   164,   146,    -1,   215,    -1,   141,
      -1,    -1,   215,    -1,   216,    -1,   215,   216,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   217,     8,   142,    -1,   217,     8,   142,    13,   238,
      -1,   142,    -1,   142,    13,   238,    -1,   218,     8,   134,
      13,   238,    -1,    84,   134,    13,   238,    -1,   219,     8,
     244,    -1,   244,    -1,    -1,   221,    -1,   221,     8,   244,
      -1,   244,    -1,   121,   147,   264,   148,    13,   244,    -1,
     248,    13,   244,    -1,   248,    13,    31,   248,    -1,   248,
      13,    31,    63,   230,   236,    -1,    63,   230,   236,    -1,
      62,   244,    -1,   248,    24,   244,    -1,   248,    23,   244,
      -1,   248,    22,   244,    -1,   248,    21,   244,    -1,   248,
      20,   244,    -1,   248,    19,   244,    -1,   248,    18,   244,
      -1,   248,    17,   244,    -1,   248,    16,   244,    -1,   248,
      15,   244,    -1,   248,    14,   244,    -1,   247,    59,    -1,
      59,   247,    -1,   247,    58,    -1,    58,   247,    -1,   244,
      27,   244,    -1,   244,    28,   244,    -1,   244,     9,   244,
      -1,   244,    11,   244,    -1,   244,    10,   244,    -1,   244,
      29,   244,    -1,   244,    31,   244,    -1,   244,    30,   244,
      -1,   244,    44,   244,    -1,   244,    42,   244,    -1,   244,
      43,   244,    -1,   244,    45,   244,    -1,   244,    46,   244,
      -1,   244,    47,   244,    -1,   244,    41,   244,    -1,   244,
      40,   244,    -1,    42,   244,    -1,    43,   244,    -1,    48,
     244,    -1,    50,   244,    -1,   244,    33,   244,    -1,   244,
      32,   244,    -1,   244,    35,   244,    -1,   244,    34,   244,
      -1,   244,    36,   244,    -1,   244,    39,   244,    -1,   244,
      37,   244,    -1,   244,    38,   244,    -1,   244,    49,   230,
      -1,   147,   244,   148,    -1,   244,    25,   244,    26,   244,
      -1,   244,    25,    26,   244,    -1,   271,    -1,    57,   244,
      -1,    56,   244,    -1,    55,   244,    -1,    54,   244,    -1,
      53,   244,    -1,    52,   244,    -1,    51,   244,    -1,   105,
     234,    -1,    60,   244,    -1,   240,    -1,    73,   147,   266,
     148,    -1,   150,   235,   150,    -1,    12,   244,    -1,    -1,
     224,   175,   147,   201,   148,   225,   145,   223,   164,   146,
      -1,   111,    -1,    -1,   140,   147,   226,   148,    -1,   226,
       8,   142,    -1,   226,     8,    31,   142,    -1,   142,    -1,
      31,   142,    -1,   157,   147,   204,   148,    -1,   124,   126,
     157,   147,   204,   148,    -1,   126,   157,   147,   204,   148,
      -1,   228,   131,   134,   147,   204,   148,    -1,   228,   131,
     252,   147,   204,   148,    -1,   254,   131,   134,   147,   204,
     148,    -1,   254,   131,   252,   147,   204,   148,    -1,   252,
     147,   204,   148,    -1,    72,    -1,   157,    -1,   124,   126,
     157,    -1,   126,   157,    -1,   157,    -1,   124,   126,   157,
      -1,   126,   157,    -1,   228,    -1,   231,    -1,   256,   128,
     260,   232,    -1,   256,    -1,   232,   233,    -1,    -1,   128,
     260,    -1,    -1,   147,   148,    -1,   147,   244,   148,    -1,
      -1,    98,    -1,   268,    -1,    -1,   147,   204,   148,    -1,
     122,    -1,    91,    -1,    85,    -1,   120,    -1,   107,    -1,
      90,    -1,    81,    -1,   123,    -1,   110,    -1,   125,    -1,
     133,    98,   102,    -1,   133,   102,    -1,   237,    -1,   157,
      -1,   124,   126,   157,    -1,   126,   157,    -1,    42,   238,
      -1,    43,   238,    -1,    73,   147,   241,   148,    -1,   239,
      -1,   228,   131,   134,    -1,   135,    -1,   273,    -1,   157,
      -1,   124,   126,   157,    -1,   126,   157,    -1,   237,    -1,
     152,   268,   152,    -1,   133,   268,   102,    -1,    -1,   243,
     242,    -1,    -1,     8,    -1,   243,     8,   238,    95,   238,
      -1,   243,     8,   238,    -1,   238,    95,   238,    -1,   238,
      -1,   245,    -1,   222,    -1,   248,    -1,   248,    -1,   248,
      -1,   255,   128,   260,   251,   249,    -1,   255,    -1,   249,
     250,    -1,    -1,   128,   260,   251,    -1,   147,   204,   148,
      -1,    -1,   257,    -1,   263,   257,    -1,   228,   131,   252,
      -1,   254,   131,   252,    -1,   257,    -1,   256,    -1,   227,
      -1,   257,    -1,   263,   257,    -1,   253,    -1,   257,    61,
     259,   153,    -1,   257,   145,   244,   146,    -1,   258,    -1,
     142,    -1,   151,   145,   244,   146,    -1,    -1,   244,    -1,
     261,    -1,   252,    -1,   261,    61,   259,   153,    -1,   261,
     145,   244,   146,    -1,   262,    -1,   134,    -1,   145,   244,
     146,    -1,   151,    -1,   263,   151,    -1,   264,     8,   265,
      -1,   265,    -1,   248,    -1,   121,   147,   264,   148,    -1,
      -1,    -1,   267,   242,    -1,   267,     8,   244,    95,   244,
      -1,   267,     8,   244,    -1,   244,    95,   244,    -1,   244,
      -1,   267,     8,   244,    95,    31,   246,    -1,   267,     8,
      31,   246,    -1,   244,    95,    31,   246,    -1,    31,   246,
      -1,   268,   269,    -1,   268,    98,    -1,   269,    -1,    98,
     269,    -1,   142,    -1,   142,    61,   270,   153,    -1,   142,
     128,   134,    -1,    94,   244,   146,    -1,    94,   135,    61,
     244,   153,   146,    -1,    87,   248,   146,    -1,   134,    -1,
     127,    -1,   142,    -1,   119,   147,   272,   148,    -1,    97,
     147,   248,   148,    -1,     7,   244,    -1,     6,   244,    -1,
       5,   147,   244,   148,    -1,     4,   244,    -1,     3,   244,
      -1,   248,    -1,   272,     8,   248,    -1,   228,   131,   134,
      -1,   254,   131,   134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   352,   352,   356,   357,   361,   362,   366,   367,   368,
     369,   370,   371,   371,   373,   373,   375,   376,   380,   382,
     386,   387,   388,   389,   393,   394,   398,   399,   403,   404,
     405,   406,   410,   411,   415,   416,   420,   424,   426,   427,
     439,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   462,   469,   470,   471,   481,
     482,   486,   487,   491,   492,   496,   505,   506,   510,   514,
     518,   522,   523,   528,   527,   536,   535,   549,   548,   557,
     558,   559,   563,   564,   569,   573,   574,   579,   580,   585,
     586,   590,   591,   595,   596,   600,   601,   605,   606,   610,
     611,   615,   616,   620,   621,   622,   623,   627,   628,   632,
     638,   639,   643,   644,   648,   649,   656,   657,   664,   665,
     669,   670,   674,   675,   680,   681,   682,   683,   684,   685,
     686,   687,   691,   692,   693,   697,   698,   702,   703,   704,
     705,   706,   707,   711,   712,   716,   717,   718,   722,   723,
     724,   725,   729,   730,   734,   735,   737,   736,   744,   745,
     749,   750,   754,   755,   759,   760,   764,   765,   766,   767,
     768,   769,   773,   774,   775,   776,   780,   782,   786,   787,
     791,   792,   796,   797,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,   855,   857,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   873,   871,   883,   887,   888,   892,   896,   900,   901,
     905,   907,   910,   912,   914,   916,   918,   920,   925,   926,
     927,   928,   932,   933,   934,   938,   939,   943,   945,   949,
     950,   954,   958,   959,   960,   964,   965,   966,   970,   971,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   990,   991,   992,   993,   994,   995,   996,   997,
    1001,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1016,
    1017,  1021,  1022,  1026,  1027,  1028,  1029,  1033,  1034,  1038,
    1042,  1046,  1050,  1054,  1058,  1059,  1063,  1068,  1069,  1073,
    1074,  1078,  1079,  1083,  1087,  1088,  1092,  1093,  1094,  1098,
    1099,  1100,  1104,  1105,  1109,  1110,  1114,  1115,  1119,  1120,
    1121,  1125,  1126,  1130,  1131,  1135,  1136,  1140,  1141,  1142,
    1146,  1147,  1151,  1155,  1159,  1160,  1161,  1165,  1169,  1170,
    1174,  1175,  1176,  1177,  1181,  1182,  1183,  1184,  1185,  1186,
    1190,  1191,  1192,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1206,  1207,  1211,  1212
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
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'@'", "'['", "T_CLONE",
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
  "T_VAR", "T_VARIABLE", "T_WHILE", "T_WHITESPACE", "'{'", "'}'", "'('",
  "')'", "';'", "'`'", "'$'", "'\"'", "']'", "$accept", "start",
  "top_statement_list", "namespace_name", "top_statement", "$@1", "$@2",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement",
  "unticked_statement", "additional_catches",
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
     553,   502,   612,   504,   506,   507,   511,   513,   514,   515,
     516,   517,   519,   520,   522,   523,   524,   525,   527,   528,
     529,   531,   532,   533,   534,   535,   537,   540,   541,   542,
     543,   544,   545,   547,   548,   550,   551,   552,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   566,   570,   576,
     578,   579,   580,   584,   588,   590,   591,   592,   594,   595,
     596,   598,   606,   611,   613,   615,   616,   617,   620,   621,
     623,   624,   625,   626,   627,   123,   125,    40,    41,    59,
      96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   158,   159,   158,   160,   158,   158,   158,   161,   161,
     162,   162,   162,   162,   163,   163,   164,   164,   165,   165,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   169,   169,   170,   171,   171,   172,   173,
     174,   175,   175,   177,   176,   179,   178,   180,   178,   181,
     181,   181,   182,   182,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   194,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   203,   203,   203,   204,   204,   205,   205,   205,
     205,   205,   205,   206,   206,   207,   207,   207,   208,   208,
     208,   208,   209,   209,   210,   210,   211,   210,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   216,   216,
     216,   216,   217,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   223,   222,   224,   225,   225,   226,   226,   226,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   228,   228,
     228,   228,   229,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   234,   234,   234,   235,   235,   235,   236,   236,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   242,   243,   243,   243,   243,   244,   244,   245,
     246,   247,   248,   248,   249,   249,   250,   251,   251,   252,
     252,   253,   253,   254,   255,   255,   256,   256,   256,   257,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   265,
     266,   266,   267,   267,   267,   267,   267,   267,   267,   267,
     268,   268,   268,   268,   269,   269,   269,   269,   269,   269,
     270,   270,   270,   271,   271,   271,   271,   271,   271,   271,
     272,   272,   273,   273
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
       4,     6,     5,     6,     6,     6,     6,     4,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     4,     1,     2,
       0,     2,     0,     2,     3,     0,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     2,     2,     4,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     0,
       2,     0,     1,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     5,     1,     2,     0,     3,     3,     0,     1,
       2,     3,     3,     1,     1,     1,     1,     2,     1,     4,
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
       0,     0,     0,     0,     0,     0,     0,     0,   268,     0,
       0,    79,   296,     0,   292,     0,     0,   295,   291,     0,
       0,     0,   282,   294,     0,     0,   298,   253,     0,     0,
       0,     0,    51,    84,     0,   293,     0,   290,   297,     0,
     299,     0,     0,     0,     5,   311,     0,     0,     0,     0,
       0,   352,     0,    27,     0,    57,   285,   363,     0,   313,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     328,    71,   345,     0,   316,   247,     0,   327,     0,   329,
       0,   348,     0,   333,   344,   346,   351,     0,   237,   312,
     268,     0,     5,    71,   399,   398,     0,   396,   395,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   269,     0,   204,   331,     0,   202,   246,
     189,     0,     0,   269,   275,   288,   276,     0,   278,   346,
       0,    81,    80,   150,     0,   370,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   369,     0,
      14,     0,   315,    45,   328,     0,   329,     0,     0,     0,
     301,   384,     0,   382,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   286,     0,   287,     0,
       0,     0,     0,   136,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,     0,   354,     0,   364,   347,     0,
       0,     0,   271,     0,     0,     0,   271,     0,   136,   188,
       0,     0,   347,     0,     0,    49,     0,   375,     0,   321,
      42,     0,    44,     0,     0,     0,     0,    50,     0,   283,
       0,     0,   181,   183,   328,   329,     0,   146,   329,     0,
      48,    60,     0,     0,   400,     0,     0,   367,     0,   366,
     314,     4,    12,    11,   136,    46,    47,     0,   311,     0,
     300,   383,     0,     0,   381,   318,   380,     0,    59,     0,
       0,    66,    68,    22,     0,     0,    16,     0,     0,    34,
      26,    28,    29,    30,   234,   249,     0,   317,     6,     0,
       0,   135,   328,   329,     0,     0,    87,     0,    77,     0,
     132,   402,   341,   339,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,   403,   342,   361,     0,
     357,   338,   356,   360,   355,     0,     0,   397,   270,     0,
       0,   270,   341,     0,   342,   280,     0,     0,     0,     0,
       0,     0,   303,     0,   302,   151,   309,   148,   379,   330,
       0,   248,   322,   371,    25,     0,     0,     0,     0,   178,
     394,   284,   180,     0,     0,     0,     0,   143,    10,     0,
       0,   393,   369,   369,     0,   136,     0,     4,     0,   389,
       0,   387,   391,   390,   392,     0,   386,     0,     0,     0,
       0,     0,    21,    18,     0,     0,   353,   139,   260,     0,
       0,     0,     0,   272,    83,     0,    75,    86,    89,     0,
     132,   134,     0,   122,     0,   133,   136,   136,   340,   236,
       0,     0,   186,   267,   136,   136,     0,   136,   335,   354,
       0,   349,   350,   289,   277,   306,   307,   319,     0,   305,
       0,     0,     0,     0,   374,     0,   373,   101,     0,    27,
      99,    56,     0,     0,   182,    91,     0,    91,    93,   147,
      27,   114,   401,     0,   365,     0,     0,    15,     0,   262,
       0,   385,   107,   107,    40,     0,    67,    53,    23,    27,
     112,    37,     0,     0,   328,   329,    24,     0,   274,    88,
       0,     0,   153,     0,   254,   132,     0,   124,     0,     0,
     235,   288,     0,     0,   362,     0,   332,     0,     0,     0,
     279,   326,     0,   321,   304,   310,   149,   378,   377,     0,
       0,     0,     0,   180,     0,     0,    94,     0,   116,   118,
     368,   184,   261,    13,     0,   107,     0,   107,     0,     0,
       0,    31,   142,   273,   153,    90,   162,    73,     0,     0,
       0,   125,     0,   263,   264,   187,   265,   266,   337,     0,
     334,   358,   359,   281,     0,   308,   322,   320,     0,   372,
     102,     0,    38,     0,    92,     0,     0,   120,     0,     0,
      35,   388,     0,     0,     0,     0,     0,   103,     0,     0,
     162,   166,   167,   168,   171,   170,   169,     0,   161,    78,
     152,     0,     0,   160,   164,     0,     0,     0,   251,     0,
     128,     0,   127,   338,   325,   324,   376,   100,     0,    27,
      97,    55,    54,     0,     0,     0,     0,   119,     0,     0,
     110,   111,    27,   105,   104,     0,   113,    76,     0,   174,
       0,    71,   165,     0,   155,    27,     0,   258,     0,    27,
     129,     0,   126,   336,     0,    27,    95,    39,     0,     0,
      27,     0,     0,   106,    27,   109,     0,     0,     0,     0,
     154,     0,     0,     0,   259,     0,   255,     0,     0,   131,
     323,     0,     0,     0,   121,    36,     0,   108,    27,   177,
     175,   172,     0,     0,    74,     0,   256,   252,   130,     0,
      98,     0,   115,     0,     0,   132,   176,   257,    96,    27,
      62,   173,     0,   117,     0,    58,    61,    63,   156,     0,
      64,     0,     0,    27,   158,   157,     0,     0,     0,   159,
      27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   477,   321,   201,   202,    81,
     204,   350,   351,    83,   815,   816,   817,   340,   341,   352,
     353,   219,    86,   706,    87,   590,   509,    88,   366,    89,
     368,   506,   507,   625,   557,   757,   721,   551,   294,   574,
     636,   732,   581,   629,   677,   680,   725,   512,   513,   514,
     360,   361,   172,   173,   154,   646,   700,   821,   825,   701,
     702,   703,   704,   740,   705,   163,   301,   302,    90,   749,
     113,   649,   748,    92,    93,   515,   145,   146,   534,   610,
     167,   207,   279,    94,   445,   446,    95,   612,   453,   613,
      96,    97,   448,    98,    99,   606,   660,   528,   100,   101,
     102,   103,   104,   105,   106,   425,   421,   422,   423,   107,
     318,   319,   288,   289,   192,   193,   485,   108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -509
static const yytype_int16 yypact[] =
{
    -509,    55,  1835,  -509,  6058,  6058,   -33,  6058,  6058,  6058,
    6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,
    6058,   309,   309,  6058,  6058,   345,    77,    80,    58,    65,
    1336,  -509,  -509,    94,  -509,  4685,    85,  -509,  -509,  4535,
    6058,   109,   138,  -509,   147,   152,  -509,  -509,   -90,   178,
     170,   174,  -509,  -509,   183,  -509,   186,  -509,  -509,    70,
    -509,   191,  4809,   224,   310,  -509,   200,  6058,   207,   218,
     100,  -509,   232,  -509,  6058,  -509,   252,   235,   378,    54,
    -509,     9,  -509,  -509,  -509,  -509,  -509,  -509,   249,   250,
    -509,   364,  -509,   269,  -509,  -509,  1480,  -509,   220,  1234,
     255,  -509,   277,   275,  -509,   -30,  -509,   -61,  -509,  -509,
    -509,   283,  -509,   364,  7215,  7215,  6058,  7215,  7215,  1671,
    -509,  -509,   366,  -509,  -509,  -509,  -509,  -509,  -509,  -509,
    -509,   292,   191,   -75,   291,  -509,  -509,   300,  -509,  -509,
    -509,   308,   191,   315,   316,   299,  -509,   319,   324,    60,
     -61,  -509,  -509,   446,    15,  4933,  -509,  6351,   450,  -509,
    6392,   333,   325,    16,  7215,   309,  5057,  -509,  6058,  6058,
    -509,    82,    17,  -509,   331,   342,  6058,   309,   272,   191,
    -509,    97,    67,  -509,   332,  7215,   354,   309,  6182,   123,
    -509,   -32,   240,  -509,  -509,  6058,  6433,  -509,   309,   191,
      -8,    18,  -509,  6058,  1985,  6474,   124,   348,   436,  6058,
     124,   105,   367,  5181,   374,  -509,   386,   405,  -509,   -63,
     211,  6058,  6058,  6058,  5314,  6058,  6058,  6058,  6058,  6058,
    6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,
    6058,  6058,  6058,  6058,  6058,  6058,   345,  -509,  -509,  -509,
    5438,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,
    6058,  6058,  5181,   311,   265,  6058,  6058,   235,   -25,   369,
    6515,   191,   -69,   349,   351,   191,   315,   103,  5181,  -509,
     103,   265,   -22,   873,   371,  -509,   309,  7092,   370,   509,
    -509,   873,  -509,   506,    22,   377,  6058,  -509,   384,  -509,
    6556,   376,   525,  7215,   461,  1543,  6058,  -509,  -509,   -90,
    -509,  -509,   387,  6598,  -509,    24,   392,  -509,    29,  -509,
     151,  -509,  -509,  -509,  5181,  -509,  -509,   395,   481,  6846,
    -509,  -509,   221,   413,  -509,  -509,  -509,  6639,  -509,  2135,
      33,  -509,  -509,    50,   414,   100,  -509,  6680,   403,  -509,
    -509,  -509,  -509,  -509,  -509,  -509,  6887,  -509,  -509,   309,
     410,   543,    36,    89,   546,   -41,   444,   -41,  -509,   421,
     115,   429,   430,   -22,   -61,  7255,  7292,  1671,  6058,  7174,
    1970,  2119,  2268,  2417,  2566,  2716,  2716,  2716,  2716,  2862,
    1289,  1175,  1175,   598,   598,   391,   391,   391,   366,   366,
     366,  -509,   189,  1671,  1671,  1671,  1671,  1671,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,   432,   434,   435,  -509,  6058,
    -509,   437,    14,  -509,  7215,   433,  6928,  -509,   -68,   429,
     434,   315,  -509,   440,  -509,  -509,   873,   873,   442,   466,
     191,    92,   -44,   468,  -509,  -509,  -509,   584,  -509,  -509,
    5562,  -509,  5686,  -509,  -509,   873,   467,  3785,  6058,  7215,
    -509,  -509,  6058,  6058,   309,   190,  6969,  -509,  -509,  3935,
     309,  -509,   272,   272,   587,  5181,  1535,  -509,   454,  -509,
    6058,  -509,  -509,  -509,  -509,   452,  -509,     7,   528,   309,
     464,   469,  -509,  -509,  4085,   472,  -509,  -509,  -509,  5810,
     873,   488,   191,   315,  -509,   -41,  -509,   609,  -509,   476,
     115,  -509,   474,   616,   -11,  -509,  5181,  5181,   -22,  1821,
    6058,   345,  -509,  -509,  5181,  5181,  7010,  5181,  -509,  6058,
    6058,  -509,  -509,  -509,   499,  -509,  -509,   873,   191,    25,
     529,   500,   873,   309,  7215,   309,  7133,  -509,   620,  -509,
    -509,  -509,  6722,   486,  7215,   551,   309,   551,  -509,  -509,
    -509,  -509,  -509,    38,  -509,  6058,   501,  -509,  1685,  -509,
    1151,  -509,   502,   504,  -509,   507,  -509,  -509,  -509,  -509,
    -509,  -509,   508,   309,    39,   120,  -509,   191,   315,   609,
     510,   -41,  -509,   511,   518,   -35,   519,   647,   514,   515,
    1821,   299,   516,   520,  -509,   521,   539,   522,  7051,   265,
    -509,   576,   524,   665,   127,  -509,  -509,  -509,  -509,  5934,
     873,  2285,   530,  6058,   190,   526,  -509,   533,  3635,   242,
    -509,  1671,  -509,  -509,   532,  -509,    -3,  -509,   -27,   -41,
    2435,  -509,  -509,   315,  -509,  -509,   320,  -509,   536,   540,
     -10,   671,   873,  -509,  -509,  -509,  -509,  -509,  -509,   265,
    -509,  -509,  -509,  -509,   873,  -509,   873,  -509,   309,  7215,
    -509,   537,  -509,   541,  -509,  4235,  4235,   293,   544,  4535,
    -509,  -509,   187,  6058,    -4,   545,   -21,  -509,   548,   547,
     358,  -509,  -509,  -509,  -509,  -509,  -509,   558,  -509,  -509,
    -509,   556,   588,   485,  -509,    19,   557,     4,  -509,   559,
     690,   873,  -509,   437,  -509,   610,  -509,  -509,  4385,  -509,
    -509,  -509,  -509,   560,   680,   642,  6058,  -509,   562,  6310,
    -509,  -509,  -509,  -509,  -509,   561,  -509,  -509,   699,   700,
      20,   364,  -509,   580,  -509,  -509,   573,  -509,    41,  -509,
     703,   873,  -509,  -509,   873,  -509,  -509,  -509,  2585,  6058,
    -509,   568,  6763,  -509,  -509,  3635,   575,   873,   873,   579,
    -509,   589,   705,  2735,  -509,    11,  -509,  2885,   873,  -509,
    -509,  3035,   577,  6804,  3635,  -509,  4535,  3635,  -509,  -509,
    -509,   709,   581,   873,  -509,   582,  -509,  -509,  -509,   578,
    -509,   704,  -509,  3185,   873,   115,  -509,  -509,  -509,  -509,
     651,  -509,   585,  3635,   593,  -509,   651,  -509,  -509,   -41,
    -509,   -57,   590,  -509,  -509,  -509,   586,  3335,   591,  -509,
    -509,  3485,  -509
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -509,  -509,  -302,   -16,  -509,  -509,  -509,  -509,   397,  -509,
      12,  -509,     1,  -509,  -509,  -509,   -73,  -509,   256,     2,
       6,  -111,  -509,  -509,  -509,  -509,  -509,  -509,  -509,  -509,
    -509,  -509,   241,   192,   129,  -509,    71,  -509,  -509,  -509,
    -508,    26,  -509,  -509,  -509,  -509,  -509,  -495,  -509,   159,
    -244,  -509,  -509,   449,  -509,   116,  -509,  -509,  -509,  -509,
    -509,  -509,    56,  -509,  -509,  -509,  -449,  -509,   426,  -509,
      -2,  -509,  -509,  -509,    73,  -355,  -232,  -509,  -509,  -509,
    -509,  -509,   163,   128,   492,  -509,  -509,  -509,   153,  -509,
     845,   594,  -348,   339,   950,  -509,  -509,    57,  -204,  -509,
      42,  -509,   -24,    23,  -509,   239,  -274,  -509,  -509,    28,
     297,   301,  -509,  -509,   217,   401,  -509,  -509,  -509,  -509
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -344
static const yytype_int16 yytable[] =
{
      91,   148,   269,    82,    84,   133,   133,   435,    85,   143,
     504,   497,   508,   553,   401,   593,   372,   214,   415,   476,
     596,   709,   730,   284,   296,   309,   345,   743,   769,   332,
     456,   265,   470,   572,   433,   746,   265,   473,   511,   265,
     162,   489,   795,   181,  -137,   182,   473,  -140,   149,   775,
     683,   212,   170,   150,   200,     3,   683,   212,   212,   417,
     420,   171,   684,   137,   137,   638,   344,   147,   684,   372,
     417,   369,   213,   432,   683,   529,   434,   420,   324,   475,
     478,    71,   212,   501,   370,   502,   684,  -269,   823,   501,
     267,   502,   824,   112,   134,   134,   333,  -138,   144,   112,
     685,  -343,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   116,   266,   272,  -339,   212,   687,
     266,   265,  -340,   266,   491,   734,   276,   682,  -141,   686,
     268,   597,   710,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   731,   747,  -331,  -331,   133,
     508,   212,   573,   796,   110,   133,  -271,   151,   215,   530,
     152,   133,   133,   320,   285,   297,   310,   346,   744,   770,
     457,   133,   471,   282,   673,   568,   212,   474,  -331,  -331,
     212,   490,   133,   343,  -137,  -269,   630,  -140,   511,   776,
     540,  -343,   187,   212,   190,   617,   179,   618,  -271,   188,
     153,   213,    91,   334,   112,   266,   131,   137,   132,   339,
     187,   187,   155,   137,   324,   180,   112,   188,   188,   137,
     137,   556,   148,   212,    71,   330,   199,   306,   158,   137,
     143,   566,   161,    77,   112,   642,   645,  -138,   134,   501,
     137,   502,   322,   373,   134,    71,   323,   191,   374,   112,
     134,   134,   521,   212,    77,   428,   165,   357,  -270,   431,
     134,   110,   110,  -123,   683,   191,   191,   442,  -141,   149,
     133,   134,   598,   599,   150,   442,   684,   212,   248,   249,
     602,   603,  -270,   605,   688,   166,   373,   373,   147,   601,
     728,   374,   374,   208,   168,   211,   373,   373,   475,   169,
     373,   374,   374,   373,   373,   374,   678,   679,   374,   374,
     812,   187,   174,   131,   131,   132,   132,   175,   188,   144,
     716,   176,   189,   112,   112,   112,   190,   187,   137,   200,
     177,    71,    71,   178,   188,   663,   194,    91,   334,   187,
      77,    77,   335,   133,   110,   371,   188,   195,   482,   503,
     206,   503,   197,    71,   503,   483,   443,   723,   724,   134,
     135,   138,    77,   484,   443,   198,   191,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   203,
     209,   110,   191,   216,   217,   713,   133,   691,   692,   693,
     694,   695,   696,   316,   191,   218,   131,   518,   132,   418,
     220,   137,   262,   264,   697,   420,   112,    71,   263,   179,
     419,   444,  -331,  -331,    71,   246,    77,   110,   271,   444,
     442,   442,   273,    77,   539,   691,   692,   693,   694,   695,
     696,   274,   134,   131,   275,   132,   243,   244,   245,   442,
     246,   212,   697,   112,   137,   416,   278,   277,   133,   133,
     280,    71,   281,    71,   133,   420,   133,   133,   550,   283,
      77,   698,    77,   291,   822,   187,   699,   293,   295,   141,
     561,   142,   188,   133,    91,   134,   210,    82,    84,   112,
     311,   325,    85,   429,   442,   430,   588,    71,   184,   503,
     312,    71,   365,    71,   503,   580,    77,   148,   355,   698,
      77,   358,    77,   326,   737,   143,   137,   137,   364,   443,
     443,   367,   137,   447,   137,   137,   370,   452,   451,   455,
     191,   442,   614,   187,   458,   462,   442,   133,   443,   133,
     188,   137,   460,   463,   334,   464,   468,   134,   134,   472,
     133,   479,   480,   134,   149,   134,   134,   486,   492,   150,
     495,   499,   691,   692,   693,   694,   695,   696,   498,   500,
     505,   621,   134,   147,   444,   444,    91,   133,   510,    82,
      84,   643,   628,   443,    85,   503,   516,   517,   191,   503,
     523,   524,   525,   444,   527,   137,   531,   137,   533,   537,
     331,   640,   538,   336,   144,   304,  -163,   542,   137,   541,
     565,   548,   569,   578,   442,   571,   575,   331,   133,   336,
     443,   331,   336,   577,   587,   443,   134,   591,   134,    91,
     582,   592,   594,   503,   595,   137,    91,   609,   444,   134,
     771,   330,   373,   620,   615,   623,   442,   374,    91,   362,
     240,   241,   242,   243,   244,   245,   624,   246,   442,   632,
     442,   635,   133,   637,   639,   644,   134,   641,   648,   647,
     652,   651,   653,   654,   656,   444,   137,   659,   657,   658,
     444,   664,   665,   666,   675,   661,   720,   720,   681,   672,
     727,   676,   373,   707,   711,   708,   717,   374,   362,   718,
     735,   726,   738,   443,   733,   442,   736,   134,   739,    47,
     741,   750,   745,   751,   362,   754,   760,   759,   761,   766,
     137,   763,   767,   768,   772,   774,   778,   785,   793,   756,
     788,   791,   804,   792,   807,   443,   800,   808,   805,   814,
     809,   758,   826,   818,   828,   442,   830,   443,   442,   443,
     819,   134,   493,   820,   765,   576,   589,   722,   444,   627,
     362,   442,   442,   674,   650,   764,    91,   773,   467,   742,
     690,   777,   442,    91,   655,   307,   667,   781,   607,   563,
     753,    91,   784,     0,   564,    91,   787,   442,     0,    91,
     444,     0,    91,   454,   443,    91,     0,   802,   442,   503,
       0,     0,   444,     0,   444,     0,     0,     0,     0,     0,
     803,    91,     0,   503,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   813,     0,     0,   443,    91,     0,   443,     0,    91,
       0,     0,     0,     0,     0,   827,     0,     0,     0,   444,
     443,   443,   831,     0,     0,     0,     0,     0,     0,   114,
     115,   443,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   443,     0,   139,   140,
       0,     0,     0,     0,     0,   157,     0,   443,     0,   444,
     160,     0,   444,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   444,   444,     0,     0,     0,
       0,   362,     0,     0,     0,     0,   444,   185,     0,     0,
       0,     0,   196,     0,     0,   436,   437,     0,     0,   205,
       0,   444,     0,     0,     0,   584,     0,     0,   535,   536,
       0,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   362,   362,     0,   110,   438,   547,     0,     0,
     362,   362,     0,   362,    32,     0,     0,     0,    34,     0,
       0,   270,     0,    37,    38,     0,     0,     0,     0,     0,
       0,   136,   136,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,   586,    55,     0,    57,    58,   439,    60,   440,
     287,     0,     0,     0,     0,     0,   441,   112,     0,     0,
       0,   300,   186,   303,   185,     0,     0,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,     0,   611,
       0,     0,     0,   329,   616,     0,     0,     0,     0,     0,
     337,     0,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,   356,     0,     0,     0,   185,     0,
       0,     0,     0,     0,     0,     0,   375,   376,   377,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   185,     0,     0,
     424,   426,   670,     0,     0,   298,     0,     0,     0,   305,
       0,   308,     0,   185,     0,     0,     0,   314,   317,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
       0,   459,     0,     0,   712,     0,     0,     0,   342,     0,
       0,   466,     0,     0,     0,     0,   714,     0,   715,     0,
     221,   222,   223,   363,     0,     0,     0,     0,     0,   185,
       0,     0,     0,     0,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,   752,     0,     0,     0,     0,     0,     0,
       0,     0,   363,  -344,  -344,   238,   239,   240,   241,   242,
     243,   244,   245,   519,   246,     0,     0,     0,   363,     0,
       0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
       0,     0,     0,   779,     0,     0,   780,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   789,
     790,     0,     0,     0,   526,     0,     0,     0,     0,     0,
     798,     0,     0,     0,   363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   806,     0,     0,     0,     0,
       0,     0,  -331,  -331,     0,   544,   811,   546,     0,     0,
       0,     0,     0,   552,   634,     0,     0,   303,   554,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,     0,     0,     0,     0,   570,  -344,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     4,
       5,     6,     7,     8,   185,     0,     0,     0,     9,     0,
       0,     0,   522,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   185,     0,     0,   600,     0,     0,     0,   185,
     185,     0,   185,     0,   424,   608,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    29,
     631,     0,     0,     0,   555,   558,     0,    32,     0,     0,
     562,    34,   317,   317,     0,   363,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,   342,
       0,    42,     0,    43,     0,     0,    46,    47,     0,   585,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     111,    60,    61,     0,   669,     0,   363,   363,   303,    63,
     112,    65,     0,     0,   363,   363,     0,   363,    71,     0,
       0,     0,     0,    74,     0,   156,    76,    77,    78,   221,
     222,   223,     0,   449,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   626,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   729,   246,
       0,     0,     0,   449,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,     0,
       0,   762,     0,     0,   558,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,  -331,  -331,     0,   783,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,   465,   449,    33,
      34,    35,     0,    36,     0,    37,    38,    39,     0,   247,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    71,    72,     0,
      73,   567,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,   224,     9,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,    33,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    71,    72,     0,
      73,   633,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,    33,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   349,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   488,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,   671,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,   689,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,   782,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,  -344,  -344,
    -344,  -344,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   794,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,  -344,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   797,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,   799,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   810,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   829,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,   832,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   348,
      51,     0,    52,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   719,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   110,    29,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     4,     5,     6,     7,     8,     0,    63,   112,
      65,     9,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,     0,   159,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    29,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   111,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   112,    65,     9,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,   183,    76,
      77,    78,     0,     0,   286,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   110,    29,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   111,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   112,    65,     9,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,     0,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      29,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   112,    65,     9,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,   299,     0,    76,    77,    78,
       0,     0,   359,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    29,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     0,     0,
       0,     0,     0,     0,    63,   112,    65,     4,     5,     6,
       7,     8,     0,    71,     0,     0,     9,     0,    74,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       9,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,     0,     0,   402,
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
      71,     0,     0,     0,     0,    74,     0,     0,    76,    77,
      78,     0,     0,   543,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,     0,    76,    77,    78,     0,     0,   545,     0,     0,
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
       0,     0,     0,    74,     0,     0,    76,    77,    78,     0,
       0,   583,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
      76,    77,    78,     0,     0,   668,     0,     0,     0,     0,
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
       9,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,     0,     0,     0,
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
      71,     0,     0,     0,     0,    74,     0,     0,    76,    77,
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
     222,   223,     0,     0,    71,     0,     0,     0,     0,    74,
       0,     0,    76,    77,    78,   224,   730,   225,   226,   227,
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
       0,     0,     0,     0,     0,     0,     0,     0,   224,   731,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     290,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   292,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
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
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   494,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     622,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   786,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   801,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   481,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   496,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   532,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   559,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   604,     0,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,   450,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   662,     0,   224,
     520,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,   619,     0,
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
  ((yystate) == (-509))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-344))

static const yytype_int16 yycheck[] =
{
       2,    25,   113,     2,     2,    21,    22,   281,     2,    25,
     365,   359,   367,   462,   246,   510,   220,     8,   262,   321,
      31,    31,    26,     8,     8,     8,     8,     8,     8,    61,
       8,    61,     8,    26,   278,    31,    61,     8,    73,    61,
      39,     8,    31,    59,     8,    61,     8,     8,    25,     8,
      77,   126,   142,    25,    70,     0,    77,   126,   126,   263,
     264,   151,    89,    21,    22,   573,    74,    25,    89,   273,
     274,   134,   147,   277,    77,    61,   280,   281,   147,   147,
     324,   142,   126,   124,   147,   126,    89,   131,   145,   124,
     151,   126,   149,   134,    21,    22,   128,     8,    25,   134,
     103,   131,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   147,   145,   132,   147,   126,   146,
     145,    61,   147,   145,    74,   146,   142,   635,     8,   637,
     107,   142,   142,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   142,    58,    59,   165,
     505,   126,   145,   142,    72,   171,   131,    80,   149,   145,
      80,   177,   178,   179,   149,   149,   149,   149,   149,   149,
     148,   187,   148,   150,   623,   477,   126,   148,    58,    59,
     126,   148,   198,   199,   148,   131,   148,   148,    73,   148,
      98,   131,    87,   126,   102,   543,   126,   545,   131,    94,
     142,   147,   204,    98,   134,   145,   124,   165,   126,   197,
      87,    87,   147,   171,   147,   145,   134,    94,    94,   177,
     178,    31,   246,   126,   142,   102,   126,   145,   134,   187,
     246,   475,   147,   151,   134,   583,   591,   148,   165,   124,
     198,   126,   145,   220,   171,   142,   149,   142,   220,   134,
     177,   178,    63,   126,   151,   271,   147,   152,   131,   275,
     187,    72,    72,   148,    77,   142,   142,   283,   148,   246,
     286,   198,   516,   517,   246,   291,    89,   126,    58,    59,
     524,   525,   131,   527,   639,   147,   263,   264,   246,   521,
     103,   263,   264,    76,   147,    78,   273,   274,   147,   147,
     277,   273,   274,   280,   281,   277,    64,    65,   280,   281,
     805,    87,   134,   124,   124,   126,   126,   147,    94,   246,
     668,   147,    98,   134,   134,   134,   102,    87,   286,   345,
     147,   142,   142,   147,    94,   609,    26,   339,    98,    87,
     151,   151,   102,   359,    72,   134,    94,   147,   127,   365,
      98,   367,   145,   142,   370,   134,   283,    64,    65,   286,
      21,    22,   151,   142,   291,   147,   142,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   147,
     145,    72,   142,   134,   134,   659,   402,    67,    68,    69,
      70,    71,    72,   121,   142,    31,   124,   374,   126,   134,
     131,   359,   147,   128,    84,   609,   134,   142,   131,   126,
     145,   283,    58,    59,   142,    49,   151,    72,   126,   291,
     436,   437,   131,   151,   440,    67,    68,    69,    70,    71,
      72,   131,   359,   124,   126,   126,    45,    46,    47,   455,
      49,   126,    84,   134,   402,   134,   147,   131,   464,   465,
     131,   142,   128,   142,   470,   659,   472,   473,   457,    13,
     151,   141,   151,    13,   819,    87,   146,   134,   143,   124,
     469,   126,    94,   489,   476,   402,    98,   476,   476,   134,
     149,   149,   476,   134,   500,   134,   502,   142,    62,   505,
     148,   142,   106,   142,   510,   494,   151,   521,   150,   141,
     151,   134,   151,   149,   146,   521,   464,   465,   134,   436,
     437,   106,   470,   142,   472,   473,   147,     8,   148,    13,
     142,   537,   538,    87,   147,   149,   542,   543,   455,   545,
      94,   489,   148,     8,    98,    74,   149,   464,   465,   147,
     556,   146,    61,   470,   521,   472,   473,   134,   134,   521,
     147,     8,    67,    68,    69,    70,    71,    72,   148,    13,
     116,   549,   489,   521,   436,   437,   568,   583,   147,   568,
     568,   587,   560,   500,   568,   591,   147,   147,   142,   595,
     148,   147,   147,   455,   147,   543,   153,   545,   148,   147,
     189,   579,   126,   192,   521,   169,   111,    13,   556,   131,
      13,   134,   148,   134,   620,   153,    78,   206,   624,   208,
     537,   210,   211,   149,   126,   542,   543,     8,   545,   621,
     148,   145,   148,   639,     8,   583,   628,   128,   500,   556,
     741,   102,   609,    13,   134,   149,   652,   609,   640,   213,
      42,    43,    44,    45,    46,    47,    95,    49,   664,   148,
     666,   149,   668,   149,   147,   145,   583,   149,   140,   148,
      13,   142,   148,   148,   148,   537,   624,   128,   148,   148,
     542,    95,   148,     8,   148,   153,   675,   676,   146,   149,
     679,   148,   659,   147,    13,   145,   149,   659,   262,   148,
     142,   147,   134,   620,   149,   711,   149,   624,   142,   111,
     702,   142,   145,    13,   278,    95,    26,   147,    66,   148,
     668,   149,    13,    13,   134,   142,    13,   149,    13,   718,
     145,   142,    13,   134,   142,   652,   149,   149,   147,    78,
      26,   719,   142,   148,   148,   751,   145,   664,   754,   666,
     147,   668,   345,   816,   732,   489,   505,   676,   620,   557,
     324,   767,   768,   624,   595,   729,   758,   745,   309,   703,
     644,   749,   778,   765,   601,   171,   613,   755,   529,   472,
     713,   773,   760,    -1,   473,   777,   764,   793,    -1,   781,
     652,    -1,   784,   291,   711,   787,    -1,   786,   804,   805,
      -1,    -1,   664,    -1,   666,    -1,    -1,    -1,    -1,    -1,
     788,   803,    -1,   819,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   813,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   809,    -1,    -1,   751,   827,    -1,   754,    -1,   831,
      -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,    -1,   711,
     767,   768,   830,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,   778,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   793,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,   804,    -1,   751,
      35,    -1,   754,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   767,   768,    -1,    -1,    -1,
      -1,   475,    -1,    -1,    -1,    -1,   778,    62,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    42,    43,    -1,    -1,    74,
      -1,   793,    -1,    -1,    -1,   499,    -1,    -1,   436,   437,
      -1,    -1,   804,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   516,   517,    -1,    72,    73,   455,    -1,    -1,
     524,   525,    -1,   527,    81,    -1,    -1,    -1,    85,    -1,
      -1,   116,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   500,   120,    -1,   122,   123,   124,   125,   126,
     155,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,
      -1,   166,    62,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   537,
      -1,    -1,    -1,   188,   542,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,    -1,    -1,    -1,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   620,    -1,    -1,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   278,    -1,    -1,    -1,   177,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,   296,    -1,    -1,   652,    -1,    -1,    -1,   198,    -1,
      -1,   306,    -1,    -1,    -1,    -1,   664,    -1,   666,    -1,
       9,    10,    11,   213,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,   711,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   262,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   378,    49,    -1,    -1,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   751,    -1,    -1,   754,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   767,
     768,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
     778,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   793,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,   450,   804,   452,    -1,    -1,
      -1,    -1,    -1,   458,   153,    -1,    -1,   462,   463,   359,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,   480,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     3,
       4,     5,     6,     7,   499,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   516,   517,    -1,    -1,   520,    -1,    -1,    -1,   524,
     525,    -1,   527,    -1,   529,   530,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
     565,    -1,    -1,    -1,   464,   465,    -1,    81,    -1,    -1,
     470,    85,   472,   473,    -1,   475,    90,    91,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,   489,
      -1,   105,    -1,   107,    -1,    -1,   110,   111,    -1,   499,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,   619,    -1,   516,   517,   623,   133,
     134,   135,    -1,    -1,   524,   525,    -1,   527,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,   151,   152,     9,
      10,    11,    -1,   543,    -1,   545,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   556,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   683,    49,
      -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,   726,    -1,    -1,   624,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    58,    59,    -1,   759,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    74,   668,    84,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,   149,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    25,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
     145,    -1,   147,    -1,   149,   150,   151,   152,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,    -1,    -1,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,     3,     4,     5,     6,     7,    -1,   133,   134,
     135,    12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,    -1,   149,   150,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,     3,     4,     5,     6,
       7,    -1,   133,   134,   135,    12,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,    -1,   149,   150,
     151,   152,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
       3,     4,     5,     6,     7,    -1,   133,   134,   135,    12,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,   150,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,    -1,    -1,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,     3,     4,     5,     6,     7,    -1,
     133,   134,   135,    12,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,    -1,   150,   151,   152,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,
      -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    -1,   147,    -1,
      -1,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,   150,   151,   152,    -1,    -1,    31,
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
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
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
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
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
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,    -1,
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
      -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
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
      12,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
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
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
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
      10,    11,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,   150,   151,   152,    25,    26,    27,    28,    29,
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
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     149,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   149,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   149,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    25,    -1,    27,    28,    29,    30,    31,
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
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    95,    -1,
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
       0,   155,   156,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    80,    81,    84,    85,    86,    88,    90,    91,    92,
      96,    97,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   142,   143,   145,   147,   149,   150,   151,   152,   157,
     158,   163,   166,   167,   173,   174,   176,   178,   181,   183,
     222,   224,   227,   228,   237,   240,   244,   245,   247,   248,
     252,   253,   254,   255,   256,   257,   258,   263,   271,   273,
      72,   124,   134,   224,   244,   244,   147,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   124,   126,   157,   228,   247,   248,   254,   247,   244,
     244,   124,   126,   157,   228,   230,   231,   254,   256,   257,
     263,    80,    80,   142,   208,   147,   149,   244,   134,   149,
     244,   147,   166,   219,   244,   147,   147,   234,   147,   147,
     142,   151,   206,   207,   134,   147,   147,   147,   147,   126,
     145,   157,   157,   149,   222,   244,   248,    87,    94,    98,
     102,   142,   268,   269,    26,   147,   244,   145,   147,   126,
     157,   161,   162,   147,   164,   244,    98,   235,   268,   145,
      98,   268,   126,   147,     8,   149,   134,   134,    31,   175,
     131,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   149,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   147,   131,   128,    61,   145,   151,   257,   175,
     244,   126,   157,   131,   131,   126,   157,   131,   147,   236,
     131,   128,   257,    13,     8,   149,    31,   244,   266,   267,
     149,    13,   149,   134,   192,   143,     8,   149,   248,   148,
     244,   220,   221,   244,   222,   248,   145,   245,   248,     8,
     149,   149,   148,   244,   248,   272,   121,   248,   264,   265,
     157,   160,   145,   149,   147,   149,   149,   248,   135,   244,
     102,   269,    61,   128,    98,   102,   269,   244,   149,   164,
     171,   172,   248,   157,    74,     8,   149,   244,   114,   146,
     165,   166,   173,   174,   148,   150,   244,   152,   134,    31,
     204,   205,   222,   248,   134,   106,   182,   106,   184,   134,
     147,   134,   252,   257,   263,   244,   244,   244,    26,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   230,    31,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   204,   134,   252,   134,   145,
     252,   260,   261,   262,   244,   259,   244,   148,   157,   134,
     134,   157,   252,   204,   252,   260,    42,    43,    73,   124,
     126,   133,   157,   228,   237,   238,   239,   142,   246,   248,
      95,   148,     8,   242,   238,    13,     8,   148,   147,   244,
     148,   148,   149,     8,    74,    74,   244,   207,   149,   148,
       8,   148,   147,     8,   148,   147,   156,   159,   204,   146,
      61,   146,   127,   134,   142,   270,   134,   148,   146,     8,
     148,    74,   134,   162,   148,   147,   146,   246,   148,     8,
      13,   124,   126,   157,   229,   116,   185,   186,   229,   180,
     147,    73,   201,   202,   203,   229,   147,   147,   257,   244,
      26,    63,   248,   148,   147,   147,   244,   147,   251,    61,
     145,   153,   146,   148,   232,   238,   238,   147,   126,   157,
      98,   131,    13,    31,   244,    31,   244,   238,   134,    26,
     166,   191,   244,   220,   244,   248,    31,   188,   248,   146,
      26,   166,   248,   264,   265,    13,   204,   146,   156,   148,
     244,   153,    26,   145,   193,    78,   172,   149,   134,    26,
     166,   196,   148,    31,   222,   248,   238,   126,   157,   186,
     179,     8,   145,   201,   148,     8,    31,   142,   204,   204,
     244,   230,   204,   204,   146,   204,   249,   259,   244,   128,
     233,   238,   241,   243,   157,   134,   238,   246,   246,    95,
      13,   164,   148,   149,    95,   187,   248,   187,   164,   197,
     148,   244,   148,   146,   153,   149,   194,   149,   194,   147,
     164,   149,   246,   157,   145,   229,   209,   148,   140,   225,
     203,   142,    13,   148,   148,   236,   148,   148,   148,   128,
     250,   153,   146,   260,    95,   148,     8,   242,    31,   244,
     238,    99,   149,   220,   188,   148,   148,   198,    64,    65,
     199,   146,   194,    77,    89,   103,   194,   146,   229,   104,
     209,    67,    68,    69,    70,    71,    72,    84,   141,   146,
     210,   213,   214,   215,   216,   218,   177,   147,   145,    31,
     142,    13,   238,   260,   238,   238,   246,   149,   148,    26,
     166,   190,   190,    64,    65,   200,   147,   166,   103,   244,
      26,   149,   195,   149,   146,   142,   149,   146,   134,   142,
     217,   224,   216,     8,   149,   145,    31,   142,   226,   223,
     142,    13,   238,   251,    95,    26,   166,   189,   164,   147,
      26,    66,   244,   149,   195,   164,   148,    13,    13,     8,
     149,   175,   134,   164,   142,     8,   148,   164,    13,   238,
     238,   164,   101,   244,   164,   149,   148,   164,   145,   238,
     238,   142,   134,    13,   146,    31,   142,   146,   238,   100,
     149,   148,   166,   164,    13,   147,   238,   142,   149,    26,
     146,   238,   201,   164,    78,   168,   169,   170,   148,   147,
     170,   211,   229,   145,   149,   212,   142,   164,   148,   146,
     145,   164,   146
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
#line 352 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 356 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 357 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 361 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 362 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameAppend((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 366 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 367 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 368 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 369 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 370 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 371 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 372 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 373 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 374 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    {  (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 375 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 376 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 381 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 382 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 386 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceUse((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 387 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 388 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 389 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsoluteAlias((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 393 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 394 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(2) - (4)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 398 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 399 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 406 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 410 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 411 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 415 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 416 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (7)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (7)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 420 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (10)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (10)].statementList)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 424 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression));
																										  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 426 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (7)].statementList), (yyvsp[(5) - (7)].expression)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); 
																									}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 439 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); 
																										  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList));
 																										}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 442 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 444 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 445 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 446 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 447 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 448 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].variable)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 449 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 450 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 451 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 452 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 453 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 454 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].variable));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 464 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), observers.ExpressionMakeAsAssignmentExpression((yyvsp[(5) - (8)].variable)));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 469 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 470 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 474 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
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
#line 481 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 482 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 486 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 487 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.AssignmentExpressionFromNewFound(
																			   observers.VariableStart((yyvsp[(4) - (8)].semanticValue)), 
																			   (yyvsp[(3) - (8)].qualifiedName),
																			   NULL));
																		  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 505 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 506 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 522 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 523 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 528 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 529 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(9) - (10)].statementList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 536 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 537 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
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
#line 549 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 550 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
											  observers.SetCurrentClassName(NULL);    
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 557 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 558 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 559 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 563 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 565 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 569 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 573 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 575 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 579 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 581 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 585 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 586 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 590 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 591 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 595 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 596 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 600 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 601 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 605 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 606 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 610 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 611 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 615 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 616 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 620 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 621 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 622 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 623 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 627 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 628 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (5)].statementList);
																				  observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression));
																			      observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); 
																				}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 632 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList));
																				}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 643 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 644 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 649 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (6)].statementList));
															  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (6)].expression))); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 656 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 657 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (7)].statementList));
																			  	  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (7)].expression))); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 664 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 665 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 669 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 670 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 674 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 675 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 680 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].semanticValue), false); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 681 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue), true); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 682 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].semanticValue), true);}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 683 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].semanticValue), false); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 684 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (4)].parametersList), (yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), false); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 685 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (5)].parametersList), (yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].semanticValue), true); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 686 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (7)].parametersList), (yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].semanticValue), true); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 687 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (6)].parametersList), (yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), false); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 691 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 692 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 693 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue));}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 697 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 698 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 702 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 703 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 704 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 706 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 707 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].variable)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 711 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 712 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 717 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 718 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 722 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 724 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 725 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 729 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 730 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 734 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 735 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 737 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 738 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol)); 
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 744 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 745 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 749 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 750 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 754 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 755 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 759 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 760 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 773 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 774 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 775 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 776 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 781 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 782 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 786 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 787 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 791 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 792 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 796 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 797 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 801 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 802 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 803 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 804 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 805 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 806 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 807 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 808 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 809 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 810 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 811 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 812 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 813 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 814 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 815 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 816 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 817 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 818 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 819 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 820 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 821 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 822 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 823 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 824 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 825 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 826 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 827 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 828 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 829 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 830 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 831 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 832 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 833 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 834 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 835 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 836 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 837 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 838 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 839 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 840 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 841 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 842 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 843 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 844 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 845 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 846 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 847 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 848 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 849 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 850 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 851 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 854 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 856 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 857 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 858 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 859 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 860 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 861 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 862 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 863 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 864 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 865 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 866 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 867 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression);}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 868 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 869 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 870 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 873 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 874 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(4) - (10)].parametersList), (yyvsp[(6) - (10)].statementList), (yyvsp[(9) - (10)].statementList), (yyvsp[(7) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));  
																	  
																	  // end after we create the closure so that closure gets the correct scope
																	  // anonymous function count
																	  observers.EndAnonymousFunction(); 
																	}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 887 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 888 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 892 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), 
														       observers.VariableStart((yyvsp[(3) - (3)].semanticValue))
		                                                   ); 
		                                            }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 896 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), 
	                                                         observers.VariableStart((yyvsp[(4) - (4)].semanticValue), true)
		                                                   ); 
		                                            }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 900 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 901 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true)); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 906 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 909 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 911 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber()); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 913 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(3) - (6)].semanticValue), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 915 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 917 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 919 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 921 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 925 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 926 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 927 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 928 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 932 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 933 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 934 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 938 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 939 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 944 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 945 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 949 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 950 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 958 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 959 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 960 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 964 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 965 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 966 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 970 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 971 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 975 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 976 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 977 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 978 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 979 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 980 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 981 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 982 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 983 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 984 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 985 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 986 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 990 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 991 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 992 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 993 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 994 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 995 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 996 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1001 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1005 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1006 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1007 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1008 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1009 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1011 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1012 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1016 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1021 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1022 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1026 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1027 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1028 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1029 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1033 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1053 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1054 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1058 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1059 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1064 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1068 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(2) - (3)].statementList), true); }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1069 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1074 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1078 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1079 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1083 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1088 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1093 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1098 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1099 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1104 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1105 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1109 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1110 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1114 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1115 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1119 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1120 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1121 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1125 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1126 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1135 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1136 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1140 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1141 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1142 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1146 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1147 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1151 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1155 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1159 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1160 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1161 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1165 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1169 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1170 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1174 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1175 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1176 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1177 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1181 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1182 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1183 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1184 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1185 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1186 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1190 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1191 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1192 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1196 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1197 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1198 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1199 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1200 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1201 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1202 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1206 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].variable)); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1207 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].variable)); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1211 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1212 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;



/* Line 1806 of yacc.c  */
#line 6354 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.cpp"
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
#line 1215 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"


