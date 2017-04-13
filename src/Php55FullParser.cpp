/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         php55parse
#define yylex           php55lex
#define yyerror         php55error
#define yylval          php55lval
#define yychar          php55char
#define yydebug         php55debug
#define yynerrs         php55nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"


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
 * @copyright  2017 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/FullParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ParserType

// so that both bison parses call the same lex function
#define php55lex pelet::FullLex

// so that both bison parses call the same error function
#define php55error pelet::FullGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php55FullParser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int php55debug;
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
     T_YIELD = 630,
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
     T_WHITESPACE = 627,
     T_FINALLY = 629
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int php55parse (void *YYPARSE_PARAM);
#else
int php55parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php55parse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers);
#else
int php55parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 312 "/Users/roberto/Projects/pelet/src/Php55FullParser.cpp"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7912

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  160
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  150
/* YYNRULES -- Number of rules.  */
#define YYNRULES  477
/* YYNRULES -- Number of states.  */
#define YYNSTATES  934

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   631

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,   158,     2,   157,    48,    32,     2,
     153,   154,    46,    43,     8,    44,    45,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,   155,
      37,    14,    38,    26,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   159,    31,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   151,    30,   152,    51,     2,     2,     2,
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
       2,     2,    72,    19,    74,    55,    75,    76,    53,    29,
      28,    77,    78,    79,    80,    81,    82,    83,    63,    84,
      85,    21,    86,    87,    88,    89,    59,    90,    91,    92,
      22,    93,    94,    95,    96,    97,    57,    98,    66,    65,
      99,   100,   101,   102,   103,   104,    67,   105,   106,     5,
     107,   108,   109,    71,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    60,     7,     6,   119,    50,   120,    58,
     121,    36,    39,    34,    35,    33,   122,    40,   123,   124,
     125,    11,     9,    10,   126,    24,    20,    23,   127,    64,
     128,   129,   130,    54,   131,   132,   133,    18,   134,    25,
      12,    70,    69,    68,     4,     3,   135,    42,    16,    41,
      15,   136,    73,   137,    56,   138,   139,   140,   141,   142,
     143,   144,    52,   145,   146,   147,   148,   149,    17,   150,
      13,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    52,    56,
      58,    60,    64,    67,    72,    78,    83,    86,    87,    89,
      91,    93,    98,   100,   103,   107,   113,   122,   126,   132,
     142,   146,   149,   153,   156,   160,   163,   167,   171,   174,
     178,   182,   186,   188,   191,   197,   206,   215,   221,   223,
     230,   234,   238,   239,   249,   250,   255,   257,   258,   260,
     263,   272,   274,   278,   280,   282,   284,   285,   287,   288,
     299,   300,   309,   310,   318,   320,   323,   325,   328,   329,
     332,   334,   335,   338,   339,   342,   344,   348,   349,   352,
     354,   357,   362,   364,   369,   371,   376,   378,   383,   387,
     393,   397,   402,   407,   413,   414,   420,   425,   427,   429,
     431,   436,   437,   442,   443,   449,   450,   453,   454,   458,
     460,   461,   464,   468,   474,   479,   484,   490,   498,   505,
     506,   508,   510,   512,   515,   519,   523,   525,   527,   530,
     534,   538,   543,   547,   549,   551,   554,   559,   563,   569,
     571,   575,   578,   579,   583,   586,   588,   589,   599,   603,
     605,   609,   611,   615,   616,   618,   620,   623,   626,   629,
     633,   635,   639,   641,   643,   647,   652,   656,   657,   659,
     661,   665,   667,   669,   670,   672,   674,   677,   679,   681,
     683,   685,   687,   689,   693,   699,   701,   705,   711,   716,
     720,   722,   723,   725,   729,   731,   734,   736,   741,   745,
     748,   750,   752,   753,   755,   759,   766,   770,   775,   782,
     785,   789,   793,   797,   801,   805,   809,   813,   817,   821,
     825,   829,   832,   835,   838,   841,   845,   849,   853,   857,
     861,   865,   869,   873,   877,   881,   885,   889,   893,   897,
     901,   905,   908,   911,   914,   917,   921,   925,   929,   933,
     937,   941,   945,   949,   953,   955,   957,   962,   968,   973,
     975,   978,   981,   984,   987,   990,   993,   996,   999,  1002,
    1004,  1006,  1008,  1012,  1015,  1017,  1018,  1029,  1030,  1042,
    1045,  1048,  1053,  1058,  1063,  1068,  1073,  1078,  1082,  1084,
    1085,  1090,  1094,  1099,  1101,  1104,  1107,  1112,  1116,  1121,
    1126,  1131,  1136,  1139,  1141,  1143,  1147,  1150,  1152,  1156,
    1159,  1161,  1163,  1168,  1170,  1173,  1174,  1177,  1178,  1181,
    1183,  1184,  1186,  1188,  1189,  1191,  1193,  1195,  1197,  1199,
    1201,  1203,  1205,  1207,  1209,  1211,  1215,  1218,  1220,  1222,
    1224,  1228,  1231,  1234,  1237,  1242,  1246,  1248,  1250,  1254,
    1256,  1258,  1260,  1262,  1266,  1269,  1271,  1275,  1279,  1281,
    1282,  1285,  1286,  1288,  1294,  1298,  1302,  1304,  1306,  1308,
    1312,  1316,  1318,  1320,  1322,  1328,  1330,  1333,  1334,  1338,
    1343,  1348,  1350,  1352,  1354,  1355,  1357,  1360,  1364,  1368,
    1370,  1375,  1380,  1382,  1384,  1386,  1388,  1391,  1393,  1398,
    1403,  1405,  1407,  1412,  1413,  1415,  1417,  1419,  1424,  1429,
    1431,  1433,  1437,  1439,  1442,  1446,  1448,  1450,  1455,  1456,
    1457,  1460,  1466,  1470,  1474,  1476,  1483,  1488,  1493,  1496,
    1499,  1502,  1504,  1507,  1509,  1514,  1518,  1522,  1529,  1533,
    1535,  1537,  1539,  1544,  1549,  1554,  1557,  1560,  1565,  1568,
    1571,  1573,  1577,  1579,  1581,  1585,  1589,  1593
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     161,     0,    -1,   162,    -1,   162,   164,    -1,    -1,   137,
      -1,   163,   129,   137,    -1,   172,    -1,   181,    -1,   182,
      -1,   116,   153,   154,   155,    -1,   127,   163,   155,    -1,
      -1,   127,   163,   151,   165,   162,   152,    -1,    -1,   127,
     151,   166,   162,   152,    -1,   145,   167,   155,    -1,   169,
     155,    -1,   167,     8,   168,    -1,   168,    -1,   163,    -1,
     163,    75,   137,    -1,   129,   163,    -1,   129,   163,    75,
     137,    -1,   169,     8,   137,    14,   267,    -1,    86,   137,
      14,   267,    -1,   170,   171,    -1,    -1,   172,    -1,   181,
      -1,   182,    -1,   116,   153,   154,   155,    -1,   173,    -1,
     137,    27,    -1,   151,   170,   152,    -1,   117,   274,   172,
     205,   207,    -1,   117,   274,    27,   170,   206,   208,    67,
     155,    -1,   148,   274,   204,    -1,    94,   172,   148,   274,
     155,    -1,   110,   153,   240,   155,   240,   155,   240,   154,
     197,    -1,   139,   274,   201,    -1,    77,   155,    -1,    77,
     273,   155,    -1,    88,   155,    -1,    88,   273,   155,    -1,
     135,   155,    -1,   135,   247,   155,    -1,   135,   278,   155,
      -1,   250,   155,    -1,   114,   214,   155,    -1,    73,   216,
     155,    -1,    98,   239,   155,    -1,   119,    -1,   273,   155,
      -1,   144,   153,   179,   154,   155,    -1,   111,   153,   278,
      75,   196,   195,   154,   198,    -1,   111,   153,   247,    75,
     196,   195,   154,   198,    -1,    90,   153,   200,   154,   199,
      -1,   155,    -1,   143,   151,   170,   152,   174,   175,    -1,
     140,   273,   155,    -1,   115,   137,   155,    -1,    -1,    80,
     153,   258,   147,   154,   151,   170,   152,   176,    -1,    -1,
     150,   151,   170,   152,    -1,   177,    -1,    -1,   178,    -1,
     177,   178,    -1,    80,   153,   258,   147,   154,   151,   170,
     152,    -1,   180,    -1,   179,     8,   180,    -1,   278,    -1,
     184,    -1,   186,    -1,    -1,    32,    -1,    -1,   253,   183,
     137,   153,   209,   154,   185,   151,   170,   152,    -1,    -1,
     189,   137,   190,   193,   187,   151,   217,   152,    -1,    -1,
     191,   137,   192,   188,   151,   217,   152,    -1,    82,    -1,
      72,    82,    -1,   141,    -1,    71,    82,    -1,    -1,   108,
     258,    -1,   121,    -1,    -1,   108,   194,    -1,    -1,   118,
     194,    -1,   258,    -1,   194,     8,   258,    -1,    -1,    97,
     196,    -1,   278,    -1,    32,   278,    -1,   124,   153,   297,
     154,    -1,   172,    -1,    27,   170,   102,   155,    -1,   172,
      -1,    27,   170,   103,   155,    -1,   172,    -1,    27,   170,
     101,   155,    -1,   137,    14,   267,    -1,   200,     8,   137,
      14,   267,    -1,   151,   202,   152,    -1,   151,   155,   202,
     152,    -1,    27,   202,   105,   155,    -1,    27,   155,   202,
     105,   155,    -1,    -1,   202,    79,   273,   203,   170,    -1,
     202,    91,   203,   170,    -1,    27,    -1,   155,    -1,   172,
      -1,    27,   170,   106,   155,    -1,    -1,   205,    65,   274,
     172,    -1,    -1,   206,    65,   274,    27,   170,    -1,    -1,
      66,   172,    -1,    -1,    66,    27,   170,    -1,   210,    -1,
      -1,   211,   147,    -1,   211,    32,   147,    -1,   211,    32,
     147,    14,   267,    -1,   211,   147,    14,   267,    -1,   210,
       8,   211,   147,    -1,   210,     8,   211,    32,   147,    -1,
     210,     8,   211,    32,   147,    14,   267,    -1,   210,     8,
     211,   147,    14,   267,    -1,    -1,    74,    -1,    78,    -1,
     258,    -1,   153,   154,    -1,   153,   213,   154,    -1,   153,
     250,   154,    -1,   247,    -1,   278,    -1,    32,   276,    -1,
     213,     8,   247,    -1,   213,     8,   278,    -1,   213,     8,
      32,   276,    -1,   214,     8,   215,    -1,   215,    -1,   147,
      -1,   157,   275,    -1,   157,   151,   273,   152,    -1,   216,
       8,   147,    -1,   216,     8,   147,    14,   267,    -1,   147,
      -1,   147,    14,   267,    -1,   217,   218,    -1,    -1,   233,
     237,   155,    -1,   238,   155,    -1,   220,    -1,    -1,   234,
     253,   183,   137,   153,   209,   154,   219,   232,    -1,   145,
     221,   222,    -1,   258,    -1,   221,     8,   258,    -1,   155,
      -1,   151,   223,   152,    -1,    -1,   224,    -1,   225,    -1,
     224,   225,    -1,   226,   155,    -1,   230,   155,    -1,   229,
     120,   227,    -1,   258,    -1,   227,     8,   258,    -1,   137,
      -1,   229,    -1,   258,   134,   137,    -1,   228,    75,   231,
     137,    -1,   228,    75,   236,    -1,    -1,   236,    -1,   155,
      -1,   151,   170,   152,    -1,   235,    -1,   146,    -1,    -1,
     235,    -1,   236,    -1,   235,   236,    -1,    68,    -1,    69,
      -1,    70,    -1,    73,    -1,    72,    -1,    71,    -1,   237,
       8,   147,    -1,   237,     8,   147,    14,   267,    -1,   147,
      -1,   147,    14,   267,    -1,   238,     8,   137,    14,   267,
      -1,    86,   137,    14,   267,    -1,   239,     8,   273,    -1,
     273,    -1,    -1,   241,    -1,   241,     8,   273,    -1,   273,
      -1,   242,   280,    -1,   280,    -1,   243,    62,   292,   159,
      -1,    62,   292,   159,    -1,   243,   242,    -1,   243,    -1,
     242,    -1,    -1,   244,    -1,    64,   259,   265,    -1,   124,
     153,   297,   154,    14,   273,    -1,   278,    14,   273,    -1,
     278,    14,    32,   278,    -1,   278,    14,    32,    64,   259,
     265,    -1,    63,   273,    -1,   278,    25,   273,    -1,   278,
      24,   273,    -1,   278,    23,   273,    -1,   278,    22,   273,
      -1,   278,    21,   273,    -1,   278,    20,   273,    -1,   278,
      19,   273,    -1,   278,    18,   273,    -1,   278,    17,   273,
      -1,   278,    16,   273,    -1,   278,    15,   273,    -1,   277,
      60,    -1,    60,   277,    -1,   277,    59,    -1,    59,   277,
      -1,   273,    28,   273,    -1,   273,    29,   273,    -1,   273,
       9,   273,    -1,   273,    11,   273,    -1,   273,    10,   273,
      -1,   273,    30,   273,    -1,   273,    32,   273,    -1,   273,
      31,   273,    -1,   273,    45,   273,    -1,   273,    43,   273,
      -1,   273,    44,   273,    -1,   273,    46,   273,    -1,   273,
      47,   273,    -1,   273,    48,   273,    -1,   273,    42,   273,
      -1,   273,    41,   273,    -1,    43,   273,    -1,    44,   273,
      -1,    49,   273,    -1,    51,   273,    -1,   273,    34,   273,
      -1,   273,    33,   273,    -1,   273,    36,   273,    -1,   273,
      35,   273,    -1,   273,    37,   273,    -1,   273,    40,   273,
      -1,   273,    38,   273,    -1,   273,    39,   273,    -1,   273,
      50,   259,    -1,   274,    -1,   246,    -1,   153,   246,   154,
     245,    -1,   273,    26,   273,    27,   273,    -1,   273,    26,
      27,   273,    -1,   304,    -1,    58,   273,    -1,    57,   273,
      -1,    56,   273,    -1,    55,   273,    -1,    54,   273,    -1,
      53,   273,    -1,    52,   273,    -1,   107,   263,    -1,    61,
     273,    -1,   269,    -1,   251,    -1,   252,    -1,   156,   264,
     156,    -1,    12,   273,    -1,    13,    -1,    -1,   253,   183,
     153,   209,   154,   254,   151,   248,   170,   152,    -1,    -1,
      73,   253,   183,   153,   209,   154,   254,   151,   249,   170,
     152,    -1,    13,   247,    -1,    13,   278,    -1,    13,   273,
      97,   247,    -1,    13,   273,    97,   278,    -1,   252,    62,
     292,   159,    -1,   251,    62,   292,   159,    -1,    87,    62,
     292,   159,    -1,    74,   153,   299,   154,    -1,    62,   299,
     159,    -1,   113,    -1,    -1,   145,   153,   255,   154,    -1,
     255,     8,   147,    -1,   255,     8,    32,   147,    -1,   147,
      -1,    32,   147,    -1,   163,   212,    -1,   127,   129,   163,
     212,    -1,   129,   163,   212,    -1,   257,   134,   295,   212,
      -1,   257,   134,   284,   212,    -1,   286,   134,   295,   212,
      -1,   286,   134,   284,   212,    -1,   284,   212,    -1,    73,
      -1,   163,    -1,   127,   129,   163,    -1,   129,   163,    -1,
     163,    -1,   127,   129,   163,    -1,   129,   163,    -1,   257,
      -1,   260,    -1,   289,   131,   293,   261,    -1,   289,    -1,
     261,   262,    -1,    -1,   131,   293,    -1,    -1,   153,   154,
      -1,   274,    -1,    -1,   100,    -1,   301,    -1,    -1,   212,
      -1,   125,    -1,    93,    -1,    87,    -1,   123,    -1,   109,
      -1,    92,    -1,   142,    -1,   126,    -1,   112,    -1,   128,
      -1,   136,   100,   104,    -1,   136,   104,    -1,   266,    -1,
     308,    -1,   163,    -1,   127,   129,   163,    -1,   129,   163,
      -1,    43,   267,    -1,    44,   267,    -1,    74,   153,   270,
     154,    -1,    62,   270,   159,    -1,   268,    -1,    83,    -1,
     257,   134,   137,    -1,   138,    -1,   309,    -1,   307,    -1,
     163,    -1,   127,   129,   163,    -1,   129,   163,    -1,   266,
      -1,   158,   301,   158,    -1,   136,   301,   104,    -1,    83,
      -1,    -1,   272,   271,    -1,    -1,     8,    -1,   272,     8,
     267,    97,   267,    -1,   272,     8,   267,    -1,   267,    97,
     267,    -1,   267,    -1,   275,    -1,   247,    -1,   153,   273,
     154,    -1,   153,   250,   154,    -1,   278,    -1,   278,    -1,
     278,    -1,   288,   131,   293,   283,   279,    -1,   288,    -1,
     279,   280,    -1,    -1,   131,   293,   283,    -1,   281,    62,
     292,   159,    -1,   282,    62,   292,   159,    -1,   212,    -1,
     282,    -1,   281,    -1,    -1,   290,    -1,   296,   290,    -1,
     257,   134,   284,    -1,   286,   134,   284,    -1,   290,    -1,
     287,    62,   292,   159,    -1,   256,    62,   292,   159,    -1,
     289,    -1,   287,    -1,   256,    -1,   290,    -1,   296,   290,
      -1,   285,    -1,   290,    62,   292,   159,    -1,   290,   151,
     273,   152,    -1,   291,    -1,   147,    -1,   157,   151,   273,
     152,    -1,    -1,   273,    -1,   294,    -1,   284,    -1,   294,
      62,   292,   159,    -1,   294,   151,   273,   152,    -1,   295,
      -1,   137,    -1,   151,   273,   152,    -1,   157,    -1,   296,
     157,    -1,   297,     8,   298,    -1,   298,    -1,   278,    -1,
     124,   153,   297,   154,    -1,    -1,    -1,   300,   271,    -1,
     300,     8,   273,    97,   273,    -1,   300,     8,   273,    -1,
     273,    97,   273,    -1,   273,    -1,   300,     8,   273,    97,
      32,   276,    -1,   300,     8,    32,   276,    -1,   273,    97,
      32,   276,    -1,    32,   276,    -1,   301,   302,    -1,   301,
     100,    -1,   302,    -1,   100,   302,    -1,   147,    -1,   147,
      62,   303,   159,    -1,   147,   131,   137,    -1,    96,   273,
     152,    -1,    96,   138,    62,   273,   159,   152,    -1,    89,
     278,   152,    -1,   137,    -1,   130,    -1,   147,    -1,   122,
     153,   305,   154,    -1,    99,   153,   278,   154,    -1,    99,
     153,   247,   154,    -1,     7,   273,    -1,     6,   273,    -1,
       5,   153,   273,   154,    -1,     4,   273,    -1,     3,   273,
      -1,   306,    -1,   305,     8,   306,    -1,   278,    -1,   247,
      -1,   257,   134,   137,    -1,   286,   134,   137,    -1,   257,
     134,    82,    -1,   257,   134,    82,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   375,   375,   379,   380,   384,   385,   389,   390,   391,
     392,   393,   394,   394,   396,   396,   398,   399,   403,   404,
     408,   409,   410,   411,   415,   416,   420,   421,   426,   427,
     428,   429,   434,   435,   439,   440,   444,   448,   450,   451,
     463,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   487,   494,   495,   496,
     503,   504,   508,   509,   523,   524,   528,   529,   533,   534,
     538,   548,   549,   553,   557,   561,   565,   566,   572,   571,
     580,   579,   592,   591,   601,   602,   603,   604,   608,   609,
     613,   617,   618,   622,   623,   627,   628,   632,   633,   637,
     638,   639,   643,   644,   649,   650,   655,   656,   660,   661,
     666,   667,   668,   669,   674,   675,   679,   686,   687,   692,
     693,   699,   700,   708,   709,   717,   718,   723,   724,   729,
     730,   735,   736,   737,   738,   739,   740,   741,   742,   747,
     748,   749,   750,   755,   756,   757,   762,   763,   764,   765,
     766,   767,   771,   772,   777,   778,   779,   784,   785,   786,
     787,   793,   794,   799,   800,   801,   803,   802,   810,   814,
     815,   819,   820,   824,   825,   829,   830,   834,   835,   839,
     843,   844,   848,   849,   853,   857,   858,   862,   863,   867,
     868,   872,   873,   877,   878,   882,   883,   887,   888,   889,
     890,   891,   892,   896,   897,   898,   899,   903,   904,   908,
     909,   914,   915,   919,   920,   924,   925,   929,   930,   934,
     935,   936,   940,   941,   945,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1004,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1023,  1022,  1030,  1029,  1039,
    1040,  1041,  1042,  1046,  1047,  1048,  1051,  1052,  1055,  1059,
    1060,  1064,  1068,  1072,  1073,  1077,  1079,  1081,  1083,  1085,
    1087,  1089,  1091,  1096,  1097,  1098,  1099,  1103,  1104,  1105,
    1109,  1110,  1114,  1117,  1122,  1123,  1128,  1132,  1133,  1134,
    1138,  1139,  1140,  1145,  1146,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1158,  1159,  1160,  1161,  1162,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1181,  1185,
    1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1199,
    1200,  1204,  1205,  1209,  1210,  1211,  1212,  1216,  1217,  1221,
    1222,  1226,  1230,  1234,  1238,  1241,  1245,  1246,  1250,  1254,
    1255,  1259,  1263,  1264,  1265,  1269,  1270,  1274,  1275,  1280,
    1284,  1285,  1289,  1290,  1291,  1296,  1297,  1298,  1302,  1303,
    1304,  1309,  1310,  1314,  1315,  1319,  1320,  1324,  1325,  1326,
    1330,  1331,  1335,  1336,  1340,  1341,  1345,  1346,  1347,  1352,
    1353,  1357,  1361,  1365,  1366,  1367,  1371,  1375,  1376,  1380,
    1381,  1382,  1383,  1387,  1388,  1389,  1390,  1391,  1392,  1396,
    1397,  1398,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,
    1413,  1414,  1418,  1419,  1423,  1424,  1428,  1432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "T_YIELD", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
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
  "T_WHITESPACE", "T_FINALLY", "'{'", "'}'", "'('", "')'", "';'", "'`'",
  "'$'", "'\"'", "']'", "$accept", "start", "top_statement_list",
  "namespace_name", "top_statement", "$@1", "$@2", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list",
  "inner_statement", "statement", "unticked_statement", "catch_statement",
  "finally_statement", "additional_catches",
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
  "expr_without_variable", "$@7", "$@8", "yield_expr",
  "combined_scalar_offset", "combined_scalar", "function", "lexical_vars",
  "lexical_var_list", "function_call", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "parenthesis_expr", "r_variable", "w_variable", "rw_variable",
  "variable", "variable_properties", "variable_property",
  "array_method_dereference", "method", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", "class_constant", "static_class_name_scalar",
  "class_name_scalar", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   631,   605,   604,   549,   565,   564,    44,   582,
     583,   581,   600,   630,    61,   610,   608,   628,   597,   503,
     586,   521,   530,   587,   585,   599,    63,    58,   510,   509,
     124,    94,    38,   575,   573,   574,   571,    60,    62,   572,
     577,   609,   607,    43,    45,    46,    42,    47,    37,    33,
     567,   126,   622,   508,   593,   505,   614,   536,   569,   526,
     563,    64,    91,   518,   589,   539,   538,   546,   603,   602,
     601,   553,   502,   612,   504,   506,   507,   511,   512,   513,
     514,   515,   516,   517,   519,   520,   522,   523,   524,   525,
     527,   528,   529,   531,   532,   533,   534,   535,   537,   540,
     541,   542,   543,   544,   545,   547,   548,   550,   551,   552,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   566,
     568,   570,   576,   578,   579,   580,   584,   588,   590,   591,
     592,   594,   595,   596,   598,   606,   611,   613,   615,   616,
     617,   618,   619,   620,   621,   623,   624,   625,   626,   627,
     629,   123,   125,    40,    41,    59,    96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   160,   161,   162,   162,   163,   163,   164,   164,   164,
     164,   164,   165,   164,   166,   164,   164,   164,   167,   167,
     168,   168,   168,   168,   169,   169,   170,   170,   171,   171,
     171,   171,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   179,   179,   180,   181,   182,   183,   183,   185,   184,
     187,   186,   188,   186,   189,   189,   189,   189,   190,   190,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   201,   202,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   210,   210,   210,   210,   210,   210,   211,
     211,   211,   211,   212,   212,   212,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   215,   216,   216,   216,
     216,   217,   217,   218,   218,   218,   219,   218,   220,   221,
     221,   222,   222,   223,   223,   224,   224,   225,   225,   226,
     227,   227,   228,   228,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   234,   235,   235,   236,   236,   236,
     236,   236,   236,   237,   237,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   244,   245,   245,   246,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   248,   247,   249,   247,   250,
     250,   250,   250,   251,   251,   251,   252,   252,   253,   254,
     254,   255,   255,   255,   255,   256,   256,   256,   256,   256,
     256,   256,   256,   257,   257,   257,   257,   258,   258,   258,
     259,   259,   260,   260,   261,   261,   262,   263,   263,   263,
     264,   264,   264,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   268,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   271,   271,   272,   272,   272,   272,   273,   273,   274,
     274,   275,   276,   277,   278,   278,   279,   279,   280,   281,
     281,   282,   283,   283,   283,   284,   284,   285,   285,   286,
     287,   287,   288,   288,   288,   289,   289,   289,   290,   290,
     290,   291,   291,   292,   292,   293,   293,   294,   294,   294,
     295,   295,   296,   296,   297,   297,   298,   298,   298,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   300,   301,
     301,   301,   301,   302,   302,   302,   302,   302,   302,   303,
     303,   303,   304,   304,   304,   304,   304,   304,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   309
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     3,     1,
       1,     3,     2,     4,     5,     4,     2,     0,     1,     1,
       1,     4,     1,     2,     3,     5,     8,     3,     5,     9,
       3,     2,     3,     2,     3,     2,     3,     3,     2,     3,
       3,     3,     1,     2,     5,     8,     8,     5,     1,     6,
       3,     3,     0,     9,     0,     4,     1,     0,     1,     2,
       8,     1,     3,     1,     1,     1,     0,     1,     0,    10,
       0,     8,     0,     7,     1,     2,     1,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     4,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     5,     4,     1,     1,     1,
       4,     0,     4,     0,     5,     0,     2,     0,     3,     1,
       0,     2,     3,     5,     4,     4,     5,     7,     6,     0,
       1,     1,     1,     2,     3,     3,     1,     1,     2,     3,
       3,     4,     3,     1,     1,     2,     4,     3,     5,     1,
       3,     2,     0,     3,     2,     1,     0,     9,     3,     1,
       3,     1,     3,     0,     1,     1,     2,     2,     2,     3,
       1,     3,     1,     1,     3,     4,     3,     0,     1,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     3,     1,     2,     1,     4,     3,     2,
       1,     1,     0,     1,     3,     6,     3,     4,     6,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     4,     5,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     3,     2,     1,     0,    10,     0,    11,     2,
       2,     4,     4,     4,     4,     4,     4,     3,     1,     0,
       4,     3,     4,     1,     2,     2,     4,     3,     4,     4,
       4,     4,     2,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     4,     1,     2,     0,     2,     0,     2,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     1,
       3,     2,     2,     2,     4,     3,     1,     1,     3,     1,
       1,     1,     1,     3,     2,     1,     3,     3,     1,     0,
       2,     0,     1,     5,     3,     3,     1,     1,     1,     3,
       3,     1,     1,     1,     5,     1,     2,     0,     3,     4,
       4,     1,     1,     1,     0,     1,     2,     3,     3,     1,
       4,     4,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     1,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     4,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     4,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     4,     2,     2,     4,     2,     2,
       1,     3,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   439,     0,     0,     0,     0,
     323,     0,     0,    84,   378,     0,   347,     0,     0,   350,
     346,     0,     0,     0,   337,   349,     0,     0,   353,   308,
       0,     0,     0,     0,    52,    90,     0,   348,     0,   345,
     352,     0,   354,     0,     0,     0,     5,   369,     0,     0,
      86,   351,     0,     0,     0,   421,     0,    27,     0,    58,
     340,   432,     0,   372,     3,     0,     7,    32,     8,     9,
      74,    75,     0,     0,   275,   388,     0,   290,   291,    76,
     414,     0,   375,   289,     0,   274,   387,     0,   391,     0,
     417,     0,   413,   395,   412,   415,   420,     0,   279,   371,
     370,   294,   323,     0,     5,    76,   469,   468,     0,   466,
     465,   293,   388,     0,   391,   261,   262,   263,   264,   286,
     285,   284,   283,   282,   281,   280,   323,     0,     0,   324,
       0,   244,   393,     0,   242,   288,     0,   444,     0,   381,
     229,     0,     0,   324,   330,   343,   331,     0,   333,   415,
       0,    87,    85,   159,     0,    76,   439,    41,     0,     0,
     423,    43,     0,     0,     0,     0,   210,     0,     0,   287,
     339,   211,     0,   154,     0,     0,   153,     0,     0,     0,
       0,     0,   438,     0,    14,     0,   374,    45,   388,     0,
     391,     0,     0,     0,   356,   453,     0,   451,    33,     0,
       0,    27,     0,     0,    20,     0,    19,     0,     0,   275,
       0,     0,   341,     0,   342,     0,     0,     0,     0,     0,
     315,     0,    17,    88,    91,    48,   423,   423,    77,     0,
     423,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,   243,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,   423,     0,   423,     0,   433,
     416,     0,     0,     0,     0,   326,     0,     0,   448,   392,
       0,   307,   382,   440,     0,   326,     0,   344,   224,     0,
       0,   416,     0,     0,    50,     0,     0,    42,     0,   424,
       0,    44,     0,     0,     0,     0,    51,   388,   391,   338,
       0,   212,   214,   388,   391,     0,   155,   391,     0,    49,
      61,     0,    27,   121,   388,   391,     0,   470,     0,   436,
       0,   435,   373,     4,    12,    11,   317,    46,    47,     0,
     369,     0,   355,   452,     0,     0,   450,   377,   449,   114,
     114,    40,    60,     0,     0,    71,    73,    22,     0,     0,
      16,    27,   119,    37,     0,    34,    26,    28,    29,    30,
     222,   390,   389,   292,     0,   376,     6,     0,   143,     0,
     388,     0,   391,     0,     0,    93,     0,    82,     0,     0,
       0,   139,     0,   477,   474,     0,   407,   405,     0,     0,
     247,   249,   248,     0,     0,   245,   246,   250,   252,   251,
     266,   265,   268,   267,   269,   271,   272,   270,   260,   259,
     254,   255,   253,   256,   257,   258,   273,     0,   226,   240,
     239,   238,   237,   236,   235,   234,   233,   232,   231,   230,
     475,   408,     0,     0,   430,   426,   404,   425,   429,     0,
       0,   467,   388,   391,   325,     0,   443,     0,   442,   325,
     407,   408,   335,     0,     0,   379,     0,   367,   347,     0,
       0,     0,   359,     0,   357,   160,   366,   358,   157,   139,
     306,    25,   305,     0,     0,     0,     0,   209,   464,   463,
     211,     0,     0,     0,     0,   152,    10,   123,   125,     0,
     462,   438,   438,     0,   316,     0,     4,   458,     0,   456,
     460,   459,   461,     0,   455,   114,     0,   114,     0,    62,
       0,     0,     0,    21,    18,     0,     0,   423,     0,   221,
     220,   223,   276,   216,   422,   148,     0,   144,   145,     0,
       0,     0,   327,    89,     0,    80,    92,    95,     0,   304,
     303,   139,   140,   141,     0,   129,     0,   142,   411,     0,
     319,   318,   406,   278,     0,     0,   227,   321,   320,   410,
     401,   403,   402,   397,   423,     0,   418,   419,   447,   446,
       0,   332,   362,   363,   386,     0,   381,   379,     0,   361,
       0,     0,     0,     0,   108,     0,    27,   106,    57,    38,
       0,   213,     0,     0,    97,    99,    97,   156,   127,     0,
       0,    35,   471,     0,   434,     0,    15,     0,     0,   454,
       0,     0,     0,     0,     0,   110,     0,    64,    72,    54,
      23,     0,     0,     0,   404,   215,   423,   219,     0,   388,
     391,    24,     0,   329,    94,     0,     0,   162,     0,   309,
     139,     0,   131,   431,   277,   343,   423,   423,   394,     0,
       0,     0,   441,     0,   334,     0,   365,   382,   380,     0,
     360,   476,   368,   158,   309,     0,     0,   211,   100,   438,
       0,     0,     0,     0,     0,     0,     0,   126,   437,   225,
      13,     0,     0,     0,   117,   118,    27,   112,   111,     0,
       0,    59,   120,    31,   218,   398,     0,   151,   328,   162,
      96,   193,    78,     0,     0,     0,   132,     0,   228,     0,
       0,   396,   427,   428,   445,   336,   385,   384,   364,     0,
     109,     0,     0,     0,    98,     0,     0,     0,    27,     0,
     122,   457,   113,    27,   116,     0,    27,   217,   193,   197,
     198,   199,   202,   201,   200,     0,     0,   192,    83,   161,
     165,     0,     0,   191,   195,     0,     0,     0,   295,     0,
     135,     0,   134,   399,   400,     0,   297,   107,     0,   101,
      27,   104,    56,    55,    27,   128,    36,   115,     0,     0,
      81,     0,     0,   169,   205,     0,    76,   196,     0,   164,
      27,     0,   313,     0,    27,   136,     0,   133,   383,    27,
      27,   102,    39,     0,   124,     0,    65,     0,     0,   173,
     171,   168,     0,     0,   163,     0,     0,     0,   314,     0,
     310,     0,     0,   138,     0,     0,     0,    27,   208,   170,
       5,     0,   174,   175,     0,     0,   183,     0,     0,   206,
     203,     0,     0,    79,     0,   311,   296,   137,   298,     0,
     105,     0,   172,   176,   177,   187,     0,   178,     0,     0,
     139,   207,   312,   103,    67,     0,   186,   179,   180,   184,
     204,     0,     0,    63,    66,    68,   185,     0,   166,     0,
      69,   181,     0,     0,    27,   189,   167,     0,     0,     0,
     190,    27,     0,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    83,    84,   536,   363,   225,   226,    85,
     228,   396,   397,    87,   657,   731,   913,   914,   915,   384,
     385,   398,   399,   249,    90,   796,    91,   675,   578,    92,
     415,    93,   417,   575,   576,   711,   634,   842,   812,   628,
     333,   381,   546,   726,   393,   528,   638,   641,   715,   584,
     585,   586,   240,   409,   195,   196,   174,   741,   789,   922,
     790,   822,   851,   871,   872,   873,   874,   907,   875,   876,
     877,   905,   926,   791,   792,   793,   794,   825,   795,   185,
     340,   341,   559,   560,   561,   562,    94,    95,   834,   839,
      96,    97,    98,   125,   744,   833,   100,   101,   587,   165,
     166,   611,   694,   189,   233,   318,   102,   614,   506,   103,
     615,   313,   616,   104,   105,   106,   308,   107,   108,   688,
     563,   601,   602,   603,   109,   110,   111,   112,   113,   114,
     115,   116,   330,   476,   477,   478,   117,   360,   361,   158,
     159,   216,   217,   543,   118,   356,   357,   119,   507,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -739
static const yytype_int16 yypact[] =
{
    -739,   105,  1829,  -739,  6630,  6630,   -79,  6630,  6630,  6630,
    6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,
    6630,  6630,   434,   434,  6630,  5232,  6630,   470,    59,    79,
     140,   -60,  5359,  -739,  -739,   129,   136,  5486,    70,  -739,
    -739,  4949,  6630,    76,   193,  -739,   195,   200,  -739,  -739,
     124,   135,   229,   235,  -739,  -739,   241,  -739,   261,  -739,
    -739,   403,  -739,   196,  5613,   362,   181,  -739,   235,  6630,
    -739,  -739,    94,   297,   177,  -739,   235,  -739,  6757,  -739,
     269,   234,   270,   162,  -739,    25,  -739,  -739,  -739,  -739,
    -739,  -739,   243,   324,  -739,  -739,   308,   407,   412,   448,
     437,   366,  -739,  -739,  7018,  -739,  -739,   119,  1679,   359,
    -739,   371,   454,   386,  -739,    98,  -739,   127,  -739,  -739,
    -739,  -739,   405,   392,  -739,   448,  7783,  7783,  6630,  7783,
    7783,  1817,   168,  7615,   108,  -739,  -739,   477,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,   401,   196,   -65,
     394,  -739,  -739,   410,  -739,  -739,   434,  7657,   380,   537,
    -739,   418,   196,   423,   414,   359,  -739,   430,   436,    24,
     127,  -739,  -739,   551,    28,   448,  5232,  -739,  7060,   558,
    6630,  -739,  7102,   438,   429,    29,  7783,  6630,  5740,  -739,
    -739,  6630,  6630,  -739,   227,    32,  -739,   425,   424,  6757,
    4169,  6630,   330,   196,  -739,   339,   318,  -739,   427,  7783,
    1289,   434,  6884,   272,  -739,    22,   402,  -739,  -739,    19,
    7146,  -739,   434,   196,     6,    37,  -739,  4325,  1985,   431,
     433,  7188,   -28,   432,   271,  6630,   -28,   232,   453,  5105,
    -739,   456,  -739,   487,   493,  -739,  6630,  6630,  -739,   -54,
    6630,   198,  6630,  6630,  6630,  5868,  6630,  6630,  6630,  6630,
    6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,
    6630,  6630,  6630,  6630,  6630,  6630,  6630,   470,  -739,  -739,
    -739,  5995,  6630,  6630,  6630,  6630,  6630,  6630,  6630,  6630,
    6630,  6630,  6630,  -739,   419,  6630,   447,  6630,  6630,   234,
     -14,   450,  7230,  6630,   196,   -65,   447,   447,  -739,  -739,
    6122,  -739,  6249,  -739,   196,   423,   146,  -739,  -739,   146,
     447,    -5,  7494,   462,  -739,   458,   460,  -739,  7494,  7783,
     459,  -739,   601,    34,   235,  6630,  -739,   465,  1466,  -739,
     469,   617,  7783,   553,  1478,  6630,  -739,  -739,   124,  -739,
    -739,   478,  -739,  -739,    55,    92,    61,  -739,   481,  -739,
      62,  -739,   336,  -739,  -739,  -739,  -739,  -739,  -739,   484,
     580,  7274,  -739,  -739,   399,   506,  -739,  -739,  -739,   489,
     496,  -739,  -739,  2141,    63,  -739,  -739,    14,   518,   177,
    -739,  -739,  -739,  -739,   504,  -739,  -739,  -739,  -739,  -739,
      40,  -739,  -739,  -739,  7317,  -739,  -739,   434,  -739,    64,
      65,   507,  1088,   644,   -33,   544,   -33,  -739,   508,   510,
     512,   180,   511,  -739,   513,  6630,   359,    -5,   359,   127,
    7824,  7862,  1817,  6630,  7741,   920,  2125,  2280,  2435,  2590,
    2746,  2746,  2746,  2746,  2898,  1281,  1150,  1150,   683,   683,
     591,   591,   591,   477,   477,   477,  -739,   113,  1817,  1817,
    1817,  1817,  1817,  1817,  1817,  1817,  1817,  1817,  1817,  1817,
     513,   359,   359,   514,  -739,  -739,   359,    23,  -739,   516,
    7359,  -739,   176,  1350,   -65,   434,  7783,   434,  7699,   423,
    -739,  -739,  -739,  7494,  7494,  7494,   524,  -739,  -739,   534,
     196,   144,    20,   547,  -739,  -739,  -739,  -739,   657,   180,
    -739,  -739,  -739,  7494,   541,  4481,   529,  7783,  -739,  -739,
    6630,  6630,   215,   215,  7401,  -739,  -739,  4013,   331,  6630,
    -739,   330,   330,   673,  -739,  1517,  -739,  -739,  6630,  -739,
    -739,  -739,  -739,   530,  -739,  -739,   185,  -739,   152,   610,
     434,   536,   555,  -739,  -739,  2297,   540,  6630,   447,   564,
      93,  -739,  -739,  -739,  -739,  -739,  6376,  -739,  -739,  7494,
     570,   196,   423,  -739,   -33,  -739,   694,  -739,   552,  -739,
    -739,   180,  -739,  -739,   560,   707,    12,  -739,  -739,  7444,
    -739,  -739,    -5,  1971,  6630,   470,  -739,  -739,  -739,  -739,
    -739,   670,   672,  -739,  6630,  6630,  -739,  -739,  -739,  -739,
    6503,   605,  -739,  -739,   640,   583,   731,  7494,   196,    35,
     654,   -39,  7494,   613,  -739,   745,  -739,  -739,  -739,  -739,
     614,  7783,   434,   618,   678,  -739,   678,  -739,   355,   235,
    4949,  -739,  -739,    67,  -739,  6630,  -739,  1673,  1423,  -739,
     310,  6630,    11,   615,   188,  -739,   623,   627,  -739,  -739,
    -739,   624,   625,   622,   359,  -739,  6630,   564,   434,    68,
    1201,  -739,   196,   423,   694,   631,   -33,  -739,   629,   641,
     246,   647,   773,  -739,  1971,   359,  6630,  6630,   564,   636,
    7486,   434,  7783,   447,  -739,  7494,  -739,  7494,  -739,   634,
     160,  -739,  -739,  -739,   641,  7494,  2453,  6630,  -739,   330,
     215,   643,   645,   235,   771,   734,  4949,  -739,  -739,  1817,
    -739,   651,   649,   396,  -739,  -739,  -739,  -739,  -739,   -33,
     655,  -739,  -739,  -739,  -739,  -739,   648,  -739,   423,  -739,
    -739,   166,  -739,   656,   660,    15,   798,  7494,  -739,   659,
     661,  -739,  -739,  -739,  -739,  -739,  -739,   719,  -739,   671,
    -739,   666,   669,    71,  -739,  4637,  4637,   799,  -739,   674,
    -739,  -739,  -739,  -739,  4013,   681,  -739,  -739,   639,  -739,
    -739,  -739,  -739,  -739,  -739,   688,   -33,  -739,  -739,  -739,
    -739,   684,   405,   650,  -739,    51,   682,    18,  -739,   685,
     820,  7494,  -739,  -739,  -739,  7494,  -739,  -739,  4793,  -739,
    -739,  -739,  -739,  -739,  -739,  4013,  -739,  4013,   690,  2609,
    -739,   825,    21,  -739,   834,    52,   448,  -739,   712,  -739,
    -739,   704,  -739,    74,  -739,   838,  7494,  -739,  -739,  -739,
    -739,  -739,  -739,  2765,  4013,   703,  -739,  7494,   -33,   132,
    -739,  -739,  7494,   709,  -739,   720,   844,  2921,  -739,    86,
    -739,  3077,  7494,  -739,  3233,  3389,   706,  -739,  -739,  -739,
     791,   715,   132,  -739,   713,   794,   752,   721,   740,  -739,
     861,   738,  7494,  -739,   746,  -739,  -739,  -739,  -739,   737,
    -739,  3545,  -739,  -739,  -739,   810,   -33,  -739,   757,  7494,
     180,  -739,  -739,  -739,   815,   759,   760,   892,  -739,  -739,
    -739,   747,   749,  -739,   815,  -739,  -739,   -33,  -739,   -33,
    -739,  -739,   298,   756,  -739,  -739,  -739,   750,  3701,   755,
    -739,  -739,  3857,  -739
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -739,  -739,  -331,   -12,  -739,  -739,  -739,  -739,   519,  -739,
    -218,  -739,     0,  -739,  -739,  -739,  -739,  -739,    -4,  -739,
     361,    -1,     7,  -121,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,   335,   277,  -498,  -739,   148,  -739,
    -739,  -739,  -350,   192,  -739,  -739,  -739,  -739,  -739,  -489,
    -739,   237,   -85,  -739,  -739,   571,  -739,   179,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,    48,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -738,  -739,  -739,  -739,
    -493,  -739,   365,  -739,  -739,  -739,   851,     2,  -739,  -739,
     -43,  -739,  -739,    -2,   218,  -739,  -739,    -9,  -393,  -269,
    -739,  -739,  -739,  -739,  -739,   247,   352,   549,  -739,  -739,
     314,   317,  -739,   736,   -37,   742,  -390,   473,   876,  -739,
    -525,  -739,  -739,   274,  -229,  -739,   608,  -739,  -739,   -22,
      31,  -739,  -194,  -301,  -739,   106,   -21,  -505,   409,   758,
    -739,    58,   416,  -739,  -739,  -739,   413,  -739,  -739,  -739
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -474
static const yytype_int16 yytable[] =
{
      99,    88,    86,   383,   301,   168,   170,   190,   456,    89,
     149,   149,   132,   150,   150,   163,   200,   565,   164,   492,
     623,   573,   426,   577,   293,   636,   643,   630,   175,   848,
     548,   219,   535,   241,   665,   230,   323,   335,   724,   227,
     348,   184,   514,   701,   681,   389,   379,   799,   297,   205,
     831,   206,   418,   419,   325,   827,   422,   297,   169,   828,
     853,   211,   224,  -473,   238,   471,   208,   475,   212,   529,
     532,   550,   566,  -146,   128,   532,  -149,   426,   471,   532,
     317,   388,   859,   420,   374,   604,   297,   490,   239,   552,
     491,   475,   678,   176,   570,   608,   571,   609,   702,   421,
    -472,   473,   557,   479,   124,     3,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   884,   215,
     175,   366,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   527,   238,   305,   298,   234,  -406,
     237,   171,   665,   238,   149,   230,   298,   150,   300,   238,
     315,  -393,  -393,   375,  -324,   666,   230,   906,  -409,   682,
     297,   172,   800,   751,   238,   832,   725,  -393,  -393,  -326,
     380,   558,   849,   555,   605,   298,   850,   595,   279,   280,
     242,   577,   149,   324,   336,   150,   146,   349,   515,   337,
     149,   362,   390,   150,   343,   650,   411,   654,   180,   149,
     353,   321,   150,   354,   763,   647,   829,   854,   218,  -473,
     149,   387,   764,   150,   762,   530,   533,   551,   567,  -146,
     366,   718,  -149,   183,   558,   809,    99,   392,   860,   187,
     429,   651,  -409,   885,   779,   780,   781,   782,   783,   784,
     147,   410,   148,   652,   620,   221,  -472,   632,   214,   298,
     124,  -405,   785,    49,   582,   168,   170,   664,   583,   570,
      75,   571,  -300,  -300,   651,   163,   179,   651,   164,   870,
      81,   193,   197,   429,    75,   429,   652,   534,   737,   652,
     423,   194,   427,   740,   299,   429,   429,   173,   146,   238,
     653,   238,   484,    75,  -325,   429,  -324,   516,   429,   429,
     146,   754,   489,    81,   655,   482,   223,   570,   169,   571,
     502,   786,   787,   503,   124,   239,   502,   124,   788,   503,
     582,   211,  -299,  -299,   583,   427,   685,   427,   212,   475,
    -301,  -301,   376,   124,  -130,   424,   775,   427,   427,   633,
     728,   590,   147,   591,   148,    75,   188,   427,   191,   425,
     427,   427,   124,   192,   147,    81,   148,   428,   211,   211,
     211,   211,    75,   663,   124,   212,   212,   212,   212,   232,
     236,   376,    81,   570,    75,   571,   372,   224,   345,   215,
     243,    99,   198,   124,    81,   235,   597,   598,   199,   651,
     405,   600,   755,   823,   201,   149,   639,   640,   150,   534,
     472,   652,   572,   146,   572,   252,   253,   254,   706,   572,
     689,   911,   428,   472,   202,   722,   215,   215,   215,   215,
     713,   714,   255,   724,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   149,   277,   238,   150,   924,
     222,   211,  -326,   925,   358,   869,   878,   147,   212,   148,
     592,   244,   213,   245,   475,   238,   214,   124,   238,   246,
    -325,   239,   736,   149,   247,   149,   150,    75,   150,   878,
     248,   502,   502,   502,   503,   503,   503,    81,   619,   239,
     364,   211,   749,   750,   365,   151,   154,   572,   212,   250,
     251,   502,   376,   908,   503,   294,   377,   146,   774,   215,
     149,   149,   239,   150,   150,   627,   295,   296,    49,   149,
     149,   203,   150,   150,   921,    99,   923,   277,   306,   540,
     304,   354,   203,    99,    88,    86,   541,   429,   149,   311,
     124,   150,    89,   146,   307,   312,   542,   314,   316,   215,
     815,   725,   238,    99,   204,   817,   470,   502,   819,   673,
     503,   147,   572,   148,   319,   322,    75,   320,   669,   572,
     425,   124,   328,   168,   170,   332,    81,   334,   351,   600,
     350,    75,   367,   163,   474,   400,   164,   401,   403,   427,
     406,    81,   843,   413,    75,   414,   844,   161,   425,   162,
     317,   416,   716,   421,    81,   502,   700,   124,   503,   508,
     502,   509,   857,   503,   510,   513,   861,    75,   512,   518,
     149,   864,   865,   150,   520,   521,   169,    81,   522,   373,
     153,   153,   378,   526,   531,   167,   537,   274,   275,   276,
     717,   277,   538,   544,   545,    99,    88,    86,   373,   891,
     378,   547,   373,   378,    89,   553,   149,   556,   569,   150,
     738,   568,   574,   618,   572,   581,  -430,   579,   572,   580,
     588,   622,   429,   599,   504,   606,   767,   617,   625,   149,
     504,   621,   150,   502,   629,   502,   503,   645,   503,   649,
     656,   659,   660,   502,   662,   558,   503,   149,   149,   672,
     150,   150,   676,   677,    99,   855,   928,   779,   780,   781,
     782,   783,   784,   932,   679,   680,   770,   572,   779,   780,
     781,   782,   783,   784,   427,   785,   271,   272,   273,   274,
     275,   276,   686,   277,   687,   502,   693,   695,   503,   697,
     126,   127,   696,   129,   130,   131,   133,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   372,   705,
     155,   157,   160,  -194,   153,   811,   811,   704,   178,   707,
     727,   709,    99,   182,   572,   710,   729,   730,   186,   732,
     733,   734,   739,   742,   786,   787,   743,   747,   758,   502,
     826,   820,   503,   502,   746,   752,   503,   765,   768,   766,
     209,   769,   153,   771,   772,   220,   776,   777,   841,   797,
     153,   798,   801,    99,   231,    99,   805,    99,   803,   153,
     804,   807,   806,   808,   502,   821,   814,   503,   818,   816,
     153,   824,   835,   830,   836,   502,   572,   572,   503,   847,
     502,    99,    99,   503,   845,   504,   504,   504,   852,   856,
     502,   858,   862,   503,   867,    99,   880,   881,   882,    99,
     572,   890,    99,    99,   302,   504,  -182,   892,   894,   895,
     502,   505,   896,   503,   898,   899,   897,   511,   779,   780,
     781,   782,   783,   784,   572,   167,   134,   502,   572,    99,
     503,   900,   903,   902,   909,   912,   916,  -188,   152,   152,
     917,   918,   919,   927,   929,   572,   931,   572,   554,   674,
     920,   658,   157,   712,   813,   773,   329,   745,   778,   525,
     893,   504,   759,   209,   231,   667,    99,   342,   209,   229,
      99,   699,   748,   698,   326,   231,   346,   209,   735,     0,
     210,   644,   642,     0,     0,     0,     0,     0,   371,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   504,
     277,   404,     0,     0,   504,   209,     0,     0,     0,     0,
       0,     0,   329,   329,     0,     0,   329,     0,   430,   431,
     432,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,     0,     0,   153,     0,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,     0,
       0,   329,   309,   329,   480,     0,     0,     0,     0,   209,
       0,     0,   612,   613,     0,     0,   486,   504,   488,   504,
       0,     0,     0,     0,     0,     0,     0,   504,     0,     0,
       0,     0,   624,   338,     0,   153,     0,     0,   344,     0,
     347,   517,     0,     0,     0,     0,     0,   355,   359,     0,
       0,   524,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,   153,     0,   153,  -147,     0,   386,   504,
       0,     0,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   412,     0,     0,   671,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   153,     0,     0,     0,     0,     0,     0,     0,   153,
     153,     0,     0,     0,     0,     0,     0,  -393,  -393,     0,
       0,     0,     0,   504,     0,     0,     0,   504,   153,     0,
       0,   589,     0,     0,     0,     0,     0,     0,     0,   593,
       0,   703,     0,     0,     0,     0,     0,     0,     0,   483,
       0,     0,     0,     0,     0,     0,     0,     0,   504,  -474,
    -474,   269,   270,   271,   272,   273,   274,   275,   276,   504,
     277,     0,     0,   167,   504,     0,     0,     0,     0,  -150,
       0,     0,     0,     0,   504,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,     0,     0,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
     153,     0,  -147,     0,   756,     0,   757,     0,     0,     0,
       0,   504,     0,     0,   760,     0,   342,   631,     0,     0,
    -393,  -393,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,   648,     0,   153,     0,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,     0,     0,   802,     0,     0,   153,
       0,     0,   209,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,     0,   153,   153,  -474,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     684,   277,     0,   596,     0,     0,     0,     0,     0,     0,
     329,   690,     0,     0,     0,     0,   692,     0,  -393,  -393,
     837,     0,     0,     0,   838,  -150,     0,     0,     0,     0,
       0,   309,     0,   309,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,     0,     0,     0,
       0,   719,     0,     0,     0,   863,     0,   723,     0,     0,
       0,     0,     0,     0,     0,     0,   868,     0,   635,   635,
       0,   879,   329,     0,     0,   355,     0,   359,   359,  -393,
    -393,   887,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   329,     0,     0,   386,     0,     0,     0,
       0,   901,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,   670,   342,   368,     0,     0,     0,   910,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,     0,     0,     0,     0,     0,     0,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,  -302,  -302,     0,     0,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,  -393,  -393,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,  -393,  -393,     0,
       0,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,     0,   523,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,   309,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   721,     0,     0,   359,   635,     0,    28,    29,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,    35,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
     519,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,     0,     0,    77,   646,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,  -393,  -393,
       0,     0,     0,     0,    28,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,    35,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     0,
      75,    76,     0,     0,    77,   720,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   255,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,     0,     0,    35,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    75,    76,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   394,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,   395,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   394,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   123,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,    77,   549,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,   661,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   394,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   123,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,   761,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,   394,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
     123,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   394,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,   846,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,  -474,
    -474,  -474,  -474,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,   866,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   394,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,  -474,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   394,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   123,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,    77,   883,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   394,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   123,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,    77,   886,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,   394,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
     123,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,    77,   888,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,   889,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   394,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   394,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,   904,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   394,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   123,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,    77,   930,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   394,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   123,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,    77,   933,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,   394,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
     123,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,     0,    53,     0,    54,     0,
       0,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
       0,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
       0,     0,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,     0,    53,     0,    54,     0,     0,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,     0,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,     0,     0,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,     0,    53,     0,
      54,     0,     0,    56,    57,    58,    59,    60,   123,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,     0,    71,    72,    73,     0,     0,    75,    76,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   810,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,    32,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,     0,    53,     0,    54,     0,     0,    56,
      57,    58,    59,    60,   123,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,     0,    71,
      72,    73,     0,     0,    75,    76,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     840,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
      32,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,     0,
      53,     0,    54,     0,     0,    56,    57,    58,    59,    60,
     123,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,     0,    71,    72,    73,     0,     0,
      75,    76,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,     0,    53,     0,    54,     0,
       0,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
       0,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   122,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   123,    62,    63,     4,     5,     6,     7,     8,
       0,    65,   124,    67,     9,   121,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,    78,   408,
       0,    80,    81,    82,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   122,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,   123,
      62,    63,     4,     5,     6,     7,     8,     0,    65,   124,
      67,     9,   121,     0,    71,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    78,     0,     0,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,   122,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,   123,    62,    63,     4,
       5,     6,     7,     8,     0,    65,   124,    67,     9,   121,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,    78,     0,   177,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,   122,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    36,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,   123,    62,    63,     4,     5,     6,     7,
       8,     0,    65,   124,    67,     9,   121,     0,    71,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,    78,
       0,   181,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   122,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      36,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
     123,    62,    63,     4,     5,     6,     7,     8,     0,    65,
     124,    67,     9,    10,     0,    71,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,    78,     0,   207,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,   122,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    36,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,   123,    62,    63,
       0,     4,     5,     6,     7,     8,    65,   124,    67,     0,
       9,   121,    71,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,    78,   339,   433,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,   122,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    36,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,    45,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,    60,   123,    62,    63,     4,     5,
       6,     7,     8,     0,    65,   124,    67,     9,   121,     0,
      71,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,    78,     0,     0,    80,    81,    82,   457,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   122,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   123,    62,    63,     4,     5,     6,     7,     8,
       0,    65,   124,    67,     9,   121,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,    78,     0,
       0,    80,    81,    82,   485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   122,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,   123,
      62,    63,     4,     5,     6,     7,     8,     0,    65,   124,
      67,     9,   121,     0,    71,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    78,     0,     0,    80,    81,
      82,   487,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,   122,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,   123,    62,    63,     4,
       5,     6,     7,     8,     0,    65,   124,    67,     9,   121,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,    78,     0,     0,    80,    81,    82,   668,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,   122,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    36,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,   123,    62,    63,     4,     5,     6,     7,
       8,     0,    65,   124,    67,     9,   121,     0,    71,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,    78,
       0,     0,    80,    81,    82,   691,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   122,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      36,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
     123,    62,    63,     4,     5,     6,     7,     8,     0,    65,
     124,    67,     9,   121,     0,    71,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,    78,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,   122,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    36,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,   123,    62,    63,
       4,     5,     6,     7,     8,     0,    65,   124,    67,     9,
      10,     0,    71,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,    78,     0,     0,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
     122,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    36,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,    60,   123,    62,    63,     4,     5,     6,
       7,     8,     0,    65,   124,    67,     9,   121,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
      78,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   122,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   123,    62,    63,     0,     0,     0,     0,     0,     0,
      65,   124,   370,     0,     0,     0,    71,   252,   253,   254,
       0,    75,     0,     0,     0,     0,     0,    78,     0,     0,
      80,    81,    82,     0,   255,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,     0,   252,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   278,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,   327,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   331,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   382,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   255,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   481,   255,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   539,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,   252,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   607,   255,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,   493,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   637,     0,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   496,     0,
       0,     0,     0,     0,     0,     0,     0,   497,     0,     0,
       0,   498,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,   683,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    59,
      60,   499,    62,   500,   252,   253,   254,     0,     0,     0,
     501,   124,     0,     0,     0,     0,    71,     0,   753,     0,
       0,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,   252,   253,
     254,     0,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
     252,   253,   254,     0,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   594,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,   252,   253,   254,     0,   610,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   254,   277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-739)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-474)))

static const yytype_int16 yycheck[] =
{
       2,     2,     2,   221,   125,    27,    27,    44,   277,     2,
      22,    23,    10,    22,    23,    27,    53,   407,    27,   320,
     509,   414,   251,   416,   109,   523,   531,   520,    30,     8,
     380,    68,   363,     8,   559,    78,     8,     8,    27,    76,
       8,    41,     8,    82,    32,     8,    27,    32,    62,    61,
      32,    63,   246,   247,   175,   793,   250,    62,    27,     8,
       8,    89,    74,     8,   129,   294,    64,   296,    96,     8,
       8,     8,     8,     8,   153,     8,     8,   306,   307,     8,
     165,    75,     8,   137,    62,    62,    62,   316,   153,    75,
     319,   320,   581,   153,   127,   485,   129,   487,   137,   153,
       8,   295,    62,   297,   137,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    32,   147,
     122,   206,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   352,   129,   148,   151,    80,   153,
      82,    82,   667,   129,   156,   188,   151,   156,   117,   129,
     162,    59,    60,   131,   134,    62,   199,   895,   134,   147,
      62,    82,   147,   688,   129,   147,   155,    59,    60,   134,
     151,   131,   151,   391,   151,   151,   155,    64,    59,    60,
     155,   574,   194,   155,   155,   194,    73,   155,   154,   187,
     202,   203,   155,   202,   192,   545,   239,   547,    62,   211,
     200,   170,   211,   201,   709,   536,   155,   155,    27,   154,
     222,   223,   710,   222,   707,   154,   154,   154,   154,   154,
     305,   154,   154,   153,   131,   154,   228,   227,   154,   153,
     251,    79,   134,   147,    68,    69,    70,    71,    72,    73,
     127,   239,   129,    91,   100,   151,   154,    32,   104,   151,
     137,   153,    86,   113,    74,   277,   277,   558,    78,   127,
     147,   129,   154,   155,    79,   277,   137,    79,   277,   137,
     157,   147,   137,   294,   147,   296,    91,   362,   668,    91,
      82,   157,   251,   676,   157,   306,   307,   147,    73,   129,
     105,   129,   304,   147,   134,   316,   134,   334,   319,   320,
      73,   691,   314,   157,   152,   303,   129,   127,   277,   129,
     322,   145,   146,   322,   137,   153,   328,   137,   152,   328,
      74,    89,   154,   155,    78,   294,   595,   296,    96,   558,
     154,   155,   100,   137,   154,   137,   729,   306,   307,   124,
     152,   426,   127,   428,   129,   147,   153,   316,   153,   151,
     319,   320,   137,   153,   127,   157,   129,   251,    89,    89,
      89,    89,   147,   557,   137,    96,    96,    96,    96,   100,
     100,   100,   157,   127,   147,   129,   104,   389,   151,   147,
     137,   383,   153,   137,   157,   151,   471,   472,   153,    79,
     158,   476,   693,   786,   153,   407,    65,    66,   407,   484,
     294,    91,   414,    73,   416,     9,    10,    11,   626,   421,
     604,   900,   306,   307,   153,   105,   147,   147,   147,   147,
      65,    66,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   457,    50,   129,   457,   151,
     153,    89,   134,   155,   124,   848,   849,   127,    96,   129,
     429,   137,   100,   155,   693,   129,   104,   137,   129,    62,
     134,   153,   666,   485,    62,   487,   485,   147,   487,   872,
      32,   493,   494,   495,   493,   494,   495,   157,   500,   153,
     151,    89,   686,   687,   155,    22,    23,   509,    96,    62,
     134,   513,   100,   896,   513,   134,   104,    73,   726,   147,
     522,   523,   153,   522,   523,   515,    62,   131,   113,   531,
     532,   129,   531,   532,   917,   527,   919,    50,   134,   130,
     129,   529,   129,   535,   535,   535,   137,   558,   550,   159,
     137,   550,   535,    73,   134,     8,   147,   129,   134,   147,
     768,   155,   129,   555,   151,   773,   137,   569,   776,   571,
     569,   127,   574,   129,   134,    14,   147,   131,   566,   581,
     151,   137,    14,   595,   595,   137,   157,   148,   154,   664,
     155,   147,   155,   595,   137,   154,   595,   154,   156,   558,
     137,   157,   810,   137,   147,   108,   814,   127,   151,   129,
     685,   108,   639,   153,   157,   617,   618,   137,   617,   147,
     622,   153,   830,   622,   154,    14,   834,   147,   159,   154,
     632,   839,   840,   632,   155,     8,   595,   157,    75,   213,
      22,    23,   216,   155,   153,    27,   152,    46,    47,    48,
     640,    50,    62,   137,   155,   647,   647,   647,   232,   867,
     234,   155,   236,   237,   647,   137,   668,   153,    14,   668,
     672,   154,   118,   129,   676,   153,   153,   159,   680,   159,
     159,    14,   693,   159,   322,   159,   713,   153,   137,   691,
     328,   134,   691,   695,   155,   697,   695,    14,   697,   159,
      80,   155,   137,   705,   154,   131,   705,   709,   710,   129,
     709,   710,     8,   151,   706,   826,   924,    68,    69,    70,
      71,    72,    73,   931,   154,     8,   716,   729,    68,    69,
      70,    71,    72,    73,   693,    86,    43,    44,    45,    46,
      47,    48,    62,    50,    62,   747,   131,    97,   747,     8,
       4,     5,   159,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   104,    14,
      24,    25,    26,   113,   156,   765,   766,   154,    32,   155,
     155,   153,   774,    37,   786,    97,   153,   150,    42,   155,
     155,   159,   151,   154,   145,   146,   145,    14,   154,   801,
     792,   152,   801,   805,   147,   159,   805,   154,    27,   154,
      64,    67,   194,   152,   155,    69,   151,   159,   808,   153,
     202,   151,    14,   815,    78,   817,    97,   819,   159,   211,
     159,   155,   151,   154,   836,   137,    27,   836,   147,   155,
     222,   147,   147,   151,    14,   847,   848,   849,   847,    14,
     852,   843,   844,   852,   154,   493,   494,   495,    14,   137,
     862,   147,    14,   862,   151,   857,   147,   137,    14,   861,
     872,   155,   864,   865,   128,   513,    75,   152,   155,    75,
     882,   322,   120,   882,   134,    14,   155,   328,    68,    69,
      70,    71,    72,    73,   896,   277,    10,   899,   900,   891,
     899,   153,   155,   147,   137,    80,   137,   137,    22,    23,
       8,   154,   153,   147,   154,   917,   151,   919,   389,   574,
     914,   550,   176,   636,   766,   723,   180,   680,   739,   348,
     872,   569,   704,   187,   188,   560,   928,   191,   192,    78,
     932,   617,   685,   616,   176,   199,   194,   201,   664,    -1,
      64,   532,   529,    -1,    -1,    -1,    -1,    -1,   212,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   617,
      50,   235,    -1,    -1,   622,   239,    -1,    -1,    -1,    -1,
      -1,    -1,   246,   247,    -1,    -1,   250,    -1,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   407,    -1,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,    -1,
      -1,   295,   156,   297,   298,    -1,    -1,    -1,    -1,   303,
      -1,    -1,   493,   494,    -1,    -1,   310,   695,   312,   697,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   705,    -1,    -1,
      -1,    -1,   513,   187,    -1,   457,    -1,    -1,   192,    -1,
     194,   335,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,
      -1,   345,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,   485,    -1,   487,     8,    -1,   222,   747,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,   239,    -1,    -1,   569,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     522,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   531,
     532,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,   801,    -1,    -1,    -1,   805,   550,    -1,
      -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   622,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   836,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   847,
      50,    -1,    -1,   595,   852,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,   862,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   882,    -1,    -1,    -1,    -1,    -1,
     632,    -1,   154,    -1,   695,    -1,   697,    -1,    -1,    -1,
      -1,   899,    -1,    -1,   705,    -1,   520,   521,    -1,    -1,
      59,    60,    -1,    -1,    -1,   529,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   538,    -1,   668,    -1,    -1,    -1,
      -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   557,    -1,    -1,   747,    -1,    -1,   691,
      -1,    -1,   566,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,   709,   710,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     594,    50,    -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,
     604,   605,    -1,    -1,    -1,    -1,   610,    -1,    59,    60,
     801,    -1,    -1,    -1,   805,   154,    -1,    -1,    -1,    -1,
      -1,   485,    -1,   487,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,   645,    -1,    -1,    -1,   836,    -1,   651,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   847,    -1,   522,   523,
      -1,   852,   666,    -1,    -1,   529,    -1,   531,   532,    59,
      60,   862,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   686,   687,    -1,    -1,   550,    -1,    -1,    -1,
      -1,   882,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   566,   707,   155,    -1,    -1,    -1,   899,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   154,   155,    -1,    -1,   632,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    59,    60,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,   668,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,   691,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,   159,    -1,    -1,   709,   710,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
     154,    -1,    -1,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,   148,    -1,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    59,    60,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,    88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,    -1,    -1,   151,   152,   153,    -1,   155,   156,
     157,   158,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    86,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,   148,    -1,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,    -1,   147,   148,    -1,    -1,   151,   152,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,    -1,   147,   148,
      -1,    -1,   151,   152,   153,    -1,   155,   156,   157,   158,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,    -1,   147,   148,    -1,    -1,   151,    -1,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,    -1,
     147,   148,    -1,    -1,   151,    -1,   153,    -1,   155,   156,
     157,   158,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,   152,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,    -1,   147,   148,    -1,    -1,   151,    -1,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,    -1,   147,   148,
      -1,    -1,   151,   152,   153,    -1,   155,   156,   157,   158,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,    -1,   147,   148,    -1,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,    -1,
     147,   148,    -1,    -1,   151,   152,   153,    -1,   155,   156,
     157,   158,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,   102,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,    -1,   147,   148,    -1,    -1,   151,   152,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,    -1,   147,   148,
      -1,    -1,   151,   152,   153,    -1,   155,   156,   157,   158,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,    -1,   147,   148,    -1,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,    -1,
     147,   148,    -1,    -1,   151,    -1,   153,    -1,   155,   156,
     157,   158,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,   117,    -1,   119,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,    -1,   119,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,    -1,   147,   148,    -1,    -1,   151,    -1,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,   117,    -1,
     119,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,    -1,   142,   143,   144,    -1,    -1,   147,   148,
      -1,    -1,   151,    -1,   153,    -1,   155,   156,   157,   158,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,    -1,   119,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,    -1,    -1,   147,   148,    -1,    -1,   151,    -1,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
     117,    -1,   119,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,    -1,   142,   143,   144,    -1,    -1,
     147,   148,    -1,    -1,   151,    -1,   153,    -1,   155,   156,
     157,   158,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,   117,    -1,   119,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,   137,   138,    12,    13,    -1,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,   156,   157,   158,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,   137,
     138,    12,    13,    -1,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,   137,   138,    12,    13,
      -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,   153,    -1,   155,   156,   157,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,   137,   138,    12,    13,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
     137,   138,    12,    13,    -1,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,   156,
     157,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,     3,     4,     5,     6,     7,   136,   137,   138,    -1,
      12,    13,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,   153,   154,    27,   156,   157,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,   137,   138,    12,    13,    -1,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,   137,   138,    12,    13,    -1,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,   137,
     138,    12,    13,    -1,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,   137,   138,    12,    13,
      -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,   137,   138,    12,    13,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
     137,   138,    12,    13,    -1,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,   137,   138,    12,
      13,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,   137,   138,    12,    13,    -1,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,     9,    10,    11,
      -1,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,   155,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,   155,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,   155,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   155,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,
     126,   127,   128,   129,     9,    10,    11,    -1,    -1,    -1,
     136,   137,    -1,    -1,    -1,    -1,   142,    -1,   152,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    11,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   161,   162,     0,     3,     4,     5,     6,     7,    12,
      13,    43,    44,    49,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    71,    72,
      73,    74,    77,    82,    83,    86,    87,    88,    90,    92,
      93,    94,    98,    99,   107,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   147,   148,   151,   153,   155,
     156,   157,   158,   163,   164,   169,   172,   173,   181,   182,
     184,   186,   189,   191,   246,   247,   250,   251,   252,   253,
     256,   257,   266,   269,   273,   274,   275,   277,   278,   284,
     285,   286,   287,   288,   289,   290,   291,   296,   304,   307,
     309,    13,    73,   127,   137,   253,   273,   273,   153,   273,
     273,   273,   247,   273,   278,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,    73,   127,   129,   163,
     257,   277,   278,   286,   277,   273,    32,   273,   299,   300,
     273,   127,   129,   163,   257,   259,   260,   286,   289,   290,
     296,    82,    82,   147,   216,   253,   153,   155,   273,   137,
      62,   155,   273,   153,   172,   239,   273,   153,   153,   263,
     274,   153,   153,   147,   157,   214,   215,   137,   153,   153,
     274,   153,   153,   129,   151,   163,   163,   155,   247,   273,
     278,    89,    96,   100,   104,   147,   301,   302,    27,   274,
     273,   151,   153,   129,   163,   167,   168,   274,   170,   246,
     250,   273,   100,   264,   301,   151,   100,   301,   129,   153,
     212,     8,   155,   137,   137,   155,    62,    62,    32,   183,
      62,   134,     9,    10,    11,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    50,   155,    59,
      60,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   212,   134,    62,   131,    62,   151,   157,
     290,   183,   273,    97,   129,   163,   134,   134,   276,   278,
      97,   159,     8,   271,   129,   163,   134,   212,   265,   134,
     131,   290,    14,     8,   155,   183,   299,   155,    14,   273,
     292,   155,   137,   200,   148,     8,   155,   247,   278,   154,
     240,   241,   273,   247,   278,   151,   275,   278,     8,   155,
     155,   154,    27,   172,   247,   278,   305,   306,   124,   278,
     297,   298,   163,   166,   151,   155,   212,   155,   155,   278,
     138,   273,   104,   302,    62,   131,   100,   104,   302,    27,
     151,   201,   155,   170,   179,   180,   278,   163,    75,     8,
     155,    27,   172,   204,   116,   152,   171,   172,   181,   182,
     154,   154,   154,   156,   273,   158,   137,    32,   154,   213,
     247,   250,   278,   137,   108,   190,   108,   192,   292,   292,
     137,   153,   292,    82,   137,   151,   284,   290,   295,   296,
     273,   273,   273,    27,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   259,    32,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     137,   284,   295,   292,   137,   284,   293,   294,   295,   292,
     273,   154,   247,   278,   163,    32,   273,    32,   273,   163,
     284,   284,   293,    43,    44,    62,    74,    83,    87,   127,
     129,   136,   163,   257,   266,   267,   268,   308,   147,   153,
     154,   267,   159,    14,     8,   154,   274,   273,   154,   154,
     155,     8,    75,    75,   273,   215,   155,   170,   205,     8,
     154,   153,     8,   154,   212,   162,   165,   152,    62,   152,
     130,   137,   147,   303,   137,   155,   202,   155,   202,   152,
       8,   154,    75,   137,   168,   170,   153,    62,   131,   242,
     243,   244,   245,   280,   152,   276,     8,   154,   154,    14,
     127,   129,   163,   258,   118,   193,   194,   258,   188,   159,
     159,   153,    74,    78,   209,   210,   211,   258,   159,   273,
     212,   212,   290,   273,    27,    64,   278,   212,   212,   159,
     212,   281,   282,   283,    62,   151,   159,   152,   276,   276,
      97,   261,   267,   267,   267,   270,   272,   153,   129,   163,
     100,   134,    14,   209,   267,   137,    27,   172,   199,   155,
     240,   273,    32,   124,   196,   278,   196,   152,   206,    65,
      66,   207,   306,   297,   298,    14,   152,   162,   273,   159,
     202,    79,    91,   105,   202,   152,    80,   174,   180,   155,
     137,   106,   154,   292,   293,   280,    62,   242,    32,   247,
     278,   267,   129,   163,   194,   187,     8,   151,   209,   154,
       8,    32,   147,   152,   273,   259,    62,    62,   279,   292,
     273,    32,   273,   131,   262,    97,   159,     8,   271,   270,
     163,    82,   137,   267,   154,    14,   170,   155,   278,   153,
      97,   195,   195,    65,    66,   208,   274,   172,   154,   273,
     152,   159,   105,   273,    27,   155,   203,   155,   152,   153,
     150,   175,   155,   155,   159,   283,   292,   276,   163,   151,
     258,   217,   154,   145,   254,   211,   147,    14,   265,   292,
     292,   280,   159,   152,   276,   293,   267,   267,   154,   254,
     267,   101,   240,   297,   196,   154,   154,   274,    27,    67,
     172,   152,   155,   203,   170,   258,   151,   159,   217,    68,
      69,    70,    71,    72,    73,    86,   145,   146,   152,   218,
     220,   233,   234,   235,   236,   238,   185,   153,   151,    32,
     147,    14,   267,   159,   159,    97,   151,   155,   154,   154,
      27,   172,   198,   198,    27,   170,   155,   170,   147,   170,
     152,   137,   221,   258,   147,   237,   253,   236,     8,   155,
     151,    32,   147,   255,   248,   147,    14,   267,   267,   249,
      27,   172,   197,   170,   170,   154,   152,    14,     8,   151,
     155,   222,    14,     8,   155,   183,   137,   170,   147,     8,
     154,   170,    14,   267,   170,   170,   103,   151,   267,   258,
     137,   223,   224,   225,   226,   228,   229,   230,   258,   267,
     147,   137,    14,   152,    32,   147,   152,   267,   152,   102,
     155,   170,   152,   225,   155,    75,   120,   155,   134,    14,
     153,   267,   147,   155,   152,   231,   236,   227,   258,   137,
     267,   209,    80,   176,   177,   178,   137,     8,   154,   153,
     178,   258,   219,   258,   151,   155,   232,   147,   170,   154,
     152,   151,   170,   152
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (analyzer, observers, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass &observers;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass &observers;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass &observers;
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass &observers;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);
  YYUSE (observers);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




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
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::FullParserObserverClass &observers;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1802 of yacc.c  */
#line 375 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:
/* Line 1802 of yacc.c  */
#line 379 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:
/* Line 1802 of yacc.c  */
#line 380 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 5:
/* Line 1802 of yacc.c  */
#line 384 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 6:
/* Line 1802 of yacc.c  */
#line 385 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameAppend((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 7:
/* Line 1802 of yacc.c  */
#line 389 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:
/* Line 1802 of yacc.c  */
#line 390 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:
/* Line 1802 of yacc.c  */
#line 391 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:
/* Line 1802 of yacc.c  */
#line 392 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 11:
/* Line 1802 of yacc.c  */
#line 393 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 12:
/* Line 1802 of yacc.c  */
#line 394 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:
/* Line 1802 of yacc.c  */
#line 395 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 14:
/* Line 1802 of yacc.c  */
#line 396 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:
/* Line 1802 of yacc.c  */
#line 397 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    {  (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 16:
/* Line 1802 of yacc.c  */
#line 398 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 17:
/* Line 1802 of yacc.c  */
#line 399 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 18:
/* Line 1802 of yacc.c  */
#line 403 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 19:
/* Line 1802 of yacc.c  */
#line 404 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 20:
/* Line 1802 of yacc.c  */
#line 408 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceUse((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 21:
/* Line 1802 of yacc.c  */
#line 409 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 22:
/* Line 1802 of yacc.c  */
#line 410 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 23:
/* Line 1802 of yacc.c  */
#line 411 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsoluteAlias((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 24:
/* Line 1802 of yacc.c  */
#line 415 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 25:
/* Line 1802 of yacc.c  */
#line 416 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(2) - (4)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 26:
/* Line 1802 of yacc.c  */
#line 420 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:
/* Line 1802 of yacc.c  */
#line 421 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 31:
/* Line 1802 of yacc.c  */
#line 429 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 33:
/* Line 1802 of yacc.c  */
#line 435 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 34:
/* Line 1802 of yacc.c  */
#line 439 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:
/* Line 1802 of yacc.c  */
#line 440 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (5)].expression));
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (5)].statementList)); 
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList));
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 36:
/* Line 1802 of yacc.c  */
#line 444 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (8)].statementList));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (8)].statementList));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (8)].statementList)); }
    break;

  case 37:
/* Line 1802 of yacc.c  */
#line 448 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));
																										               (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 38:
/* Line 1802 of yacc.c  */
#line 450 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (5)].statementList), (yyvsp[(4) - (5)].expression)); }
    break;

  case 39:
/* Line 1802 of yacc.c  */
#line 459 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList)); 
																									                   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																									                   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); 
																									                 }
    break;

  case 40:
/* Line 1802 of yacc.c  */
#line 463 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));
																										               (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (3)].statementList));
 																										             }
    break;

  case 41:
/* Line 1802 of yacc.c  */
#line 466 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 42:
/* Line 1802 of yacc.c  */
#line 467 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 43:
/* Line 1802 of yacc.c  */
#line 468 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 44:
/* Line 1802 of yacc.c  */
#line 469 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 45:
/* Line 1802 of yacc.c  */
#line 470 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 46:
/* Line 1802 of yacc.c  */
#line 471 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 47:
/* Line 1802 of yacc.c  */
#line 472 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].variable)); }
    break;

  case 48:
/* Line 1802 of yacc.c  */
#line 473 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 49:
/* Line 1802 of yacc.c  */
#line 474 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 50:
/* Line 1802 of yacc.c  */
#line 475 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 51:
/* Line 1802 of yacc.c  */
#line 476 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 52:
/* Line 1802 of yacc.c  */
#line 477 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 53:
/* Line 1802 of yacc.c  */
#line 478 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 54:
/* Line 1802 of yacc.c  */
#line 479 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 55:
/* Line 1802 of yacc.c  */
#line 482 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].variable));
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 56:
/* Line 1802 of yacc.c  */
#line 489 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 57:
/* Line 1802 of yacc.c  */
#line 494 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake((yyvsp[(3) - (5)].statementList), (yyvsp[(5) - (5)].statementList))); }
    break;

  case 58:
/* Line 1802 of yacc.c  */
#line 495 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 59:
/* Line 1802 of yacc.c  */
#line 498 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (6)].statementList));
																									                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList));
																													 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); 
																												   }
    break;

  case 60:
/* Line 1802 of yacc.c  */
#line 503 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 61:
/* Line 1802 of yacc.c  */
#line 504 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 62:
/* Line 1802 of yacc.c  */
#line 508 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 63:
/* Line 1802 of yacc.c  */
#line 513 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													 (yyval.statementList) = observers.StatementListAppend((yyval.statementList),
																									   	               observers.AssignmentExpressionFromNewFound(
																									   	               observers.VariableStart((yyvsp[(4) - (9)].semanticValue)), 
																									   	               (yyvsp[(3) - (9)].qualifiedName),
																									   	               NULL));
																									                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList));
																									                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); }
    break;

  case 64:
/* Line 1802 of yacc.c  */
#line 523 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 65:
/* Line 1802 of yacc.c  */
#line 524 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 66:
/* Line 1802 of yacc.c  */
#line 528 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 67:
/* Line 1802 of yacc.c  */
#line 529 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 68:
/* Line 1802 of yacc.c  */
#line 533 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 69:
/* Line 1802 of yacc.c  */
#line 534 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList);}
    break;

  case 70:
/* Line 1802 of yacc.c  */
#line 538 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(
																																observers.AssignmentExpressionFromNewFound(
	                                                                                                                         observers.VariableStart((yyvsp[(4) - (8)].semanticValue)),
                                                                                                                             (yyvsp[(3) - (8)].qualifiedName),
                                                                                                                            NULL));
                                                                                                                         observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList));
																														}
    break;

  case 71:
/* Line 1802 of yacc.c  */
#line 548 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 72:
/* Line 1802 of yacc.c  */
#line 549 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 76:
/* Line 1802 of yacc.c  */
#line 565 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 77:
/* Line 1802 of yacc.c  */
#line 566 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 78:
/* Line 1802 of yacc.c  */
#line 572 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 573 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(9) - (10)].statementList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											                  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 580 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 581 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
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

  case 82:
/* Line 1802 of yacc.c  */
#line 592 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 593 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
										                   	  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
										                   	  observers.SetCurrentClassName(NULL);    
										                   	}
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 601 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 602 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 603 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, true); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 604 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 608 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 609 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 613 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 617 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 618 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 622 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 623 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 627 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 628 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 632 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 633 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 637 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 638 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 639 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (4)].statementList), observers.ExpressionNil()); } }
    break;

  case 102:
/* Line 1802 of yacc.c  */
#line 643 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 103:
/* Line 1802 of yacc.c  */
#line 644 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 649 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 650 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 106:
/* Line 1802 of yacc.c  */
#line 655 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 107:
/* Line 1802 of yacc.c  */
#line 656 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 108:
/* Line 1802 of yacc.c  */
#line 660 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(1) - (3)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 109:
/* Line 1802 of yacc.c  */
#line 661 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 110:
/* Line 1802 of yacc.c  */
#line 666 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 111:
/* Line 1802 of yacc.c  */
#line 667 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 112:
/* Line 1802 of yacc.c  */
#line 668 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 113:
/* Line 1802 of yacc.c  */
#line 669 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 114:
/* Line 1802 of yacc.c  */
#line 674 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 115:
/* Line 1802 of yacc.c  */
#line 675 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (5)].statementList);
																				            observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression));
																			                observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); 
																				          }
    break;

  case 116:
/* Line 1802 of yacc.c  */
#line 679 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); 
																				            observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList));
																				          }
    break;

  case 119:
/* Line 1802 of yacc.c  */
#line 692 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 120:
/* Line 1802 of yacc.c  */
#line 693 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 121:
/* Line 1802 of yacc.c  */
#line 699 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 122:
/* Line 1802 of yacc.c  */
#line 700 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																		   observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (4)].statementList));
																		   observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (4)].expression));
																		   observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList)); }
    break;

  case 123:
/* Line 1802 of yacc.c  */
#line 708 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 124:
/* Line 1802 of yacc.c  */
#line 709 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				          observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (5)].statementList));
																			  	          observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression)); 
																				          observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 125:
/* Line 1802 of yacc.c  */
#line 717 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 126:
/* Line 1802 of yacc.c  */
#line 718 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 127:
/* Line 1802 of yacc.c  */
#line 723 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 128:
/* Line 1802 of yacc.c  */
#line 724 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 129:
/* Line 1802 of yacc.c  */
#line 729 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 130:
/* Line 1802 of yacc.c  */
#line 730 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 131:
/* Line 1802 of yacc.c  */
#line 735 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].semanticValue), false, false); }
    break;

  case 132:
/* Line 1802 of yacc.c  */
#line 736 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue), true, false); }
    break;

  case 133:
/* Line 1802 of yacc.c  */
#line 737 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].semanticValue), true, true);}
    break;

  case 134:
/* Line 1802 of yacc.c  */
#line 738 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].semanticValue), false, true); }
    break;

  case 135:
/* Line 1802 of yacc.c  */
#line 739 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (4)].parametersList), (yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), false, false); }
    break;

  case 136:
/* Line 1802 of yacc.c  */
#line 740 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (5)].parametersList), (yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].semanticValue), true, false); }
    break;

  case 137:
/* Line 1802 of yacc.c  */
#line 741 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (7)].parametersList), (yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].semanticValue), true, true); }
    break;

  case 138:
/* Line 1802 of yacc.c  */
#line 742 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (6)].parametersList), (yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), false, true); }
    break;

  case 139:
/* Line 1802 of yacc.c  */
#line 747 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 140:
/* Line 1802 of yacc.c  */
#line 748 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 141:
/* Line 1802 of yacc.c  */
#line 749 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 142:
/* Line 1802 of yacc.c  */
#line 750 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 143:
/* Line 1802 of yacc.c  */
#line 755 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); }
    break;

  case 144:
/* Line 1802 of yacc.c  */
#line 756 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 145:
/* Line 1802 of yacc.c  */
#line 757 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 146:
/* Line 1802 of yacc.c  */
#line 762 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 147:
/* Line 1802 of yacc.c  */
#line 763 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 148:
/* Line 1802 of yacc.c  */
#line 764 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); }
    break;

  case 149:
/* Line 1802 of yacc.c  */
#line 765 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 150:
/* Line 1802 of yacc.c  */
#line 766 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 151:
/* Line 1802 of yacc.c  */
#line 767 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].variable)); }
    break;

  case 152:
/* Line 1802 of yacc.c  */
#line 771 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 153:
/* Line 1802 of yacc.c  */
#line 772 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 154:
/* Line 1802 of yacc.c  */
#line 777 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 155:
/* Line 1802 of yacc.c  */
#line 778 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 156:
/* Line 1802 of yacc.c  */
#line 779 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 157:
/* Line 1802 of yacc.c  */
#line 784 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 158:
/* Line 1802 of yacc.c  */
#line 785 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); }
    break;

  case 159:
/* Line 1802 of yacc.c  */
#line 786 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 160:
/* Line 1802 of yacc.c  */
#line 787 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); }
    break;

  case 161:
/* Line 1802 of yacc.c  */
#line 793 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 162:
/* Line 1802 of yacc.c  */
#line 794 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 163:
/* Line 1802 of yacc.c  */
#line 799 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 164:
/* Line 1802 of yacc.c  */
#line 800 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 165:
/* Line 1802 of yacc.c  */
#line 801 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 166:
/* Line 1802 of yacc.c  */
#line 803 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); }
    break;

  case 167:
/* Line 1802 of yacc.c  */
#line 804 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol));
																	  observers.SetCurrentMemberName(NULL);
																	 }
    break;

  case 168:
/* Line 1802 of yacc.c  */
#line 810 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].traitUse), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 169:
/* Line 1802 of yacc.c  */
#line 814 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitUse) = observers.TraitUseStart((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 170:
/* Line 1802 of yacc.c  */
#line 815 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitUse) = observers.TraitUseAppend((yyvsp[(1) - (3)].traitUse), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 171:
/* Line 1802 of yacc.c  */
#line 819 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 172:
/* Line 1802 of yacc.c  */
#line 820 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 173:
/* Line 1802 of yacc.c  */
#line 824 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 174:
/* Line 1802 of yacc.c  */
#line 825 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 175:
/* Line 1802 of yacc.c  */
#line 829 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 176:
/* Line 1802 of yacc.c  */
#line 830 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 177:
/* Line 1802 of yacc.c  */
#line 834 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); }
    break;

  case 178:
/* Line 1802 of yacc.c  */
#line 835 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); }
    break;

  case 179:
/* Line 1802 of yacc.c  */
#line 839 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitInsteadOf) =  observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), (yyvsp[(3) - (3)].traitInsteadOf)); }
    break;

  case 180:
/* Line 1802 of yacc.c  */
#line 843 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMakeReferenceList((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 181:
/* Line 1802 of yacc.c  */
#line 844 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfAppendReferenceList((yyvsp[(1) - (3)].traitInsteadOf), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 182:
/* Line 1802 of yacc.c  */
#line 848 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 183:
/* Line 1802 of yacc.c  */
#line 849 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 184:
/* Line 1802 of yacc.c  */
#line 853 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 185:
/* Line 1802 of yacc.c  */
#line 857 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), (yyvsp[(3) - (4)].classMemberSymbol), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 186:
/* Line 1802 of yacc.c  */
#line 858 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 187:
/* Line 1802 of yacc.c  */
#line 862 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 188:
/* Line 1802 of yacc.c  */
#line 863 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 189:
/* Line 1802 of yacc.c  */
#line 867 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 190:
/* Line 1802 of yacc.c  */
#line 868 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 191:
/* Line 1802 of yacc.c  */
#line 872 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 192:
/* Line 1802 of yacc.c  */
#line 873 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 193:
/* Line 1802 of yacc.c  */
#line 877 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 194:
/* Line 1802 of yacc.c  */
#line 878 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 195:
/* Line 1802 of yacc.c  */
#line 882 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 196:
/* Line 1802 of yacc.c  */
#line 883 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 203:
/* Line 1802 of yacc.c  */
#line 896 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); }
    break;

  case 204:
/* Line 1802 of yacc.c  */
#line 897 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  }
    break;

  case 205:
/* Line 1802 of yacc.c  */
#line 898 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 206:
/* Line 1802 of yacc.c  */
#line 899 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 207:
/* Line 1802 of yacc.c  */
#line 903 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); }
    break;

  case 208:
/* Line 1802 of yacc.c  */
#line 904 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 209:
/* Line 1802 of yacc.c  */
#line 908 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 210:
/* Line 1802 of yacc.c  */
#line 909 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 211:
/* Line 1802 of yacc.c  */
#line 914 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 212:
/* Line 1802 of yacc.c  */
#line 915 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 213:
/* Line 1802 of yacc.c  */
#line 919 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 214:
/* Line 1802 of yacc.c  */
#line 920 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 215:
/* Line 1802 of yacc.c  */
#line 924 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 216:
/* Line 1802 of yacc.c  */
#line 925 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 217:
/* Line 1802 of yacc.c  */
#line 929 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (4)].variable); }
    break;

  case 218:
/* Line 1802 of yacc.c  */
#line 930 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 219:
/* Line 1802 of yacc.c  */
#line 934 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 220:
/* Line 1802 of yacc.c  */
#line 935 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 221:
/* Line 1802 of yacc.c  */
#line 936 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 222:
/* Line 1802 of yacc.c  */
#line 940 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 223:
/* Line 1802 of yacc.c  */
#line 941 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 224:
/* Line 1802 of yacc.c  */
#line 945 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList));  }
    break;

  case 225:
/* Line 1802 of yacc.c  */
#line 949 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 226:
/* Line 1802 of yacc.c  */
#line 950 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 227:
/* Line 1802 of yacc.c  */
#line 951 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 228:
/* Line 1802 of yacc.c  */
#line 952 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 229:
/* Line 1802 of yacc.c  */
#line 953 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 230:
/* Line 1802 of yacc.c  */
#line 954 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 231:
/* Line 1802 of yacc.c  */
#line 955 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 232:
/* Line 1802 of yacc.c  */
#line 956 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 233:
/* Line 1802 of yacc.c  */
#line 957 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 234:
/* Line 1802 of yacc.c  */
#line 958 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 235:
/* Line 1802 of yacc.c  */
#line 959 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 236:
/* Line 1802 of yacc.c  */
#line 960 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 237:
/* Line 1802 of yacc.c  */
#line 961 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 238:
/* Line 1802 of yacc.c  */
#line 962 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 239:
/* Line 1802 of yacc.c  */
#line 963 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 240:
/* Line 1802 of yacc.c  */
#line 964 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 241:
/* Line 1802 of yacc.c  */
#line 965 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 242:
/* Line 1802 of yacc.c  */
#line 966 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 243:
/* Line 1802 of yacc.c  */
#line 967 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 244:
/* Line 1802 of yacc.c  */
#line 968 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 245:
/* Line 1802 of yacc.c  */
#line 969 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 246:
/* Line 1802 of yacc.c  */
#line 970 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 247:
/* Line 1802 of yacc.c  */
#line 971 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 248:
/* Line 1802 of yacc.c  */
#line 972 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 249:
/* Line 1802 of yacc.c  */
#line 973 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 250:
/* Line 1802 of yacc.c  */
#line 974 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 251:
/* Line 1802 of yacc.c  */
#line 975 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 252:
/* Line 1802 of yacc.c  */
#line 976 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 253:
/* Line 1802 of yacc.c  */
#line 977 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 254:
/* Line 1802 of yacc.c  */
#line 978 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 255:
/* Line 1802 of yacc.c  */
#line 979 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 256:
/* Line 1802 of yacc.c  */
#line 980 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 257:
/* Line 1802 of yacc.c  */
#line 981 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 258:
/* Line 1802 of yacc.c  */
#line 982 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 259:
/* Line 1802 of yacc.c  */
#line 983 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 260:
/* Line 1802 of yacc.c  */
#line 984 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 261:
/* Line 1802 of yacc.c  */
#line 985 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 262:
/* Line 1802 of yacc.c  */
#line 986 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 263:
/* Line 1802 of yacc.c  */
#line 987 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 264:
/* Line 1802 of yacc.c  */
#line 988 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 265:
/* Line 1802 of yacc.c  */
#line 989 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 266:
/* Line 1802 of yacc.c  */
#line 990 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 267:
/* Line 1802 of yacc.c  */
#line 991 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 268:
/* Line 1802 of yacc.c  */
#line 992 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 269:
/* Line 1802 of yacc.c  */
#line 993 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 270:
/* Line 1802 of yacc.c  */
#line 994 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 271:
/* Line 1802 of yacc.c  */
#line 995 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 272:
/* Line 1802 of yacc.c  */
#line 996 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 273:
/* Line 1802 of yacc.c  */
#line 997 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 274:
/* Line 1802 of yacc.c  */
#line 998 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 275:
/* Line 1802 of yacc.c  */
#line 999 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 276:
/* Line 1802 of yacc.c  */
#line 1000 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.NewInstanceAppendToChain((yyvsp[(2) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 277:
/* Line 1802 of yacc.c  */
#line 1003 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 278:
/* Line 1802 of yacc.c  */
#line 1005 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 279:
/* Line 1802 of yacc.c  */
#line 1006 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 280:
/* Line 1802 of yacc.c  */
#line 1007 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 281:
/* Line 1802 of yacc.c  */
#line 1008 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 282:
/* Line 1802 of yacc.c  */
#line 1009 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 283:
/* Line 1802 of yacc.c  */
#line 1010 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 284:
/* Line 1802 of yacc.c  */
#line 1011 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 285:
/* Line 1802 of yacc.c  */
#line 1012 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 286:
/* Line 1802 of yacc.c  */
#line 1013 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 287:
/* Line 1802 of yacc.c  */
#line 1014 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 288:
/* Line 1802 of yacc.c  */
#line 1015 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 289:
/* Line 1802 of yacc.c  */
#line 1016 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 290:
/* Line 1802 of yacc.c  */
#line 1017 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 291:
/* Line 1802 of yacc.c  */
#line 1018 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 292:
/* Line 1802 of yacc.c  */
#line 1019 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 293:
/* Line 1802 of yacc.c  */
#line 1020 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 294:
/* Line 1802 of yacc.c  */
#line 1021 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 295:
/* Line 1802 of yacc.c  */
#line 1023 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 296:
/* Line 1802 of yacc.c  */
#line 1024 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(4) - (10)].parametersList), (yyvsp[(6) - (10)].statementList), (yyvsp[(9) - (10)].statementList), (yyvsp[(7) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue)); 
																	           // end after we create the closure so that closure gets the correct scope
																	           // anonymous function count
																	           observers.EndAnonymousFunction(); 
																	         }
    break;

  case 297:
/* Line 1802 of yacc.c  */
#line 1030 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 298:
/* Line 1802 of yacc.c  */
#line 1031 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(5) - (11)].parametersList), (yyvsp[(7) - (11)].statementList), (yyvsp[(10) - (11)].statementList), (yyvsp[(8) - (11)].semanticValue), (yyvsp[(11) - (11)].semanticValue));  
																	        // end after we create the closure so that closure gets the correct scope
																	        // anonymous function count
																	        observers.EndAnonymousFunction(); 
																	      }
    break;

  case 299:
/* Line 1802 of yacc.c  */
#line 1039 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 300:
/* Line 1802 of yacc.c  */
#line 1040 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].variable); }
    break;

  case 301:
/* Line 1802 of yacc.c  */
#line 1041 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (4)].expression); }
    break;

  case 302:
/* Line 1802 of yacc.c  */
#line 1042 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (4)].expression); }
    break;

  case 303:
/* Line 1802 of yacc.c  */
#line 1046 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 304:
/* Line 1802 of yacc.c  */
#line 1047 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 305:
/* Line 1802 of yacc.c  */
#line 1048 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset(observers.ExpressionMakeScalar((yyvsp[(1) - (4)].semanticValue)), (yyvsp[(3) - (4)].expression)); }
    break;

  case 306:
/* Line 1802 of yacc.c  */
#line 1051 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 307:
/* Line 1802 of yacc.c  */
#line 1052 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); }
    break;

  case 309:
/* Line 1802 of yacc.c  */
#line 1059 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 310:
/* Line 1802 of yacc.c  */
#line 1060 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 311:
/* Line 1802 of yacc.c  */
#line 1064 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), 
												            	       observers.VariableStart((yyvsp[(3) - (3)].semanticValue))
		                                                              ); 
		                                                       }
    break;

  case 312:
/* Line 1802 of yacc.c  */
#line 1068 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), 
	                                                              observers.VariableStart((yyvsp[(4) - (4)].semanticValue), true)
		                                                        ); 
		                                                       }
    break;

  case 313:
/* Line 1802 of yacc.c  */
#line 1072 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 314:
/* Line 1802 of yacc.c  */
#line 1073 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true)); }
    break;

  case 315:
/* Line 1802 of yacc.c  */
#line 1078 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].statementList), analyzer.GetLineNumber()); }
    break;

  case 316:
/* Line 1802 of yacc.c  */
#line 1080 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 317:
/* Line 1802 of yacc.c  */
#line 1082 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList), analyzer.GetLineNumber()); }
    break;

  case 318:
/* Line 1802 of yacc.c  */
#line 1084 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 319:
/* Line 1802 of yacc.c  */
#line 1086 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 320:
/* Line 1802 of yacc.c  */
#line 1088 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 321:
/* Line 1802 of yacc.c  */
#line 1090 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 322:
/* Line 1802 of yacc.c  */
#line 1092 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 323:
/* Line 1802 of yacc.c  */
#line 1096 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 324:
/* Line 1802 of yacc.c  */
#line 1097 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 325:
/* Line 1802 of yacc.c  */
#line 1098 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 326:
/* Line 1802 of yacc.c  */
#line 1099 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 327:
/* Line 1802 of yacc.c  */
#line 1103 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 328:
/* Line 1802 of yacc.c  */
#line 1104 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 329:
/* Line 1802 of yacc.c  */
#line 1105 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 330:
/* Line 1802 of yacc.c  */
#line 1109 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 331:
/* Line 1802 of yacc.c  */
#line 1110 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 332:
/* Line 1802 of yacc.c  */
#line 1115 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 333:
/* Line 1802 of yacc.c  */
#line 1117 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 334:
/* Line 1802 of yacc.c  */
#line 1122 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); }
    break;

  case 335:
/* Line 1802 of yacc.c  */
#line 1123 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 337:
/* Line 1802 of yacc.c  */
#line 1132 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 338:
/* Line 1802 of yacc.c  */
#line 1133 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 339:
/* Line 1802 of yacc.c  */
#line 1134 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 340:
/* Line 1802 of yacc.c  */
#line 1138 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 341:
/* Line 1802 of yacc.c  */
#line 1139 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 342:
/* Line 1802 of yacc.c  */
#line 1140 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 343:
/* Line 1802 of yacc.c  */
#line 1145 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 344:
/* Line 1802 of yacc.c  */
#line 1146 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 345:
/* Line 1802 of yacc.c  */
#line 1151 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 346:
/* Line 1802 of yacc.c  */
#line 1152 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 347:
/* Line 1802 of yacc.c  */
#line 1153 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 348:
/* Line 1802 of yacc.c  */
#line 1154 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 349:
/* Line 1802 of yacc.c  */
#line 1155 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 350:
/* Line 1802 of yacc.c  */
#line 1156 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 351:
/* Line 1802 of yacc.c  */
#line 1157 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 352:
/* Line 1802 of yacc.c  */
#line 1158 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 353:
/* Line 1802 of yacc.c  */
#line 1159 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 354:
/* Line 1802 of yacc.c  */
#line 1160 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 355:
/* Line 1802 of yacc.c  */
#line 1161 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 356:
/* Line 1802 of yacc.c  */
#line 1162 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 357:
/* Line 1802 of yacc.c  */
#line 1167 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 358:
/* Line 1802 of yacc.c  */
#line 1168 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 359:
/* Line 1802 of yacc.c  */
#line 1169 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 360:
/* Line 1802 of yacc.c  */
#line 1170 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 361:
/* Line 1802 of yacc.c  */
#line 1171 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 362:
/* Line 1802 of yacc.c  */
#line 1172 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 363:
/* Line 1802 of yacc.c  */
#line 1173 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 364:
/* Line 1802 of yacc.c  */
#line 1174 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); }
    break;

  case 365:
/* Line 1802 of yacc.c  */
#line 1175 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 366:
/* Line 1802 of yacc.c  */
#line 1176 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 367:
/* Line 1802 of yacc.c  */
#line 1177 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 368:
/* Line 1802 of yacc.c  */
#line 1181 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 369:
/* Line 1802 of yacc.c  */
#line 1185 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 370:
/* Line 1802 of yacc.c  */
#line 1186 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 371:
/* Line 1802 of yacc.c  */
#line 1187 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 372:
/* Line 1802 of yacc.c  */
#line 1188 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 373:
/* Line 1802 of yacc.c  */
#line 1189 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 374:
/* Line 1802 of yacc.c  */
#line 1190 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 376:
/* Line 1802 of yacc.c  */
#line 1192 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 377:
/* Line 1802 of yacc.c  */
#line 1193 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 378:
/* Line 1802 of yacc.c  */
#line 1194 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 379:
/* Line 1802 of yacc.c  */
#line 1199 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 381:
/* Line 1802 of yacc.c  */
#line 1204 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 382:
/* Line 1802 of yacc.c  */
#line 1205 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 383:
/* Line 1802 of yacc.c  */
#line 1209 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 384:
/* Line 1802 of yacc.c  */
#line 1210 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 385:
/* Line 1802 of yacc.c  */
#line 1211 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 386:
/* Line 1802 of yacc.c  */
#line 1212 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 387:
/* Line 1802 of yacc.c  */
#line 1216 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 389:
/* Line 1802 of yacc.c  */
#line 1221 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 390:
/* Line 1802 of yacc.c  */
#line 1222 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 394:
/* Line 1802 of yacc.c  */
#line 1240 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); }
    break;

  case 395:
/* Line 1802 of yacc.c  */
#line 1241 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); }
    break;

  case 396:
/* Line 1802 of yacc.c  */
#line 1245 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 397:
/* Line 1802 of yacc.c  */
#line 1246 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 398:
/* Line 1802 of yacc.c  */
#line 1250 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  }
    break;

  case 399:
/* Line 1802 of yacc.c  */
#line 1254 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression));}
    break;

  case 400:
/* Line 1802 of yacc.c  */
#line 1255 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 401:
/* Line 1802 of yacc.c  */
#line 1259 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(1) - (1)].statementList), true); }
    break;

  case 402:
/* Line 1802 of yacc.c  */
#line 1263 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 403:
/* Line 1802 of yacc.c  */
#line 1264 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 404:
/* Line 1802 of yacc.c  */
#line 1265 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 406:
/* Line 1802 of yacc.c  */
#line 1270 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 407:
/* Line 1802 of yacc.c  */
#line 1274 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 408:
/* Line 1802 of yacc.c  */
#line 1275 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 409:
/* Line 1802 of yacc.c  */
#line 1280 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 410:
/* Line 1802 of yacc.c  */
#line 1284 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 411:
/* Line 1802 of yacc.c  */
#line 1285 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 413:
/* Line 1802 of yacc.c  */
#line 1290 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 414:
/* Line 1802 of yacc.c  */
#line 1291 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 416:
/* Line 1802 of yacc.c  */
#line 1297 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 418:
/* Line 1802 of yacc.c  */
#line 1302 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 419:
/* Line 1802 of yacc.c  */
#line 1303 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 421:
/* Line 1802 of yacc.c  */
#line 1309 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 422:
/* Line 1802 of yacc.c  */
#line 1310 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 423:
/* Line 1802 of yacc.c  */
#line 1314 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 424:
/* Line 1802 of yacc.c  */
#line 1315 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 425:
/* Line 1802 of yacc.c  */
#line 1319 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 426:
/* Line 1802 of yacc.c  */
#line 1320 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 427:
/* Line 1802 of yacc.c  */
#line 1324 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 428:
/* Line 1802 of yacc.c  */
#line 1325 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 429:
/* Line 1802 of yacc.c  */
#line 1326 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 430:
/* Line 1802 of yacc.c  */
#line 1330 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 431:
/* Line 1802 of yacc.c  */
#line 1331 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 434:
/* Line 1802 of yacc.c  */
#line 1340 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 435:
/* Line 1802 of yacc.c  */
#line 1341 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 436:
/* Line 1802 of yacc.c  */
#line 1345 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 437:
/* Line 1802 of yacc.c  */
#line 1346 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 438:
/* Line 1802 of yacc.c  */
#line 1347 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 439:
/* Line 1802 of yacc.c  */
#line 1352 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 440:
/* Line 1802 of yacc.c  */
#line 1353 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 441:
/* Line 1802 of yacc.c  */
#line 1357 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
                                                                                 }
    break;

  case 442:
/* Line 1802 of yacc.c  */
#line 1361 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                }
    break;

  case 443:
/* Line 1802 of yacc.c  */
#line 1365 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 444:
/* Line 1802 of yacc.c  */
#line 1366 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 445:
/* Line 1802 of yacc.c  */
#line 1367 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 446:
/* Line 1802 of yacc.c  */
#line 1371 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                }
    break;

  case 447:
/* Line 1802 of yacc.c  */
#line 1375 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 448:
/* Line 1802 of yacc.c  */
#line 1376 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 449:
/* Line 1802 of yacc.c  */
#line 1380 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 450:
/* Line 1802 of yacc.c  */
#line 1381 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 451:
/* Line 1802 of yacc.c  */
#line 1382 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 452:
/* Line 1802 of yacc.c  */
#line 1383 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 453:
/* Line 1802 of yacc.c  */
#line 1387 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 454:
/* Line 1802 of yacc.c  */
#line 1388 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 455:
/* Line 1802 of yacc.c  */
#line 1389 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 456:
/* Line 1802 of yacc.c  */
#line 1390 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 457:
/* Line 1802 of yacc.c  */
#line 1391 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 458:
/* Line 1802 of yacc.c  */
#line 1392 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 459:
/* Line 1802 of yacc.c  */
#line 1396 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 460:
/* Line 1802 of yacc.c  */
#line 1397 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 461:
/* Line 1802 of yacc.c  */
#line 1398 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 462:
/* Line 1802 of yacc.c  */
#line 1402 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 463:
/* Line 1802 of yacc.c  */
#line 1403 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 464:
/* Line 1802 of yacc.c  */
#line 1404 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 465:
/* Line 1802 of yacc.c  */
#line 1405 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 466:
/* Line 1802 of yacc.c  */
#line 1406 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 467:
/* Line 1802 of yacc.c  */
#line 1407 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 468:
/* Line 1802 of yacc.c  */
#line 1408 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 469:
/* Line 1802 of yacc.c  */
#line 1409 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 470:
/* Line 1802 of yacc.c  */
#line 1413 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].expression)); }
    break;

  case 471:
/* Line 1802 of yacc.c  */
#line 1414 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 472:
/* Line 1802 of yacc.c  */
#line 1418 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 473:
/* Line 1802 of yacc.c  */
#line 1419 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 474:
/* Line 1802 of yacc.c  */
#line 1423 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 475:
/* Line 1802 of yacc.c  */
#line 1424 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 476:
/* Line 1802 of yacc.c  */
#line 1428 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (3)].qualifiedName)); }
    break;

  case 477:
/* Line 1802 of yacc.c  */
#line 1432 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (3)].qualifiedName)); }
    break;


/* Line 1802 of yacc.c  */
#line 6648 "/Users/roberto/Projects/pelet/src/Php55FullParser.cpp"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2050 of yacc.c  */
#line 1435 "/Users/roberto/Projects/pelet/src/Php55FullParser.y"

