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
#define YYLAST   7327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  402
/* YYNRULES -- Number of states.  */
#define YYNSTATES  832

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
     906,   909,   919,   921,   922,   927,   931,   936,   938,   941,
     946,   953,   959,   966,   973,   980,   987,   992,   994,   996,
    1000,  1003,  1005,  1009,  1012,  1014,  1016,  1021,  1023,  1026,
    1027,  1030,  1031,  1034,  1038,  1039,  1041,  1043,  1044,  1048,
    1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1072,  1075,  1077,  1079,  1083,  1086,  1089,  1092,  1097,  1099,
    1103,  1105,  1107,  1109,  1113,  1116,  1118,  1122,  1126,  1127,
    1130,  1131,  1133,  1139,  1143,  1147,  1149,  1151,  1153,  1155,
    1157,  1159,  1165,  1167,  1170,  1171,  1175,  1179,  1180,  1182,
    1185,  1189,  1193,  1195,  1197,  1199,  1201,  1204,  1206,  1211,
    1216,  1218,  1220,  1225,  1226,  1228,  1230,  1232,  1237,  1242,
    1244,  1246,  1250,  1252,  1255,  1259,  1261,  1263,  1268,  1269,
    1270,  1273,  1279,  1283,  1287,  1289,  1296,  1301,  1306,  1309,
    1312,  1315,  1317,  1320,  1322,  1327,  1331,  1335,  1342,  1346,
    1348,  1350,  1352,  1357,  1362,  1365,  1368,  1373,  1376,  1379,
    1381,  1385,  1389
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
     134,    -1,   163,     8,   134,    13,   237,    -1,    84,   134,
      13,   237,    -1,   164,   165,    -1,    -1,   166,    -1,   173,
      -1,   174,    -1,   114,   147,   148,   149,    -1,   167,    -1,
     134,    26,    -1,   145,   164,   146,    -1,   115,   147,   243,
     148,   166,   197,   199,    -1,   115,   147,   243,   148,    26,
     164,   198,   200,    66,   149,    -1,   143,   147,   243,   148,
     196,    -1,    92,   166,   143,   147,   243,   148,   149,    -1,
     108,   147,   220,   149,   220,   149,   220,   148,   189,    -1,
     136,   147,   243,   148,   193,    -1,    76,   149,    -1,    76,
     243,   149,    -1,    86,   149,    -1,    86,   243,   149,    -1,
     132,   149,    -1,   132,   222,   149,    -1,   132,   247,   149,
      -1,   112,   206,   149,    -1,    72,   208,   149,    -1,    96,
     219,   149,    -1,   117,    -1,   243,   149,    -1,   139,   147,
     171,   148,   149,    -1,   109,   147,   247,    74,   188,   187,
     148,   190,    -1,   109,   147,   222,    74,   247,   187,   148,
     190,    -1,    88,   147,   192,   148,   191,    -1,   149,    -1,
     138,   145,   164,   146,    78,   147,   228,   142,   148,   145,
     164,   146,   168,    -1,   137,   243,   149,    -1,   113,   134,
     149,    -1,   169,    -1,    -1,   170,    -1,   169,   170,    -1,
      78,   147,   228,   142,   148,   145,   164,   146,    -1,   172,
      -1,   171,     8,   172,    -1,   247,    -1,   176,    -1,   178,
      -1,    -1,    31,    -1,    -1,   223,   175,   134,   147,   201,
     148,   177,   145,   164,   146,    -1,    -1,   181,   134,   182,
     185,   179,   145,   209,   146,    -1,    -1,   183,   134,   184,
     180,   145,   209,   146,    -1,    80,    -1,    71,    80,    -1,
      70,    80,    -1,    -1,   106,   228,    -1,   118,    -1,    -1,
     106,   186,    -1,    -1,   116,   186,    -1,   228,    -1,   186,
       8,   228,    -1,    -1,    95,   188,    -1,   247,    -1,    31,
     247,    -1,   166,    -1,    26,   164,   100,   149,    -1,   166,
      -1,    26,   164,   101,   149,    -1,   166,    -1,    26,   164,
      99,   149,    -1,   134,    13,   237,    -1,   192,     8,   134,
      13,   237,    -1,   145,   194,   146,    -1,   145,   149,   194,
     146,    -1,    26,   194,   103,   149,    -1,    26,   149,   194,
     103,   149,    -1,    -1,   194,    77,   243,   195,   164,    -1,
     194,    89,   195,   164,    -1,    26,    -1,   149,    -1,   166,
      -1,    26,   164,   104,   149,    -1,    -1,   197,    64,   147,
     243,   148,   166,    -1,    -1,   198,    64,   147,   243,   148,
      26,   164,    -1,    -1,    65,   166,    -1,    -1,    65,    26,
     164,    -1,   202,    -1,    -1,   203,   142,    -1,   203,    31,
     142,    -1,   203,    31,   142,    13,   237,    -1,   203,   142,
      13,   237,    -1,   202,     8,   203,   142,    -1,   202,     8,
     203,    31,   142,    -1,   202,     8,   203,    31,   142,    13,
     237,    -1,   202,     8,   203,   142,    13,   237,    -1,    -1,
     228,    -1,    73,    -1,   205,    -1,    -1,   222,    -1,   247,
      -1,    31,   245,    -1,   205,     8,   222,    -1,   205,     8,
     247,    -1,   205,     8,    31,   245,    -1,   206,     8,   207,
      -1,   207,    -1,   142,    -1,   151,   244,    -1,   151,   145,
     243,   146,    -1,   208,     8,   142,    -1,   208,     8,   142,
      13,   237,    -1,   142,    -1,   142,    13,   237,    -1,   209,
     210,    -1,    -1,   213,   217,   149,    -1,   218,   149,    -1,
      -1,   214,   223,   175,   134,   147,   201,   148,   211,   212,
      -1,   149,    -1,   145,   164,   146,    -1,   215,    -1,   141,
      -1,    -1,   215,    -1,   216,    -1,   215,   216,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   217,     8,   142,    -1,   217,     8,   142,    13,   237,
      -1,   142,    -1,   142,    13,   237,    -1,   218,     8,   134,
      13,   237,    -1,    84,   134,    13,   237,    -1,   219,     8,
     243,    -1,   243,    -1,    -1,   221,    -1,   221,     8,   243,
      -1,   243,    -1,   121,   147,   263,   148,    13,   243,    -1,
     247,    13,   243,    -1,   247,    13,    31,   247,    -1,   247,
      13,    31,    63,   229,   235,    -1,    63,   229,   235,    -1,
      62,   243,    -1,   247,    24,   243,    -1,   247,    23,   243,
      -1,   247,    22,   243,    -1,   247,    21,   243,    -1,   247,
      20,   243,    -1,   247,    19,   243,    -1,   247,    18,   243,
      -1,   247,    17,   243,    -1,   247,    16,   243,    -1,   247,
      15,   243,    -1,   247,    14,   243,    -1,   246,    59,    -1,
      59,   246,    -1,   246,    58,    -1,    58,   246,    -1,   243,
      27,   243,    -1,   243,    28,   243,    -1,   243,     9,   243,
      -1,   243,    11,   243,    -1,   243,    10,   243,    -1,   243,
      29,   243,    -1,   243,    31,   243,    -1,   243,    30,   243,
      -1,   243,    44,   243,    -1,   243,    42,   243,    -1,   243,
      43,   243,    -1,   243,    45,   243,    -1,   243,    46,   243,
      -1,   243,    47,   243,    -1,   243,    41,   243,    -1,   243,
      40,   243,    -1,    42,   243,    -1,    43,   243,    -1,    48,
     243,    -1,    50,   243,    -1,   243,    33,   243,    -1,   243,
      32,   243,    -1,   243,    35,   243,    -1,   243,    34,   243,
      -1,   243,    36,   243,    -1,   243,    39,   243,    -1,   243,
      37,   243,    -1,   243,    38,   243,    -1,   243,    49,   229,
      -1,   147,   243,   148,    -1,   243,    25,   243,    26,   243,
      -1,   243,    25,    26,   243,    -1,   270,    -1,    57,   243,
      -1,    56,   243,    -1,    55,   243,    -1,    54,   243,    -1,
      53,   243,    -1,    52,   243,    -1,    51,   243,    -1,   105,
     233,    -1,    60,   243,    -1,   239,    -1,    73,   147,   265,
     148,    -1,   150,   234,   150,    -1,    12,   243,    -1,   223,
     175,   147,   201,   148,   224,   145,   164,   146,    -1,   111,
      -1,    -1,   140,   147,   225,   148,    -1,   225,     8,   142,
      -1,   225,     8,    31,   142,    -1,   142,    -1,    31,   142,
      -1,   157,   147,   204,   148,    -1,   124,   126,   157,   147,
     204,   148,    -1,   126,   157,   147,   204,   148,    -1,   227,
     131,   134,   147,   204,   148,    -1,   227,   131,   251,   147,
     204,   148,    -1,   253,   131,   134,   147,   204,   148,    -1,
     253,   131,   251,   147,   204,   148,    -1,   251,   147,   204,
     148,    -1,    72,    -1,   157,    -1,   124,   126,   157,    -1,
     126,   157,    -1,   157,    -1,   124,   126,   157,    -1,   126,
     157,    -1,   227,    -1,   230,    -1,   255,   128,   259,   231,
      -1,   255,    -1,   231,   232,    -1,    -1,   128,   259,    -1,
      -1,   147,   148,    -1,   147,   243,   148,    -1,    -1,    98,
      -1,   267,    -1,    -1,   147,   204,   148,    -1,   122,    -1,
      91,    -1,    85,    -1,   120,    -1,   107,    -1,    90,    -1,
      81,    -1,   123,    -1,   110,    -1,   125,    -1,   133,    98,
     102,    -1,   133,   102,    -1,   236,    -1,   157,    -1,   124,
     126,   157,    -1,   126,   157,    -1,    42,   237,    -1,    43,
     237,    -1,    73,   147,   240,   148,    -1,   238,    -1,   227,
     131,   134,    -1,   135,    -1,   272,    -1,   157,    -1,   124,
     126,   157,    -1,   126,   157,    -1,   236,    -1,   152,   267,
     152,    -1,   133,   267,   102,    -1,    -1,   242,   241,    -1,
      -1,     8,    -1,   242,     8,   237,    95,   237,    -1,   242,
       8,   237,    -1,   237,    95,   237,    -1,   237,    -1,   244,
      -1,   222,    -1,   247,    -1,   247,    -1,   247,    -1,   254,
     128,   259,   250,   248,    -1,   254,    -1,   248,   249,    -1,
      -1,   128,   259,   250,    -1,   147,   204,   148,    -1,    -1,
     256,    -1,   262,   256,    -1,   227,   131,   251,    -1,   253,
     131,   251,    -1,   256,    -1,   255,    -1,   226,    -1,   256,
      -1,   262,   256,    -1,   252,    -1,   256,    61,   258,   153,
      -1,   256,   145,   243,   146,    -1,   257,    -1,   142,    -1,
     151,   145,   243,   146,    -1,    -1,   243,    -1,   260,    -1,
     251,    -1,   260,    61,   258,   153,    -1,   260,   145,   243,
     146,    -1,   261,    -1,   134,    -1,   145,   243,   146,    -1,
     151,    -1,   262,   151,    -1,   263,     8,   264,    -1,   264,
      -1,   247,    -1,   121,   147,   263,   148,    -1,    -1,    -1,
     266,   241,    -1,   266,     8,   243,    95,   243,    -1,   266,
       8,   243,    -1,   243,    95,   243,    -1,   243,    -1,   266,
       8,   243,    95,    31,   245,    -1,   266,     8,    31,   245,
      -1,   243,    95,    31,   245,    -1,    31,   245,    -1,   267,
     268,    -1,   267,    98,    -1,   268,    -1,    98,   268,    -1,
     142,    -1,   142,    61,   269,   153,    -1,   142,   128,   134,
      -1,    94,   243,   146,    -1,    94,   135,    61,   243,   153,
     146,    -1,    87,   247,   146,    -1,   134,    -1,   127,    -1,
     142,    -1,   119,   147,   271,   148,    -1,    97,   147,   247,
     148,    -1,     7,   243,    -1,     6,   243,    -1,     5,   147,
     243,   148,    -1,     4,   243,    -1,     3,   243,    -1,   247,
      -1,   271,     8,   247,    -1,   227,   131,   134,    -1,   253,
     131,   134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   352,   352,   356,   357,   361,   362,   366,   367,   368,
     369,   370,   371,   371,   373,   373,   375,   376,   380,   382,
     386,   387,   388,   389,   393,   394,   398,   399,   403,   404,
     405,   406,   410,   411,   415,   416,   420,   424,   426,   427,
     439,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   461,   467,   468,   469,   479,
     480,   484,   485,   489,   490,   494,   503,   504,   508,   512,
     516,   520,   521,   526,   525,   535,   534,   548,   547,   556,
     557,   558,   562,   563,   568,   572,   573,   578,   579,   584,
     585,   589,   590,   594,   595,   599,   600,   604,   605,   609,
     610,   614,   615,   619,   620,   621,   622,   626,   627,   631,
     637,   638,   642,   643,   647,   648,   655,   656,   663,   664,
     668,   669,   673,   674,   679,   680,   681,   682,   683,   684,
     685,   686,   690,   691,   692,   696,   697,   701,   702,   703,
     704,   705,   706,   710,   711,   715,   716,   717,   721,   722,
     723,   724,   728,   729,   733,   734,   736,   735,   743,   744,
     748,   749,   753,   754,   758,   759,   763,   764,   765,   766,
     767,   768,   772,   773,   774,   775,   779,   781,   785,   786,
     790,   791,   795,   796,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   854,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   876,   880,   881,   885,   889,   893,   894,   898,
     900,   903,   905,   907,   909,   911,   913,   918,   919,   920,
     921,   925,   926,   927,   931,   932,   936,   938,   942,   943,
     947,   951,   952,   953,   957,   958,   959,   963,   964,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   983,   984,   985,   986,   987,   988,   989,   990,   994,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1009,  1010,
    1014,  1015,  1019,  1020,  1021,  1022,  1026,  1027,  1031,  1035,
    1039,  1043,  1047,  1051,  1052,  1056,  1061,  1062,  1066,  1067,
    1071,  1072,  1076,  1080,  1081,  1085,  1086,  1087,  1091,  1092,
    1093,  1097,  1098,  1102,  1103,  1107,  1108,  1112,  1113,  1114,
    1118,  1119,  1123,  1124,  1128,  1129,  1133,  1134,  1135,  1139,
    1140,  1144,  1148,  1152,  1153,  1154,  1158,  1162,  1163,  1167,
    1168,  1169,  1170,  1174,  1175,  1176,  1177,  1178,  1179,  1183,
    1184,  1185,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1199,
    1200,  1204,  1205
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
     222,   222,   223,   224,   224,   225,   225,   225,   225,   226,
     226,   226,   226,   226,   226,   226,   226,   227,   227,   227,
     227,   228,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   233,   233,   233,   234,   234,   234,   235,   235,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   237,   237,   237,   237,   237,   237,   237,   237,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   240,   240,
     241,   241,   242,   242,   242,   242,   243,   243,   244,   245,
     246,   247,   247,   248,   248,   249,   250,   250,   251,   251,
     252,   252,   253,   254,   254,   255,   255,   255,   256,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   260,
     261,   261,   262,   262,   263,   263,   264,   264,   264,   265,
     265,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     267,   267,   267,   268,   268,   268,   268,   268,   268,   269,
     269,   269,   270,   270,   270,   270,   270,   270,   270,   271,
     271,   272,   272
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
       2,     9,     1,     0,     4,     3,     4,     1,     2,     4,
       6,     5,     6,     6,     6,     6,     4,     1,     1,     3,
       2,     1,     3,     2,     1,     1,     4,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     2,     2,     2,     4,     1,     3,
       1,     1,     1,     3,     2,     1,     3,     3,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     5,     1,     2,     0,     3,     3,     0,     1,     2,
       3,     3,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     1,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     4,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     4,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,    79,   295,     0,   291,     0,     0,   294,   290,     0,
       0,     0,   281,   293,     0,     0,   297,   252,     0,     0,
       0,     0,    51,    84,     0,   292,     0,   289,   296,     0,
     298,     0,     0,     0,     5,   310,     0,     0,     0,     0,
       0,   351,     0,    27,     0,    57,   284,   362,     0,   312,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     327,    71,   344,     0,   315,   247,     0,   326,     0,   328,
       0,   347,     0,   332,   343,   345,   350,     0,   237,   311,
     267,     0,     5,    71,   398,   397,     0,   395,   394,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   268,     0,   204,   330,     0,   202,   246,
     189,     0,     0,   268,   274,   287,   275,     0,   277,   345,
       0,    81,    80,   150,     0,   369,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   368,     0,
      14,     0,   314,    45,   327,     0,   328,     0,     0,     0,
     300,   383,     0,   381,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   285,     0,   286,     0,
       0,     0,     0,   136,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,     0,   353,     0,   363,   346,     0,
       0,     0,   270,     0,     0,     0,   270,     0,   136,   188,
       0,     0,   346,     0,     0,    49,     0,   374,     0,   320,
      42,     0,    44,     0,     0,     0,     0,    50,     0,   282,
       0,     0,   181,   183,   327,   328,     0,   146,   328,     0,
      48,    60,     0,     0,   399,     0,     0,   366,     0,   365,
     313,     4,    12,    11,   136,    46,    47,     0,   310,     0,
     299,   382,     0,     0,   380,   317,   379,     0,    59,     0,
       0,    66,    68,    22,     0,     0,    16,     0,     0,    34,
      26,    28,    29,    30,   234,   249,     0,   316,     6,     0,
       0,   135,   327,   328,     0,     0,    87,     0,    77,     0,
     132,   401,   340,   338,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,   402,   341,   360,     0,
     356,   337,   355,   359,   354,     0,     0,   396,   269,     0,
       0,   269,   340,     0,   341,   279,     0,     0,     0,     0,
       0,     0,   302,     0,   301,   151,   308,   148,   378,   329,
       0,   248,   321,   370,    25,     0,     0,     0,     0,   178,
     393,   283,   180,     0,     0,     0,     0,   143,    10,     0,
       0,   392,   368,   368,     0,   136,     0,     4,     0,   388,
       0,   386,   390,   389,   391,     0,   385,     0,     0,     0,
       0,     0,    21,    18,     0,     0,   352,   139,   259,     0,
       0,     0,     0,   271,    83,     0,    75,    86,    89,     0,
     132,   134,     0,   122,     0,   133,   136,   136,   339,   236,
       0,     0,   186,   266,   136,   136,     0,   136,   334,   353,
       0,   348,   349,   288,   276,   305,   306,   318,     0,   304,
       0,     0,     0,     0,   373,     0,   372,   101,     0,    27,
      99,    56,     0,     0,   182,    91,     0,    91,    93,   147,
      27,   114,   400,     0,   364,     0,     0,    15,     0,   261,
       0,   384,   107,   107,    40,     0,    67,    53,    23,    27,
     112,    37,     0,     0,   327,   328,    24,     0,   273,    88,
       0,     0,   153,     0,   253,   132,     0,   124,     0,     0,
     235,   287,     0,     0,   361,     0,   331,     0,     0,     0,
     278,   325,     0,   320,   303,   309,   149,   377,   376,     0,
       0,     0,     0,   180,     0,     0,    94,     0,   116,   118,
     367,   184,   260,    13,     0,   107,     0,   107,     0,     0,
       0,    31,   142,   272,   153,    90,   162,    73,     0,     0,
       0,   125,     0,   262,   263,   187,   264,   265,   336,     0,
     333,   357,   358,   280,     0,   307,   321,   319,     0,   371,
     102,     0,    38,     0,    92,     0,     0,   120,     0,     0,
      35,   387,     0,     0,     0,     0,     0,   103,     0,     0,
     162,   166,   167,   168,   171,   170,   169,     0,   161,    78,
     152,     0,     0,   160,   164,     0,     0,     0,    27,     0,
     128,     0,   127,   337,   324,   323,   375,   100,     0,    27,
      97,    55,    54,     0,     0,     0,     0,   119,     0,     0,
     110,   111,    27,   105,   104,     0,   113,    76,     0,   174,
       0,    71,   165,     0,   155,    27,     0,   257,     0,     0,
     129,     0,   126,   335,     0,    27,    95,    39,     0,     0,
      27,     0,     0,   106,    27,   109,     0,     0,     0,     0,
     154,     0,     0,     0,   258,     0,   254,   251,     0,   131,
     322,     0,     0,     0,   121,    36,     0,   108,    27,   177,
     175,   172,     0,     0,    74,     0,   255,   130,     0,    98,
       0,   115,     0,     0,   132,   176,   256,    96,    27,    62,
     173,     0,   117,     0,    58,    61,    63,   156,     0,    64,
       0,     0,    27,   158,   157,     0,     0,     0,   159,    27,
       0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   477,   321,   201,   202,    81,
     204,   350,   351,    83,   814,   815,   816,   340,   341,   352,
     353,   219,    86,   706,    87,   590,   509,    88,   366,    89,
     368,   506,   507,   625,   557,   757,   721,   551,   294,   574,
     636,   732,   581,   629,   677,   680,   725,   512,   513,   514,
     360,   361,   172,   173,   154,   646,   700,   820,   824,   701,
     702,   703,   704,   740,   705,   163,   301,   302,    90,   113,
     649,   748,    92,    93,   515,   145,   146,   534,   610,   167,
     207,   279,    94,   445,   446,    95,   612,   453,   613,    96,
      97,   448,    98,    99,   606,   660,   528,   100,   101,   102,
     103,   104,   105,   106,   425,   421,   422,   423,   107,   318,
     319,   288,   289,   192,   193,   485,   108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -511
static const yytype_int16 yypact[] =
{
    -511,    98,  1817,  -511,  6040,  6040,  -109,  6040,  6040,  6040,
    6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,
    6040,   284,   284,  6040,  6040,   341,    55,    58,    -1,   -19,
    4667,  -511,  -511,    23,  -511,  4791,    60,  -511,  -511,  4517,
    6040,    91,   103,  -511,   124,   126,  -511,  -511,   -27,   131,
     157,   203,  -511,  -511,   211,  -511,   218,  -511,  -511,   297,
    -511,   180,  4915,   265,   125,  -511,   223,  6040,    24,   240,
     -61,  -511,   246,  -511,  6040,  -511,   193,   197,   247,   127,
    -511,    10,  -511,  -511,  -511,  -511,  -511,  -511,   278,   288,
    -511,   368,  -511,   294,  -511,  -511,  6374,  -511,   167,   989,
     280,  -511,   298,   306,  -511,    69,  -511,    53,  -511,  -511,
    -511,   311,  -511,   368,  1657,  1657,  6040,  1657,  1657,  1803,
    -511,  -511,   389,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,   314,   180,   -89,   310,  -511,  -511,   319,  -511,  -511,
    -511,   326,   180,   329,   327,   312,  -511,   330,   317,    68,
      53,  -511,  -511,   456,    16,  1240,  -511,  6419,   457,  -511,
    6460,   342,   344,    17,  1657,   284,  5039,  -511,  6040,  6040,
    -511,   182,    18,  -511,   346,   345,  6040,   284,   264,   180,
    -511,   -26,   150,  -511,   348,  1657,   358,   284,  6164,   -28,
    -511,   -39,   366,  -511,  -511,  6040,  6501,  -511,   284,   180,
     -32,    19,  -511,  6040,  1967,  1058,    66,   350,   349,  6040,
      66,   130,   365,  5163,   376,  -511,   396,   405,  -511,   -85,
       3,  6040,  6040,  6040,  5296,  6040,  6040,  6040,  6040,  6040,
    6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,
    6040,  6040,  6040,  6040,  6040,  6040,   341,  -511,  -511,  -511,
    5420,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,  6040,
    6040,  6040,  5163,    67,   367,  6040,  6040,   197,    11,   369,
    6542,   180,    85,   188,   204,   180,   329,   135,  5163,  -511,
     135,   367,   -14,   777,   371,  -511,   284,  7119,   372,   509,
    -511,   777,  -511,   506,    22,   378,  6040,  -511,   380,  -511,
    6583,   381,   529,  1657,   464,   924,  6040,  -511,  -511,   -27,
    -511,  -511,   390,  6624,  -511,    31,   402,  -511,    33,  -511,
     174,  -511,  -511,  -511,  5163,  -511,  -511,   407,   490,  6872,
    -511,  -511,   226,   420,  -511,  -511,  -511,  6666,  -511,  2117,
      38,  -511,  -511,    13,   421,   -61,  -511,  6707,   409,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  6914,  -511,  -511,   284,
     410,   551,    44,    62,   547,   117,   445,   117,  -511,   415,
     118,   423,   425,   -14,    53,  7241,  7278,  1803,  6040,  7201,
    2102,  1464,  2250,  2399,  2548,  2698,  2698,  2698,  2698,  1357,
    1401,  1419,  1419,   556,   556,   497,   497,   497,   389,   389,
     389,  -511,   177,  1803,  1803,  1803,  1803,  1803,  1803,  1803,
    1803,  1803,  1803,  1803,  1803,   426,   429,   434,  -511,  6040,
    -511,   437,    35,  -511,  1657,   432,  6955,  -511,    86,   423,
     429,   329,  -511,   440,  -511,  -511,   777,   777,   442,   447,
     180,    20,   -38,   460,  -511,  -511,  -511,   580,  -511,  -511,
    5544,  -511,  5668,  -511,  -511,   777,   462,  3767,  6040,  1657,
    -511,  -511,  6040,  6040,   284,    64,  6996,  -511,  -511,  3917,
     284,  -511,   264,   264,   593,  5163,  1511,  -511,   459,  -511,
    6040,  -511,  -511,  -511,  -511,   458,  -511,    -5,   531,   284,
     463,   479,  -511,  -511,  4067,   466,  -511,  -511,  -511,  5792,
     777,   491,   180,   329,  -511,   117,  -511,   610,  -511,   477,
     118,  -511,   482,   617,    -8,  -511,  5163,  5163,   -14,  1953,
    6040,   341,  -511,  -511,  5163,  5163,  7037,  5163,  -511,  6040,
    6040,  -511,  -511,  -511,   499,  -511,  -511,   777,   180,   168,
     530,   501,   777,   284,  1657,   284,  7160,  -511,   620,  -511,
    -511,  -511,  6748,   488,  1657,   544,   284,   544,  -511,  -511,
    -511,  -511,  -511,    45,  -511,  6040,   492,  -511,  1667,  -511,
    6292,  -511,   494,   495,  -511,   498,  -511,  -511,  -511,  -511,
    -511,  -511,   500,   284,    48,    89,  -511,   180,   329,   610,
     496,   117,  -511,   503,   514,   189,   504,   642,   510,   511,
    1953,   312,   512,   515,  -511,   516,   539,   518,  7078,   367,
    -511,   573,   521,   664,   176,  -511,  -511,  -511,  -511,  5916,
     777,  2267,   524,  6040,    64,   534,  -511,   535,  3617,    27,
    -511,  1803,  -511,  -511,   540,  -511,   142,  -511,   -45,   117,
    2417,  -511,  -511,   329,  -511,  -511,   609,  -511,   542,   546,
       0,   674,   777,  -511,  -511,  -511,  -511,  -511,  -511,   367,
    -511,  -511,  -511,  -511,   777,  -511,   777,  -511,   284,  1657,
    -511,   543,  -511,   548,  -511,  4217,  4217,   261,   550,  4517,
    -511,  -511,   145,  6040,    -6,   545,    75,  -511,   557,   552,
     635,  -511,  -511,  -511,  -511,  -511,  -511,   574,  -511,  -511,
    -511,   567,   600,   333,  -511,    26,   568,     2,  -511,   570,
     701,   777,  -511,   437,  -511,   621,  -511,  -511,  4367,  -511,
    -511,  -511,  -511,   571,   689,   651,  6040,  -511,   572,  6333,
    -511,  -511,  -511,  -511,  -511,   575,  -511,  -511,   707,   709,
      28,   368,  -511,   591,  -511,  -511,   584,  -511,    49,  2567,
     715,   777,  -511,  -511,   777,  -511,  -511,  -511,  2717,  6040,
    -511,   583,  6790,  -511,  -511,  3617,   588,   777,   777,   592,
    -511,   602,   724,  2867,  -511,     4,  -511,  -511,   777,  -511,
    -511,  3017,   590,  6831,  3617,  -511,  4517,  3617,  -511,  -511,
    -511,   727,   594,   777,  -511,   601,  -511,  -511,   596,  -511,
     720,  -511,  3167,   777,   118,  -511,  -511,  -511,  -511,   671,
    -511,   605,  3617,   607,  -511,   671,  -511,  -511,   117,  -511,
     195,   615,  -511,  -511,  -511,   611,  3317,   613,  -511,  -511,
    3467,  -511
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -511,  -511,  -304,   -16,  -511,  -511,  -511,  -511,   416,  -511,
     -98,  -511,     9,  -511,  -511,  -511,   -55,  -511,   275,    12,
      14,  -112,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,   260,   209,   143,  -511,    92,  -511,  -511,  -511,
    -510,    40,  -511,  -511,  -511,  -511,  -511,  -506,  -511,   175,
    -207,  -511,  -511,   465,  -511,   129,  -511,  -511,  -511,  -511,
    -511,  -511,    72,  -511,  -511,  -511,  -449,  -511,    70,    -2,
    -511,  -511,  -511,   370,  -355,  -231,  -511,  -511,  -511,  -511,
    -511,   183,    78,   128,  -511,  -511,  -511,   165,  -511,   957,
     612,  -356,   362,     7,  -511,  -511,    73,  -213,  -511,   868,
    -511,   -23,   -17,  -511,   262,  -262,  -511,  -511,    15,   318,
     320,  -511,  -511,   286,   222,  -511,  -511,  -511,  -511
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -343
static const yytype_int16 yytable[] =
{
      91,   269,   148,   497,   593,   133,   133,   372,   149,   143,
     504,    82,   508,   553,    84,   401,    85,   476,   214,   435,
     730,   572,   332,   596,   284,   296,   309,   345,   136,   136,
     456,   709,   683,   746,   743,   795,   769,   212,   116,   470,
     150,   473,   344,   181,   684,   182,   489,   265,   162,   369,
     417,   420,  -137,   473,   200,   415,  -140,   775,   213,   187,
     372,   417,   370,   638,   432,   199,   188,   434,   420,   186,
    -138,   433,   265,   112,   330,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   491,   212,   333,
     268,   678,   679,  -268,   212,   556,   529,  -141,     3,   339,
     212,   687,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   191,   170,   272,   478,   540,   322,
    -330,  -330,   190,   323,   171,   682,   276,   686,   155,   265,
     265,   266,   184,   282,   597,   151,   110,   371,   152,   212,
     573,   153,   710,   731,   747,    71,   796,  -330,  -330,   133,
     508,   194,   683,   187,    77,   133,   266,   158,  -339,   215,
     188,   133,   133,   320,   684,   285,   297,   310,   346,   197,
     457,   133,   298,   568,   673,   744,   305,   770,   308,   471,
     530,   474,   133,   343,   314,   317,   490,   617,   131,   618,
     132,   511,  -137,   630,   327,    71,  -140,   776,   112,  -342,
    -342,   416,    91,   373,   267,   342,    71,   161,   191,    71,
    -138,   212,   212,   266,   266,    77,  -338,   187,    77,   683,
     363,   734,   683,   148,   188,   248,   249,   642,   334,   149,
     143,   684,   324,   475,   684,   374,   645,  -141,   165,   304,
     521,   501,   501,   502,   502,   685,   373,   373,   728,   110,
     166,   112,   112,   212,   110,   428,   373,   373,  -268,   431,
     373,   150,   511,   373,   373,   174,  -123,   442,   566,   363,
     133,   168,   191,   169,   213,   442,   212,    71,   374,   374,
     187,  -270,   357,   362,   688,   363,    77,   188,   374,   374,
     601,   206,   374,   449,   212,   374,   374,   324,   811,  -270,
     212,   131,   212,   132,   175,  -269,   131,  -269,   132,   598,
     599,   112,   716,   501,   112,   502,   112,   602,   603,    71,
     605,   475,   429,   112,    71,   723,   724,   306,    77,   200,
      71,   363,   362,    77,   187,   191,   110,    91,   430,    77,
     822,   188,   209,   133,   823,   210,    71,   663,   362,   503,
     176,   503,   187,   482,   503,    77,   110,   518,   177,   188,
     483,   444,   208,   189,   211,   178,   449,   190,   484,   444,
     195,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   135,   138,   316,   133,   198,   131,   191,
     132,   134,   134,   203,   362,   144,   420,   713,   112,   218,
     691,   692,   693,   694,   695,   696,    71,   191,   131,   522,
     132,   331,   216,   110,   336,    77,  -330,  -330,   112,   454,
     442,   442,   217,   179,   539,   220,    71,   262,   331,   263,
     336,   112,   331,   336,   264,    77,   187,   179,   246,   442,
     271,   273,   180,   188,  -163,   281,   420,   334,   133,   133,
     274,   621,   275,   187,   133,   212,   133,   133,   277,   278,
     188,   280,   628,   821,   334,   141,   550,   142,   335,   283,
     291,   555,   558,   133,    91,   112,   293,   562,   561,   317,
     317,   640,   363,    71,   442,    82,   588,   295,    84,   503,
      85,   191,    77,   312,   503,   311,   342,   325,   148,   358,
     355,   418,   365,   580,   149,   143,   585,   326,   191,    71,
     364,   367,   419,   447,   444,   444,   370,   452,    77,   455,
     451,   442,   614,   363,   363,   458,   442,   133,   460,   133,
     462,   363,   363,   444,   363,   134,   150,   463,   464,   468,
     133,   134,   243,   244,   245,   362,   246,   134,   134,   472,
     449,   480,   449,   479,   486,   492,   495,   134,   498,   499,
     500,   505,   510,   626,   535,   536,    91,   133,   134,   584,
     516,   643,   517,   538,   523,   503,   524,    82,   444,   503,
      84,   525,    85,   547,   527,   531,   362,   362,   533,   537,
     449,   541,   373,   542,   362,   362,   548,   362,   240,   241,
     242,   243,   244,   245,   442,   246,   565,   569,   133,   575,
     749,   571,   577,   578,   582,   444,   144,   587,   591,    91,
     444,   758,   592,   503,   374,   595,    91,   609,   586,   771,
     594,   558,   330,   620,   765,   615,   442,   623,    91,   624,
     632,   644,   373,   635,   637,   639,   651,   773,   442,   641,
     442,   647,   133,   443,   648,   652,   134,   781,   653,   654,
     656,   443,   784,   657,   658,   611,   787,   659,   664,   665,
     616,   661,   666,   672,   374,   449,   691,   692,   693,   694,
     695,   696,   675,   676,   720,   720,   681,   711,   727,   707,
     802,   708,   717,   697,   733,   442,   718,   726,   444,   735,
     741,   736,   691,   692,   693,   694,   695,   696,   738,   739,
     812,    47,   750,   745,   751,   760,   754,   761,   759,   697,
     767,   763,   768,   766,   826,   772,   774,   756,   778,   134,
     444,   830,   785,   788,   791,   442,   792,   793,   442,   799,
     803,   804,   444,   806,   444,   807,   808,    91,   670,   813,
     698,   442,   442,   817,   818,   699,    91,   825,   829,   827,
     819,   493,   442,    91,   576,   589,   627,   674,   722,   764,
     650,    91,   134,   690,   467,   742,   698,   442,   667,    91,
     712,   737,    91,   307,   655,    91,   753,   442,   503,   444,
     563,   607,   714,   564,   715,   801,     0,     0,     0,     0,
      91,     0,   503,     0,     0,     0,   443,   443,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,   436,
     437,     0,     0,     0,    91,   443,     0,     0,    91,   444,
       0,     0,   444,     0,   134,   134,     0,     0,     0,   752,
     134,     0,   134,   134,     0,   444,   444,     0,     0,   110,
     438,     0,     0,     0,     0,     0,   444,     0,    32,   134,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
     443,   444,     0,     0,     0,     0,     0,     0,     0,   779,
       0,   444,   780,     0,    43,     0,     0,    46,     0,   137,
     137,   144,     0,   147,     0,   789,   790,    55,     0,    57,
      58,   439,    60,   440,     0,     0,   797,   443,     0,     0,
     441,   112,   443,   134,     0,   134,     0,     0,     0,     0,
       0,   805,     0,     0,     0,     0,   134,     0,     0,     0,
       0,   810,     0,     0,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     139,   140,  -330,  -330,     0,     0,     0,   157,     0,     0,
     443,     0,   160,     0,   134,     0,     0,   164,   465,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,     0,     0,     0,     0,   185,
       0,     0,   443,     0,   196,     0,     0,     0,     0,     0,
       0,   205,     0,   137,   443,     0,   443,     0,   134,   137,
       0,     0,     0,     0,     0,   137,   137,  -330,  -330,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,   221,   222,   223,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,   443,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,   287,     0,   147,     0,     0,     0,     0,     0,
       0,   443,     0,   300,   443,   303,   185,     0,     0,     0,
       0,     0,     0,   313,     0,     0,     0,   443,   443,     0,
       0,     0,     0,     0,     0,   329,     0,     0,   443,     0,
       0,     0,   337,     0,   137,     0,     0,     0,     0,     0,
     347,     0,     0,   443,     0,     0,   356,     0,     0,     0,
     185,     0,     0,   443,     0,     0,     0,     0,   375,   376,
     377,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,   354,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   185,
       0,     0,   424,   426,     0,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,     0,     0,
     137,   286,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    29,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,   137,   137,     0,   519,     0,    41,   137,     0,
     137,   137,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,   137,     0,    54,
      55,    56,    57,    58,   111,    60,    61,     0,     0,     0,
       0,     0,     0,    63,   112,    65,   526,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,     0,   147,
      76,    77,    78,  -343,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   544,     0,   546,
       0,   137,     0,   137,     0,   552,     0,     0,     0,   303,
     554,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   185,     0,     0,     0,     0,   570,  -343,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   137,     0,     0,     0,     0,   185,  -343,  -343,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,   185,   185,     0,     0,   600,     0,     0,
       0,   185,   185,     0,   185,     0,   424,   608,     0,     0,
       0,     0,   137,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     4,     5,     6,     7,     8,     0,
       0,     0,   631,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,   669,     0,     0,     0,
     303,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,    31,    32,     0,     0,    33,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,     0,
     729,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,    71,    72,     0,    73,   567,    74,     0,
      75,    76,    77,    78,     0,     0,   221,   222,   223,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,   224,   762,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,    10,
      11,     0,     0,     0,     0,    12,   783,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,    33,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,     0,    73,   633,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,   224,     9,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,    33,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   349,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   488,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,   671,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,   689,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   777,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
    -343,  -343,  -343,  -343,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,   782,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   794,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,   798,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   809,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   828,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,   831,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   348,    51,     0,    52,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   549,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   719,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    74,     0,   156,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    29,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   112,    65,     9,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
     159,    76,    77,    78,     0,     0,     0,     0,     0,     0,
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
       0,     0,    74,     0,   183,    76,    77,    78,     0,     0,
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
       0,    71,     0,     0,     0,     0,    74,   299,     0,    76,
      77,    78,     0,     0,   359,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   110,    29,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   111,    60,    61,
       0,     0,     0,     0,     0,     0,    63,   112,    65,     4,
       5,     6,     7,     8,     0,    71,     0,     0,     9,     0,
      74,     0,     0,    76,    77,    78,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     0,
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
       0,   402,     0,     0,     0,     0,     0,     0,     0,     0,
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
      76,    77,    78,     0,     0,   543,     0,     0,     0,     0,
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
       0,    74,     0,     0,    76,    77,    78,     0,     0,   545,
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
      78,     0,     0,   583,     0,     0,     0,     0,     0,     0,
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
       0,     0,    76,    77,    78,     0,     0,   668,     0,     0,
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
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
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
      61,     0,     0,     0,     0,     0,     0,    63,   112,   328,
       0,   221,   222,   223,     0,     0,    71,     0,     0,     0,
       0,    74,     0,     0,    76,    77,    78,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   730,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   634,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   731,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   290,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   292,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     338,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     427,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   494,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   622,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   786,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   800,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,     0,
       0,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     496,     0,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   532,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   559,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,   450,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   662,     0,   224,   520,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   222,   223,     0,     0,   619,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   223,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-511))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-343))

static const yytype_int16 yycheck[] =
{
       2,   113,    25,   359,   510,    21,    22,   220,    25,    25,
     365,     2,   367,   462,     2,   246,     2,   321,     8,   281,
      26,    26,    61,    31,     8,     8,     8,     8,    21,    22,
       8,    31,    77,    31,     8,    31,     8,   126,   147,     8,
      25,     8,    74,    59,    89,    61,     8,    61,    39,   134,
     263,   264,     8,     8,    70,   262,     8,     8,   147,    87,
     273,   274,   147,   573,   277,   126,    94,   280,   281,    62,
       8,   278,    61,   134,   102,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    74,   126,   128,
     107,    64,    65,   131,   126,    31,    61,     8,     0,   197,
     126,   146,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   142,   142,   132,   324,    98,   145,
      58,    59,   102,   149,   151,   635,   142,   637,   147,    61,
      61,   145,    62,   150,   142,    80,    72,   134,    80,   126,
     145,   142,   142,   149,   142,   142,   142,    58,    59,   165,
     505,    26,    77,    87,   151,   171,   145,   134,   147,   149,
      94,   177,   178,   179,    89,   149,   149,   149,   149,   145,
     148,   187,   165,   477,   623,   149,   169,   149,   171,   148,
     145,   148,   198,   199,   177,   178,   148,   543,   124,   545,
     126,    73,   148,   148,   187,   142,   148,   148,   134,   131,
     131,   134,   204,   220,   151,   198,   142,   147,   142,   142,
     148,   126,   126,   145,   145,   151,   147,    87,   151,    77,
     213,   146,    77,   246,    94,    58,    59,   583,    98,   246,
     246,    89,   147,   147,    89,   220,   591,   148,   147,   169,
      63,   124,   124,   126,   126,   103,   263,   264,   103,    72,
     147,   134,   134,   126,    72,   271,   273,   274,   131,   275,
     277,   246,    73,   280,   281,   134,   148,   283,   475,   262,
     286,   147,   142,   147,   147,   291,   126,   142,   263,   264,
      87,   131,   152,   213,   639,   278,   151,    94,   273,   274,
     521,    98,   277,   286,   126,   280,   281,   147,   804,   131,
     126,   124,   126,   126,   147,   131,   124,   131,   126,   516,
     517,   134,   668,   124,   134,   126,   134,   524,   525,   142,
     527,   147,   134,   134,   142,    64,    65,   145,   151,   345,
     142,   324,   262,   151,    87,   142,    72,   339,   134,   151,
     145,    94,   145,   359,   149,    98,   142,   609,   278,   365,
     147,   367,    87,   127,   370,   151,    72,   374,   147,    94,
     134,   283,    76,    98,    78,   147,   359,   102,   142,   291,
     147,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    21,    22,   121,   402,   147,   124,   142,
     126,    21,    22,   147,   324,    25,   609,   659,   134,    31,
      67,    68,    69,    70,    71,    72,   142,   142,   124,   402,
     126,   189,   134,    72,   192,   151,    58,    59,   134,   291,
     436,   437,   134,   126,   440,   131,   142,   147,   206,   131,
     208,   134,   210,   211,   128,   151,    87,   126,    49,   455,
     126,   131,   145,    94,   111,   128,   659,    98,   464,   465,
     131,   549,   126,    87,   470,   126,   472,   473,   131,   147,
      94,   131,   560,   818,    98,   124,   457,   126,   102,    13,
      13,   464,   465,   489,   476,   134,   134,   470,   469,   472,
     473,   579,   475,   142,   500,   476,   502,   143,   476,   505,
     476,   142,   151,   148,   510,   149,   489,   149,   521,   134,
     150,   134,   106,   494,   521,   521,   499,   149,   142,   142,
     134,   106,   145,   142,   436,   437,   147,     8,   151,    13,
     148,   537,   538,   516,   517,   147,   542,   543,   148,   545,
     149,   524,   525,   455,   527,   165,   521,     8,    74,   149,
     556,   171,    45,    46,    47,   475,    49,   177,   178,   147,
     543,    61,   545,   146,   134,   134,   147,   187,   148,     8,
      13,   116,   147,   556,   436,   437,   568,   583,   198,   499,
     147,   587,   147,   126,   148,   591,   147,   568,   500,   595,
     568,   147,   568,   455,   147,   153,   516,   517,   148,   147,
     583,   131,   609,    13,   524,   525,   134,   527,    42,    43,
      44,    45,    46,    47,   620,    49,    13,   148,   624,    78,
     708,   153,   149,   134,   148,   537,   246,   126,     8,   621,
     542,   719,   145,   639,   609,     8,   628,   128,   500,   741,
     148,   624,   102,    13,   732,   134,   652,   149,   640,    95,
     148,   145,   659,   149,   149,   147,   142,   745,   664,   149,
     666,   148,   668,   283,   140,    13,   286,   755,   148,   148,
     148,   291,   760,   148,   148,   537,   764,   128,    95,   148,
     542,   153,     8,   149,   659,   668,    67,    68,    69,    70,
      71,    72,   148,   148,   675,   676,   146,    13,   679,   147,
     788,   145,   149,    84,   149,   711,   148,   147,   620,   142,
     702,   149,    67,    68,    69,    70,    71,    72,   134,   142,
     808,   111,   142,   145,    13,    26,    95,    66,   147,    84,
      13,   149,    13,   148,   822,   134,   142,   718,    13,   359,
     652,   829,   149,   145,   142,   751,   134,    13,   754,   149,
      13,   147,   664,   142,   666,   149,    26,   749,   620,    78,
     141,   767,   768,   148,   147,   146,   758,   142,   145,   148,
     815,   345,   778,   765,   489,   505,   557,   624,   676,   729,
     595,   773,   402,   644,   309,   703,   141,   793,   613,   781,
     652,   146,   784,   171,   601,   787,   713,   803,   804,   711,
     472,   529,   664,   473,   666,   786,    -1,    -1,    -1,    -1,
     802,    -1,   818,    -1,    -1,    -1,   436,   437,    -1,    -1,
     812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,   826,   455,    -1,    -1,   830,   751,
      -1,    -1,   754,    -1,   464,   465,    -1,    -1,    -1,   711,
     470,    -1,   472,   473,    -1,   767,   768,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,   778,    -1,    81,   489,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,
     500,   793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,
      -1,   803,   754,    -1,   107,    -1,    -1,   110,    -1,    21,
      22,   521,    -1,    25,    -1,   767,   768,   120,    -1,   122,
     123,   124,   125,   126,    -1,    -1,   778,   537,    -1,    -1,
     133,   134,   542,   543,    -1,   545,    -1,    -1,    -1,    -1,
      -1,   793,    -1,    -1,    -1,    -1,   556,    -1,    -1,    -1,
      -1,   803,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    58,    59,    -1,    -1,    -1,    30,    -1,    -1,
     620,    -1,    35,    -1,   624,    -1,    -1,    40,    74,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,   652,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,   165,   664,    -1,   666,    -1,   668,   171,
      -1,    -1,    -1,    -1,    -1,   177,   178,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,     9,    10,    11,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   711,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,   155,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   751,    -1,   166,   754,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,   767,   768,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,   778,    -1,
      -1,    -1,   195,    -1,   286,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   793,    -1,    -1,   209,    -1,    -1,    -1,
     213,    -1,    -1,   803,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,    -1,    -1,   148,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,    -1,    -1,    -1,   359,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,
     402,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   324,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,   464,   465,    -1,   378,    -1,    97,   470,    -1,
     472,   473,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,   489,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   419,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,   521,
     150,   151,   152,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,   450,    -1,   452,
      -1,   543,    -1,   545,    -1,   458,    -1,    -1,    -1,   462,
     463,    -1,    -1,    -1,   556,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,    -1,    -1,    -1,   480,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,   583,    -1,    -1,    -1,    -1,   499,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,   516,   517,    -1,    -1,   520,    -1,    -1,
      -1,   524,   525,    -1,   527,    -1,   529,   530,    -1,    -1,
      -1,    -1,   624,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   565,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   668,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,   619,    -1,    -1,    -1,
     623,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    80,    81,    -1,    -1,    84,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,   110,   111,   112,   113,   114,   115,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
     683,    -1,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,    -1,    -1,     9,    10,    11,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    25,   726,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,   759,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    12,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,    -1,   117,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,   145,    -1,   147,    -1,   149,   150,   151,   152,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   147,    -1,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,
      -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,   126,     3,     4,
       5,     6,     7,    -1,   133,   134,   135,    12,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,
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
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    -1,
     147,    -1,    -1,   150,   151,   152,    -1,    -1,    -1,    -1,
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
      -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
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
     126,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,     9,    10,    11,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,   150,   151,   152,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
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
      -1,    -1,   149,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   149,    27,
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
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
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
       9,    10,    11,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    10,    11,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    11,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49
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
     222,   223,   226,   227,   236,   239,   243,   244,   246,   247,
     251,   252,   253,   254,   255,   256,   257,   262,   270,   272,
      72,   124,   134,   223,   243,   243,   147,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   124,   126,   157,   227,   246,   247,   253,   246,   243,
     243,   124,   126,   157,   227,   229,   230,   253,   255,   256,
     262,    80,    80,   142,   208,   147,   149,   243,   134,   149,
     243,   147,   166,   219,   243,   147,   147,   233,   147,   147,
     142,   151,   206,   207,   134,   147,   147,   147,   147,   126,
     145,   157,   157,   149,   222,   243,   247,    87,    94,    98,
     102,   142,   267,   268,    26,   147,   243,   145,   147,   126,
     157,   161,   162,   147,   164,   243,    98,   234,   267,   145,
      98,   267,   126,   147,     8,   149,   134,   134,    31,   175,
     131,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   149,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   147,   131,   128,    61,   145,   151,   256,   175,
     243,   126,   157,   131,   131,   126,   157,   131,   147,   235,
     131,   128,   256,    13,     8,   149,    31,   243,   265,   266,
     149,    13,   149,   134,   192,   143,     8,   149,   247,   148,
     243,   220,   221,   243,   222,   247,   145,   244,   247,     8,
     149,   149,   148,   243,   247,   271,   121,   247,   263,   264,
     157,   160,   145,   149,   147,   149,   149,   247,   135,   243,
     102,   268,    61,   128,    98,   102,   268,   243,   149,   164,
     171,   172,   247,   157,    74,     8,   149,   243,   114,   146,
     165,   166,   173,   174,   148,   150,   243,   152,   134,    31,
     204,   205,   222,   247,   134,   106,   182,   106,   184,   134,
     147,   134,   251,   256,   262,   243,   243,   243,    26,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   229,    31,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   204,   134,   251,   134,   145,
     251,   259,   260,   261,   243,   258,   243,   148,   157,   134,
     134,   157,   251,   204,   251,   259,    42,    43,    73,   124,
     126,   133,   157,   227,   236,   237,   238,   142,   245,   247,
      95,   148,     8,   241,   237,    13,     8,   148,   147,   243,
     148,   148,   149,     8,    74,    74,   243,   207,   149,   148,
       8,   148,   147,     8,   148,   147,   156,   159,   204,   146,
      61,   146,   127,   134,   142,   269,   134,   148,   146,     8,
     148,    74,   134,   162,   148,   147,   146,   245,   148,     8,
      13,   124,   126,   157,   228,   116,   185,   186,   228,   180,
     147,    73,   201,   202,   203,   228,   147,   147,   256,   243,
      26,    63,   247,   148,   147,   147,   243,   147,   250,    61,
     145,   153,   146,   148,   231,   237,   237,   147,   126,   157,
      98,   131,    13,    31,   243,    31,   243,   237,   134,    26,
     166,   191,   243,   220,   243,   247,    31,   188,   247,   146,
      26,   166,   247,   263,   264,    13,   204,   146,   156,   148,
     243,   153,    26,   145,   193,    78,   172,   149,   134,    26,
     166,   196,   148,    31,   222,   247,   237,   126,   157,   186,
     179,     8,   145,   201,   148,     8,    31,   142,   204,   204,
     243,   229,   204,   204,   146,   204,   248,   258,   243,   128,
     232,   237,   240,   242,   157,   134,   237,   245,   245,    95,
      13,   164,   148,   149,    95,   187,   247,   187,   164,   197,
     148,   243,   148,   146,   153,   149,   194,   149,   194,   147,
     164,   149,   245,   157,   145,   228,   209,   148,   140,   224,
     203,   142,    13,   148,   148,   235,   148,   148,   148,   128,
     249,   153,   146,   259,    95,   148,     8,   241,    31,   243,
     237,    99,   149,   220,   188,   148,   148,   198,    64,    65,
     199,   146,   194,    77,    89,   103,   194,   146,   228,   104,
     209,    67,    68,    69,    70,    71,    72,    84,   141,   146,
     210,   213,   214,   215,   216,   218,   177,   147,   145,    31,
     142,    13,   237,   259,   237,   237,   245,   149,   148,    26,
     166,   190,   190,    64,    65,   200,   147,   166,   103,   243,
      26,   149,   195,   149,   146,   142,   149,   146,   134,   142,
     217,   223,   216,     8,   149,   145,    31,   142,   225,   164,
     142,    13,   237,   250,    95,    26,   166,   189,   164,   147,
      26,    66,   243,   149,   195,   164,   148,    13,    13,     8,
     149,   175,   134,   164,   142,     8,   148,   146,    13,   237,
     237,   164,   101,   243,   164,   149,   148,   164,   145,   237,
     237,   142,   134,    13,   146,    31,   142,   237,   100,   149,
     148,   166,   164,    13,   147,   237,   142,   149,    26,   146,
     237,   201,   164,    78,   168,   169,   170,   148,   147,   170,
     211,   228,   145,   149,   212,   142,   164,   148,   146,   145,
     164,   146
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
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 463 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), observers.ExpressionMakeAsAssignmentExpression((yyvsp[(5) - (8)].variable)));
																									  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																									  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 467 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 468 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
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
#line 479 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 480 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 484 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 485 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 489 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 490 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 495 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.AssignmentExpressionFromNewFound(
																			   observers.VariableStart((yyvsp[(4) - (8)].semanticValue)), 
																			   (yyvsp[(3) - (8)].qualifiedName),
																			   NULL));
																		  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 503 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 504 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 520 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 521 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 526 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 527 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (10)].statementList)); 
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 535 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 536 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
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
#line 548 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 549 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
											  observers.SetCurrentClassName(NULL);    
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 556 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 557 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 558 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 562 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 564 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 568 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 572 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 574 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 578 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 580 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 584 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 585 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 589 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 590 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 594 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 595 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 599 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 600 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 604 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 605 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 609 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 610 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 614 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 615 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 619 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 620 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 621 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 622 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 626 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 627 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (5)].statementList);
																				  observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression));
																			      observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); 
																				}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 631 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList));
																				}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 642 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 643 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 647 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (6)].statementList));
															  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (6)].expression))); 
															  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 655 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 656 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (7)].statementList));
																			  	  observers.StatementListMerge((yyval.statementList), observers.StatementListMakeAndAppend((yyvsp[(4) - (7)].expression))); 
																				  observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 663 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 664 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 668 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 669 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 673 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 674 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 679 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].semanticValue), false); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 680 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue), true); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 681 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].semanticValue), true);}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 682 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].semanticValue), false); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 683 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (4)].parametersList), (yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), false); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 684 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (5)].parametersList), (yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].semanticValue), true); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 685 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (7)].parametersList), (yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].semanticValue), true); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 686 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (6)].parametersList), (yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), false); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 690 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 691 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 692 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue));}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 696 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 697 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 701 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 702 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 703 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 704 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 706 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].variable)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 710 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 711 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 715 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 717 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 721 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 722 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 724 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 728 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 729 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 733 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 734 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 736 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 737 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol)); 
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 743 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 744 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 748 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 749 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 753 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 754 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 758 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 759 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 772 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 773 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 774 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 775 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 780 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 781 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 785 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 786 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 790 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 791 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 795 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 796 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 800 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 801 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 802 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 803 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 804 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 805 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 806 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 807 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 808 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 809 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 810 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 811 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 812 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 813 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 814 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 815 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 816 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 817 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 818 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 819 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 820 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 821 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 822 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 823 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 824 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 825 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 826 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 827 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 828 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 829 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 830 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 831 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 832 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 833 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 834 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 835 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 836 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 837 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 838 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 839 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 840 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 841 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 842 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 843 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 844 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 845 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 846 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 847 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 848 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 849 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 850 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 853 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 855 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 856 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 857 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 858 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 859 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 860 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 861 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 862 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 863 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 864 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 865 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 866 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression);}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 867 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 868 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 869 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 872 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(4) - (9)].parametersList), (yyvsp[(6) - (9)].statementList), (yyvsp[(8) - (9)].statementList), (yyvsp[(7) - (9)].semanticValue), (yyvsp[(9) - (9)].semanticValue));  }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 880 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 881 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 885 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), 
														       observers.VariableStart((yyvsp[(3) - (3)].semanticValue))
		                                                   ); 
		                                            }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 889 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), 
	                                                         observers.VariableStart((yyvsp[(4) - (4)].semanticValue))
		                                                   ); 
		                                            }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 893 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 894 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(2) - (2)].semanticValue))); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 899 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 902 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 904 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber()); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 906 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(3) - (6)].semanticValue), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber()); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 908 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 910 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 912 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 914 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 918 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 919 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 920 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 921 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 925 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 926 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 927 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 931 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 932 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 937 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 938 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 942 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 943 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 951 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 952 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 953 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 957 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 958 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 959 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 963 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 964 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 968 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 969 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 970 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 971 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 972 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 973 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 974 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 975 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 976 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 977 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 978 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 979 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 983 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 984 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 985 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 986 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 987 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 988 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 989 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 994 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 998 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 999 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1000 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1001 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1002 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1004 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1005 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1009 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1014 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1015 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1019 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1020 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1021 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1022 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1026 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1046 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1047 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1051 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1052 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1057 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1061 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(2) - (3)].statementList), true); }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1067 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(2) - (2)].variable); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1071 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1072 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1076 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1081 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1086 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(2) - (2)].variable); }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1091 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1092 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1097 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1098 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1102 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1103 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1107 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1108 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1112 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1113 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1114 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1118 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1119 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1128 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1129 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1133 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1134 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1135 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1139 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1140 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1144 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1148 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1152 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1153 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1154 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1158 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1162 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1163 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1167 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1168 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1169 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1170 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1174 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1175 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1176 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1177 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1178 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1179 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1183 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1184 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1185 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1189 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1190 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1191 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1192 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1193 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1194 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1195 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1199 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].variable)); }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1200 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].variable)); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1204 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1205 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;



/* Line 1806 of yacc.c  */
#line 6337 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.cpp"
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
#line 1208 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php53FullParser.y"


