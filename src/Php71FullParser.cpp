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
#define yyparse         php71parse
#define yylex           php71lex
#define yyerror         php71error
#define yylval          php71lval
#define yychar          php71char
#define yydebug         php71debug
#define yynerrs         php71nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"


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
#define php71lex pelet::FullLex

// so that both bison parses call the same error function
#define php71error pelet::FullGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php71FullParser.cpp"

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
extern int php71debug;
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
     T_DOUBLE_ARROW = 535,
     T_YIELD_FROM = 636,
     T_POW_EQUAL = 633,
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
     T_COALESCE = 635,
     T_BOOLEAN_OR = 510,
     T_BOOLEAN_AND = 509,
     T_IS_GREATER_OR_EQUAL = 572,
     T_IS_SMALLER_OR_EQUAL = 577,
     T_SPACESHIP = 634,
     T_IS_NOT_IDENTICAL = 575,
     T_IS_IDENTICAL = 573,
     T_IS_NOT_EQUAL = 574,
     T_IS_EQUAL = 571,
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
     T_POW = 632,
     T_CLONE = 518,
     T_NEW = 589,
     T_NOELSE = 638,
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
     T_FINALLY = 629,
     T_ELLIPSIS = 631
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int php71parse (void *YYPARSE_PARAM);
#else
int php71parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php71parse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers);
#else
int php71parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 319 "/Users/roberto/Projects/pelet/src/Php71FullParser.cpp"

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
#define YYLAST   7590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  139
/* YYNRULES -- Number of rules.  */
#define YYNRULES  498
/* YYNRULES -- Number of states.  */
#define YYNSTATES  943

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   638

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   165,     2,   164,    53,    36,     2,
     160,   161,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   162,
      44,    16,    45,    29,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   166,    35,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   158,    34,   159,    56,     2,     2,     2,
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
       2,     2,    79,    22,    81,    60,    82,    83,    58,    33,
      32,    84,    85,    86,    87,    88,    89,    90,    69,    91,
      92,    24,    93,    94,    95,    96,    64,    97,    98,    99,
      25,   100,   101,   102,   103,    14,    62,   104,    73,    72,
     105,   106,   107,   108,   109,   110,    74,   111,   112,     5,
     113,   114,   115,    78,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    65,     7,     6,   125,    55,   126,    63,
     127,    43,    37,    41,    42,    40,   128,    38,   129,   130,
     131,    11,     9,    10,   132,    27,    23,    26,   133,    70,
     134,   135,   136,    59,   137,   138,   139,    21,   140,    28,
      12,    77,    76,    75,     4,     3,   141,    47,    19,    46,
      18,   142,    80,   143,    61,   144,   145,   146,   147,   148,
     149,   150,    57,   151,   152,   153,   154,   155,    20,   156,
      13,   157,    67,    17,    39,    31,    15,     2,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     160,   161,   163,   167,   169,   173,   176,   178,   180,   182,
     184,   186,   191,   195,   196,   203,   204,   210,   214,   219,
     223,   228,   232,   234,   236,   242,   249,   255,   262,   266,
     268,   272,   274,   278,   280,   282,   285,   287,   291,   293,
     296,   300,   302,   305,   306,   308,   310,   312,   314,   316,
     321,   325,   327,   329,   335,   343,   353,   359,   363,   367,
     371,   375,   379,   383,   385,   388,   394,   402,   412,   418,
     420,   427,   431,   435,   438,   439,   449,   451,   455,   456,
     461,   463,   467,   469,   470,   485,   486,   488,   489,   491,
     492,   503,   504,   514,   516,   519,   521,   523,   524,   532,
     533,   542,   543,   546,   547,   550,   551,   554,   556,   559,
     564,   568,   570,   575,   577,   582,   584,   589,   593,   598,
     603,   609,   610,   616,   621,   623,   625,   627,   632,   638,
     645,   647,   651,   658,   666,   670,   677,   679,   680,   682,
     686,   691,   698,   699,   701,   703,   706,   708,   710,   712,
     713,   716,   719,   723,   725,   729,   731,   734,   738,   740,
     742,   746,   748,   750,   754,   757,   758,   762,   767,   771,
     772,   786,   788,   792,   794,   797,   801,   803,   806,   809,
     812,   816,   820,   824,   829,   833,   835,   837,   841,   843,
     847,   849,   851,   852,   854,   856,   859,   861,   863,   865,
     867,   869,   871,   875,   877,   880,   885,   889,   891,   896,
     901,   905,   907,   909,   910,   912,   916,   918,   927,   931,
     934,   941,   947,   951,   956,   959,   963,   967,   971,   975,
     979,   983,   987,   991,   995,   999,  1003,  1007,  1010,  1013,
    1016,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,  1051,
    1055,  1059,  1063,  1067,  1071,  1075,  1079,  1083,  1087,  1090,
    1093,  1096,  1099,  1103,  1107,  1111,  1115,  1119,  1123,  1127,
    1131,  1135,  1139,  1143,  1145,  1151,  1156,  1160,  1162,  1165,
    1168,  1171,  1174,  1177,  1180,  1183,  1186,  1189,  1191,  1195,
    1198,  1200,  1203,  1208,  1211,  1212,  1227,  1228,  1244,  1246,
    1247,  1248,  1249,  1251,  1252,  1257,  1261,  1263,  1265,  1268,
    1271,  1276,  1281,  1284,  1286,  1288,  1290,  1292,  1293,  1297,
    1298,  1300,  1302,  1303,  1305,  1310,  1314,  1316,  1318,  1320,
    1322,  1324,  1326,  1328,  1330,  1332,  1334,  1336,  1340,  1343,
    1347,  1351,  1353,  1355,  1357,  1361,  1365,  1367,  1369,  1370,
    1372,  1374,  1376,  1380,  1382,  1384,  1388,  1390,  1392,  1397,
    1402,  1407,  1412,  1414,  1416,  1418,  1422,  1424,  1429,  1432,
    1436,  1440,  1442,  1447,  1452,  1456,  1460,  1464,  1466,  1470,
    1472,  1474,  1478,  1480,  1482,  1483,  1485,  1489,  1491,  1495,
    1497,  1502,  1505,  1512,  1517,  1520,  1523,  1525,  1528,  1530,
    1535,  1539,  1543,  1547,  1554,  1558,  1560,  1562,  1565,  1567,
    1572,  1577,  1580,  1583,  1588,  1591,  1594,  1596,  1600
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     168,     0,    -1,   172,    -1,     7,    -1,     6,    -1,     5,
      -1,     4,    -1,     3,    -1,     9,    -1,    10,    -1,    11,
      -1,    55,    -1,    70,    -1,    69,    -1,   113,    -1,   123,
      -1,    72,    -1,    73,    -1,    74,    -1,   104,    -1,   101,
      -1,   154,    -1,   112,    -1,   116,    -1,   108,    -1,   117,
      -1,   109,    -1,    97,    -1,   107,    -1,    82,    -1,   149,
      -1,    87,    -1,   156,    -1,   146,    -1,   151,    -1,   126,
      -1,   120,    -1,   152,    -1,   150,    -1,   128,    -1,   105,
      -1,    95,    -1,   121,    -1,   119,    -1,    93,    -1,   141,
      -1,    12,    -1,    13,    -1,   130,    -1,   145,    -1,   111,
      -1,    86,    -1,    98,    -1,    84,    -1,    81,    -1,    85,
      -1,   114,    -1,   124,    -1,   133,    -1,   147,    -1,   127,
      -1,    89,    -1,    90,    -1,   148,    -1,   118,    -1,   132,
      -1,   129,    -1,   115,    -1,    99,    -1,   134,    -1,   169,
      -1,    80,    -1,    79,    -1,    78,    -1,    77,    -1,    76,
      -1,    75,    -1,   143,    -1,   170,    -1,   172,   175,    -1,
      -1,   143,    -1,   173,   135,   143,    -1,   173,    -1,   133,
     135,   173,    -1,   135,   173,    -1,   190,    -1,   196,    -1,
     200,    -1,   205,    -1,   207,    -1,   122,   160,   161,   162,
      -1,   133,   173,   162,    -1,    -1,   133,   173,   158,   176,
     172,   159,    -1,    -1,   133,   158,   177,   172,   159,    -1,
     151,   180,   162,    -1,   151,   178,   179,   162,    -1,   151,
     183,   162,    -1,   151,   178,   183,   162,    -1,    93,   187,
     162,    -1,   119,    -1,    93,    -1,   173,   135,   158,   182,
     159,    -1,   135,   173,   135,   158,   182,   159,    -1,   173,
     135,   158,   181,   159,    -1,   135,   173,   135,   158,   181,
     159,    -1,   181,     8,   184,    -1,   184,    -1,   182,     8,
     185,    -1,   185,    -1,   183,     8,   186,    -1,   186,    -1,
     185,    -1,   178,   185,    -1,   173,    -1,   173,    82,   143,
      -1,   185,    -1,   135,   185,    -1,   187,     8,   258,    -1,
     258,    -1,   188,   189,    -1,    -1,   190,    -1,   196,    -1,
     200,    -1,   205,    -1,   207,    -1,   122,   160,   161,   162,
      -1,   158,   188,   159,    -1,   221,    -1,   223,    -1,   154,
     160,   284,   161,   219,    -1,   101,   190,   154,   160,   284,
     161,   162,    -1,   116,   160,   261,   162,   261,   162,   261,
     161,   213,    -1,   145,   160,   284,   161,   216,    -1,    84,
     285,   162,    -1,    95,   285,   162,    -1,   141,   285,   162,
      -1,   120,   234,   162,    -1,    80,   236,   162,    -1,   104,
     259,   162,    -1,   125,    -1,   284,   162,    -1,   150,   160,
     194,   161,   162,    -1,   117,   160,   284,    82,   212,   161,
     214,    -1,   117,   160,   284,    82,   212,    14,   212,   161,
     214,    -1,    97,   160,   187,   161,   215,    -1,   162,    -1,
     149,   158,   188,   159,   191,   193,    -1,   146,   284,   162,
      -1,   121,   143,   162,    -1,   143,    30,    -1,    -1,   191,
      87,   160,   192,   153,   161,   158,   188,   159,    -1,   174,
      -1,   192,    34,   174,    -1,    -1,   156,   158,   188,   159,
      -1,   195,    -1,   194,     8,   195,    -1,   290,    -1,    -1,
     268,   271,   143,   269,   160,   224,   161,   197,   230,   270,
     158,   188,   159,   270,    -1,    -1,    36,    -1,    -1,   157,
      -1,    -1,   203,    89,   143,   209,   211,   269,   201,   158,
     238,   159,    -1,    -1,    89,   143,   209,   211,   269,   202,
     158,   238,   159,    -1,   204,    -1,   203,   204,    -1,    79,
      -1,    78,    -1,    -1,   147,   143,   269,   158,   206,   238,
     159,    -1,    -1,   127,   143,   210,   269,   208,   158,   238,
     159,    -1,    -1,   114,   174,    -1,    -1,   114,   241,    -1,
      -1,   124,   241,    -1,   290,    -1,    36,   290,    -1,   130,
     160,   296,   161,    -1,    68,   296,   166,    -1,   190,    -1,
      30,   188,   108,   162,    -1,   190,    -1,    30,   188,   109,
     162,    -1,   190,    -1,    30,   188,   107,   162,    -1,   158,
     217,   159,    -1,   158,   162,   217,   159,    -1,    30,   217,
     111,   162,    -1,    30,   162,   217,   111,   162,    -1,    -1,
     217,    86,   284,   218,   188,    -1,   217,    98,   218,   188,
      -1,    30,    -1,   162,    -1,   190,    -1,    30,   188,   112,
     162,    -1,   123,   160,   284,   161,   190,    -1,   220,    72,
     160,   284,   161,   190,    -1,   220,    -1,   220,    73,   190,
      -1,   123,   160,   284,   161,    30,   188,    -1,   222,    72,
     160,   284,   161,    30,   188,    -1,   222,    74,   162,    -1,
     222,    73,    30,   188,    74,   162,    -1,   225,    -1,    -1,
     226,    -1,   225,     8,   226,    -1,   227,   198,   199,   153,
      -1,   227,   198,   199,   153,    16,   284,    -1,    -1,   228,
      -1,   229,    -1,    29,   229,    -1,    81,    -1,    85,    -1,
     174,    -1,    -1,    30,   228,    -1,   160,   161,    -1,   160,
     232,   161,    -1,   233,    -1,   232,     8,   233,    -1,   284,
      -1,   157,   284,    -1,   234,     8,   235,    -1,   235,    -1,
     291,    -1,   236,     8,   237,    -1,   237,    -1,   153,    -1,
     153,    16,   284,    -1,   238,   239,    -1,    -1,   250,   254,
     162,    -1,   251,    93,   256,   162,    -1,   151,   241,   242,
      -1,    -1,   251,   268,   271,   171,   269,   160,   224,   161,
     240,   230,   270,   249,   270,    -1,   174,    -1,   241,     8,
     174,    -1,   162,    -1,   158,   159,    -1,   158,   243,   159,
      -1,   244,    -1,   243,   244,    -1,   245,   162,    -1,   246,
     162,    -1,   248,   126,   241,    -1,   247,    82,   143,    -1,
     247,    82,   169,    -1,   247,    82,   253,   171,    -1,   247,
      82,   253,    -1,   171,    -1,   248,    -1,   174,   140,   171,
      -1,   162,    -1,   158,   188,   159,    -1,   252,    -1,   152,
      -1,    -1,   252,    -1,   253,    -1,   252,   253,    -1,    75,
      -1,    76,    -1,    77,    -1,    80,    -1,    79,    -1,    78,
      -1,   254,     8,   255,    -1,   255,    -1,   153,   269,    -1,
     153,    16,   284,   269,    -1,   256,     8,   257,    -1,   257,
      -1,   171,    16,   284,   269,    -1,   143,    16,   284,   269,
      -1,   259,     8,   260,    -1,   260,    -1,   284,    -1,    -1,
     262,    -1,   262,     8,   284,    -1,   284,    -1,    89,   280,
     209,   211,   269,   158,   238,   159,    -1,    70,   277,   280,
      -1,    70,   263,    -1,   130,   160,   296,   161,    16,   284,
      -1,    68,   296,   166,    16,   284,    -1,   290,    16,   284,
      -1,   290,    16,    36,   290,    -1,    69,   284,    -1,   290,
      28,   284,    -1,   290,    27,   284,    -1,   290,    26,   284,
      -1,   290,    17,   284,    -1,   290,    25,   284,    -1,   290,
      24,   284,    -1,   290,    23,   284,    -1,   290,    22,   284,
      -1,   290,    21,   284,    -1,   290,    20,   284,    -1,   290,
      19,   284,    -1,   290,    18,   284,    -1,   290,    65,    -1,
      65,   290,    -1,   290,    64,    -1,    64,   290,    -1,   284,
      32,   284,    -1,   284,    33,   284,    -1,   284,     9,   284,
      -1,   284,    11,   284,    -1,   284,    10,   284,    -1,   284,
      34,   284,    -1,   284,    36,   284,    -1,   284,    35,   284,
      -1,   284,    50,   284,    -1,   284,    48,   284,    -1,   284,
      49,   284,    -1,   284,    51,   284,    -1,   284,    67,   284,
      -1,   284,    52,   284,    -1,   284,    53,   284,    -1,   284,
      47,   284,    -1,   284,    46,   284,    -1,    48,   284,    -1,
      49,   284,    -1,    54,   284,    -1,    56,   284,    -1,   284,
      41,   284,    -1,   284,    40,   284,    -1,   284,    43,   284,
      -1,   284,    42,   284,    -1,   284,    44,   284,    -1,   284,
      38,   284,    -1,   284,    45,   284,    -1,   284,    37,   284,
      -1,   284,    39,   284,    -1,   284,    55,   277,    -1,   160,
     284,   161,    -1,   264,    -1,   284,    29,   284,    30,   284,
      -1,   284,    29,    30,   284,    -1,   284,    31,   284,    -1,
     303,    -1,    63,   284,    -1,    62,   284,    -1,    61,   284,
      -1,    60,   284,    -1,    59,   284,    -1,    58,   284,    -1,
      57,   284,    -1,   113,   278,    -1,    66,   284,    -1,   282,
      -1,   163,   279,   163,    -1,    12,   284,    -1,    13,    -1,
      13,   284,    -1,    13,   284,    14,   284,    -1,    15,   284,
      -1,    -1,   268,   271,   269,   160,   224,   161,   272,   230,
     270,   158,   266,   188,   159,   270,    -1,    -1,    80,   268,
     271,   269,   160,   224,   161,   272,   230,   270,   158,   267,
     188,   159,   270,    -1,   119,    -1,    -1,    -1,    -1,    36,
      -1,    -1,   151,   160,   273,   161,    -1,   273,     8,   274,
      -1,   274,    -1,   153,    -1,    36,   153,    -1,   174,   231,
      -1,   276,   140,   294,   231,    -1,   286,   140,   294,   231,
      -1,   288,   231,    -1,    80,    -1,   174,    -1,   276,    -1,
     293,    -1,    -1,   160,   285,   161,    -1,    -1,   106,    -1,
     300,    -1,    -1,   231,    -1,    81,   160,   296,   161,    -1,
      68,   296,   166,    -1,    94,    -1,   131,    -1,   100,    -1,
     129,    -1,   115,    -1,    99,    -1,   148,    -1,   132,    -1,
     118,    -1,   134,    -1,    90,    -1,   142,   106,   110,    -1,
     142,   110,    -1,   165,   300,   165,    -1,   142,   300,   110,
      -1,   281,    -1,   283,    -1,   174,    -1,   276,   140,   171,
      -1,   286,   140,   171,    -1,   290,    -1,   265,    -1,    -1,
     284,    -1,   287,    -1,   290,    -1,   160,   284,   161,    -1,
     281,    -1,   289,    -1,   160,   284,   161,    -1,   281,    -1,
     291,    -1,   287,    68,   285,   166,    -1,   283,    68,   285,
     166,    -1,   287,   158,   284,   159,    -1,   287,   137,   295,
     231,    -1,   275,    -1,   289,    -1,   292,    -1,   287,   137,
     295,    -1,   153,    -1,   164,   158,   284,   159,    -1,   164,
     291,    -1,   276,   140,   291,    -1,   286,   140,   291,    -1,
     291,    -1,   293,    68,   285,   166,    -1,   293,   158,   284,
     159,    -1,   293,   137,   295,    -1,   276,   140,   291,    -1,
     293,   140,   291,    -1,   171,    -1,   158,   284,   159,    -1,
     291,    -1,   143,    -1,   158,   284,   159,    -1,   291,    -1,
     298,    -1,    -1,   299,    -1,   298,     8,   297,    -1,   297,
      -1,   284,    14,   284,    -1,   284,    -1,   284,    14,    36,
     290,    -1,    36,   290,    -1,   284,    14,   130,   160,   296,
     161,    -1,   130,   160,   296,   161,    -1,   300,   301,    -1,
     300,   106,    -1,   301,    -1,   106,   301,    -1,   153,    -1,
     153,    68,   302,   166,    -1,   153,   137,   143,    -1,   103,
     284,   159,    -1,   103,   144,   159,    -1,   103,   144,    68,
     284,   166,   159,    -1,    96,   290,   159,    -1,   143,    -1,
     136,    -1,    49,   136,    -1,   153,    -1,   128,   160,   304,
     161,    -1,   105,   160,   284,   161,    -1,     7,   284,    -1,
       6,   284,    -1,     5,   160,   284,   161,    -1,     4,   284,
      -1,     3,   284,    -1,   305,    -1,   304,     8,   305,    -1,
     284,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   376,   376,   380,   380,   380,   380,   380,   380,   380,
     380,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   385,   385,   385,   385,   385,   385,
     385,   385,   386,   386,   386,   386,   386,   386,   386,   386,
     390,   391,   391,   391,   391,   391,   391,   395,   396,   400,
     401,   405,   406,   410,   411,   412,   416,   417,   418,   419,
     420,   421,   422,   423,   423,   425,   425,   427,   428,   429,
     430,   431,   435,   436,   440,   441,   445,   446,   450,   451,
     455,   456,   460,   461,   465,   466,   470,   471,   475,   476,
     480,   481,   485,   486,   490,   491,   492,   493,   494,   495,
     499,   500,   501,   502,   503,   504,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   522,   528,   530,
     531,   534,   535,   536,   540,   541,   548,   549,   553,   554,
     558,   559,   563,   568,   567,   578,   579,   583,   584,   589,
     588,   601,   600,   617,   618,   622,   623,   628,   627,   648,
     647,   666,   667,   671,   672,   676,   677,   681,   682,   683,
     684,   688,   689,   693,   694,   698,   699,   703,   704,   705,
     706,   710,   711,   712,   716,   717,   721,   722,   726,   728,
     733,   734,   738,   740,   745,   746,   750,   751,   755,   756,
     760,   762,   768,   769,   773,   774,   777,   778,   779,   783,
     784,   788,   789,   793,   794,   798,   799,   803,   804,   808,
     812,   813,   817,   818,   822,   823,   828,   829,   830,   832,
     831,   839,   840,   844,   845,   846,   850,   851,   855,   856,
     860,   865,   866,   867,   868,   872,   873,   877,   881,   882,
     886,   887,   891,   892,   897,   898,   903,   904,   905,   906,
     907,   908,   912,   913,   917,   918,   923,   924,   928,   932,
     936,   937,   941,   945,   946,   950,   951,   955,   961,   962,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1043,  1041,  1051,  1049,  1060,  1064,
    1068,  1072,  1073,  1077,  1078,  1082,  1083,  1087,  1088,  1092,
    1093,  1094,  1095,  1099,  1100,  1104,  1105,  1109,  1110,  1114,
    1115,  1116,  1120,  1121,  1125,  1126,  1127,  1131,  1132,  1133,
    1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1145,  1146,  1150,  1151,  1152,  1156,  1157,  1161,  1162,
    1166,  1170,  1171,  1172,  1176,  1177,  1178,  1182,  1183,  1184,
    1185,  1186,  1191,  1195,  1196,  1197,  1201,  1202,  1203,  1207,
    1208,  1212,  1213,  1214,  1215,  1216,  1217,  1222,  1223,  1224,
    1228,  1229,  1230,  1234,  1238,  1239,  1243,  1244,  1248,  1249,
    1250,  1251,  1252,  1253,  1257,  1258,  1259,  1260,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1275,  1276,  1277,  1278,  1283,
    1284,  1285,  1286,  1287,  1288,  1289,  1293,  1294,  1298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "T_YIELD", "T_DOUBLE_ARROW", "T_YIELD_FROM",
  "'='", "T_POW_EQUAL", "T_SR_EQUAL", "T_SL_EQUAL", "T_XOR_EQUAL",
  "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL", "T_CONCAT_EQUAL",
  "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL", "T_PLUS_EQUAL", "'?'",
  "':'", "T_COALESCE", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'", "'^'",
  "'&'", "T_IS_GREATER_OR_EQUAL", "T_IS_SMALLER_OR_EQUAL", "T_SPACESHIP",
  "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL", "T_IS_EQUAL",
  "'<'", "'>'", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'", "'/'", "'%'",
  "'!'", "T_INSTANCEOF", "'~'", "T_UNSET_CAST", "T_BOOL_CAST",
  "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST", "T_DOUBLE_CAST",
  "T_INT_CAST", "T_DEC", "T_INC", "'@'", "T_POW", "'['", "T_CLONE",
  "T_NEW", "T_NOELSE", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_PUBLIC",
  "T_PROTECTED", "T_PRIVATE", "T_FINAL", "T_ABSTRACT", "T_STATIC",
  "T_ARRAY", "T_AS", "T_BAD_CHARACTER", "T_BREAK", "T_CALLABLE", "T_CASE",
  "T_CATCH", "T_CHARACTER", "T_CLASS", "T_CLASS_C", "T_CLOSE_TAG",
  "T_COMMENT", "T_CONST", "T_CONSTANT_ENCAPSED_STRING", "T_CONTINUE",
  "T_CURLY_OPEN", "T_DECLARE", "T_DEFAULT", "T_DIR", "T_DNUMBER", "T_DO",
  "T_DOC_COMMENT", "T_DOLLAR_OPEN_CURLY_BRACES", "T_ECHO", "T_EMPTY",
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
  "T_WHITESPACE", "T_FINALLY", "T_ELLIPSIS", "'{'", "'}'", "'('", "')'",
  "';'", "'`'", "'$'", "'\"'", "']'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "catch_list", "catch_name_list",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "$@3", "is_reference", "is_variadic",
  "class_declaration_statement", "$@4", "$@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "$@6",
  "interface_declaration_statement", "$@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "$@8", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "new_expr",
  "expr_without_variable", "$@9", "$@10", "function", "backup_doc_comment",
  "backup_fn_flags", "returns_ref", "lexical_vars", "lexical_var_list",
  "lexical_var", "function_call", "class_name", "class_name_reference",
  "exit_expr", "backticks_expr", "ctor_arguments", "dereferencable_scalar",
  "scalar", "constant", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   637,   605,   604,   549,   565,   564,    44,   582,
     583,   581,   600,   630,   535,   636,    61,   633,   610,   608,
     628,   597,   503,   586,   521,   530,   587,   585,   599,    63,
      58,   635,   510,   509,   124,    94,    38,   572,   577,   634,
     575,   573,   574,   571,    60,    62,   609,   607,    43,    45,
      46,    42,    47,    37,    33,   567,   126,   622,   508,   593,
     505,   614,   536,   569,   526,   563,    64,   632,    91,   518,
     589,   638,   539,   538,   546,   603,   602,   601,   553,   502,
     612,   504,   506,   507,   511,   512,   513,   514,   515,   516,
     517,   519,   520,   522,   523,   524,   525,   527,   528,   529,
     531,   532,   533,   534,   537,   540,   541,   542,   543,   544,
     545,   547,   548,   550,   551,   552,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   566,   568,   570,   576,   578,
     579,   580,   584,   588,   590,   591,   592,   594,   595,   596,
     598,   606,   611,   613,   615,   616,   617,   618,   619,   620,
     621,   623,   624,   625,   626,   627,   629,   631,   123,   125,
      40,    41,    59,    96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   176,   175,   177,   175,   175,   175,   175,
     175,   175,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   189,   189,   189,   189,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   197,   196,   198,   198,   199,   199,   201,
     200,   202,   200,   203,   203,   204,   204,   206,   205,   208,
     207,   209,   209,   210,   210,   211,   211,   212,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   239,   240,
     239,   241,   241,   242,   242,   242,   243,   243,   244,   244,
     245,   246,   246,   246,   246,   247,   247,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   253,   253,
     253,   253,   254,   254,   255,   255,   256,   256,   257,   258,
     259,   259,   260,   261,   261,   262,   262,   263,   264,   264,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   266,   265,   267,   265,   268,   269,
     270,   271,   271,   272,   272,   273,   273,   274,   274,   275,
     275,   275,   275,   276,   276,   277,   277,   278,   278,   279,
     279,   279,   280,   280,   281,   281,   281,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   283,   283,   284,   284,   285,   285,
     286,   287,   287,   287,   288,   288,   288,   289,   289,   289,
     289,   289,   289,   290,   290,   290,   291,   291,   291,   292,
     292,   293,   293,   293,   293,   293,   293,   294,   294,   294,
     295,   295,   295,   296,   297,   297,   298,   298,   299,   299,
     299,   299,   299,   299,   300,   300,   300,   300,   301,   301,
     301,   301,   301,   301,   301,   302,   302,   302,   302,   303,
     303,   303,   303,   303,   303,   303,   304,   304,   305
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     3,
       4,     3,     1,     1,     5,     6,     5,     6,     3,     1,
       3,     1,     3,     1,     1,     2,     1,     3,     1,     2,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     5,     7,     9,     5,     3,     3,     3,
       3,     3,     3,     1,     2,     5,     7,     9,     5,     1,
       6,     3,     3,     2,     0,     9,     1,     3,     0,     4,
       1,     3,     1,     0,    14,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     1,     4,     5,     6,
       1,     3,     6,     7,     3,     6,     1,     0,     1,     3,
       4,     6,     0,     1,     1,     2,     1,     1,     1,     0,
       2,     2,     3,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     3,     2,     0,     3,     4,     3,     0,
      13,     1,     3,     1,     2,     3,     1,     2,     2,     2,
       3,     3,     3,     4,     3,     1,     1,     3,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     4,     3,     1,     4,     4,
       3,     1,     1,     0,     1,     3,     1,     8,     3,     2,
       6,     5,     3,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,     0,    14,     0,    15,     1,     0,
       0,     0,     1,     0,     4,     3,     1,     1,     2,     2,
       4,     4,     2,     1,     1,     1,     1,     0,     3,     0,
       1,     1,     0,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     1,     1,     1,     3,     3,     1,     1,     0,     1,
       1,     1,     3,     1,     1,     3,     1,     1,     4,     4,
       4,     4,     1,     1,     1,     3,     1,     4,     2,     3,
       3,     1,     4,     4,     3,     3,     3,     1,     3,     1,
       1,     3,     1,     1,     0,     1,     3,     1,     3,     1,
       4,     2,     6,     4,     2,     2,     1,     2,     1,     4,
       3,     3,     3,     6,     3,     1,     1,     2,     1,     4,
       4,     2,     2,     4,     2,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,   176,
     175,   393,     0,   428,     0,   416,     0,   406,   428,     0,
     411,   408,     0,     0,     0,   397,   410,     0,     0,   414,
     378,     0,     0,     0,     0,   143,     0,     0,   409,     0,
     407,   413,     0,   415,     0,   428,     0,    81,     0,     0,
       0,   412,     0,     0,     0,   446,     0,   123,     0,   149,
     399,     0,     0,    83,   423,    79,    86,    87,    88,     0,
     173,    89,    90,   210,   131,     0,   132,   353,   427,   381,
     442,     0,   421,   367,   422,     0,     0,   430,     0,   443,
     426,   437,   444,   357,   393,     0,    81,   381,   495,   494,
       0,   492,   491,   369,   371,   373,   338,   339,   340,   341,
     364,   363,   362,   361,   360,   359,   358,   464,   393,     0,
     433,     0,   320,   318,   366,     0,     0,   469,     0,   467,
     463,   465,   304,   402,   394,   299,   395,   402,   451,   396,
     242,     0,   241,   381,   464,   429,     0,   181,     0,     0,
     121,     0,     0,     0,     0,   291,   292,     0,   428,   365,
     293,     0,     0,   238,   239,     0,     0,     0,   183,     0,
     464,     0,    95,     0,    85,     0,     0,     0,     0,   418,
     478,     0,   476,   153,     0,     0,   379,   123,     0,   103,
     102,     0,   116,     0,     0,     0,   118,   113,     0,     0,
       0,   400,     0,   401,     0,   448,     0,     0,     0,     0,
     389,     0,   174,     0,     0,     0,     0,     0,   382,   379,
       0,   428,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   428,     0,     0,   392,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,   317,   379,     0,     0,     0,     0,   431,   464,     0,
     405,   464,   403,   181,     0,   298,   428,     0,     0,     0,
       0,     0,   141,   379,     0,   137,     0,   185,     0,     0,
     101,   138,     0,     0,     0,   142,     0,     0,     0,   294,
     296,     0,     0,   140,   152,     0,     0,     0,   379,   498,
       0,   496,     0,    84,    80,    93,    92,   139,   431,     0,
       0,   417,   477,     0,     0,   475,   420,   474,     0,   151,
       0,     0,     0,   160,   431,   116,   119,     0,     0,     0,
     116,     0,     0,    97,     0,    99,     0,     0,   130,   122,
     124,   125,   126,   127,   128,   352,   368,     0,   419,    82,
       0,   231,     0,   233,   235,   181,     0,   211,     0,   123,
     214,   379,     0,     7,     6,     5,     4,     3,     8,     9,
      10,    46,    47,    11,    13,    12,    16,    17,    18,    76,
      75,    74,    73,    72,    71,    54,    29,    53,    55,    51,
      31,    61,    62,    44,    41,    27,    52,    68,    20,    19,
      40,    28,    24,    26,    50,    22,    14,    56,    67,    23,
      25,    64,    43,    36,    42,    15,    57,    35,    60,    39,
      66,    48,    65,    58,    69,    45,    77,    49,    33,    59,
      63,    30,    38,    34,    37,    21,    32,     0,    70,    78,
     424,   449,     0,     0,   323,   325,   324,     0,     0,   356,
     321,   322,   326,   328,   327,   349,   347,   350,   343,   342,
     345,   344,   346,   348,   337,   336,   330,   331,   329,   332,
     334,   335,   351,   333,   425,   450,     0,     0,   460,     0,
     462,   445,     0,     0,   302,   308,   316,   315,   314,   313,
     312,   311,   310,   309,   307,   306,   305,   493,   372,   405,
     432,     0,     0,     0,   468,     0,   466,   185,   455,     0,
     454,   456,     0,   243,   240,     0,   404,   182,     0,   379,
     379,   120,     0,     0,   290,   490,   398,   293,     0,     0,
     237,    91,     0,   251,   184,   179,     0,   489,     0,     0,
      80,   484,     0,   482,   481,     0,   486,   485,   488,     0,
     480,     0,   177,   154,     0,     0,     0,   117,     0,   116,
       0,    98,   100,     0,   116,   112,     0,     0,   447,   236,
       0,   232,   185,     0,     0,     0,     0,   222,     0,   390,
     439,   355,     0,   391,   438,     0,   441,   440,   303,   473,
     431,   464,   301,   379,   452,   453,   222,   186,   171,   289,
     123,   195,   148,     0,     0,   295,     0,   464,     0,     0,
     431,   123,   208,     0,     0,   497,     0,    96,     0,     0,
     487,   479,   201,   201,   136,   245,   158,   161,   145,     0,
       0,     0,   109,   114,     0,     0,   123,   206,   133,     0,
     234,   379,     0,     0,     0,   222,     0,   226,   227,   228,
       0,   216,   218,   165,   223,   224,   458,   354,   461,     0,
       0,     0,     0,     0,     0,   293,   431,     0,   464,     0,
       0,   212,   252,   245,   300,    94,     0,   201,     0,   201,
       0,   272,     0,     0,   150,     0,   115,     0,   106,     0,
       0,   111,     0,   129,   169,   209,   123,   215,     0,   225,
     383,   222,   166,   167,   472,   245,   383,   245,     0,   134,
       0,   405,     0,     0,   123,   193,   146,   272,   483,     0,
       0,     0,     0,     0,   197,   276,   277,   278,   281,   280,
     279,     0,   271,   178,   244,     0,     0,   273,   274,     0,
     123,   107,   108,     0,     0,   104,     0,     0,   213,   163,
       0,   229,   219,   168,     0,   272,   229,   272,   196,     0,
     189,     0,     0,   180,     0,     0,   204,   205,   123,   199,
     198,     0,   379,     0,   283,     0,   381,   275,   156,     0,
       0,   105,   110,   207,   245,   229,     0,     0,   380,   220,
     297,   380,   172,   123,   191,   135,   147,     0,   200,   123,
     203,     0,   253,   248,     0,   284,     0,   246,     0,     0,
     287,     0,     0,     0,   159,   272,   380,     0,   387,     0,
     386,   230,     0,     0,     0,     0,   194,   202,    58,    81,
     254,   265,     0,     0,   256,     0,     0,     0,   266,   379,
     282,     0,     0,   247,   379,   157,     0,   170,     0,   388,
       0,   384,   374,   221,   376,     0,     0,   255,   257,   258,
     259,     0,     0,   285,   379,   286,     0,   123,   123,   385,
     123,   123,   192,   267,   261,   262,   264,   260,   288,   222,
       0,     0,     0,     0,   263,     0,   155,   380,   380,   380,
     249,   164,   375,   377,   229,   380,     0,   123,   268,   380,
       0,   250,   269
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   478,   479,   848,     2,    83,    84,    85,   580,
     344,   670,   371,   214,   671,   730,   215,   672,   216,   217,
     169,   219,   379,   380,   666,   819,   724,   362,   363,   381,
     825,   743,   794,   382,   787,   702,    89,    90,   383,   665,
     384,   654,   317,   338,   559,   649,   835,   756,   642,   664,
     718,   808,   678,    93,    94,    95,    96,   690,   691,   692,
     693,   694,   695,   828,   302,   392,   393,   182,   183,   161,
     162,   721,   774,   934,   574,   843,   873,   874,   875,   876,
     877,   878,   939,   775,   776,   777,   778,   813,   814,   849,
     850,   170,   174,   175,   328,   329,   155,    97,    98,   910,
     911,   117,   402,   862,   239,   791,   859,   860,   100,   101,
     157,   179,   222,   303,   102,   103,   104,   105,   166,   106,
     107,   108,   109,   110,   111,   112,   159,   482,   521,   148,
     149,   150,   151,   201,   202,   589,   113,   340,   341
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -707
static const yytype_int16 yypact[] =
{
    -707,    74,  1221,  -707,  5611,  5611,  -127,  5611,  5611,  5611,
    5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,
    5611,  5611,  5611,   686,   686,  5611,  4778,  5611,   370,  -707,
    -707,   125,   -42,  5611,    17,  -707,    53,  -707,  5611,     9,
    -707,  -707,  4481,  5611,    80,    86,  -707,    87,    90,  -707,
    -707,   138,   141,   159,   173,  -707,   155,   198,  -707,   261,
    -707,  -707,   -29,  -707,   180,  5611,   380,   321,   284,  5611,
     225,  -707,   293,   285,   349,  -707,   310,  -707,  5611,  -707,
     -27,   356,   375,   265,   264,  -707,  -707,  -707,  -707,   517,
    -707,  -707,  -707,    92,  -707,   565,  -707,  -707,  -707,   436,
    -707,   339,   135,  -707,   442,  6573,   364,   115,   357,   359,
    4658,  -707,  -707,  -707,   402,   390,  -707,   436,  7523,  7523,
    5611,  7523,  7523,  1043,  5915,  1043,   455,   455,    61,   455,
     455,   455,   455,   455,   455,   455,   455,  4778,  -707,  5611,
     371,   442,   143,   143,   455,   686,   384,  7429,   369,  -707,
     539,  -707,  -707,   357,  -707,  -707,   411,   357,  -707,   163,
     537,    12,  -707,   436,  4778,  7523,   393,   448,   548,    19,
    -707,   404,    53,   415,    22,  -707,  7523,  5611,  5611,  -707,
    5611,  5611,    23,  -707,  -707,   410,   420,  5611,   466,  5611,
    4778,   180,  -707,   106,   265,   422,   686,  4912,   440,  -707,
      -3,   446,  -707,  -707,  5611,  6620,  -707,  -707,   686,  -707,
    -707,   180,    -4,   326,   428,    24,  -707,  -707,  5611,  1384,
    6667,   160,   429,   501,  5611,  -707,   160,   322,   458,  4644,
    -707,   459,  -707,   438,  4481,   451,   582,   452,  -707,   480,
    5774,  5611,  5611,  5611,  5611,  5075,  5611,  5611,  5611,  5611,
    5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,
    5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,   594,
    5611,  -707,  5774,  5611,   191,  5611,  -707,  5209,  5611,  5611,
    5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,  5611,
    -707,  -707,  -707,  6714,  5611,   460,  6762,    14,  4778,  5343,
     613,  4778,  -707,   448,   138,  -707,  5611,   191,   138,  5611,
    5611,   488,  -707,  -707,   482,  -707,   425,   520,  5611,    53,
    -707,  -707,    33,   489,  5611,  -707,  6809,   491,   493,   642,
    7523,  7377,   138,  -707,  -707,   495,  6857,   425,  -707,  7523,
      43,  -707,   492,   265,  -707,  -707,  -707,  -707,   499,    55,
    5759,  -707,  -707,   -23,   524,  -707,  -707,  -707,  6904,  -707,
     510,  1547,    44,  -707,    48,   150,  -707,   526,   -33,   180,
     169,   508,    26,  -707,   365,  -707,  6952,   515,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,   139,  -707,  7142,  -707,  -707,
    5611,  -707,    51,  -707,  7523,   448,  5611,  -707,  5611,  -707,
    -707,  -707,   516,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  5611,  -707,  -707,
     518,   519,   357,   521,  6077,  1369,  1043,  5611,  7476,  1206,
    1530,  1693,  1856,  2016,  2178,  2341,  2341,  2341,  2341,  2341,
    2341,  2341,   807,   761,   818,   818,   569,   569,   569,    61,
      61,    61,  -707,   455,   518,   519,   357,   522,  -707,  5611,
    -707,   357,  7189,   686,  1043,  1043,  1043,  1043,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1043,  -707,  1043,  -707,
     529,   523,   686,   530,  7523,  5611,  -707,   520,  -707,   527,
    -707,  -707,  7236,  7523,  -707,   532,  -707,  -707,   425,  -707,
    7523,  -707,  3666,  5611,  -707,  -707,  -707,  5611,  5611,   177,
    -707,  -707,  3829,  -707,   673,  -707,  5611,  -707,   666,   895,
    -707,  -707,  5611,  -707,  -707,   558,  -707,  -707,  -707,   531,
    -707,     5,  -707,  -707,   686,   536,   330,  -707,   304,   187,
     331,  -707,  -707,   180,   192,  -707,  3992,   525,  -707,  7523,
    5477,  -707,   520,  6999,  7047,  1710,   542,   181,  7283,  -707,
    -707,  1206,  5611,  -707,  -707,  7330,  -707,  -707,   143,   666,
      16,  4778,  1043,  -707,  -707,  -707,   181,   673,  -707,  -707,
    -707,  -707,  -707,  7094,   546,  7523,   686,  4778,   551,     1,
      39,  -707,  -707,   425,   541,  -707,  5611,  -707,  1058,    52,
    -707,  -707,   556,   566,  -707,  -707,   -45,  -707,  -707,   304,
     180,    56,  -707,  -707,   348,   180,  -707,  -707,  -707,   570,
    -707,  -707,  4481,   682,   571,   181,   153,  -707,  -707,  -707,
     574,   723,  -707,   700,  -707,  -707,  -707,  1206,  -707,   580,
     584,   588,   597,  1873,   590,  5611,    68,   591,  4778,   177,
    4155,  3503,  -707,  -707,  1043,  -707,   602,  -707,   242,  -707,
     184,   378,   596,   604,  -707,    60,  -707,   304,  -707,   180,
      64,  -707,  2036,  -707,  -707,  -707,  -707,  -707,   607,  -707,
     612,   196,  -707,   608,   666,  -707,   612,  -707,   610,  -707,
     609,    94,   617,   618,  -707,  -707,  -707,   387,  -707,   250,
    5611,    -5,   619,   240,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,   425,  -707,  -707,  -707,   616,   109,   287,  -707,   425,
    -707,  -707,  -707,    65,   180,  -707,   620,   625,  3503,  -707,
     627,   755,  -707,  -707,   635,   419,   755,   555,  -707,  4318,
    -707,  4155,  2199,  -707,   628,  6526,  -707,  -707,  -707,  -707,
    -707,    10,   773,    28,  -707,  6244,   436,  -707,  -707,    46,
    2362,  -707,  -707,  -707,  -707,   755,    73,   196,  -707,   775,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,   630,  -707,  -707,
    3503,  5930,  -707,  -707,  5611,  -707,   616,  -707,   777,    29,
    -707,  6244,   425,   633,  -707,   646,  -707,   643,  -707,    59,
    -707,  -707,   637,  5611,   641,  2525,  -707,  3503,   390,   721,
    -707,  -707,   677,  6087,  -707,   658,   660,   741,   698,  7523,
    -707,  5611,  6244,  -707,  -707,  -707,   667,  -707,   669,  -707,
      73,  -707,  -707,  7523,  -707,   668,  6244,  -707,  -707,  -707,
    -707,  6398,   425,  -707,  7523,  -707,   671,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  6244,   673,  -707,   181,
    2688,  2851,  3014,  3177,  -707,   674,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,   755,  -707,   -41,  -707,  -707,  -707,
    3340,  -707,  -707
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -707,  -707,   -69,  -707,  -233,  -331,   -24,   -26,  -707,  -707,
    -707,   760,  -707,  -707,   168,   111,   629,   114,  -168,   469,
     672,  -191,  -707,     3,  -707,  -707,  -707,  -707,   251,     4,
    -707,  -707,  -707,     6,  -707,  -707,  -707,   759,     7,  -707,
       8,  -707,  -280,  -707,  -420,   140,  -707,    63,  -707,  -707,
    -642,    67,  -707,  -707,  -707,  -707,  -707,  -625,  -707,   120,
    -707,    50,   189,  -674,   -80,  -707,   268,  -707,   547,  -707,
     572,  -589,  -707,  -707,  -555,  -707,  -707,    11,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -706,  -707,    35,  -707,
       0,   561,  -707,   562,  -553,  -707,  -707,  -707,  -707,  -707,
    -707,    -2,  -140,  -496,  -116,   144,  -707,    -1,  -707,   -16,
     622,  -707,  -707,   730,    25,  -707,    31,   128,   -19,  -707,
    -707,  -707,  -707,    34,   208,  -707,  -707,   623,   585,  -120,
     593,  -707,  -707,   274,   550,  -707,  -707,  -707,   320
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -472
static const yytype_int16 yytable[] =
{
      99,   292,   154,   637,   230,    86,    87,   480,    88,    91,
      92,   701,   156,   579,   644,   709,   361,   295,   653,   171,
     311,   720,  -471,   547,  -470,   806,   585,   319,   276,   163,
     324,   332,   374,   120,   374,   662,   846,   882,   193,   514,
     194,   319,   722,   366,   314,   173,   195,   313,   140,   140,
     212,   576,   594,  -187,   141,   141,  -162,   142,   143,   610,
     738,   242,   243,   244,   727,   353,   360,   890,   727,   196,
     342,   817,   784,   784,     3,   759,   197,   763,   367,   221,
     852,   245,  -188,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   191,   269,  -190,   857,
     389,   723,   163,   586,   116,   612,   269,   937,   164,   270,
     587,   938,   831,   582,   757,   598,   200,   633,   270,   192,
     588,   368,   118,   119,   354,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   856,   750,   144,   147,   152,   795,   807,   797,   327,
     167,   165,   710,   663,   233,   234,   165,   343,   841,   172,
     140,   176,   842,   555,   312,  -471,   141,  -470,   541,   297,
    -471,   320,  -470,   273,   325,   333,   375,   365,   602,   370,
     847,   883,   681,   165,   562,   916,   168,   205,   575,   853,
    -187,   366,   815,  -433,   577,   595,   220,  -432,   615,  -162,
     686,  -431,   611,   646,   583,   728,   811,    99,   716,   781,
     891,   140,   483,   785,   821,   686,   858,   141,    50,  -188,
     348,   306,   367,   140,   687,   855,   158,   397,   688,   141,
     177,   228,   364,   154,    50,   647,   178,   180,   293,   658,
     181,   367,   274,   156,   517,  -190,   196,   138,    32,   184,
     935,   616,   687,   197,   345,   147,   688,   296,   346,   367,
     760,    37,  -433,   275,   367,  -433,  -432,   687,   160,  -432,
    -431,   688,   761,  -431,   185,   596,   115,   549,    64,   225,
     557,    75,   147,  -433,   925,  -436,   116,  -432,   188,  -435,
     307,  -431,    81,   308,   600,   326,   165,   648,   330,   331,
     115,   573,    64,   200,   115,   336,    64,   339,   147,   186,
     116,   309,   674,   116,   116,   350,   760,   228,   760,   115,
      75,    64,   358,   187,   518,   864,   760,   139,   761,   116,
     761,    81,  -217,   764,    75,   599,   376,   917,   761,   519,
     604,   203,   387,   762,   223,    81,   227,   394,   189,    99,
     888,   804,   765,   766,   767,   768,   769,   770,   206,   165,
     484,   485,   486,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   209,   513,   810,
     228,   165,   619,   522,  -394,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   196,   638,
     639,   190,   538,   210,   229,   197,   147,   544,   355,   147,
     673,   931,   932,   933,   165,   366,   623,   552,   553,   936,
    -270,   626,   209,   941,   204,   208,   560,   116,   481,   703,
     138,   207,   176,   765,   766,   767,   768,   769,   770,   153,
     711,   369,   765,   766,   767,   768,   769,   770,   210,   116,
     218,   196,   238,   389,   389,   200,   196,   158,   197,   240,
     515,   226,   520,   197,   211,   732,   198,   388,   669,   675,
     199,   389,   116,   700,   765,   766,   767,   768,   769,   770,
     603,   673,   726,   115,   272,    64,   729,   731,   116,    75,
     241,   699,   548,   116,   224,   520,   551,   229,   609,  -434,
      81,    50,   270,    75,   613,   191,   614,   707,   200,   771,
     772,  -436,   573,   200,    81,   300,   196,   773,   771,   772,
     184,   734,   196,   197,   298,   788,   803,   301,   140,   197,
     351,   304,   355,   310,   141,   315,   356,   628,   115,   673,
      64,   731,   316,   802,   318,   641,   321,   140,   116,   323,
     771,   772,   334,   141,   604,   652,   630,    99,   830,   604,
     337,   335,    86,    87,   347,    88,    91,    92,   752,   820,
     373,   689,   386,   200,   140,    29,    30,   196,   396,   200,
     141,   389,   395,   650,   197,   618,   231,   355,   871,   677,
     689,   398,   399,    99,   400,   621,   822,   840,   884,   140,
     266,   267,   268,   401,   269,   141,   539,   712,   364,   545,
     765,   766,   767,   768,   769,   770,   270,   235,   236,   237,
     871,   160,   865,   556,   558,   604,   604,   625,   867,   563,
     568,   604,   566,   578,   200,   567,    99,   571,   581,   689,
     689,    86,    87,   913,    88,    91,    92,   590,   592,   597,
     601,   140,   845,   632,   138,   607,   617,   141,  -457,  -459,
     706,   653,   656,   924,   629,   735,   679,   620,   624,  -435,
     631,   643,   636,   634,   660,   330,   645,   661,   668,   713,
     851,    99,   685,   604,   339,   604,   771,   772,   705,    99,
     659,   708,   736,   755,   832,   689,   920,   921,   717,   922,
     923,   765,   766,   767,   768,   769,   770,   115,   719,    64,
      99,   741,   733,   737,   140,   740,   742,   116,   394,   903,
     141,   744,   745,   650,   906,   573,   940,    75,   352,   746,
     697,   357,   749,   818,   137,   747,   779,   751,    81,   147,
     604,   758,   780,   790,   918,   793,   138,    32,   789,   812,
     799,   352,   798,   357,   816,   147,   352,   357,   800,   801,
      37,   809,   823,   824,   714,   827,    99,   826,   829,   844,
     838,   863,   866,   881,   886,   892,   889,   771,   772,   894,
      99,   689,   834,   -77,   755,   887,  -472,   261,   262,   263,
     264,   265,   266,   267,   268,   872,   269,   896,    99,   115,
     899,    64,   900,   901,   902,   907,   885,   908,   270,   116,
     912,   919,   915,   330,   213,   930,   147,   725,    99,    75,
     783,   782,   372,   605,   322,   667,   139,   872,   232,   753,
      81,  -472,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   792,   269,    99,   836,    99,   263,   264,   265,   266,
     267,   268,   839,   269,   270,   739,   573,   861,   680,   570,
     561,   880,   905,   554,   898,   270,   564,   305,   805,   909,
     796,   512,   550,   689,   546,   516,   655,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,    99,    99,
      99,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,   879,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    34,    35,     0,     0,    36,    37,
      38,   893,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,     0,     0,     0,    45,   904,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,    77,   657,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,   245,    11,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
     270,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,     0,     0,     0,     0,    34,    35,     0,
       0,    36,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,    74,
       0,    75,    76,     0,     0,     0,    77,   715,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,   270,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,     0,     0,     0,     0,
      34,    35,     0,     0,    36,    37,    38,     0,    39,     0,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,     0,     0,     0,    77,
     244,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,   245,    11,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,   270,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    37,    38,
       0,    39,     0,    40,    41,    42,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,   377,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,   378,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,   270,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    37,    38,     0,    39,     0,    40,    41,    42,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,   377,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,   593,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
     270,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,   684,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,   377,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,   270,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
     748,     0,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,   377,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,     0,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,   786,    45,
       0,    46,    47,    48,    49,    50,    51,    52,   377,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    37,    38,     0,    39,     0,    40,    41,
      42,     0,     0,    43,    44,     0,     0,     0,   837,     0,
       0,     0,    45,     0,    46,    47,    48,    49,    50,    51,
      52,   377,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,     0,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,   377,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,   854,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    37,
      38,     0,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,     0,   895,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,    50,    51,    52,   377,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
     377,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,   926,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    37,    38,     0,    39,     0,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,   377,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
     927,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    37,    38,
       0,    39,     0,    40,    41,    42,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,   377,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,   928,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    37,    38,     0,    39,     0,    40,    41,    42,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,   377,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,   929,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,   377,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,   942,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,   377,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,     0,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   640,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,     0,    54,
       0,    55,     0,     0,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,     0,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   651,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    37,    38,     0,    39,     0,    40,    41,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,    47,    48,    49,    50,    51,
      52,     0,    54,     0,    55,     0,     0,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,     0,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,     0,    54,     0,    55,     0,     0,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,     0,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   754,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,     0,    33,
       0,     0,     0,     0,     0,    35,     0,     0,     0,    37,
      38,     0,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,    50,    51,    52,     0,    54,     0,
      55,     0,     0,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   833,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
       0,    54,     0,    55,     0,     0,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,     0,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,     0,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    37,    38,     0,    39,     0,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,     0,    54,     0,    55,     0,     0,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,   290,   291,   114,    32,  -431,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    37,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
       0,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     4,     5,     6,     7,     8,    66,   116,     0,     0,
       9,    10,    71,    11,     0,  -431,     0,    75,  -431,     0,
       0,   390,     0,     0,    78,   391,     0,    80,    81,    82,
       0,     0,     0,     0,   145,     0,  -431,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    37,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,   146,    60,
      61,   115,    63,    64,     0,     4,     5,     6,     7,     8,
      66,   116,     0,     0,     9,    10,    71,    11,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,    78,     0,
       0,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,    32,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,    37,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,     0,    66,   116,   349,     0,     0,     0,
      71,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,    37,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     4,     5,     6,     7,     8,    66,   116,     0,
       0,     9,    10,    71,    11,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,    78,     0,     0,    80,    81,
      82,     0,     0,     0,     0,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
      32,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    37,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     4,     5,     6,     7,
       8,    66,   116,     0,     0,     9,    10,    71,    11,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,    78,
       0,     0,    80,    81,    82,     0,     0,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,    32,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    37,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,   543,    60,    61,   115,    63,    64,     0,
       4,     5,     6,     7,     8,    66,   116,     0,     0,     9,
      10,    71,    11,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,    78,     0,     0,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,    32,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,    37,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     4,     5,     6,     7,     8,    66,
     116,     0,     0,     9,    10,    71,    11,     0,     0,     0,
      75,     0,     0,     0,   390,     0,     0,    78,     0,     0,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    37,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,     0,    66,   116,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,   242,   243,
     244,    78,     0,     0,    80,    81,    82,   403,   404,   405,
     406,   407,     0,   408,   409,   410,   411,   412,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,   413,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,     0,   427,   428,
     429,   430,     0,   431,   432,     0,     0,   433,     0,   434,
       0,   435,   436,   437,     0,   438,     0,     0,   439,   440,
       0,   441,   442,   443,     0,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,     0,   455,   456,     0,
     457,   458,   459,   460,   461,     0,   462,   463,   464,     0,
       0,     0,     0,     0,     0,   465,     0,   466,   584,   467,
     468,   469,   470,   471,   472,   473,   474,    75,   475,   294,
     476,     0,   477,   403,   404,   405,   406,   407,    81,   408,
     409,   410,   411,   412,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,     0,   427,   428,   429,   430,     0,   431,
     432,     0,     0,   433,     0,   434,     0,   435,   436,   437,
       0,   438,     0,     0,   439,   440,     0,   441,   442,   443,
       0,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,     0,   457,   458,   459,   460,
     461,     0,   462,   868,   464,    64,     0,     0,     0,     0,
       0,   465,     0,   869,     0,   467,   468,   469,   470,   471,
     472,   473,   474,     0,   475,     0,   476,   243,   244,   870,
     403,   404,   405,   406,   407,     0,   408,   409,   410,   411,
     412,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   413,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   414,   415,     0,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
       0,   427,   428,   429,   430,     0,   431,   432,     0,     0,
     433,     0,   434,     0,   435,   436,   437,     0,   438,     0,
       0,   439,   440,     0,   441,   442,   443,     0,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,     0,
     455,   456,     0,   457,   458,   459,   460,   461,     0,   462,
     868,   464,    64,     0,     0,     0,     0,     0,   465,     0,
     869,     0,   467,   468,   469,   470,   471,   472,   473,   474,
       0,   475,     0,   476,     0,     0,   897,   403,   404,   405,
     406,   407,     0,   408,   409,   410,   411,   412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   413,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,     0,   427,   428,
     429,   430,     0,   431,   432,     0,     0,   433,     0,   434,
       0,   435,   436,   437,     0,   438,     0,     0,   439,   440,
       0,   441,   442,   443,     0,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,     0,   455,   456,     0,
     457,   458,   459,   460,   461,     0,   462,   463,   464,     0,
       0,     0,     0,     0,     0,   465,     0,   466,     0,   467,
     468,   469,   470,   471,   472,   473,   474,     0,   475,     0,
     476,   403,   404,   405,   406,   407,     0,   408,   409,   410,
     411,   412,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   414,   415,     0,
     416,   417,   418,   765,   766,   767,   768,   769,   770,   425,
     426,     0,   427,   428,   429,   430,     0,   431,   432,     0,
       0,   433,     0,   434,     0,   435,   436,   437,     0,   438,
       0,     0,   439,   440,     0,   441,   442,   443,     0,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
       0,   455,   456,     0,   457,   458,   459,   460,   461,     0,
     462,   463,   464,     0,     0,   242,   243,   244,     0,   465,
       0,   914,     0,   467,   468,   469,   470,   471,   472,   473,
     474,     0,   475,     0,   476,   245,   806,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,   270,   807,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,   270,   271,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,   242,   243,   244,     0,     0,     0,     0,     0,     0,
       0,   270,   359,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,   385,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,   242,   243,   244,     0,
       0,     0,     0,     0,     0,   537,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,   540,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,   242,   243,   244,     0,     0,     0,     0,     0,     0,
     565,   270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,   572,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,   242,   243,   244,     0,
       0,     0,     0,     0,     0,   591,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,   606,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,   242,   243,   244,     0,     0,     0,     0,     0,     0,
     682,   270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,   683,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   704,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,   608,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,   627,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   242,   243,   244,     0,
       0,     0,     0,     0,     0,   635,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,   242,   243,
     244,     0,   696,   299,   270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,   569,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,   698,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   622,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     270
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-707)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-472)))

static const yytype_int16 yycheck[] =
{
       2,   117,    28,   558,    84,     2,     2,   240,     2,     2,
       2,   636,    28,   344,   567,    14,   207,   137,     8,    38,
       8,   663,     8,   303,     8,    30,    49,     8,   108,    31,
       8,     8,     8,   160,     8,    30,     8,     8,    62,   272,
      64,     8,    87,   211,   164,    42,    65,   163,    23,    24,
      74,     8,     8,    14,    23,    24,     8,    23,    24,     8,
     685,     9,    10,    11,     8,    68,   206,     8,     8,    96,
     190,   777,     8,     8,     0,   717,   103,   719,    82,   106,
      34,    29,    14,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   135,    55,    14,    36,
     143,   156,   114,   136,   143,   395,    55,   158,   160,    67,
     143,   162,   796,    68,   713,   158,   153,   547,    67,   158,
     153,   135,     4,     5,   137,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   825,   705,    25,    26,    27,   745,   162,   747,   178,
     143,    33,   161,   158,    72,    73,    38,   191,   158,   160,
     145,    43,   162,   313,   162,   161,   145,   161,   298,   145,
     166,   162,   166,    68,   162,   162,   162,   211,   162,   213,
     162,   162,   612,    65,   161,   901,   143,    69,   338,   153,
     161,   369,    93,    68,   161,   161,    78,    68,   399,   161,
      29,    68,   161,    36,   159,   159,   771,   219,   166,   159,
     161,   196,   241,   159,   159,    29,   153,   196,   119,   161,
     196,    68,    82,   208,    81,   824,    28,   234,    85,   208,
     160,   135,   208,   269,   119,    68,   160,   160,   120,   580,
     160,    82,   137,   269,   273,   161,    96,    80,    81,    51,
     934,   401,    81,   103,   158,   137,    85,   139,   162,    82,
      86,    94,   137,   158,    82,   140,   137,    81,   153,   140,
     137,    85,    98,   140,   143,   135,   133,   306,   135,    81,
     316,   153,   164,   158,   919,   160,   143,   158,   143,   160,
     137,   158,   164,   140,   135,   177,   178,   130,   180,   181,
     133,   337,   135,   153,   133,   187,   135,   189,   190,   160,
     143,   158,   135,   143,   143,   197,    86,   135,    86,   133,
     153,   135,   204,   160,   143,   831,    86,   160,    98,   143,
      98,   164,   161,   159,   153,   369,   218,   902,    98,   158,
     374,    30,   224,   111,    80,   164,    82,   229,   160,   361,
     856,   111,    75,    76,    77,    78,    79,    80,   143,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    93,   270,   159,
     135,   273,   482,   275,   140,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    96,   559,
     560,   160,   294,   119,   160,   103,   298,   299,   106,   301,
     598,   927,   928,   929,   306,   603,   516,   309,   310,   935,
     153,   521,    93,   939,   160,   160,   318,   143,   240,   640,
      80,   158,   324,    75,    76,    77,    78,    79,    80,    89,
     651,   135,    75,    76,    77,    78,    79,    80,   119,   143,
     160,    96,    36,   143,   143,   153,    96,   269,   103,   140,
     272,   106,   274,   103,   135,   676,   106,   165,   158,   158,
     110,   143,   143,   633,    75,    76,    77,    78,    79,    80,
     135,   669,   670,   133,   140,   135,   158,   675,   143,   153,
      68,   631,   304,   143,   158,   307,   308,   160,   390,   160,
     164,   119,    67,   153,   396,   135,   398,   647,   153,   151,
     152,   160,   558,   153,   164,   166,    96,   159,   151,   152,
     332,   681,    96,   103,   160,   736,   159,     8,   523,   103,
     110,   140,   106,    16,   523,   162,   110,   523,   133,   727,
     135,   729,   114,   754,    16,   562,   162,   542,   143,   154,
     151,   152,   162,   542,   598,   572,   542,   579,   159,   603,
     114,   161,   579,   579,   162,   579,   579,   579,   708,   780,
     162,   617,   163,   153,   569,    78,    79,    96,   160,   153,
     569,   143,   143,   569,   103,   477,    89,   106,   841,   606,
     636,   160,    30,   615,   162,   487,   784,   808,   851,   594,
      51,    52,    53,   143,    55,   594,   166,   653,   594,    16,
      75,    76,    77,    78,    79,    80,    67,    72,    73,    74,
     873,   153,   833,   161,   124,   669,   670,   519,   839,   160,
       8,   675,   161,   161,   153,   162,   658,   162,   159,   685,
     686,   658,   658,   896,   658,   658,   658,   143,   158,   143,
     162,   646,   812,   545,    80,   160,   160,   646,   160,   160,
     646,     8,    16,   916,   161,   682,   161,   166,   166,   160,
     160,   563,   160,   166,   136,   567,   568,   166,   162,   158,
     816,   703,   160,   727,   576,   729,   151,   152,   162,   711,
     582,   160,    30,   710,   159,   741,   907,   908,   162,   910,
     911,    75,    76,    77,    78,    79,    80,   133,   162,   135,
     732,     8,   162,   162,   709,   161,    36,   143,   610,   879,
     709,   161,   158,   709,   884,   771,   937,   153,   198,   161,
     622,   201,   162,   779,    68,   158,   160,   166,   164,   631,
     784,   159,   158,   151,   904,   157,    80,    81,   161,   153,
     161,   221,   162,   223,   776,   647,   226,   227,   161,   161,
      94,   162,   162,   158,   656,    30,   788,   160,   153,    16,
     162,    16,   162,    16,   161,   158,   153,   151,   152,   158,
     802,   827,   799,    82,   801,   159,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   841,    55,   140,   820,   133,
     162,   135,   162,    82,   126,   158,   852,   158,    67,   143,
     162,   160,   901,   705,    74,   161,   708,   669,   840,   153,
     729,   727,   213,   374,   172,   594,   160,   873,    89,   709,
     164,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   741,    55,   865,   801,   867,    48,    49,    50,    51,
      52,    53,   805,    55,    67,   686,   902,   827,   610,   332,
     319,   846,   882,   311,   873,    67,   324,   157,   760,   890,
     746,   269,   307,   919,   301,   272,   576,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   920,   921,
     922,   923,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   940,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,   844,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    93,    94,
      95,   863,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   881,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
      -1,    -1,    -1,   158,   159,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    29,    15,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      67,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    93,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,   158,
      11,   160,    -1,   162,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    29,    15,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,    -1,    -1,   153,   154,    -1,
      -1,    -1,   158,   159,   160,    -1,   162,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,
     107,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,
      -1,   158,    -1,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,    -1,    -1,   153,
     154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
      -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,   160,
      -1,   162,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,
     158,   159,   160,    -1,   162,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,    -1,
      -1,   153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,
     159,   160,    -1,   162,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,    -1,    -1,   153,   154,    -1,
      -1,    -1,   158,   159,   160,    -1,   162,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,   159,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,
      -1,   158,    -1,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
      -1,   125,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,   145,   146,    -1,   148,   149,   150,    -1,    -1,   153,
     154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,    -1,   125,    -1,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,   145,   146,    -1,   148,   149,   150,
      -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,   160,
      -1,   162,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,    -1,   125,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,    -1,
     148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,
     158,    -1,   160,    -1,   162,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,    -1,
     125,    -1,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,    -1,   148,   149,   150,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,    -1,   125,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,    -1,   145,   146,    -1,   148,   149,   150,    -1,
      -1,   153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,    -1,   125,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,   145,   146,    -1,   148,
     149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,
      -1,   160,    -1,   162,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    80,    81,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,     3,     4,     5,     6,     7,   142,   143,    -1,    -1,
      12,    13,   148,    15,    -1,   137,    -1,   153,   140,    -1,
      -1,   157,    -1,    -1,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    36,    -1,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,     3,     4,     5,     6,     7,
     142,   143,    -1,    -1,    12,    13,   148,    15,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,     3,     4,     5,     6,     7,   142,   143,    -1,
      -1,    12,    13,   148,    15,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,     3,     4,     5,     6,
       7,   142,   143,    -1,    -1,    12,    13,   148,    15,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,
      -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
       3,     4,     5,     6,     7,   142,   143,    -1,    -1,    12,
      13,   148,    15,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,     3,     4,     5,     6,     7,   142,
     143,    -1,    -1,    12,    13,   148,    15,    -1,    -1,    -1,
     153,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,     9,    10,
      11,   160,    -1,    -1,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    -1,    89,    90,    -1,    -1,    93,    -1,    95,
      -1,    97,    98,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,   159,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    14,
     156,    -1,   158,     3,     4,     5,     6,     7,   164,     9,
      10,    11,    12,    13,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    87,    -1,    89,
      90,    -1,    -1,    93,    -1,    95,    -1,    97,    98,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,    -1,   156,    10,    11,   159,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    87,    -1,    89,    90,    -1,    -1,
      93,    -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,
      -1,   104,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,    -1,   156,    -1,    -1,   159,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    -1,    89,    90,    -1,    -1,    93,    -1,    95,
      -1,    97,    98,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,    -1,
     156,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    -1,    89,    90,    -1,
      -1,    93,    -1,    95,    -1,    97,    98,    99,    -1,   101,
      -1,    -1,   104,   105,    -1,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,    -1,   126,   127,   128,   129,   130,    -1,
     132,   133,   134,    -1,    -1,     9,    10,    11,    -1,   141,
      -1,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,    -1,   156,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,   159,    14,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    82,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   168,   172,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    78,
      79,    80,    81,    84,    89,    90,    93,    94,    95,    97,
      99,   100,   101,   104,   105,   113,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   125,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   141,   142,   143,   145,   146,
     147,   148,   149,   150,   151,   153,   154,   158,   160,   162,
     163,   164,   165,   173,   174,   175,   190,   196,   200,   203,
     204,   205,   207,   220,   221,   222,   223,   264,   265,   268,
     275,   276,   281,   282,   283,   284,   286,   287,   288,   289,
     290,   291,   292,   303,    80,   133,   143,   268,   284,   284,
     160,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,    68,    80,   160,
     281,   283,   290,   290,   284,    36,   130,   284,   296,   297,
     298,   299,   284,    89,   174,   263,   276,   277,   291,   293,
     153,   236,   237,   268,   160,   284,   285,   143,   143,   187,
     258,   285,   160,   190,   259,   260,   284,   160,   160,   278,
     160,   160,   234,   235,   291,   143,   160,   160,   143,   160,
     160,   135,   158,   173,   173,   285,    96,   103,   106,   110,
     153,   300,   301,    30,   160,   284,   143,   158,   160,    93,
     119,   135,   173,   178,   180,   183,   185,   186,   160,   188,
     284,   106,   279,   300,   158,   291,   106,   300,   135,   160,
     231,    89,   204,    72,    73,    72,    73,    74,    36,   271,
     140,    68,     9,    10,    11,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,   162,   140,    68,   137,   158,   231,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      64,    65,   271,   284,    14,   296,   284,   290,   160,    14,
     166,     8,   231,   280,   140,   280,    68,   137,   140,   158,
      16,     8,   162,   271,   296,   162,   114,   209,    16,     8,
     162,   162,   187,   154,     8,   162,   284,   285,   261,   262,
     284,   284,     8,   162,   162,   161,   284,   114,   210,   284,
     304,   305,   296,   173,   177,   158,   162,   162,   290,   144,
     284,   110,   301,    68,   137,   106,   110,   301,   284,   162,
     269,   188,   194,   195,   290,   173,   185,    82,   135,   135,
     173,   179,   183,   162,     8,   162,   284,   122,   159,   189,
     190,   196,   200,   205,   207,   161,   163,   284,   165,   143,
     157,   161,   232,   233,   284,   143,   160,   190,   160,    30,
     162,   143,   269,     3,     4,     5,     6,     7,     9,    10,
      11,    12,    13,    55,    69,    70,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    84,    85,    86,
      87,    89,    90,    93,    95,    97,    98,    99,   101,   104,
     105,   107,   108,   109,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   123,   124,   126,   127,   128,
     129,   130,   132,   133,   134,   141,   143,   145,   146,   147,
     148,   149,   150,   151,   152,   154,   156,   158,   169,   170,
     171,   291,   294,   285,   284,   284,   284,    30,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   277,   284,   171,   291,   294,   285,   143,   158,
     291,   295,   284,    36,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   161,   284,   166,
     161,   296,    36,   130,   284,    16,   297,   209,   291,   285,
     295,   291,   284,   284,   237,   269,   161,   174,   124,   211,
     284,   258,   161,   160,   260,   161,   161,   162,     8,    82,
     235,   162,   161,   174,   241,   269,     8,   161,   161,   172,
     176,   159,    68,   159,   159,    49,   136,   143,   153,   302,
     143,   161,   158,   159,     8,   161,   135,   143,   158,   173,
     135,   162,   162,   135,   173,   186,   161,   160,   159,   284,
       8,   161,   209,   284,   284,   188,   269,   160,   284,   231,
     166,   284,    30,   231,   166,   284,   231,   159,   290,   161,
     290,   160,   284,   211,   166,   159,   160,   241,   269,   269,
      30,   190,   215,   284,   261,   284,    36,    68,   130,   212,
     290,    30,   190,     8,   208,   305,    16,   159,   172,   284,
     136,   166,    30,   158,   216,   206,   191,   195,   162,   158,
     178,   181,   184,   185,   135,   158,    30,   190,   219,   161,
     233,   211,   161,   161,    74,   160,    29,    81,    85,   174,
     224,   225,   226,   227,   228,   229,   159,   284,   159,   296,
     269,   224,   202,   188,   161,   162,   290,   296,   160,    14,
     161,   188,   174,   158,   284,   159,   166,   162,   217,   162,
     217,   238,    87,   156,   193,   181,   185,     8,   159,   158,
     182,   185,   188,   162,   269,   190,    30,   162,   224,   229,
     161,     8,    36,   198,   161,   158,   161,   158,   107,   162,
     261,   166,   296,   212,    30,   190,   214,   238,   159,   217,
      86,    98,   111,   217,   159,    75,    76,    77,    78,    79,
      80,   151,   152,   159,   239,   250,   251,   252,   253,   160,
     158,   159,   184,   182,     8,   159,   112,   201,   188,   161,
     151,   272,   226,   157,   199,   238,   272,   238,   162,   161,
     161,   161,   188,   159,   111,   284,    30,   162,   218,   162,
     159,   241,   153,   254,   255,    93,   268,   253,   174,   192,
     188,   159,   185,   162,   158,   197,   160,    30,   230,   153,
     159,   230,   159,    30,   190,   213,   214,   109,   162,   218,
     188,   158,   162,   242,    16,   269,     8,   162,   171,   256,
     257,   271,    34,   153,   159,   238,   230,    36,   153,   273,
     274,   228,   270,    16,   270,   188,   162,   188,   133,   143,
     159,   171,   174,   243,   244,   245,   246,   247,   248,   284,
     255,    16,     8,   162,   171,   174,   161,   159,   270,   153,
       8,   161,   158,   284,   158,   108,   140,   159,   244,   162,
     162,    82,   126,   269,   284,   257,   269,   158,   158,   274,
     266,   267,   162,   171,   143,   169,   253,   241,   269,   160,
     188,   188,   188,   188,   171,   224,   159,   159,   159,   159,
     161,   270,   270,   270,   240,   230,   270,   158,   162,   249,
     188,   270,   159
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
#line 376 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 400 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 401 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 405 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 406 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName); (yyval.qualifiedName)->AppendName((yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 410 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 411 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 412 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 416 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 417 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 418 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 419 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 420 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 421 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 422 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 423 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 424 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 425 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 426 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 427 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 428 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 429 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 430 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 431 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 440 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].unprefixedNameList)); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 441 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].unprefixedNameList)); }
    break;

  case 106:
/* Line 1802 of yacc.c  */
#line 445 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseQualify((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 107:
/* Line 1802 of yacc.c  */
#line 446 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseQualify((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 108:
/* Line 1802 of yacc.c  */
#line 450 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 109:
/* Line 1802 of yacc.c  */
#line 451 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 110:
/* Line 1802 of yacc.c  */
#line 455 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.unprefixedNameList) = observers.UnprefixedNameListAppend((yyvsp[(1) - (3)].unprefixedNameList), (yyvsp[(3) - (3)].unprefixedName)); }
    break;

  case 111:
/* Line 1802 of yacc.c  */
#line 456 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.unprefixedNameList) = observers.UnprefixedNameListMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 112:
/* Line 1802 of yacc.c  */
#line 460 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 113:
/* Line 1802 of yacc.c  */
#line 461 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 114:
/* Line 1802 of yacc.c  */
#line 465 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 115:
/* Line 1802 of yacc.c  */
#line 466 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportMake((yyvsp[(1) - (2)].semanticValue), (yyvsp[(2) - (2)].unprefixedName)); }
    break;

  case 116:
/* Line 1802 of yacc.c  */
#line 470 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.unprefixedName) = observers.UnprefixedNameMake((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 117:
/* Line 1802 of yacc.c  */
#line 471 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.unprefixedName) = observers.UnprefixedNameMakeAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 118:
/* Line 1802 of yacc.c  */
#line 475 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 119:
/* Line 1802 of yacc.c  */
#line 476 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMakeAbsolute((yyvsp[(2) - (2)].unprefixedName)); }
    break;

  case 120:
/* Line 1802 of yacc.c  */
#line 480 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 121:
/* Line 1802 of yacc.c  */
#line 481 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 122:
/* Line 1802 of yacc.c  */
#line 485 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 123:
/* Line 1802 of yacc.c  */
#line 486 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 124:
/* Line 1802 of yacc.c  */
#line 490 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 125:
/* Line 1802 of yacc.c  */
#line 491 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 126:
/* Line 1802 of yacc.c  */
#line 492 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 127:
/* Line 1802 of yacc.c  */
#line 493 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 128:
/* Line 1802 of yacc.c  */
#line 494 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 129:
/* Line 1802 of yacc.c  */
#line 495 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 130:
/* Line 1802 of yacc.c  */
#line 499 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 131:
/* Line 1802 of yacc.c  */
#line 500 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 132:
/* Line 1802 of yacc.c  */
#line 501 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 133:
/* Line 1802 of yacc.c  */
#line 502 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 134:
/* Line 1802 of yacc.c  */
#line 503 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (7)].statementList), (yyvsp[(5) - (7)].expression)); }
    break;

  case 135:
/* Line 1802 of yacc.c  */
#line 504 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList));
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList));
																					   }
    break;

  case 136:
/* Line 1802 of yacc.c  */
#line 508 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 137:
/* Line 1802 of yacc.c  */
#line 509 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 138:
/* Line 1802 of yacc.c  */
#line 510 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 139:
/* Line 1802 of yacc.c  */
#line 511 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 140:
/* Line 1802 of yacc.c  */
#line 512 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 141:
/* Line 1802 of yacc.c  */
#line 513 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 142:
/* Line 1802 of yacc.c  */
#line 514 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 143:
/* Line 1802 of yacc.c  */
#line 515 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 144:
/* Line 1802 of yacc.c  */
#line 516 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 145:
/* Line 1802 of yacc.c  */
#line 517 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 146:
/* Line 1802 of yacc.c  */
#line 518 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (7)].expression)); 
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (7)].expression));
																						 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList));
	                                                                                 }
    break;

  case 147:
/* Line 1802 of yacc.c  */
#line 523 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (9)].expression)); 
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (9)].expression));
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(7) - (9)].expression));
																						 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList));
	                                                                                 }
    break;

  case 148:
/* Line 1802 of yacc.c  */
#line 529 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake((yyvsp[(3) - (5)].statementList), (yyvsp[(5) - (5)].statementList))); }
    break;

  case 149:
/* Line 1802 of yacc.c  */
#line 530 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 150:
/* Line 1802 of yacc.c  */
#line 531 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (6)].statementList), (yyvsp[(5) - (6)].statementList));
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList));
																					   }
    break;

  case 151:
/* Line 1802 of yacc.c  */
#line 534 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));}
    break;

  case 152:
/* Line 1802 of yacc.c  */
#line 535 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 153:
/* Line 1802 of yacc.c  */
#line 536 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 154:
/* Line 1802 of yacc.c  */
#line 540 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 155:
/* Line 1802 of yacc.c  */
#line 542 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (9)].statementList),
																					   observers.VariableMakeCatchedException((yyvsp[(4) - (9)].qualifiedNameList), (yyvsp[(5) - (9)].semanticValue)));
																					 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (9)].statementList)); }
    break;

  case 156:
/* Line 1802 of yacc.c  */
#line 548 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListMake((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 157:
/* Line 1802 of yacc.c  */
#line 549 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListAppend((yyvsp[(1) - (3)].qualifiedNameList), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 158:
/* Line 1802 of yacc.c  */
#line 553 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 159:
/* Line 1802 of yacc.c  */
#line 554 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 160:
/* Line 1802 of yacc.c  */
#line 558 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 161:
/* Line 1802 of yacc.c  */
#line 559 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 162:
/* Line 1802 of yacc.c  */
#line 563 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 163:
/* Line 1802 of yacc.c  */
#line 568 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (7)].semanticValue)); }
    break;

  case 164:
/* Line 1802 of yacc.c  */
#line 572 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (14)].semanticValue), (yyvsp[(2) - (14)].isMethod), (yyvsp[(1) - (14)].semanticValue), (yyvsp[(6) - (14)].parametersList), (yyvsp[(12) - (14)].statementList), (yyvsp[(11) - (14)].semanticValue), (yyvsp[(13) - (14)].semanticValue), (yyvsp[(9) - (14)].typeHint));
											                  observers.SetCurrentMemberName(NULL);
															 }
    break;

  case 165:
/* Line 1802 of yacc.c  */
#line 578 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 166:
/* Line 1802 of yacc.c  */
#line 579 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 167:
/* Line 1802 of yacc.c  */
#line 583 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isVariadic) = false; }
    break;

  case 168:
/* Line 1802 of yacc.c  */
#line 584 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isVariadic) = true; }
    break;

  case 169:
/* Line 1802 of yacc.c  */
#line 589 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 170:
/* Line 1802 of yacc.c  */
#line 590 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(3) - (10)].semanticValue), (yyvsp[(1) - (10)].classSymbol), (yyvsp[(4) - (10)].classSymbol), (yyvsp[(5) - (10)].classSymbol), (yyvsp[(10) - (10)].semanticValue));
																				 observers.DeclareAssignedPropertiesFromAssignments((yyvsp[(9) - (10)].statementList));
											                                    /*
											                                     * parse out property and method PHP docs
											                                     */
											                                   pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) (yyval.statementList)->At(0);
											                                   observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											                                   observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (10)].statementList));
																				observers.SetCurrentClassName(NULL);  
											                                  }
    break;

  case 171:
/* Line 1802 of yacc.c  */
#line 601 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (5)].semanticValue)); }
    break;

  case 172:
/* Line 1802 of yacc.c  */
#line 602 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (9)].semanticValue),
																					observers.ClassSymbolStart((yyvsp[(1) - (9)].semanticValue), false, false, false, false),
																					(yyvsp[(3) - (9)].classSymbol), (yyvsp[(4) - (9)].classSymbol), (yyvsp[(9) - (9)].semanticValue));
																				 observers.DeclareAssignedPropertiesFromAssignments((yyvsp[(8) - (9)].statementList));
											                                    /*
											                                     * parse out property and method PHP docs
											                                     */
											                                    pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) (yyval.statementList)->At(0);
											                                    observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											                                    observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (9)].statementList));
																				 observers.SetCurrentClassName(NULL);  
											                                  }
    break;

  case 173:
/* Line 1802 of yacc.c  */
#line 617 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (1)].classSymbol); }
    break;

  case 174:
/* Line 1802 of yacc.c  */
#line 618 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolMergeModifiers((yyvsp[(1) - (2)].classSymbol), (yyvsp[(2) - (2)].classSymbol)); }
    break;

  case 175:
/* Line 1802 of yacc.c  */
#line 622 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), true, false, false, false); }
    break;

  case 176:
/* Line 1802 of yacc.c  */
#line 623 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, true, false, false); }
    break;

  case 177:
/* Line 1802 of yacc.c  */
#line 628 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 178:
/* Line 1802 of yacc.c  */
#line 629 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), 
														observers.ClassSymbolStart((yyvsp[(1) - (7)].semanticValue), false, false, false, true),
														observers.ClassSymbolStart((yyvsp[(1) - (7)].semanticValue), false, false, false, true),
														observers.ClassSymbolStart((yyvsp[(1) - (7)].semanticValue), false, false, false, true),
														(yyvsp[(7) - (7)].semanticValue));
											  observers.DeclareAssignedPropertiesFromAssignments((yyvsp[(6) - (7)].statementList));
											   /*
											   * parse out property and method PHP docs
											   */
											  pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) (yyval.statementList)->At(0);
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList));
											  observers.SetCurrentClassName(NULL);  
											}
    break;

  case 179:
/* Line 1802 of yacc.c  */
#line 648 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 180:
/* Line 1802 of yacc.c  */
#line 649 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (8)].semanticValue), 
																				observers.ClassSymbolStart((yyvsp[(1) - (8)].semanticValue), false, false, true, false),
																				observers.ClassSymbolStart((yyvsp[(1) - (8)].semanticValue), false, false, false, false),
																				(yyvsp[(3) - (8)].classSymbol), 
																				(yyvsp[(8) - (8)].semanticValue));
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

  case 181:
/* Line 1802 of yacc.c  */
#line 666 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 182:
/* Line 1802 of yacc.c  */
#line 667 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 183:
/* Line 1802 of yacc.c  */
#line 671 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 184:
/* Line 1802 of yacc.c  */
#line 672 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(2) - (2)].qualifiedNameList)); }
    break;

  case 185:
/* Line 1802 of yacc.c  */
#line 676 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 186:
/* Line 1802 of yacc.c  */
#line 677 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(2) - (2)].qualifiedNameList)); }
    break;

  case 187:
/* Line 1802 of yacc.c  */
#line 681 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 188:
/* Line 1802 of yacc.c  */
#line 682 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 189:
/* Line 1802 of yacc.c  */
#line 683 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (4)].statementList), observers.ExpressionNil()); }
    break;

  case 190:
/* Line 1802 of yacc.c  */
#line 684 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(2) - (3)].statementList), observers.ExpressionNil()); }
    break;

  case 191:
/* Line 1802 of yacc.c  */
#line 688 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 192:
/* Line 1802 of yacc.c  */
#line 689 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 193:
/* Line 1802 of yacc.c  */
#line 693 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 194:
/* Line 1802 of yacc.c  */
#line 694 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 195:
/* Line 1802 of yacc.c  */
#line 698 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 196:
/* Line 1802 of yacc.c  */
#line 699 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 197:
/* Line 1802 of yacc.c  */
#line 703 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 198:
/* Line 1802 of yacc.c  */
#line 704 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 199:
/* Line 1802 of yacc.c  */
#line 705 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 200:
/* Line 1802 of yacc.c  */
#line 706 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 201:
/* Line 1802 of yacc.c  */
#line 710 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 202:
/* Line 1802 of yacc.c  */
#line 711 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), (yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 203:
/* Line 1802 of yacc.c  */
#line 712 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].statementList)); }
    break;

  case 204:
/* Line 1802 of yacc.c  */
#line 716 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (1)].semanticValue); }
    break;

  case 205:
/* Line 1802 of yacc.c  */
#line 717 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (1)].semanticValue); }
    break;

  case 206:
/* Line 1802 of yacc.c  */
#line 721 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 207:
/* Line 1802 of yacc.c  */
#line 722 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 208:
/* Line 1802 of yacc.c  */
#line 726 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); 
		                                                             (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 209:
/* Line 1802 of yacc.c  */
#line 728 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (6)].statementList), (yyvsp[(4) - (6)].expression));
	                                                                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 210:
/* Line 1802 of yacc.c  */
#line 733 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 211:
/* Line 1802 of yacc.c  */
#line 734 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 212:
/* Line 1802 of yacc.c  */
#line 738 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (6)].expression));
		                                                                               (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 213:
/* Line 1802 of yacc.c  */
#line 740 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (7)].statementList), (yyvsp[(4) - (7)].expression));
	                                                                                   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 214:
/* Line 1802 of yacc.c  */
#line 745 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 215:
/* Line 1802 of yacc.c  */
#line 746 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), (yyvsp[(4) - (6)].statementList)); }
    break;

  case 216:
/* Line 1802 of yacc.c  */
#line 750 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 217:
/* Line 1802 of yacc.c  */
#line 751 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 218:
/* Line 1802 of yacc.c  */
#line 755 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 219:
/* Line 1802 of yacc.c  */
#line 756 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (3)].parametersList), (yyvsp[(3) - (3)].parametersList)); }
    break;

  case 220:
/* Line 1802 of yacc.c  */
#line 760 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend(observers.ParametersListNil(),
		                                                                        observers.ParametersListCreate((yyvsp[(1) - (4)].typeHint), (yyvsp[(4) - (4)].semanticValue), (yyvsp[(2) - (4)].isMethod), false, (yyvsp[(3) - (4)].isVariadic))); }
    break;

  case 221:
/* Line 1802 of yacc.c  */
#line 762 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend(observers.ParametersListNil(),
	                                                                            observers.ParametersListCreate((yyvsp[(1) - (6)].typeHint), (yyvsp[(4) - (6)].semanticValue), (yyvsp[(2) - (6)].isMethod), true, (yyvsp[(3) - (6)].isVariadic))); }
    break;

  case 222:
/* Line 1802 of yacc.c  */
#line 768 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = observers.TypeHintMakeNil(); }
    break;

  case 223:
/* Line 1802 of yacc.c  */
#line 769 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = (yyvsp[(1) - (1)].typeHint); }
    break;

  case 224:
/* Line 1802 of yacc.c  */
#line 773 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = observers.TypeHintMake((yyvsp[(1) - (1)].qualifiedName), false); }
    break;

  case 225:
/* Line 1802 of yacc.c  */
#line 774 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = observers.TypeHintMake((yyvsp[(2) - (2)].qualifiedName), true); }
    break;

  case 226:
/* Line 1802 of yacc.c  */
#line 777 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 227:
/* Line 1802 of yacc.c  */
#line 778 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 228:
/* Line 1802 of yacc.c  */
#line 779 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 229:
/* Line 1802 of yacc.c  */
#line 783 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = observers.TypeHintMakeNil(); }
    break;

  case 230:
/* Line 1802 of yacc.c  */
#line 784 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.typeHint) = (yyvsp[(2) - (2)].typeHint); }
    break;

  case 231:
/* Line 1802 of yacc.c  */
#line 788 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 232:
/* Line 1802 of yacc.c  */
#line 789 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 233:
/* Line 1802 of yacc.c  */
#line 793 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 234:
/* Line 1802 of yacc.c  */
#line 794 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 235:
/* Line 1802 of yacc.c  */
#line 798 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 236:
/* Line 1802 of yacc.c  */
#line 799 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); (yyval.expression)->IsUnpack = true; }
    break;

  case 237:
/* Line 1802 of yacc.c  */
#line 803 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 238:
/* Line 1802 of yacc.c  */
#line 804 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 239:
/* Line 1802 of yacc.c  */
#line 808 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 240:
/* Line 1802 of yacc.c  */
#line 812 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 241:
/* Line 1802 of yacc.c  */
#line 813 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 242:
/* Line 1802 of yacc.c  */
#line 817 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 243:
/* Line 1802 of yacc.c  */
#line 818 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 244:
/* Line 1802 of yacc.c  */
#line 822 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 245:
/* Line 1802 of yacc.c  */
#line 823 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 246:
/* Line 1802 of yacc.c  */
#line 828 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 247:
/* Line 1802 of yacc.c  */
#line 829 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolSetModifiers((yyvsp[(3) - (4)].statementList), (yyvsp[(1) - (4)].classMemberSymbol)); }
    break;

  case 248:
/* Line 1802 of yacc.c  */
#line 830 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].qualifiedNameList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 249:
/* Line 1802 of yacc.c  */
#line 832 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (8)].semanticValue)); }
    break;

  case 250:
/* Line 1802 of yacc.c  */
#line 833 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (13)].semanticValue), (yyvsp[(1) - (13)].classMemberSymbol), (yyvsp[(3) - (13)].isMethod), (yyvsp[(2) - (13)].semanticValue), (yyvsp[(7) - (13)].parametersList), (yyvsp[(12) - (13)].classMemberSymbol), (yyvsp[(10) - (13)].typeHint));
																	observers.SetCurrentMemberName(NULL);
															      }
    break;

  case 251:
/* Line 1802 of yacc.c  */
#line 839 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListMake((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 252:
/* Line 1802 of yacc.c  */
#line 840 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListAppend((yyvsp[(1) - (3)].qualifiedNameList), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 253:
/* Line 1802 of yacc.c  */
#line 844 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 254:
/* Line 1802 of yacc.c  */
#line 845 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 255:
/* Line 1802 of yacc.c  */
#line 846 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 256:
/* Line 1802 of yacc.c  */
#line 850 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 257:
/* Line 1802 of yacc.c  */
#line 851 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 258:
/* Line 1802 of yacc.c  */
#line 855 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); }
    break;

  case 259:
/* Line 1802 of yacc.c  */
#line 856 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); }
    break;

  case 260:
/* Line 1802 of yacc.c  */
#line 860 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), observers.TraitInsteadOfMakeReferenceList((yyvsp[(3) - (3)].qualifiedNameList))); }
    break;

  case 261:
/* Line 1802 of yacc.c  */
#line 865 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue)), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 262:
/* Line 1802 of yacc.c  */
#line 866 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue)), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 263:
/* Line 1802 of yacc.c  */
#line 867 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (4)].semanticValue)), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 264:
/* Line 1802 of yacc.c  */
#line 868 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 265:
/* Line 1802 of yacc.c  */
#line 872 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 266:
/* Line 1802 of yacc.c  */
#line 873 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 267:
/* Line 1802 of yacc.c  */
#line 877 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 268:
/* Line 1802 of yacc.c  */
#line 881 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 269:
/* Line 1802 of yacc.c  */
#line 882 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 270:
/* Line 1802 of yacc.c  */
#line 886 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 271:
/* Line 1802 of yacc.c  */
#line 887 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 272:
/* Line 1802 of yacc.c  */
#line 891 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 273:
/* Line 1802 of yacc.c  */
#line 892 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 274:
/* Line 1802 of yacc.c  */
#line 897 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 275:
/* Line 1802 of yacc.c  */
#line 898 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 282:
/* Line 1802 of yacc.c  */
#line 912 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].classMemberSymbol)); }
    break;

  case 283:
/* Line 1802 of yacc.c  */
#line 913 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].classMemberSymbol)); }
    break;

  case 284:
/* Line 1802 of yacc.c  */
#line 917 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 285:
/* Line 1802 of yacc.c  */
#line 918 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 286:
/* Line 1802 of yacc.c  */
#line 923 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 287:
/* Line 1802 of yacc.c  */
#line 924 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 288:
/* Line 1802 of yacc.c  */
#line 928 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 289:
/* Line 1802 of yacc.c  */
#line 932 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(1) - (4)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 290:
/* Line 1802 of yacc.c  */
#line 936 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 291:
/* Line 1802 of yacc.c  */
#line 937 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 292:
/* Line 1802 of yacc.c  */
#line 941 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 293:
/* Line 1802 of yacc.c  */
#line 945 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 294:
/* Line 1802 of yacc.c  */
#line 946 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 295:
/* Line 1802 of yacc.c  */
#line 950 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 296:
/* Line 1802 of yacc.c  */
#line 951 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 297:
/* Line 1802 of yacc.c  */
#line 957 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAnonymousClass((yyvsp[(2) - (8)].statementList), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(7) - (8)].statementList)); }
    break;

  case 298:
/* Line 1802 of yacc.c  */
#line 961 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 299:
/* Line 1802 of yacc.c  */
#line 962 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 300:
/* Line 1802 of yacc.c  */
#line 967 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 301:
/* Line 1802 of yacc.c  */
#line 968 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(2) - (5)].statementList), (yyvsp[(5) - (5)].expression)); }
    break;

  case 302:
/* Line 1802 of yacc.c  */
#line 969 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 303:
/* Line 1802 of yacc.c  */
#line 970 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 304:
/* Line 1802 of yacc.c  */
#line 971 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 305:
/* Line 1802 of yacc.c  */
#line 972 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 306:
/* Line 1802 of yacc.c  */
#line 973 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 307:
/* Line 1802 of yacc.c  */
#line 974 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 308:
/* Line 1802 of yacc.c  */
#line 975 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 309:
/* Line 1802 of yacc.c  */
#line 976 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 310:
/* Line 1802 of yacc.c  */
#line 977 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 311:
/* Line 1802 of yacc.c  */
#line 978 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 312:
/* Line 1802 of yacc.c  */
#line 979 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 313:
/* Line 1802 of yacc.c  */
#line 980 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 314:
/* Line 1802 of yacc.c  */
#line 981 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 315:
/* Line 1802 of yacc.c  */
#line 982 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 316:
/* Line 1802 of yacc.c  */
#line 983 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 317:
/* Line 1802 of yacc.c  */
#line 984 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 318:
/* Line 1802 of yacc.c  */
#line 985 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 319:
/* Line 1802 of yacc.c  */
#line 986 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 320:
/* Line 1802 of yacc.c  */
#line 987 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 321:
/* Line 1802 of yacc.c  */
#line 988 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 322:
/* Line 1802 of yacc.c  */
#line 989 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 323:
/* Line 1802 of yacc.c  */
#line 990 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 324:
/* Line 1802 of yacc.c  */
#line 991 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 325:
/* Line 1802 of yacc.c  */
#line 992 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 326:
/* Line 1802 of yacc.c  */
#line 993 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 327:
/* Line 1802 of yacc.c  */
#line 994 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 328:
/* Line 1802 of yacc.c  */
#line 995 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 329:
/* Line 1802 of yacc.c  */
#line 996 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 330:
/* Line 1802 of yacc.c  */
#line 997 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 331:
/* Line 1802 of yacc.c  */
#line 998 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 332:
/* Line 1802 of yacc.c  */
#line 999 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 333:
/* Line 1802 of yacc.c  */
#line 1000 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 334:
/* Line 1802 of yacc.c  */
#line 1001 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 335:
/* Line 1802 of yacc.c  */
#line 1002 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 336:
/* Line 1802 of yacc.c  */
#line 1003 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 337:
/* Line 1802 of yacc.c  */
#line 1004 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 338:
/* Line 1802 of yacc.c  */
#line 1005 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 339:
/* Line 1802 of yacc.c  */
#line 1006 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 340:
/* Line 1802 of yacc.c  */
#line 1007 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 341:
/* Line 1802 of yacc.c  */
#line 1008 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 342:
/* Line 1802 of yacc.c  */
#line 1009 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 343:
/* Line 1802 of yacc.c  */
#line 1010 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 344:
/* Line 1802 of yacc.c  */
#line 1011 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 345:
/* Line 1802 of yacc.c  */
#line 1012 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 346:
/* Line 1802 of yacc.c  */
#line 1013 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 347:
/* Line 1802 of yacc.c  */
#line 1014 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 348:
/* Line 1802 of yacc.c  */
#line 1015 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 349:
/* Line 1802 of yacc.c  */
#line 1016 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 350:
/* Line 1802 of yacc.c  */
#line 1017 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 351:
/* Line 1802 of yacc.c  */
#line 1018 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 352:
/* Line 1802 of yacc.c  */
#line 1019 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 353:
/* Line 1802 of yacc.c  */
#line 1020 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 354:
/* Line 1802 of yacc.c  */
#line 1021 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 355:
/* Line 1802 of yacc.c  */
#line 1022 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 356:
/* Line 1802 of yacc.c  */
#line 1023 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 357:
/* Line 1802 of yacc.c  */
#line 1024 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 358:
/* Line 1802 of yacc.c  */
#line 1025 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 359:
/* Line 1802 of yacc.c  */
#line 1026 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 360:
/* Line 1802 of yacc.c  */
#line 1027 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 361:
/* Line 1802 of yacc.c  */
#line 1028 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 362:
/* Line 1802 of yacc.c  */
#line 1029 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 363:
/* Line 1802 of yacc.c  */
#line 1030 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 364:
/* Line 1802 of yacc.c  */
#line 1031 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 365:
/* Line 1802 of yacc.c  */
#line 1032 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 366:
/* Line 1802 of yacc.c  */
#line 1033 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 367:
/* Line 1802 of yacc.c  */
#line 1034 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 368:
/* Line 1802 of yacc.c  */
#line 1035 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 369:
/* Line 1802 of yacc.c  */
#line 1036 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 370:
/* Line 1802 of yacc.c  */
#line 1037 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 371:
/* Line 1802 of yacc.c  */
#line 1038 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 372:
/* Line 1802 of yacc.c  */
#line 1039 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (4)].expression)); /* TODO capture $4 */ }
    break;

  case 373:
/* Line 1802 of yacc.c  */
#line 1040 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 374:
/* Line 1802 of yacc.c  */
#line 1043 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 375:
/* Line 1802 of yacc.c  */
#line 1044 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(5) - (14)].parametersList), (yyvsp[(7) - (14)].statementList), (yyvsp[(12) - (14)].statementList), (yyvsp[(10) - (14)].semanticValue), (yyvsp[(13) - (14)].semanticValue), (yyvsp[(8) - (14)].typeHint)); 
																								   // end after we create the closure so that closure gets the correct scope
																								   // anonymous function count
																								   observers.EndAnonymousFunction(); 
																								 }
    break;

  case 376:
/* Line 1802 of yacc.c  */
#line 1051 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 377:
/* Line 1802 of yacc.c  */
#line 1052 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(6) - (15)].parametersList), (yyvsp[(8) - (15)].statementList), (yyvsp[(13) - (15)].statementList), (yyvsp[(11) - (15)].semanticValue), (yyvsp[(14) - (15)].semanticValue), (yyvsp[(9) - (15)].typeHint));  
																									// end after we create the closure so that closure gets the correct scope
																									// anonymous function count
																									observers.EndAnonymousFunction(); 
																								}
    break;

  case 379:
/* Line 1802 of yacc.c  */
#line 1064 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 380:
/* Line 1802 of yacc.c  */
#line 1068 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 381:
/* Line 1802 of yacc.c  */
#line 1072 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 382:
/* Line 1802 of yacc.c  */
#line 1073 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 383:
/* Line 1802 of yacc.c  */
#line 1077 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 384:
/* Line 1802 of yacc.c  */
#line 1078 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 385:
/* Line 1802 of yacc.c  */
#line 1082 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 386:
/* Line 1802 of yacc.c  */
#line 1083 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 387:
/* Line 1802 of yacc.c  */
#line 1087 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 388:
/* Line 1802 of yacc.c  */
#line 1088 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true); }
    break;

  case 389:
/* Line 1802 of yacc.c  */
#line 1092 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (2)].qualifiedName),  (yyvsp[(2) - (2)].statementList), analyzer.GetLineNumber()); }
    break;

  case 390:
/* Line 1802 of yacc.c  */
#line 1093 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 391:
/* Line 1802 of yacc.c  */
#line 1094 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall(observers.QualifiedNameNil(), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 392:
/* Line 1802 of yacc.c  */
#line 1095 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStartIndirectFunctionCall((yyvsp[(1) - (2)].expression), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 393:
/* Line 1802 of yacc.c  */
#line 1099 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 394:
/* Line 1802 of yacc.c  */
#line 1100 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 395:
/* Line 1802 of yacc.c  */
#line 1104 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 396:
/* Line 1802 of yacc.c  */
#line 1105 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 397:
/* Line 1802 of yacc.c  */
#line 1109 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 398:
/* Line 1802 of yacc.c  */
#line 1110 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 399:
/* Line 1802 of yacc.c  */
#line 1114 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 400:
/* Line 1802 of yacc.c  */
#line 1115 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 401:
/* Line 1802 of yacc.c  */
#line 1116 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].expression)); }
    break;

  case 402:
/* Line 1802 of yacc.c  */
#line 1120 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 403:
/* Line 1802 of yacc.c  */
#line 1121 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 404:
/* Line 1802 of yacc.c  */
#line 1125 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 405:
/* Line 1802 of yacc.c  */
#line 1126 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); }
    break;

  case 406:
/* Line 1802 of yacc.c  */
#line 1127 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 407:
/* Line 1802 of yacc.c  */
#line 1131 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 408:
/* Line 1802 of yacc.c  */
#line 1132 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 409:
/* Line 1802 of yacc.c  */
#line 1133 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 410:
/* Line 1802 of yacc.c  */
#line 1134 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 411:
/* Line 1802 of yacc.c  */
#line 1135 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 412:
/* Line 1802 of yacc.c  */
#line 1136 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 413:
/* Line 1802 of yacc.c  */
#line 1137 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 414:
/* Line 1802 of yacc.c  */
#line 1138 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 415:
/* Line 1802 of yacc.c  */
#line 1139 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 416:
/* Line 1802 of yacc.c  */
#line 1140 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 417:
/* Line 1802 of yacc.c  */
#line 1141 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 418:
/* Line 1802 of yacc.c  */
#line 1142 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 419:
/* Line 1802 of yacc.c  */
#line 1143 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 420:
/* Line 1802 of yacc.c  */
#line 1144 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 421:
/* Line 1802 of yacc.c  */
#line 1145 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 422:
/* Line 1802 of yacc.c  */
#line 1146 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 423:
/* Line 1802 of yacc.c  */
#line 1150 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 424:
/* Line 1802 of yacc.c  */
#line 1151 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), observers.VariableStart((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 425:
/* Line 1802 of yacc.c  */
#line 1152 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.VariableStartStaticMember(observers.QualifiedNameNil(), observers.VariableStart((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 426:
/* Line 1802 of yacc.c  */
#line 1156 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 427:
/* Line 1802 of yacc.c  */
#line 1157 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 428:
/* Line 1802 of yacc.c  */
#line 1161 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 429:
/* Line 1802 of yacc.c  */
#line 1162 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 430:
/* Line 1802 of yacc.c  */
#line 1166 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 431:
/* Line 1802 of yacc.c  */
#line 1170 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 432:
/* Line 1802 of yacc.c  */
#line 1171 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression((yyvsp[(2) - (3)].expression)); }
    break;

  case 433:
/* Line 1802 of yacc.c  */
#line 1172 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression((yyvsp[(1) - (1)].expression)); }
    break;

  case 434:
/* Line 1802 of yacc.c  */
#line 1176 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 435:
/* Line 1802 of yacc.c  */
#line 1177 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 436:
/* Line 1802 of yacc.c  */
#line 1178 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 437:
/* Line 1802 of yacc.c  */
#line 1182 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 438:
/* Line 1802 of yacc.c  */
#line 1183 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 439:
/* Line 1802 of yacc.c  */
#line 1184 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression(observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression))); }
    break;

  case 440:
/* Line 1802 of yacc.c  */
#line 1185 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 441:
/* Line 1802 of yacc.c  */
#line 1186 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) =  observers.VariableAppendToChain(
																							(yyvsp[(1) - (4)].variable),
																						  observers.VariableAppendToChain((yyvsp[(3) - (4)].variable), observers.VariableMakeAndAppendFunctionCall((yyvsp[(4) - (4)].statementList), true), (yyvsp[(2) - (4)].semanticValue))
																						);
																				}
    break;

  case 442:
/* Line 1802 of yacc.c  */
#line 1191 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 443:
/* Line 1802 of yacc.c  */
#line 1195 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 444:
/* Line 1802 of yacc.c  */
#line 1196 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 445:
/* Line 1802 of yacc.c  */
#line 1197 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable), NULL, NULL); }
    break;

  case 446:
/* Line 1802 of yacc.c  */
#line 1201 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 447:
/* Line 1802 of yacc.c  */
#line 1202 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 448:
/* Line 1802 of yacc.c  */
#line 1203 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 449:
/* Line 1802 of yacc.c  */
#line 1207 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 450:
/* Line 1802 of yacc.c  */
#line 1208 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChainStaticMember((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 451:
/* Line 1802 of yacc.c  */
#line 1212 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 452:
/* Line 1802 of yacc.c  */
#line 1213 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 453:
/* Line 1802 of yacc.c  */
#line 1214 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 454:
/* Line 1802 of yacc.c  */
#line 1215 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 455:
/* Line 1802 of yacc.c  */
#line 1216 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 456:
/* Line 1802 of yacc.c  */
#line 1217 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChainStaticMember((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 457:
/* Line 1802 of yacc.c  */
#line 1222 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 458:
/* Line 1802 of yacc.c  */
#line 1223 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 459:
/* Line 1802 of yacc.c  */
#line 1224 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(1) - (1)].variable)); }
    break;

  case 460:
/* Line 1802 of yacc.c  */
#line 1228 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 461:
/* Line 1802 of yacc.c  */
#line 1229 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 462:
/* Line 1802 of yacc.c  */
#line 1230 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(1) - (1)].variable)); }
    break;

  case 463:
/* Line 1802 of yacc.c  */
#line 1234 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 464:
/* Line 1802 of yacc.c  */
#line 1238 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = NULL; }
    break;

  case 465:
/* Line 1802 of yacc.c  */
#line 1239 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 466:
/* Line 1802 of yacc.c  */
#line 1243 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { if ((yyvsp[(3) - (3)].statementList) == NULL) { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); } else { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); } }
    break;

  case 467:
/* Line 1802 of yacc.c  */
#line 1244 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { if ((yyvsp[(1) - (1)].statementList) == NULL) { (yyval.statementList) = observers.StatementListNil(); } else { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }  }
    break;

  case 468:
/* Line 1802 of yacc.c  */
#line 1248 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 469:
/* Line 1802 of yacc.c  */
#line 1249 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 470:
/* Line 1802 of yacc.c  */
#line 1250 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 471:
/* Line 1802 of yacc.c  */
#line 1251 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 472:
/* Line 1802 of yacc.c  */
#line 1252 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (6)].expression), (yyvsp[(5) - (6)].statementList));}
    break;

  case 473:
/* Line 1802 of yacc.c  */
#line 1253 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (4)].statementList)); }
    break;

  case 474:
/* Line 1802 of yacc.c  */
#line 1257 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 475:
/* Line 1802 of yacc.c  */
#line 1258 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 476:
/* Line 1802 of yacc.c  */
#line 1259 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 477:
/* Line 1802 of yacc.c  */
#line 1260 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 478:
/* Line 1802 of yacc.c  */
#line 1265 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 479:
/* Line 1802 of yacc.c  */
#line 1266 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 480:
/* Line 1802 of yacc.c  */
#line 1267 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 481:
/* Line 1802 of yacc.c  */
#line 1268 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 482:
/* Line 1802 of yacc.c  */
#line 1269 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 483:
/* Line 1802 of yacc.c  */
#line 1270 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 484:
/* Line 1802 of yacc.c  */
#line 1271 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 485:
/* Line 1802 of yacc.c  */
#line 1275 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 486:
/* Line 1802 of yacc.c  */
#line 1276 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 487:
/* Line 1802 of yacc.c  */
#line 1277 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 488:
/* Line 1802 of yacc.c  */
#line 1278 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 489:
/* Line 1802 of yacc.c  */
#line 1283 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 490:
/* Line 1802 of yacc.c  */
#line 1284 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 491:
/* Line 1802 of yacc.c  */
#line 1285 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 492:
/* Line 1802 of yacc.c  */
#line 1286 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 493:
/* Line 1802 of yacc.c  */
#line 1287 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 494:
/* Line 1802 of yacc.c  */
#line 1288 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 495:
/* Line 1802 of yacc.c  */
#line 1289 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 496:
/* Line 1802 of yacc.c  */
#line 1293 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].expression)); }
    break;

  case 497:
/* Line 1802 of yacc.c  */
#line 1294 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 498:
/* Line 1802 of yacc.c  */
#line 1298 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;


/* Line 1802 of yacc.c  */
#line 6380 "/Users/roberto/Projects/pelet/src/Php71FullParser.cpp"
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
#line 1301 "/Users/roberto/Projects/pelet/src/Php71FullParser.y"

