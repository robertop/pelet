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
#define yyparse         php70parse
#define yylex           php70lex
#define yyerror         php70error
#define yylval          php70lval
#define yychar          php70char
#define yydebug         php70debug
#define yynerrs         php70nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"


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
#define php70lex pelet::FullLex

// so that both bison parses call the same error function
#define php70error pelet::FullGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php70FullParser.cpp"

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
extern int php70debug;
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
int php70parse (void *YYPARSE_PARAM);
#else
int php70parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php70parse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers);
#else
int php70parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 319 "/Users/roberto/Projects/pelet/src/Php70FullParser.cpp"

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
#define YYLAST   7587

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  494
/* YYNRULES -- Number of states.  */
#define YYNSTATES  917

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
     420,   427,   431,   435,   438,   439,   449,   450,   455,   457,
     461,   463,   464,   477,   478,   480,   481,   483,   484,   495,
     496,   506,   508,   511,   513,   515,   516,   524,   525,   534,
     535,   538,   539,   542,   543,   546,   548,   551,   556,   558,
     563,   565,   570,   572,   577,   581,   586,   591,   597,   598,
     604,   609,   611,   613,   615,   620,   626,   633,   635,   639,
     646,   654,   658,   665,   667,   668,   670,   674,   679,   686,
     687,   689,   691,   693,   695,   696,   699,   702,   706,   708,
     712,   714,   717,   721,   723,   725,   729,   731,   733,   737,
     740,   741,   745,   749,   753,   754,   766,   768,   772,   774,
     777,   781,   783,   786,   789,   792,   796,   800,   804,   809,
     813,   815,   817,   821,   823,   827,   829,   831,   832,   834,
     836,   839,   841,   843,   845,   847,   849,   851,   855,   857,
     860,   865,   869,   871,   875,   879,   883,   885,   887,   888,
     890,   894,   896,   905,   909,   912,   919,   923,   928,   931,
     935,   939,   943,   947,   951,   955,   959,   963,   967,   971,
     975,   979,   982,   985,   988,   991,   995,   999,  1003,  1007,
    1011,  1015,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,
    1051,  1055,  1059,  1062,  1065,  1068,  1071,  1075,  1079,  1083,
    1087,  1091,  1095,  1099,  1103,  1107,  1111,  1115,  1117,  1123,
    1128,  1132,  1134,  1137,  1140,  1143,  1146,  1149,  1152,  1155,
    1158,  1161,  1163,  1167,  1170,  1172,  1175,  1180,  1183,  1184,
    1197,  1198,  1212,  1214,  1215,  1216,  1218,  1219,  1224,  1228,
    1230,  1232,  1235,  1238,  1243,  1248,  1251,  1253,  1255,  1257,
    1259,  1260,  1264,  1265,  1267,  1269,  1270,  1272,  1277,  1281,
    1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,
    1303,  1307,  1310,  1314,  1318,  1320,  1322,  1324,  1328,  1332,
    1333,  1335,  1337,  1339,  1340,  1342,  1344,  1346,  1350,  1352,
    1354,  1358,  1360,  1362,  1367,  1372,  1377,  1382,  1384,  1386,
    1388,  1392,  1394,  1399,  1402,  1406,  1410,  1412,  1417,  1422,
    1426,  1430,  1434,  1436,  1440,  1442,  1444,  1448,  1450,  1454,
    1456,  1458,  1463,  1464,  1465,  1468,  1472,  1474,  1478,  1480,
    1485,  1488,  1491,  1494,  1496,  1499,  1501,  1506,  1510,  1514,
    1518,  1525,  1529,  1531,  1533,  1535,  1540,  1545,  1548,  1551,
    1556,  1559,  1562,  1564,  1568
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
     135,   173,    -1,   135,   173,    -1,   190,    -1,   195,    -1,
     199,    -1,   204,    -1,   206,    -1,   122,   160,   161,   162,
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
      -1,   185,    -1,   135,   185,    -1,   187,     8,   256,    -1,
     256,    -1,   188,   189,    -1,    -1,   190,    -1,   195,    -1,
     199,    -1,   204,    -1,   206,    -1,   122,   160,   161,   162,
      -1,   158,   188,   159,    -1,   220,    -1,   222,    -1,   154,
     160,   282,   161,   218,    -1,   101,   190,   154,   160,   282,
     161,   162,    -1,   116,   160,   259,   162,   259,   162,   259,
     161,   212,    -1,   145,   160,   282,   161,   215,    -1,    84,
     283,   162,    -1,    95,   283,   162,    -1,   141,   283,   162,
      -1,   120,   232,   162,    -1,    80,   234,   162,    -1,   104,
     257,   162,    -1,   125,    -1,   282,   162,    -1,   150,   160,
     193,   161,   162,    -1,   117,   160,   282,    82,   211,   161,
     213,    -1,   117,   160,   282,    82,   211,    14,   211,   161,
     213,    -1,    97,   160,   187,   161,   214,    -1,   162,    -1,
     149,   158,   188,   159,   191,   192,    -1,   146,   282,   162,
      -1,   121,   143,   162,    -1,   143,    30,    -1,    -1,   191,
      87,   160,   174,   153,   161,   158,   188,   159,    -1,    -1,
     156,   158,   188,   159,    -1,   194,    -1,   193,     8,   194,
      -1,   288,    -1,    -1,   266,   268,   143,   267,   160,   223,
     161,   196,   228,   158,   188,   159,    -1,    -1,    36,    -1,
      -1,   157,    -1,    -1,   202,    89,   143,   208,   210,   267,
     200,   158,   236,   159,    -1,    -1,    89,   143,   208,   210,
     267,   201,   158,   236,   159,    -1,   203,    -1,   202,   203,
      -1,    79,    -1,    78,    -1,    -1,   147,   143,   267,   158,
     205,   236,   159,    -1,    -1,   127,   143,   209,   267,   207,
     158,   236,   159,    -1,    -1,   114,   174,    -1,    -1,   114,
     239,    -1,    -1,   124,   239,    -1,   288,    -1,    36,   288,
      -1,   130,   160,   294,   161,    -1,   190,    -1,    30,   188,
     108,   162,    -1,   190,    -1,    30,   188,   109,   162,    -1,
     190,    -1,    30,   188,   107,   162,    -1,   158,   216,   159,
      -1,   158,   162,   216,   159,    -1,    30,   216,   111,   162,
      -1,    30,   162,   216,   111,   162,    -1,    -1,   216,    86,
     282,   217,   188,    -1,   216,    98,   217,   188,    -1,    30,
      -1,   162,    -1,   190,    -1,    30,   188,   112,   162,    -1,
     123,   160,   282,   161,   190,    -1,   219,    72,   160,   282,
     161,   190,    -1,   219,    -1,   219,    73,   190,    -1,   123,
     160,   282,   161,    30,   188,    -1,   221,    72,   160,   282,
     161,    30,   188,    -1,   221,    74,   162,    -1,   221,    73,
      30,   188,    74,   162,    -1,   224,    -1,    -1,   225,    -1,
     224,     8,   225,    -1,   226,   197,   198,   153,    -1,   226,
     197,   198,   153,    16,   282,    -1,    -1,   227,    -1,    81,
      -1,    85,    -1,   174,    -1,    -1,    30,   227,    -1,   160,
     161,    -1,   160,   230,   161,    -1,   231,    -1,   230,     8,
     231,    -1,   282,    -1,   157,   282,    -1,   232,     8,   233,
      -1,   233,    -1,   289,    -1,   234,     8,   235,    -1,   235,
      -1,   153,    -1,   153,    16,   282,    -1,   236,   237,    -1,
      -1,   248,   252,   162,    -1,    93,   254,   162,    -1,   151,
     239,   240,    -1,    -1,   249,   266,   268,   171,   267,   160,
     223,   161,   238,   228,   247,    -1,   174,    -1,   239,     8,
     174,    -1,   162,    -1,   158,   159,    -1,   158,   241,   159,
      -1,   242,    -1,   241,   242,    -1,   243,   162,    -1,   244,
     162,    -1,   246,   126,   239,    -1,   245,    82,   143,    -1,
     245,    82,   169,    -1,   245,    82,   251,   171,    -1,   245,
      82,   251,    -1,   171,    -1,   246,    -1,   174,   140,   171,
      -1,   162,    -1,   158,   188,   159,    -1,   250,    -1,   152,
      -1,    -1,   250,    -1,   251,    -1,   250,   251,    -1,    75,
      -1,    76,    -1,    77,    -1,    80,    -1,    79,    -1,    78,
      -1,   252,     8,   253,    -1,   253,    -1,   153,   267,    -1,
     153,    16,   282,   267,    -1,   254,     8,   255,    -1,   255,
      -1,   171,    16,   282,    -1,   143,    16,   282,    -1,   257,
       8,   258,    -1,   258,    -1,   282,    -1,    -1,   260,    -1,
     260,     8,   282,    -1,   282,    -1,    89,   277,   208,   210,
     267,   158,   236,   159,    -1,    70,   274,   277,    -1,    70,
     261,    -1,   130,   160,   294,   161,    16,   282,    -1,   288,
      16,   282,    -1,   288,    16,    36,   288,    -1,    69,   282,
      -1,   288,    28,   282,    -1,   288,    27,   282,    -1,   288,
      26,   282,    -1,   288,    17,   282,    -1,   288,    25,   282,
      -1,   288,    24,   282,    -1,   288,    23,   282,    -1,   288,
      22,   282,    -1,   288,    21,   282,    -1,   288,    20,   282,
      -1,   288,    19,   282,    -1,   288,    18,   282,    -1,   288,
      65,    -1,    65,   288,    -1,   288,    64,    -1,    64,   288,
      -1,   282,    32,   282,    -1,   282,    33,   282,    -1,   282,
       9,   282,    -1,   282,    11,   282,    -1,   282,    10,   282,
      -1,   282,    34,   282,    -1,   282,    36,   282,    -1,   282,
      35,   282,    -1,   282,    50,   282,    -1,   282,    48,   282,
      -1,   282,    49,   282,    -1,   282,    51,   282,    -1,   282,
      67,   282,    -1,   282,    52,   282,    -1,   282,    53,   282,
      -1,   282,    47,   282,    -1,   282,    46,   282,    -1,    48,
     282,    -1,    49,   282,    -1,    54,   282,    -1,    56,   282,
      -1,   282,    41,   282,    -1,   282,    40,   282,    -1,   282,
      43,   282,    -1,   282,    42,   282,    -1,   282,    44,   282,
      -1,   282,    38,   282,    -1,   282,    45,   282,    -1,   282,
      37,   282,    -1,   282,    39,   282,    -1,   282,    55,   274,
      -1,   160,   282,   161,    -1,   262,    -1,   282,    29,   282,
      30,   282,    -1,   282,    29,    30,   282,    -1,   282,    31,
     282,    -1,   302,    -1,    63,   282,    -1,    62,   282,    -1,
      61,   282,    -1,    60,   282,    -1,    59,   282,    -1,    58,
     282,    -1,    57,   282,    -1,   113,   275,    -1,    66,   282,
      -1,   279,    -1,   163,   276,   163,    -1,    12,   282,    -1,
      13,    -1,    13,   282,    -1,    13,   282,    14,   282,    -1,
      15,   282,    -1,    -1,   266,   268,   267,   160,   223,   161,
     269,   228,   158,   264,   188,   159,    -1,    -1,    80,   266,
     268,   267,   160,   223,   161,   269,   228,   158,   265,   188,
     159,    -1,   119,    -1,    -1,    -1,    36,    -1,    -1,   151,
     160,   270,   161,    -1,   270,     8,   271,    -1,   271,    -1,
     153,    -1,    36,   153,    -1,   174,   229,    -1,   273,   140,
     292,   229,    -1,   284,   140,   292,   229,    -1,   286,   229,
      -1,    80,    -1,   174,    -1,   273,    -1,   291,    -1,    -1,
     160,   283,   161,    -1,    -1,   106,    -1,   299,    -1,    -1,
     229,    -1,    81,   160,   296,   161,    -1,    68,   296,   166,
      -1,    94,    -1,   131,    -1,   100,    -1,   129,    -1,   115,
      -1,    99,    -1,   148,    -1,   132,    -1,   118,    -1,   134,
      -1,    90,    -1,   142,   106,   110,    -1,   142,   110,    -1,
     165,   299,   165,    -1,   142,   299,   110,    -1,   278,    -1,
     280,    -1,   174,    -1,   273,   140,   171,    -1,   284,   140,
     171,    -1,    -1,     8,    -1,   288,    -1,   263,    -1,    -1,
     282,    -1,   285,    -1,   288,    -1,   160,   282,   161,    -1,
     278,    -1,   287,    -1,   160,   282,   161,    -1,   278,    -1,
     289,    -1,   285,    68,   283,   166,    -1,   280,    68,   283,
     166,    -1,   285,   158,   282,   159,    -1,   285,   137,   293,
     229,    -1,   272,    -1,   287,    -1,   290,    -1,   285,   137,
     293,    -1,   153,    -1,   164,   158,   282,   159,    -1,   164,
     289,    -1,   273,   140,   289,    -1,   284,   140,   289,    -1,
     289,    -1,   291,    68,   283,   166,    -1,   291,   158,   282,
     159,    -1,   291,   137,   293,    -1,   273,   140,   289,    -1,
     291,   140,   289,    -1,   171,    -1,   158,   282,   159,    -1,
     289,    -1,   143,    -1,   158,   282,   159,    -1,   289,    -1,
     294,     8,   295,    -1,   295,    -1,   288,    -1,   130,   160,
     294,   161,    -1,    -1,    -1,   297,   281,    -1,   297,     8,
     298,    -1,   298,    -1,   282,    14,   282,    -1,   282,    -1,
     282,    14,    36,   288,    -1,    36,   288,    -1,   299,   300,
      -1,   299,   106,    -1,   300,    -1,   106,   300,    -1,   153,
      -1,   153,    68,   301,   166,    -1,   153,   137,   143,    -1,
     103,   282,   159,    -1,   103,   144,   159,    -1,   103,   144,
      68,   282,   166,   159,    -1,    96,   288,   159,    -1,   143,
      -1,   136,    -1,   153,    -1,   128,   160,   303,   161,    -1,
     105,   160,   282,   161,    -1,     7,   282,    -1,     6,   282,
      -1,     5,   160,   282,   161,    -1,     4,   282,    -1,     3,
     282,    -1,   304,    -1,   303,     8,   304,    -1,   282,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   375,   375,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   384,   384,   384,   384,   384,   384,
     384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
     389,   390,   390,   390,   390,   390,   390,   394,   395,   399,
     400,   404,   405,   409,   410,   411,   415,   416,   417,   418,
     419,   420,   421,   422,   422,   424,   424,   426,   427,   428,
     429,   430,   434,   435,   439,   440,   444,   445,   449,   450,
     454,   455,   459,   460,   464,   465,   469,   470,   474,   475,
     479,   480,   484,   485,   489,   490,   491,   492,   493,   494,
     498,   499,   500,   501,   502,   503,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   521,   527,   529,
     530,   533,   534,   535,   539,   540,   550,   551,   555,   556,
     560,   565,   564,   573,   574,   578,   579,   584,   583,   596,
     595,   612,   613,   617,   618,   623,   622,   643,   642,   661,
     662,   666,   667,   671,   672,   676,   677,   678,   682,   683,
     687,   688,   692,   693,   697,   698,   699,   700,   704,   705,
     706,   710,   711,   715,   716,   720,   722,   727,   728,   732,
     734,   739,   740,   744,   745,   749,   750,   754,   756,   762,
     763,   767,   768,   769,   773,   774,   778,   779,   783,   784,
     788,   789,   793,   794,   798,   802,   803,   807,   808,   812,
     813,   818,   819,   820,   822,   821,   829,   830,   834,   835,
     836,   840,   841,   845,   846,   850,   855,   856,   857,   858,
     862,   863,   867,   871,   872,   876,   877,   881,   882,   887,
     888,   893,   894,   895,   896,   897,   898,   902,   903,   907,
     908,   913,   914,   918,   922,   926,   927,   931,   935,   936,
     940,   941,   945,   951,   952,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1032,  1030,
    1040,  1038,  1049,  1053,  1057,  1058,  1062,  1063,  1067,  1068,
    1072,  1073,  1077,  1078,  1079,  1080,  1084,  1085,  1089,  1090,
    1094,  1095,  1099,  1100,  1101,  1105,  1106,  1110,  1111,  1112,
    1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1126,  1127,  1128,  1129,  1130,  1131,  1135,  1136,  1137,  1141,
    1142,  1146,  1147,  1151,  1152,  1156,  1160,  1161,  1162,  1166,
    1167,  1168,  1172,  1173,  1174,  1175,  1176,  1181,  1185,  1186,
    1187,  1191,  1192,  1193,  1197,  1198,  1202,  1203,  1204,  1205,
    1206,  1207,  1212,  1213,  1214,  1218,  1219,  1220,  1224,  1225,
    1229,  1230,  1231,  1235,  1236,  1240,  1241,  1245,  1246,  1247,
    1248,  1253,  1254,  1255,  1256,  1261,  1262,  1263,  1264,  1265,
    1266,  1267,  1271,  1272,  1273,  1278,  1279,  1280,  1281,  1282,
    1283,  1284,  1288,  1289,  1293
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
  "inner_statement", "statement", "catch_list", "finally_statement",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "$@3", "is_reference", "is_variadic", "class_declaration_statement",
  "$@4", "$@5", "class_modifiers", "class_modifier",
  "trait_declaration_statement", "$@6", "interface_declaration_statement",
  "$@7", "extends_from", "interface_extends_list", "implements_list",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "switch_case_list", "case_list", "case_separator",
  "while_statement", "if_stmt_without_else", "if_stmt",
  "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_type", "type",
  "return_type", "argument_list", "non_empty_argument_list", "argument",
  "global_var_list", "global_var", "static_var_list", "static_var",
  "class_statement_list", "class_statement", "$@8", "name_list",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_precedence", "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "new_expr",
  "expr_without_variable", "$@9", "$@10", "function", "backup_doc_comment",
  "returns_ref", "lexical_vars", "lexical_var_list", "lexical_var",
  "function_call", "class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "dereferencable_scalar", "scalar",
  "constant", "possible_comma", "expr", "optional_expr",
  "variable_class_name", "dereferencable", "callable_expr",
  "callable_variable", "variable", "simple_variable", "static_member",
  "new_variable", "member_name", "property_name", "assignment_list",
  "assignment_list_element", "array_pair_list",
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
     194,   196,   195,   197,   197,   198,   198,   200,   199,   201,
     199,   202,   202,   203,   203,   205,   204,   207,   206,   208,
     208,   209,   209,   210,   210,   211,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   215,   216,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   222,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   237,   238,   237,   239,   239,   240,   240,
     240,   241,   241,   242,   242,   243,   244,   244,   244,   244,
     245,   245,   246,   247,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   251,   251,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   256,   257,   257,   258,   259,   259,
     260,   260,   261,   262,   262,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   264,   263,
     265,   263,   266,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   272,   272,   273,   273,   274,   274,
     275,   275,   276,   276,   276,   277,   277,   278,   278,   278,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   280,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   285,   285,   285,   286,
     286,   286,   287,   287,   287,   287,   287,   287,   288,   288,
     288,   289,   289,   289,   290,   290,   291,   291,   291,   291,
     291,   291,   292,   292,   292,   293,   293,   293,   294,   294,
     295,   295,   295,   296,   296,   297,   297,   298,   298,   298,
     298,   299,   299,   299,   299,   300,   300,   300,   300,   300,
     300,   300,   301,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   303,   303,   304
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
       6,     3,     3,     2,     0,     9,     0,     4,     1,     3,
       1,     0,    12,     0,     1,     0,     1,     0,    10,     0,
       9,     1,     2,     1,     1,     0,     7,     0,     8,     0,
       2,     0,     2,     0,     2,     1,     2,     4,     1,     4,
       1,     4,     1,     4,     3,     4,     4,     5,     0,     5,
       4,     1,     1,     1,     4,     5,     6,     1,     3,     6,
       7,     3,     6,     1,     0,     1,     3,     4,     6,     0,
       1,     1,     1,     1,     0,     2,     2,     3,     1,     3,
       1,     2,     3,     1,     1,     3,     1,     1,     3,     2,
       0,     3,     3,     3,     0,    11,     1,     3,     1,     2,
       3,     1,     2,     2,     2,     3,     3,     3,     4,     3,
       1,     1,     3,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       4,     3,     1,     3,     3,     3,     1,     1,     0,     1,
       3,     1,     8,     3,     2,     6,     3,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     4,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     2,     1,     2,     4,     2,     0,    12,
       0,    13,     1,     0,     0,     1,     0,     4,     3,     1,
       1,     2,     2,     4,     4,     2,     1,     1,     1,     1,
       0,     3,     0,     1,     1,     0,     1,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     3,     1,     1,     1,     3,     3,     0,
       1,     1,     1,     0,     1,     1,     1,     3,     1,     1,
       3,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       3,     1,     4,     2,     3,     3,     1,     4,     4,     3,
       3,     3,     1,     3,     1,     1,     3,     1,     3,     1,
       1,     4,     0,     0,     2,     3,     1,     3,     1,     4,
       2,     2,     2,     1,     2,     1,     4,     3,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     2,     2,     4,
       2,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   463,     0,     0,   174,
     173,   386,     0,   423,     0,   409,     0,   399,   423,     0,
     404,   401,     0,     0,     0,   390,   403,     0,     0,   407,
     372,     0,     0,     0,     0,   143,     0,     0,   402,     0,
     400,   406,     0,   408,     0,   423,     0,    81,     0,     0,
       0,   405,     0,     0,     0,   441,     0,   123,     0,   149,
     392,     0,     0,    83,   416,    79,    86,    87,    88,     0,
     171,    89,    90,   207,   131,     0,   132,   347,   422,   374,
     437,     0,   414,   361,   415,     0,     0,   425,     0,   438,
     421,   432,   439,   351,   386,     0,    81,   374,   491,   490,
       0,   488,   487,   363,   365,   367,   332,   333,   334,   335,
     358,   357,   356,   355,   354,   353,   352,   386,     0,   428,
       0,   314,   312,   360,     0,   468,     0,   419,   466,   298,
     395,   387,   294,   388,   395,   446,   389,   237,     0,   236,
     374,   463,   424,     0,   179,     0,     0,   121,     0,     0,
       0,     0,   286,   287,     0,   423,   359,   288,     0,     0,
     233,   234,     0,     0,     0,   181,     0,   462,     0,    95,
       0,    85,     0,     0,     0,     0,   411,   475,     0,   473,
     153,     0,     0,   373,   123,     0,   103,   102,     0,   116,
       0,     0,     0,   118,   113,     0,     0,     0,   393,     0,
     394,     0,   443,     0,     0,     0,     0,   382,     0,   172,
       0,     0,     0,     0,     0,   375,   373,     0,   423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
     423,     0,     0,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,   311,   373,
       0,     0,     0,   426,     0,   398,   420,   464,   396,   179,
       0,   293,   423,     0,     0,     0,     0,     0,   141,   373,
       0,   137,     0,   183,     0,     0,   101,   138,     0,     0,
       0,   142,     0,     0,     0,   289,   291,     0,     0,   140,
     152,     0,     0,     0,   373,   494,     0,   492,     0,   426,
       0,   459,    84,    80,    93,    92,   139,   426,     0,     0,
     410,   474,     0,     0,   472,   413,   471,     0,   151,     0,
       0,     0,   158,   426,   116,   119,     0,     0,     0,   116,
       0,     0,    97,     0,    99,     0,     0,   130,   122,   124,
     125,   126,   127,   128,   346,   362,     0,   412,    82,     0,
     226,     0,   228,   230,   179,     0,   208,     0,   123,   211,
     373,     0,     7,     6,     5,     4,     3,     8,     9,    10,
      46,    47,    11,    13,    12,    16,    17,    18,    76,    75,
      74,    73,    72,    71,    54,    29,    53,    55,    51,    31,
      61,    62,    44,    41,    27,    52,    68,    20,    19,    40,
      28,    24,    26,    50,    22,    14,    56,    67,    23,    25,
      64,    43,    36,    42,    15,    57,    35,    60,    39,    66,
      48,    65,    58,    69,    45,    77,    49,    33,    59,    63,
      30,    38,    34,    37,    21,    32,     0,    70,    78,   417,
     444,     0,     0,   317,   319,   318,     0,     0,   350,   315,
     316,   320,   322,   321,   343,   341,   344,   337,   336,   339,
     338,   340,   342,   331,   330,   324,   325,   323,   326,   328,
     329,   345,   327,   418,   445,     0,     0,   455,     0,   457,
     440,     0,     0,   296,   302,   310,   309,   308,   307,   306,
     305,   304,   303,   301,   300,   299,   489,   366,   427,     0,
     467,   465,   183,   450,     0,   449,   451,     0,   238,   235,
       0,   397,   180,     0,   373,   284,   120,     0,     0,   285,
     486,   391,   288,     0,     0,   232,    91,     0,   246,   182,
     177,     0,   485,   462,   462,     0,     0,    80,   481,     0,
     479,   478,   483,   482,   484,     0,   477,     0,   175,   154,
       0,     0,     0,   117,     0,   116,     0,    98,   100,     0,
     116,   112,     0,     0,   442,   231,     0,   227,   183,     0,
       0,     0,     0,   219,     0,   383,   434,   349,     0,   384,
     433,     0,   436,   435,   297,   426,   373,   447,   448,   219,
     184,   169,   123,   192,   148,     0,     0,   290,     0,     0,
       0,   426,   123,   205,     0,     0,   493,     0,   458,     0,
      96,     0,     0,   476,   198,   198,   136,   240,   156,   159,
     145,     0,     0,     0,   109,   114,     0,     0,   123,   203,
     133,     0,   229,   373,     0,     0,     0,   219,   221,   222,
     223,     0,   213,   215,   163,   220,   453,   348,   456,     0,
       0,     0,     0,     0,   288,   426,   462,     0,     0,   209,
     247,   240,   461,   295,    94,     0,   198,     0,   198,     0,
     267,     0,     0,   150,     0,   115,     0,   106,     0,     0,
     111,     0,   129,   167,   206,   123,   212,     0,   376,   219,
     164,   165,   240,   376,   240,     0,   134,     0,     0,     0,
     123,   190,   146,   267,   480,     0,     0,     0,     0,     0,
     194,   271,   272,   273,   276,   275,   274,     0,     0,   266,
     176,   239,     0,     0,   265,   269,     0,   123,   107,   108,
       0,     0,   104,     0,     0,   210,   161,     0,   224,   216,
     166,     0,   267,   224,   267,   193,     0,   187,     0,     0,
     178,     0,     0,   201,   202,   123,   196,   195,     0,     0,
     282,     0,   373,     0,   278,   374,   270,     0,     0,   105,
     110,   204,   240,   224,     0,     0,     0,   217,   292,     0,
     170,   123,   188,   135,   147,     0,   197,   123,   200,     0,
       0,   242,     0,   248,   243,     0,   279,     0,   241,     0,
       0,   157,   267,     0,     0,   380,     0,   379,   225,   368,
       0,   370,     0,   191,   199,   283,   281,    58,    81,   249,
     260,     0,     0,   251,     0,     0,     0,   261,   373,   277,
     373,     0,   168,   123,   381,     0,   377,   123,   218,   123,
       0,     0,   250,   252,   253,   254,     0,     0,   280,     0,
     123,     0,   378,     0,     0,   189,   262,   256,   257,   259,
     255,   219,     0,   162,   369,   371,   258,     0,   155,   244,
     224,     0,   123,   263,   245,     0,   264
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   477,   478,   798,     2,    83,    84,    85,   577,
     343,   662,   370,   211,   663,   719,   212,   664,   213,   214,
     166,   216,   378,   379,   658,   713,   361,   362,   380,   813,
     731,   781,   381,   774,   691,    89,    90,   382,   657,   383,
     645,   313,   334,   554,   640,   823,   742,   634,   656,   707,
     795,   670,    93,    94,    95,    96,   681,   682,   683,   684,
     685,   816,   298,   391,   392,   179,   180,   158,   159,   710,
     761,   910,   569,   834,   862,   863,   864,   865,   866,   867,
     914,   762,   763,   764,   765,   803,   804,   799,   800,   167,
     171,   172,   324,   325,   152,    97,    98,   877,   879,   117,
     401,   236,   778,   846,   847,   100,   101,   154,   176,   219,
     299,   102,   103,   104,   297,   105,   163,   106,   107,   108,
     109,   110,   111,   112,   156,   481,   520,   340,   341,   146,
     147,   148,   198,   199,   585,   113,   336,   337
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -698
static const yytype_int16 yypact[] =
{
    -698,    65,  1218,  -698,  5608,  5608,   -66,  5608,  5608,  5608,
    5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,
    5608,  5608,  5608,   455,   455,  5608,  4775,  5608,   190,  -698,
    -698,   -49,   -60,  5608,   -42,  -698,   -19,  -698,  5608,   -50,
    -698,  -698,  4478,  5608,    62,    68,  -698,    71,    97,  -698,
    -698,   -55,    15,   100,   123,  -698,   158,   151,  -698,   162,
    -698,  -698,   109,  -698,   217,  5608,   166,    96,   201,  5608,
     220,  -698,   238,   205,   207,  -698,   241,  -698,  5608,  -698,
     168,   191,   322,   282,   -57,  -698,  -698,  -698,  -698,   351,
    -698,  -698,  -698,   268,  -698,   388,  -698,  -698,  -698,   383,
    -698,   294,   -29,  -698,   354,  6570,   302,   141,   291,   292,
    4655,  -698,  -698,  -698,   344,   329,  -698,   383,  7520,  7520,
    5608,  7520,  7520,  1040,  5912,  1040,   401,   401,   210,   401,
     401,   401,   401,   401,   401,   401,   401,  -698,  5608,   309,
     354,   -22,   -22,   401,   455,  7426,   307,   462,  -698,  -698,
     291,  -698,  -698,   361,   291,  -698,    22,   493,     7,  -698,
     383,  4775,  7520,   348,   400,   500,    23,  -698,   355,   -19,
     374,    24,  -698,  7520,  5608,  5608,  -698,  5608,  5608,    25,
    -698,  -698,   367,   369,  5608,   418,  5608,   378,   217,  -698,
     195,   282,   371,   455,  4909,   179,  -698,   -44,   438,  -698,
    -698,  5608,  6617,  -698,  -698,   455,  -698,  -698,   217,    -3,
     175,   375,    26,  -698,  -698,  5608,  1381,  6664,   -28,   380,
     444,  5608,  -698,   -28,   137,   402,  4641,  -698,   408,  -698,
     392,  4478,   399,   531,   405,  -698,   420,  5771,  5608,  5608,
    5608,  5608,  5072,  5608,  5608,  5608,  5608,  5608,  5608,  5608,
    5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,  5608,
    5608,  5608,  5608,  5608,  5608,  5608,   -36,  5608,  -698,  5771,
    5608,   -62,  5608,  -698,  5206,  5608,  5608,  5608,  5608,  5608,
    5608,  5608,  5608,  5608,  5608,  5608,  5608,  -698,  -698,  -698,
    6711,  5608,  6759,     9,  5340,  -698,  4775,  -698,  -698,   400,
     -55,  -698,  5608,   -62,   -55,  5608,  5608,   411,  -698,  -698,
     407,  -698,   304,   449,  5608,   -19,  -698,  -698,    10,   409,
    5608,  -698,  6806,   415,   423,   569,  7520,  7374,   -55,  -698,
    -698,   427,  6854,   304,  -698,  7520,    33,  -698,   432,    37,
      40,  -698,   282,  -698,  -698,  -698,  -698,   421,   -46,  5756,
    -698,  -698,   -48,   450,  -698,  -698,  -698,  6901,  -698,   437,
    1544,    43,  -698,    45,   102,  -698,   453,    21,   217,   145,
     439,    27,  -698,   224,  -698,  6949,   443,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,   157,  -698,  7139,  -698,  -698,  5608,
    -698,    50,  -698,  7520,   400,  5608,  -698,  5608,  -698,  -698,
    -698,   454,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -698,  -698,  5608,  -698,  -698,   458,
     463,   291,   433,  6074,  1366,  1040,  5608,  7473,  1203,  1527,
    1690,  1853,  2013,  2175,  2338,  2338,  2338,  2338,  2338,  2338,
    2338,  2494,   770,   701,   701,   451,   451,   451,   210,   210,
     210,  -698,   401,   458,   463,   291,   447,  -698,  5608,  -698,
     291,  7186,   455,  1040,  1040,  1040,  1040,  1040,  1040,  1040,
    1040,  1040,  1040,  1040,  1040,  1040,  -698,  1040,   464,   455,
    7520,  -698,   449,  -698,   465,  -698,  -698,  7233,  7520,  -698,
     472,  -698,  -698,   304,  -698,  7520,  -698,  3663,  5608,  -698,
    -698,  -698,  5608,  5608,   632,  -698,  -698,  3826,  -698,   596,
    -698,  5608,  -698,   378,   378,   589,   892,  -698,  -698,  5608,
    -698,  -698,  -698,  -698,  -698,   470,  -698,    52,  -698,  -698,
     455,   448,   169,  -698,   -13,   163,   170,  -698,  -698,   217,
     174,  -698,  3989,   484,  -698,  7520,  5474,  -698,   449,  6996,
    7044,  1707,   486,   203,  7280,  -698,  -698,  1203,  5608,  -698,
    -698,  7327,  -698,  -698,   -22,    17,  -698,  -698,  -698,   203,
     596,  -698,  -698,  -698,  -698,  7091,   485,  7520,   455,   492,
      41,    60,  -698,  -698,   304,   502,  -698,    51,  -698,  5608,
    -698,  1055,   445,  -698,   496,   499,  -698,  -698,   -33,  -698,
    -698,   -13,   217,    34,  -698,  -698,   194,   217,  -698,  -698,
    -698,   501,  -698,  -698,  4478,   635,   504,   203,  -698,  -698,
    -698,   506,   661,  -698,   634,  -698,  -698,  1203,  -698,   513,
     512,   516,  1870,   515,  5608,    63,   378,   632,  4152,  3500,
    -698,  -698,  -698,  1040,  -698,   521,  -698,   140,  -698,   134,
     478,   527,   533,  -698,    44,  -698,   -13,  -698,   217,    58,
    -698,  2033,  -698,  -698,  -698,  -698,  -698,   534,   545,   372,
    -698,   541,  -698,   545,  -698,   543,  -698,   546,    54,   547,
    -698,  -698,  -698,   734,  -698,   148,  5608,    -9,   548,   144,
    -698,  -698,  -698,  -698,  -698,  -698,  -698,  6241,   304,  -698,
    -698,  -698,   561,   344,   564,  -698,   304,  -698,  -698,  -698,
      59,   217,  -698,   555,   560,  3500,  -698,   563,   690,  -698,
    -698,   568,   765,   690,   786,  -698,  4315,  -698,  4152,  2196,
    -698,   562,  6523,  -698,  -698,  -698,  -698,  -698,   709,    28,
    -698,    19,   711,    29,  -698,   383,  -698,   575,  2359,  -698,
    -698,  -698,  -698,   690,   -20,   372,   571,   714,  -698,   576,
    -698,  -698,  -698,  -698,  -698,   573,  -698,  -698,  3500,  5608,
    6241,  -698,  5927,  -698,  -698,  5608,  -698,   561,  -698,  6241,
     572,  -698,   843,   580,   587,  -698,    55,  -698,  -698,  -698,
    5608,  -698,  2522,  -698,  3500,  7520,  -698,   329,   660,  -698,
    -698,   606,  6084,  -698,   585,   593,   677,   637,  7520,  -698,
    -698,   602,  -698,  -698,  -698,   -20,  -698,  -698,  7520,  -698,
     604,  6241,  -698,  -698,  -698,  -698,  6395,   304,  -698,   609,
    -698,  2685,  -698,  2848,  3011,  -698,  -698,  -698,  -698,  6241,
     596,   203,  3174,  -698,  -698,  -698,  -698,   603,  -698,  -698,
     690,   204,  -698,  -698,  -698,  3337,  -698
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -698,  -698,  -116,  -698,  -177,  -330,   -34,   -27,  -698,  -698,
    -698,   697,  -698,  -698,   111,    56,   566,    66,  -196,   404,
     612,  -201,  -698,     5,  -698,  -698,  -698,   188,     2,  -698,
    -698,  -698,     3,  -698,  -698,  -698,   694,     6,  -698,     8,
    -698,  -280,  -698,  -481,    87,  -698,     1,  -698,  -698,  -586,
      -6,  -698,  -698,  -698,  -698,  -698,  -620,  -698,    69,  -698,
     -25,  -697,   -82,  -698,   189,  -698,   466,  -698,   490,  -645,
    -698,  -698,  -539,  -698,  -698,   -63,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,  -698,  -686,  -698,   -37,  -698,   -26,   487,
    -698,   481,  -498,  -698,  -698,  -698,  -698,  -698,  -698,    -2,
    -127,  -111,    70,  -698,   -68,  -698,   -17,   542,  -698,  -698,
     674,    48,  -698,    61,  -698,   130,   -15,  -698,  -698,  -698,
    -698,   142,    -8,  -698,  -698,   565,   526,  -535,   256,   670,
    -698,   536,    39,   225,  -698,  -698,  -698,   262
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -471
static const yytype_int16 yytable[] =
{
      99,   151,   227,   360,    87,    88,   289,    86,    91,   690,
      92,   153,   365,   576,   630,   307,   844,  -470,   315,   542,
     155,   793,   579,   168,   352,  -469,   273,   644,   190,   160,
     191,   315,   320,   328,   373,   373,   830,   837,   647,  -428,
     209,   571,   716,   181,   137,  -460,  -426,   170,   574,   309,
     192,   590,   716,  -160,   711,   697,   743,   727,   606,   574,
     479,   626,   574,   875,   636,     3,   771,   771,   193,   709,
      50,   139,   139,   222,  -185,   194,   359,  -186,   806,   366,
     206,   517,   654,  -387,   140,   140,   819,   782,   582,   784,
     302,    75,   513,   353,   120,   583,   518,   115,    75,    64,
     161,   164,    81,   226,   157,   584,   207,   116,  -428,    81,
     169,  -428,   160,   580,   608,  -426,   843,    75,  -426,   220,
     745,   224,   749,   712,   165,   197,   200,   673,    81,  -428,
     116,  -431,   367,   845,   118,   119,  -426,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   794,   342,   143,   145,   149,   182,   303,
     323,   738,   304,   162,   388,   141,   142,   842,   162,   308,
    -470,   557,   365,   173,   364,  -470,   369,   832,  -469,   594,
     305,   833,   550,  -469,   366,   316,   321,   329,   374,   598,
     831,   838,   139,   717,   572,   162,   737,   611,  -460,   202,
     899,   575,   698,   768,   591,   140,  -160,   570,   217,   270,
     655,   607,   702,   911,    99,   787,   876,   772,   809,   801,
     746,  -185,   174,   482,  -186,  -427,   746,   366,   175,   480,
     746,   177,   747,   193,   746,   139,   396,   592,   747,   151,
     194,   139,   747,   354,   188,   366,   747,   651,   140,   153,
     290,   748,   116,   139,   140,   516,   366,   178,   155,   791,
     183,   514,   193,   519,   193,   266,   140,   189,   292,   194,
     137,   194,   195,   612,   218,   193,   196,   267,   271,   150,
     596,   907,   194,   184,   678,   552,   293,   544,   679,   350,
     197,   145,   543,   750,  -427,   519,   546,  -427,   666,   272,
     206,   185,   387,   797,   322,   162,   568,   326,   327,   225,
     368,   186,   388,   388,   332,  -427,   335,  -430,   116,   197,
     181,   197,   187,   115,   349,    64,   207,   661,   667,   339,
     225,   357,   197,   116,   595,   347,   115,   388,    64,   600,
     230,   231,   208,    75,    75,   375,   116,   363,   900,   221,
     116,   386,   718,   344,    81,    81,   393,   345,    99,   599,
     116,   201,   912,   203,  -214,   205,   913,   116,   162,   483,
     484,   485,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   204,   512,   665,   615,
     162,   215,   521,   365,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   225,   193,   235,
     351,   537,   238,   356,   540,   194,   145,   631,   223,    29,
      30,   692,   162,   619,   237,   547,   548,   115,   622,    64,
     228,   699,   269,   351,   555,   356,    26,   116,   351,   356,
     173,   226,  -429,   678,   239,   240,   241,   679,   137,    32,
     232,   233,   234,    50,   188,   665,   715,   721,   267,  -431,
     296,   720,    37,   295,   242,   197,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   689,
     266,   300,   263,   264,   265,   115,   266,    64,   338,   306,
     311,   115,   267,    64,   312,   116,   314,   317,   267,   605,
     665,   116,   720,    26,   775,   609,   568,   610,   319,   330,
     331,    75,   333,   346,   193,   137,    32,   372,   138,   789,
     193,   194,    81,   385,   354,   388,   723,   194,   355,    37,
     354,   394,   395,   751,   752,   753,   754,   755,   756,   397,
     600,   398,   633,   400,   157,   600,   808,   399,   551,   558,
     139,   757,   643,   553,    99,   810,   561,   563,    87,    88,
     578,    86,    91,   140,    92,   562,   680,   139,   115,   566,
      64,   197,   573,   586,   828,   588,   593,   197,   116,   616,
     140,   597,   680,   603,   644,   649,   614,   669,    75,    99,
     660,   705,   139,   620,   613,   138,   617,   700,  -452,    81,
     852,   139,   139,  -454,  -430,   140,   854,   600,   600,   758,
     759,   627,   629,   600,   140,   140,   653,   760,   139,   751,
     752,   753,   754,   755,   756,   671,   677,   694,   621,    99,
     680,   140,   696,    87,    88,   860,    86,    91,   706,    92,
     701,   708,   870,   722,   624,   725,   726,   728,   638,   729,
     730,   732,   891,   733,   734,   836,   893,   736,   894,   724,
     744,   625,   600,  -268,   600,   860,   139,   766,   635,   902,
      99,   767,   326,   637,   839,   776,   777,    99,   780,   140,
      26,   335,   680,   741,   896,   785,   641,   786,   788,   652,
     796,   915,   137,    32,   802,   339,   339,   811,   812,    99,
     815,   817,   906,   814,   826,   829,    37,   835,   840,   849,
     850,   568,   363,   871,   851,   853,   393,   600,   873,   807,
     874,   888,   -77,   889,   139,   139,   881,   884,   687,   260,
     261,   262,   263,   264,   265,   885,   266,   140,   140,   886,
     890,   805,   639,   887,   909,   115,   895,    64,   267,   901,
     898,   210,   714,    99,   770,   116,   371,   601,   659,   703,
     695,   318,   769,   229,   739,    75,   827,    99,   680,   824,
     848,   822,   138,   741,   565,   672,    81,   549,   779,   883,
     869,   559,   556,   783,   856,   861,    99,   892,   511,   751,
     752,   753,   754,   755,   756,  -471,   258,   259,   260,   261,
     262,   263,   264,   265,   326,   266,    99,   757,   301,   545,
     648,   310,   541,   646,   515,   861,     0,   267,   339,   641,
     751,   752,   753,   754,   755,   756,     0,     0,     0,     0,
      99,     0,    99,     0,     0,     0,     0,     0,   757,     0,
     568,   751,   752,   753,   754,   755,   756,     0,     0,     0,
       0,     0,     0,     0,   680,     0,   792,     0,     0,   757,
       0,     0,     0,     0,     0,   758,   759,     0,     0,    99,
       0,    99,    99,   790,     0,     4,     5,     6,     7,     8,
      99,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,    99,     0,     0,   758,   759,   751,   752,
     753,   754,   755,   756,   818,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   757,   758,   759,     0,
      12,    13,     0,     0,     0,   820,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   855,
      26,    27,    28,     0,     0,   868,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
     878,    34,    35,     0,     0,    36,    37,    38,     0,    39,
       0,    40,    41,    42,   758,   759,    43,    44,     0,     0,
       0,     0,   872,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
      77,   650,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,   242,
      11,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,   267,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    34,    35,     0,     0,    36,    37,
      38,     0,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,    77,   704,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
     267,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,     0,     0,     0,     0,    34,    35,     0,
       0,    36,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,    74,
       0,    75,    76,     0,     0,     0,    77,   241,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   242,    11,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,   267,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    37,    38,     0,    39,     0,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,   376,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
     377,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,   267,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    37,    38,
       0,    39,     0,    40,    41,    42,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,   376,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,   589,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,   267,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,   676,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    37,    38,     0,    39,     0,    40,    41,    42,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,   376,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
     267,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,     0,   735,     0,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,   376,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,   773,    45,     0,    46,    47,
      48,    49,    50,    51,    52,   376,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,     0,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
     266,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,   825,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,   376,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    37,    38,     0,    39,     0,    40,    41,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,    47,    48,    49,    50,    51,
      52,   376,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,   841,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,  -471,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,     0,
     880,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,   376,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
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
      44,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,    50,    51,    52,   376,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,   903,    78,     0,    79,    80,    81,
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
     376,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,   904,    78,     0,
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
      50,    51,    52,   376,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
     905,    78,     0,    79,    80,    81,    82,     4,     5,     6,
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
      47,    48,    49,    50,    51,    52,   376,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,   908,    78,     0,    79,    80,    81,    82,
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
      45,     0,    46,    47,    48,    49,    50,    51,    52,   376,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,   916,    78,     0,    79,
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
      51,    52,   376,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   632,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,     0,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,     0,    54,     0,    55,     0,
       0,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,     0,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   642,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   668,
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
       0,     0,   740,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   821,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,   287,
     288,   114,    32,  -426,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    37,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     4,     5,
       6,     7,     8,    66,   116,     0,     0,     9,    10,    71,
      11,     0,  -426,     0,    75,  -426,     0,     0,   389,     0,
       0,    78,   390,     0,    80,    81,    82,     0,     0,     0,
       0,   144,     0,  -426,     0,     0,     0,     0,     0,     0,
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
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
      32,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    37,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
       0,    66,   116,   348,     0,     0,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,    78,
       0,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,    32,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,    37,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     4,
       5,     6,     7,     8,    66,   116,     0,     0,     9,    10,
      71,    11,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    80,    81,    82,     0,     0,
       0,     0,   522,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,    32,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
      37,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    46,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     4,     5,     6,     7,     8,    66,   116,
       0,     0,     9,    10,    71,    11,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,    78,     0,     0,    80,
      81,    82,     0,     0,     0,     0,   539,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    37,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     4,     5,     6,
       7,     8,    66,   116,     0,     0,     9,    10,    71,    11,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,    32,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    37,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
       0,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     4,     5,     6,     7,     8,    66,   116,     0,     0,
       9,    10,    71,    11,     0,     0,     0,    75,     0,     0,
       0,   389,     0,     0,    78,     0,     0,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    37,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,     0,
      66,   116,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    75,     0,     0,     0,   239,   240,   241,    78,     0,
       0,    80,    81,    82,   402,   403,   404,   405,   406,     0,
     407,   408,   409,   410,   411,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   412,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,     0,   426,   427,   428,   429,     0,
     430,   431,     0,     0,   432,     0,   433,     0,   434,   435,
     436,     0,   437,     0,     0,   438,   439,     0,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,   454,   455,     0,   456,   457,   458,
     459,   460,     0,   461,   462,   463,     0,     0,     0,     0,
       0,     0,   464,     0,   465,   581,   466,   467,   468,   469,
     470,   471,   472,   473,    75,   474,   291,   475,     0,   476,
     402,   403,   404,   405,   406,    81,   407,   408,   409,   410,
     411,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
       0,   426,   427,   428,   429,     0,   430,   431,     0,     0,
     432,     0,   433,     0,   434,   435,   436,     0,   437,     0,
       0,   438,   439,     0,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
     454,   455,     0,   456,   457,   458,   459,   460,     0,   461,
     857,   463,    64,     0,     0,     0,     0,     0,   464,     0,
     858,     0,   466,   467,   468,   469,   470,   471,   472,   473,
       0,   474,     0,   475,   240,   241,   859,   402,   403,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   412,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,     0,   426,   427,
     428,   429,     0,   430,   431,     0,     0,   432,     0,   433,
       0,   434,   435,   436,     0,   437,     0,     0,   438,   439,
       0,   440,   441,   442,     0,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,   454,   455,     0,
     456,   457,   458,   459,   460,     0,   461,   857,   463,    64,
       0,     0,     0,     0,     0,   464,     0,   858,     0,   466,
     467,   468,   469,   470,   471,   472,   473,     0,   474,     0,
     475,     0,     0,   882,   402,   403,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   412,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,     0,   426,   427,   428,   429,     0,
     430,   431,     0,     0,   432,     0,   433,     0,   434,   435,
     436,     0,   437,     0,     0,   438,   439,     0,   440,   441,
     442,     0,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     0,   454,   455,     0,   456,   457,   458,
     459,   460,     0,   461,   462,   463,     0,     0,     0,     0,
       0,     0,   464,     0,   465,     0,   466,   467,   468,   469,
     470,   471,   472,   473,     0,   474,     0,   475,   402,   403,
     404,   405,   406,     0,   407,   408,   409,   410,   411,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   413,   414,     0,   415,   416,   417,
     751,   752,   753,   754,   755,   756,   424,   425,     0,   426,
     427,   428,   429,     0,   430,   431,     0,     0,   432,     0,
     433,     0,   434,   435,   436,     0,   437,     0,     0,   438,
     439,     0,   440,   441,   442,     0,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,     0,   454,   455,
       0,   456,   457,   458,   459,   460,     0,   461,   462,   463,
       0,     0,   239,   240,   241,     0,   464,     0,   897,     0,
     466,   467,   468,   469,   470,   471,   472,   473,     0,   474,
       0,   475,   242,   793,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,   267,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,   267,   794,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,   267,   268,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   267,   358,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,   384,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,   239,   240,   241,     0,     0,     0,     0,
       0,     0,   536,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
     538,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,   239,   240,
     241,     0,     0,     0,     0,     0,     0,   560,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,   567,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,   239,   240,   241,     0,     0,     0,     0,
       0,     0,   587,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
     602,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,   239,   240,
     241,     0,     0,     0,     0,     0,     0,   674,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,   675,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,   693,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,   604,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   623,     0,   267,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,   628,     0,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,   239,   240,   241,     0,   686,
     294,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   564,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,   688,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,   618,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-698)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-471)))

static const yytype_int16 yycheck[] =
{
       2,    28,    84,   204,     2,     2,   117,     2,     2,   629,
       2,    28,   208,   343,   553,     8,    36,     8,     8,   299,
      28,    30,    68,    38,    68,     8,   108,     8,    62,    31,
      64,     8,     8,     8,     8,     8,     8,     8,   573,    68,
      74,     8,     8,    51,    80,     8,    68,    42,     8,   160,
      65,     8,     8,     8,    87,    14,   701,   677,     8,     8,
     237,   542,     8,     8,   562,     0,     8,     8,    96,   655,
     119,    23,    24,    81,    14,   103,   203,    14,   764,    82,
      93,   143,    30,   140,    23,    24,   783,   732,   136,   734,
      68,   153,   269,   137,   160,   143,   158,   133,   153,   135,
     160,   143,   164,   160,   153,   153,   119,   143,   137,   164,
     160,   140,   114,   159,   394,   137,   813,   153,   140,    80,
     706,    82,   708,   156,   143,   153,    30,   608,   164,   158,
     143,   160,   135,   153,     4,     5,   158,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   162,   188,    25,    26,    27,   143,   137,
     175,   696,   140,    33,   143,    23,    24,   812,    38,   162,
     161,   161,   368,    43,   208,   166,   210,   158,   161,   158,
     158,   162,   309,   166,    82,   162,   162,   162,   162,   162,
     162,   162,   144,   159,   161,    65,   694,   398,   161,    69,
     886,   161,   161,   159,   161,   144,   161,   334,    78,    68,
     158,   161,   161,   910,   216,   161,   161,   159,   159,   758,
      86,   161,   160,   238,   161,    68,    86,    82,   160,   237,
      86,   160,    98,    96,    86,   187,   231,   135,    98,   266,
     103,   193,    98,   106,   135,    82,    98,   577,   187,   266,
     120,   111,   143,   205,   193,   270,    82,   160,   266,   111,
     160,   269,    96,   271,    96,    55,   205,   158,   138,   103,
      80,   103,   106,   400,   106,    96,   110,    67,   137,    89,
     135,   901,   103,   160,    81,   312,   144,   302,    85,   110,
     153,   161,   300,   159,   137,   303,   304,   140,   135,   158,
      93,   143,   165,   159,   174,   175,   333,   177,   178,   135,
     135,   160,   143,   143,   184,   158,   186,   160,   143,   153,
     328,   153,   160,   133,   194,   135,   119,   158,   158,   187,
     135,   201,   153,   143,   368,   193,   133,   143,   135,   373,
      72,    73,   135,   153,   153,   215,   143,   205,   887,   158,
     143,   221,   158,   158,   164,   164,   226,   162,   360,   135,
     143,   160,   158,   143,   161,   160,   162,   143,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   158,   267,   594,   481,
     270,   160,   272,   599,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   135,    96,    36,
     195,   291,    68,   198,   294,   103,   296,   554,   106,    78,
      79,   632,   302,   515,   140,   305,   306,   133,   520,   135,
      89,   642,   140,   218,   314,   220,    68,   143,   223,   224,
     320,   160,   160,    81,     9,    10,    11,    85,    80,    81,
      72,    73,    74,   119,   135,   661,   662,   668,    67,   160,
       8,   667,    94,   166,    29,   153,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   626,
      55,   140,    51,    52,    53,   133,    55,   135,   130,    16,
     162,   133,    67,   135,   114,   143,    16,   162,    67,   389,
     716,   143,   718,    68,   725,   395,   553,   397,   154,   162,
     161,   153,   114,   162,    96,    80,    81,   162,   160,   740,
      96,   103,   164,   163,   106,   143,   673,   103,   110,    94,
     106,   143,   160,    75,    76,    77,    78,    79,    80,   160,
     594,    30,   557,   143,   153,   599,   767,   162,   161,   160,
     522,    93,   567,   124,   576,   771,   161,     8,   576,   576,
     159,   576,   576,   522,   576,   162,   613,   539,   133,   162,
     135,   153,   160,   143,   795,   158,   143,   153,   143,   166,
     539,   162,   629,   160,     8,    16,   476,   602,   153,   611,
     162,   166,   564,   166,   160,   160,   486,   644,   160,   164,
     821,   573,   574,   160,   160,   564,   827,   661,   662,   151,
     152,   166,   160,   667,   573,   574,   166,   159,   590,    75,
      76,    77,    78,    79,    80,   161,   160,   162,   518,   651,
     677,   590,   160,   651,   651,   832,   651,   651,   162,   651,
     158,   162,   839,   162,   522,    30,   162,   161,    36,     8,
      36,   158,   873,   161,   158,   802,   877,   162,   879,   674,
     159,   539,   716,   119,   718,   862,   638,   160,   558,   890,
     692,   158,   562,   563,   805,   161,   151,   699,   157,   638,
      68,   571,   729,   698,   881,   162,   564,   161,   161,   579,
     162,   912,    80,    81,   153,   573,   574,   162,   158,   721,
      30,   153,   899,   160,   162,    16,    94,    16,   153,   158,
      16,   758,   590,   161,   158,   162,   606,   771,   158,   766,
     153,   868,    82,   870,   696,   697,   140,   162,   618,    48,
      49,    50,    51,    52,    53,   162,    55,   696,   697,    82,
     158,   763,   130,   126,   161,   133,   162,   135,    67,   160,
     886,    74,   661,   775,   718,   143,   210,   373,   590,   649,
     638,   169,   716,    89,   697,   153,   792,   789,   815,   788,
     815,   786,   160,   788,   328,   606,   164,   307,   729,   862,
     837,   320,   315,   733,   830,   832,   808,   875,   266,    75,
      76,    77,    78,    79,    80,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   694,    55,   828,    93,   154,   303,
     574,   161,   296,   571,   269,   862,    -1,    67,   696,   697,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
     852,    -1,   854,    -1,    -1,    -1,    -1,    -1,    93,    -1,
     887,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   901,    -1,   746,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,   151,   152,    -1,    -1,   891,
      -1,   893,   894,   159,    -1,     3,     4,     5,     6,     7,
     902,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,   915,    -1,    -1,   151,   152,    75,    76,
      77,    78,    79,    80,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,   151,   152,    -1,
      48,    49,    -1,    -1,    -1,   159,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   829,
      68,    69,    70,    -1,    -1,   835,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
     850,    89,    90,    -1,    -1,    93,    94,    95,    -1,    97,
      -1,    99,   100,   101,   151,   152,   104,   105,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,    -1,    -1,    -1,
     158,   159,   160,    -1,   162,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    29,
      15,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
      -1,    -1,    -1,   158,   159,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    31,    32,    33,    34,    35,    36,
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
      -1,   153,   154,    -1,    -1,    -1,   158,    11,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    29,    15,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,    58,
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
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,
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
      13,    -1,    15,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,   107,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,
      -1,   158,    -1,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,    -1,    -1,    -1,   113,
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
     101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
      -1,    -1,   153,   154,    -1,    -1,    -1,   158,   159,   160,
      -1,   162,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,
     158,    -1,   160,    -1,   162,   163,   164,   165,     3,     4,
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
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,   159,   160,    -1,   162,   163,   164,
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
     150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,    -1,   125,    -1,
      -1,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
      -1,   148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    80,    81,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,     3,     4,
       5,     6,     7,   142,   143,    -1,    -1,    12,    13,   148,
      15,    -1,   137,    -1,   153,   140,    -1,    -1,   157,    -1,
      -1,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    36,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,     3,
       4,     5,     6,     7,   142,   143,    -1,    -1,    12,    13,
     148,    15,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,     3,     4,     5,     6,     7,   142,   143,
      -1,    -1,    12,    13,   148,    15,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,     3,     4,     5,
       6,     7,   142,   143,    -1,    -1,    12,    13,   148,    15,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,     3,     4,     5,     6,     7,   142,   143,    -1,    -1,
      12,    13,   148,    15,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   157,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,     9,    10,    11,   160,    -1,
      -1,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    87,    -1,
      89,    90,    -1,    -1,    93,    -1,    95,    -1,    97,    98,
      99,    -1,   101,    -1,    -1,   104,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,   143,   159,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    14,   156,    -1,   158,
       3,     4,     5,     6,     7,   164,     9,    10,    11,    12,
      13,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    87,    -1,    89,    90,    -1,    -1,
      93,    -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,
      -1,   104,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,    -1,   156,    10,    11,   159,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    -1,    89,    90,    -1,    -1,    93,    -1,    95,
      -1,    97,    98,    99,    -1,   101,    -1,    -1,   104,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,    -1,
     156,    -1,    -1,   159,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    87,    -1,
      89,    90,    -1,    -1,    93,    -1,    95,    -1,    97,    98,
      99,    -1,   101,    -1,    -1,   104,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,    -1,   156,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    87,    -1,    89,    90,    -1,    -1,    93,    -1,
      95,    -1,    97,    98,    99,    -1,   101,    -1,    -1,   104,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,   134,
      -1,    -1,     9,    10,    11,    -1,   141,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
      -1,   156,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,
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
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,   159,
      14,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    82,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67
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
     163,   164,   165,   173,   174,   175,   190,   195,   199,   202,
     203,   204,   206,   219,   220,   221,   222,   262,   263,   266,
     272,   273,   278,   279,   280,   282,   284,   285,   286,   287,
     288,   289,   290,   302,    80,   133,   143,   266,   282,   282,
     160,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,    80,   160,   278,
     280,   288,   288,   282,    36,   282,   296,   297,   298,   282,
      89,   174,   261,   273,   274,   289,   291,   153,   234,   235,
     266,   160,   282,   283,   143,   143,   187,   256,   283,   160,
     190,   257,   258,   282,   160,   160,   275,   160,   160,   232,
     233,   289,   143,   160,   160,   143,   160,   160,   135,   158,
     173,   173,   283,    96,   103,   106,   110,   153,   299,   300,
      30,   160,   282,   143,   158,   160,    93,   119,   135,   173,
     178,   180,   183,   185,   186,   160,   188,   282,   106,   276,
     299,   158,   289,   106,   299,   135,   160,   229,    89,   203,
      72,    73,    72,    73,    74,    36,   268,   140,    68,     9,
      10,    11,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    55,    67,   162,   140,
      68,   137,   158,   229,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    64,    65,   268,
     282,    14,   282,   288,    14,   166,     8,   281,   229,   277,
     140,   277,    68,   137,   140,   158,    16,     8,   162,   268,
     296,   162,   114,   208,    16,     8,   162,   162,   187,   154,
       8,   162,   282,   283,   259,   260,   282,   282,     8,   162,
     162,   161,   282,   114,   209,   282,   303,   304,   130,   288,
     294,   295,   173,   177,   158,   162,   162,   288,   144,   282,
     110,   300,    68,   137,   106,   110,   300,   282,   162,   267,
     188,   193,   194,   288,   173,   185,    82,   135,   135,   173,
     179,   183,   162,     8,   162,   282,   122,   159,   189,   190,
     195,   199,   204,   206,   161,   163,   282,   165,   143,   157,
     161,   230,   231,   282,   143,   160,   190,   160,    30,   162,
     143,   267,     3,     4,     5,     6,     7,     9,    10,    11,
      12,    13,    55,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    84,    85,    86,    87,
      89,    90,    93,    95,    97,    98,    99,   101,   104,   105,
     107,   108,   109,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   124,   126,   127,   128,   129,
     130,   132,   133,   134,   141,   143,   145,   146,   147,   148,
     149,   150,   151,   152,   154,   156,   158,   169,   170,   171,
     289,   292,   283,   282,   282,   282,    30,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   274,   282,   171,   289,   292,   283,   143,   158,   289,
     293,   282,    36,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   161,   282,   161,    36,
     282,   298,   208,   289,   283,   293,   289,   282,   282,   235,
     267,   161,   174,   124,   210,   282,   256,   161,   160,   258,
     161,   161,   162,     8,    82,   233,   162,   161,   174,   239,
     267,     8,   161,   160,     8,   161,   172,   176,   159,    68,
     159,   159,   136,   143,   153,   301,   143,   161,   158,   159,
       8,   161,   135,   143,   158,   173,   135,   162,   162,   135,
     173,   186,   161,   160,   159,   282,     8,   161,   208,   282,
     282,   188,   267,   160,   282,   229,   166,   282,    30,   229,
     166,   282,   229,   159,   288,   288,   210,   166,   159,   160,
     239,   267,    30,   190,   214,   282,   259,   282,    36,   130,
     211,   288,    30,   190,     8,   207,   304,   294,   295,    16,
     159,   172,   282,   166,    30,   158,   215,   205,   191,   194,
     162,   158,   178,   181,   184,   185,   135,   158,    30,   190,
     218,   161,   231,   210,   161,   161,    74,   160,    81,    85,
     174,   223,   224,   225,   226,   227,   159,   282,   159,   267,
     223,   201,   188,   161,   162,   288,   160,    14,   161,   188,
     174,   158,   161,   282,   159,   166,   162,   216,   162,   216,
     236,    87,   156,   192,   181,   185,     8,   159,   158,   182,
     185,   188,   162,   267,   190,    30,   162,   223,   161,     8,
      36,   197,   158,   161,   158,   107,   162,   259,   294,   211,
      30,   190,   213,   236,   159,   216,    86,    98,   111,   216,
     159,    75,    76,    77,    78,    79,    80,    93,   151,   152,
     159,   237,   248,   249,   250,   251,   160,   158,   159,   184,
     182,     8,   159,   112,   200,   188,   161,   151,   269,   225,
     157,   198,   236,   269,   236,   162,   161,   161,   161,   188,
     159,   111,   282,    30,   162,   217,   162,   159,   171,   254,
     255,   239,   153,   252,   253,   266,   251,   174,   188,   159,
     185,   162,   158,   196,   160,    30,   228,   153,   159,   228,
     159,    30,   190,   212,   213,   109,   162,   217,   188,    16,
       8,   162,   158,   162,   240,    16,   267,     8,   162,   268,
     153,   159,   236,   228,    36,   153,   270,   271,   227,   158,
      16,   158,   188,   162,   188,   282,   255,   133,   143,   159,
     171,   174,   241,   242,   243,   244,   245,   246,   282,   253,
     171,   161,   159,   158,   153,     8,   161,   264,   282,   265,
     108,   140,   159,   242,   162,   162,    82,   126,   267,   267,
     158,   188,   271,   188,   188,   162,   171,   143,   169,   251,
     239,   160,   188,   159,   159,   159,   171,   223,   159,   161,
     238,   228,   158,   162,   247,   188,   159
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
#line 375 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 399 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 400 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 404 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 405 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName); (yyval.qualifiedName)->AppendName((yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 409 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 410 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 411 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 415 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 416 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 417 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 418 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 419 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 420 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 421 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 422 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 423 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 424 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 425 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 426 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 427 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 428 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 429 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 430 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 439 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].unprefixedNameList)); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 440 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].unprefixedNameList)); }
    break;

  case 106:
/* Line 1802 of yacc.c  */
#line 444 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseQualify((yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 107:
/* Line 1802 of yacc.c  */
#line 445 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseQualify((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 108:
/* Line 1802 of yacc.c  */
#line 449 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 109:
/* Line 1802 of yacc.c  */
#line 450 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 110:
/* Line 1802 of yacc.c  */
#line 454 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.unprefixedNameList) = observers.UnprefixedNameListAppend((yyvsp[(1) - (3)].unprefixedNameList), (yyvsp[(3) - (3)].unprefixedName)); }
    break;

  case 111:
/* Line 1802 of yacc.c  */
#line 455 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.unprefixedNameList) = observers.UnprefixedNameListMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 112:
/* Line 1802 of yacc.c  */
#line 459 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 113:
/* Line 1802 of yacc.c  */
#line 460 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 114:
/* Line 1802 of yacc.c  */
#line 464 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 115:
/* Line 1802 of yacc.c  */
#line 465 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.FunctionOrConstantImportMake((yyvsp[(1) - (2)].semanticValue), (yyvsp[(2) - (2)].unprefixedName)); }
    break;

  case 116:
/* Line 1802 of yacc.c  */
#line 469 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.unprefixedName) = observers.UnprefixedNameMake((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 117:
/* Line 1802 of yacc.c  */
#line 470 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.unprefixedName) = observers.UnprefixedNameMakeAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 118:
/* Line 1802 of yacc.c  */
#line 474 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMake((yyvsp[(1) - (1)].unprefixedName)); }
    break;

  case 119:
/* Line 1802 of yacc.c  */
#line 475 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseMakeAbsolute((yyvsp[(2) - (2)].unprefixedName)); }
    break;

  case 120:
/* Line 1802 of yacc.c  */
#line 479 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 121:
/* Line 1802 of yacc.c  */
#line 480 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 122:
/* Line 1802 of yacc.c  */
#line 484 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 123:
/* Line 1802 of yacc.c  */
#line 485 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 124:
/* Line 1802 of yacc.c  */
#line 489 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 125:
/* Line 1802 of yacc.c  */
#line 490 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 126:
/* Line 1802 of yacc.c  */
#line 491 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 127:
/* Line 1802 of yacc.c  */
#line 492 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 128:
/* Line 1802 of yacc.c  */
#line 493 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 129:
/* Line 1802 of yacc.c  */
#line 494 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 130:
/* Line 1802 of yacc.c  */
#line 498 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 131:
/* Line 1802 of yacc.c  */
#line 499 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 132:
/* Line 1802 of yacc.c  */
#line 500 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 133:
/* Line 1802 of yacc.c  */
#line 501 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 134:
/* Line 1802 of yacc.c  */
#line 502 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (7)].statementList), (yyvsp[(5) - (7)].expression)); }
    break;

  case 135:
/* Line 1802 of yacc.c  */
#line 503 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList));
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList));
																					   }
    break;

  case 136:
/* Line 1802 of yacc.c  */
#line 507 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 137:
/* Line 1802 of yacc.c  */
#line 508 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 138:
/* Line 1802 of yacc.c  */
#line 509 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 139:
/* Line 1802 of yacc.c  */
#line 510 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 140:
/* Line 1802 of yacc.c  */
#line 511 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 141:
/* Line 1802 of yacc.c  */
#line 512 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.GlobalVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 142:
/* Line 1802 of yacc.c  */
#line 513 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 143:
/* Line 1802 of yacc.c  */
#line 514 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 144:
/* Line 1802 of yacc.c  */
#line 515 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 145:
/* Line 1802 of yacc.c  */
#line 516 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 146:
/* Line 1802 of yacc.c  */
#line 517 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (7)].expression)); 
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (7)].expression));
																						 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList));
	                                                                                 }
    break;

  case 147:
/* Line 1802 of yacc.c  */
#line 522 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (9)].expression)); 
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (9)].expression));
																						 (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(7) - (9)].expression));
																						 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList));
	                                                                                 }
    break;

  case 148:
/* Line 1802 of yacc.c  */
#line 528 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake((yyvsp[(3) - (5)].statementList), (yyvsp[(5) - (5)].statementList))); }
    break;

  case 149:
/* Line 1802 of yacc.c  */
#line 529 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 150:
/* Line 1802 of yacc.c  */
#line 530 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (6)].statementList), (yyvsp[(5) - (6)].statementList));
																					     (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList));
																					   }
    break;

  case 151:
/* Line 1802 of yacc.c  */
#line 533 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));}
    break;

  case 152:
/* Line 1802 of yacc.c  */
#line 534 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 153:
/* Line 1802 of yacc.c  */
#line 535 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 154:
/* Line 1802 of yacc.c  */
#line 539 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 155:
/* Line 1802 of yacc.c  */
#line 541 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (9)].statementList),
																					   observers.AssignmentExpressionFromNewFound(
																					   observers.VariableStart((yyvsp[(5) - (9)].semanticValue)), 
																					   (yyvsp[(4) - (9)].qualifiedName),
																					   NULL));
																					 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (9)].statementList)); }
    break;

  case 156:
/* Line 1802 of yacc.c  */
#line 550 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 157:
/* Line 1802 of yacc.c  */
#line 551 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 158:
/* Line 1802 of yacc.c  */
#line 555 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 159:
/* Line 1802 of yacc.c  */
#line 556 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 160:
/* Line 1802 of yacc.c  */
#line 560 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 161:
/* Line 1802 of yacc.c  */
#line 565 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (7)].semanticValue)); }
    break;

  case 162:
/* Line 1802 of yacc.c  */
#line 567 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (12)].semanticValue), (yyvsp[(2) - (12)].isMethod), (yyvsp[(1) - (12)].semanticValue), (yyvsp[(6) - (12)].parametersList), (yyvsp[(11) - (12)].statementList), (yyvsp[(10) - (12)].semanticValue), (yyvsp[(12) - (12)].semanticValue), (yyvsp[(9) - (12)].qualifiedName));
											                  observers.SetCurrentMemberName(NULL);
															 }
    break;

  case 163:
/* Line 1802 of yacc.c  */
#line 573 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 164:
/* Line 1802 of yacc.c  */
#line 574 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 165:
/* Line 1802 of yacc.c  */
#line 578 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isVariadic) = false; }
    break;

  case 166:
/* Line 1802 of yacc.c  */
#line 579 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isVariadic) = true; }
    break;

  case 167:
/* Line 1802 of yacc.c  */
#line 584 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 168:
/* Line 1802 of yacc.c  */
#line 585 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
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

  case 169:
/* Line 1802 of yacc.c  */
#line 596 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (5)].semanticValue)); }
    break;

  case 170:
/* Line 1802 of yacc.c  */
#line 597 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
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

  case 171:
/* Line 1802 of yacc.c  */
#line 612 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (1)].classSymbol); }
    break;

  case 172:
/* Line 1802 of yacc.c  */
#line 613 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolMergeModifiers((yyvsp[(1) - (2)].classSymbol), (yyvsp[(2) - (2)].classSymbol)); }
    break;

  case 173:
/* Line 1802 of yacc.c  */
#line 617 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), true, false, false, false); }
    break;

  case 174:
/* Line 1802 of yacc.c  */
#line 618 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, true, false, false); }
    break;

  case 175:
/* Line 1802 of yacc.c  */
#line 623 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 176:
/* Line 1802 of yacc.c  */
#line 624 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
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

  case 177:
/* Line 1802 of yacc.c  */
#line 643 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 178:
/* Line 1802 of yacc.c  */
#line 644 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
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

  case 179:
/* Line 1802 of yacc.c  */
#line 661 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 180:
/* Line 1802 of yacc.c  */
#line 662 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 181:
/* Line 1802 of yacc.c  */
#line 666 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 182:
/* Line 1802 of yacc.c  */
#line 667 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(2) - (2)].qualifiedNameList)); }
    break;

  case 183:
/* Line 1802 of yacc.c  */
#line 671 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 184:
/* Line 1802 of yacc.c  */
#line 672 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(2) - (2)].qualifiedNameList)); }
    break;

  case 185:
/* Line 1802 of yacc.c  */
#line 676 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 186:
/* Line 1802 of yacc.c  */
#line 677 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 187:
/* Line 1802 of yacc.c  */
#line 678 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (4)].statementList), observers.ExpressionNil()); }
    break;

  case 188:
/* Line 1802 of yacc.c  */
#line 682 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 189:
/* Line 1802 of yacc.c  */
#line 683 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 190:
/* Line 1802 of yacc.c  */
#line 687 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 191:
/* Line 1802 of yacc.c  */
#line 688 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 192:
/* Line 1802 of yacc.c  */
#line 692 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 193:
/* Line 1802 of yacc.c  */
#line 693 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 194:
/* Line 1802 of yacc.c  */
#line 697 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 195:
/* Line 1802 of yacc.c  */
#line 698 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 196:
/* Line 1802 of yacc.c  */
#line 699 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 197:
/* Line 1802 of yacc.c  */
#line 700 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 198:
/* Line 1802 of yacc.c  */
#line 704 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 199:
/* Line 1802 of yacc.c  */
#line 705 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), (yyvsp[(3) - (5)].expression)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 200:
/* Line 1802 of yacc.c  */
#line 706 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), (yyvsp[(4) - (4)].statementList)); }
    break;

  case 201:
/* Line 1802 of yacc.c  */
#line 710 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (1)].semanticValue); }
    break;

  case 202:
/* Line 1802 of yacc.c  */
#line 711 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (1)].semanticValue); }
    break;

  case 203:
/* Line 1802 of yacc.c  */
#line 715 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 204:
/* Line 1802 of yacc.c  */
#line 716 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 205:
/* Line 1802 of yacc.c  */
#line 720 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (5)].expression)); 
		                                                             (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 206:
/* Line 1802 of yacc.c  */
#line 722 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (6)].statementList), (yyvsp[(4) - (6)].expression));
	                                                                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 207:
/* Line 1802 of yacc.c  */
#line 727 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 208:
/* Line 1802 of yacc.c  */
#line 728 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 209:
/* Line 1802 of yacc.c  */
#line 732 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(3) - (6)].expression));
		                                                                               (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 210:
/* Line 1802 of yacc.c  */
#line 734 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (7)].statementList), (yyvsp[(4) - (7)].expression));
	                                                                                   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (7)].statementList)); }
    break;

  case 211:
/* Line 1802 of yacc.c  */
#line 739 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 212:
/* Line 1802 of yacc.c  */
#line 740 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), (yyvsp[(4) - (6)].statementList)); }
    break;

  case 213:
/* Line 1802 of yacc.c  */
#line 744 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 214:
/* Line 1802 of yacc.c  */
#line 745 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 215:
/* Line 1802 of yacc.c  */
#line 749 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 216:
/* Line 1802 of yacc.c  */
#line 750 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (3)].parametersList), (yyvsp[(3) - (3)].parametersList)); }
    break;

  case 217:
/* Line 1802 of yacc.c  */
#line 754 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend(observers.ParametersListNil(),
		                                                                        observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), (yyvsp[(2) - (4)].isMethod), false, (yyvsp[(3) - (4)].isVariadic))); }
    break;

  case 218:
/* Line 1802 of yacc.c  */
#line 756 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend(observers.ParametersListNil(),
	                                                                            observers.ParametersListCreate((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), (yyvsp[(2) - (6)].isMethod), true, (yyvsp[(3) - (6)].isVariadic))); }
    break;

  case 219:
/* Line 1802 of yacc.c  */
#line 762 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 220:
/* Line 1802 of yacc.c  */
#line 763 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 221:
/* Line 1802 of yacc.c  */
#line 767 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 222:
/* Line 1802 of yacc.c  */
#line 768 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 223:
/* Line 1802 of yacc.c  */
#line 769 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 224:
/* Line 1802 of yacc.c  */
#line 773 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 225:
/* Line 1802 of yacc.c  */
#line 774 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName); }
    break;

  case 226:
/* Line 1802 of yacc.c  */
#line 778 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 227:
/* Line 1802 of yacc.c  */
#line 779 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 228:
/* Line 1802 of yacc.c  */
#line 783 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 229:
/* Line 1802 of yacc.c  */
#line 784 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 230:
/* Line 1802 of yacc.c  */
#line 788 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 231:
/* Line 1802 of yacc.c  */
#line 789 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); (yyval.expression)->IsUnpack = true; }
    break;

  case 232:
/* Line 1802 of yacc.c  */
#line 793 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 233:
/* Line 1802 of yacc.c  */
#line 794 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 234:
/* Line 1802 of yacc.c  */
#line 798 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 235:
/* Line 1802 of yacc.c  */
#line 802 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 236:
/* Line 1802 of yacc.c  */
#line 803 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 237:
/* Line 1802 of yacc.c  */
#line 807 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 238:
/* Line 1802 of yacc.c  */
#line 808 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 239:
/* Line 1802 of yacc.c  */
#line 812 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 240:
/* Line 1802 of yacc.c  */
#line 813 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 241:
/* Line 1802 of yacc.c  */
#line 818 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 242:
/* Line 1802 of yacc.c  */
#line 819 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolAppendToComment((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 243:
/* Line 1802 of yacc.c  */
#line 820 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].qualifiedNameList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 244:
/* Line 1802 of yacc.c  */
#line 822 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (8)].semanticValue)); }
    break;

  case 245:
/* Line 1802 of yacc.c  */
#line 823 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (11)].semanticValue), (yyvsp[(1) - (11)].classMemberSymbol), (yyvsp[(3) - (11)].isMethod), (yyvsp[(2) - (11)].semanticValue), (yyvsp[(7) - (11)].parametersList), (yyvsp[(11) - (11)].classMemberSymbol), (yyvsp[(10) - (11)].qualifiedName));
																	observers.SetCurrentMemberName(NULL);
															      }
    break;

  case 246:
/* Line 1802 of yacc.c  */
#line 829 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListMake((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 247:
/* Line 1802 of yacc.c  */
#line 830 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedNameList) = observers.NamespaceNameListAppend((yyvsp[(1) - (3)].qualifiedNameList), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 248:
/* Line 1802 of yacc.c  */
#line 834 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 249:
/* Line 1802 of yacc.c  */
#line 835 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 250:
/* Line 1802 of yacc.c  */
#line 836 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 251:
/* Line 1802 of yacc.c  */
#line 840 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 252:
/* Line 1802 of yacc.c  */
#line 841 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 253:
/* Line 1802 of yacc.c  */
#line 845 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); }
    break;

  case 254:
/* Line 1802 of yacc.c  */
#line 846 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); }
    break;

  case 255:
/* Line 1802 of yacc.c  */
#line 850 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), observers.TraitInsteadOfMakeReferenceList((yyvsp[(3) - (3)].qualifiedNameList))); }
    break;

  case 256:
/* Line 1802 of yacc.c  */
#line 855 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue)), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 257:
/* Line 1802 of yacc.c  */
#line 856 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue)), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 258:
/* Line 1802 of yacc.c  */
#line 857 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (4)].semanticValue)), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 259:
/* Line 1802 of yacc.c  */
#line 858 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 260:
/* Line 1802 of yacc.c  */
#line 862 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 261:
/* Line 1802 of yacc.c  */
#line 863 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 262:
/* Line 1802 of yacc.c  */
#line 867 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 263:
/* Line 1802 of yacc.c  */
#line 871 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 264:
/* Line 1802 of yacc.c  */
#line 872 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 265:
/* Line 1802 of yacc.c  */
#line 876 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 266:
/* Line 1802 of yacc.c  */
#line 877 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 267:
/* Line 1802 of yacc.c  */
#line 881 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 268:
/* Line 1802 of yacc.c  */
#line 882 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 269:
/* Line 1802 of yacc.c  */
#line 887 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 270:
/* Line 1802 of yacc.c  */
#line 888 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 277:
/* Line 1802 of yacc.c  */
#line 902 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].classMemberSymbol)); }
    break;

  case 278:
/* Line 1802 of yacc.c  */
#line 903 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].classMemberSymbol)); }
    break;

  case 279:
/* Line 1802 of yacc.c  */
#line 907 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 280:
/* Line 1802 of yacc.c  */
#line 908 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 281:
/* Line 1802 of yacc.c  */
#line 913 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 282:
/* Line 1802 of yacc.c  */
#line 914 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 283:
/* Line 1802 of yacc.c  */
#line 918 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 284:
/* Line 1802 of yacc.c  */
#line 922 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(1) - (3)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 285:
/* Line 1802 of yacc.c  */
#line 926 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 286:
/* Line 1802 of yacc.c  */
#line 927 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 287:
/* Line 1802 of yacc.c  */
#line 931 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 288:
/* Line 1802 of yacc.c  */
#line 935 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 289:
/* Line 1802 of yacc.c  */
#line 936 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 290:
/* Line 1802 of yacc.c  */
#line 940 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 291:
/* Line 1802 of yacc.c  */
#line 941 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 292:
/* Line 1802 of yacc.c  */
#line 947 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAnonymousClass((yyvsp[(2) - (8)].statementList), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(7) - (8)].statementList)); }
    break;

  case 293:
/* Line 1802 of yacc.c  */
#line 951 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 294:
/* Line 1802 of yacc.c  */
#line 952 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 295:
/* Line 1802 of yacc.c  */
#line 957 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 296:
/* Line 1802 of yacc.c  */
#line 958 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 297:
/* Line 1802 of yacc.c  */
#line 959 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 298:
/* Line 1802 of yacc.c  */
#line 960 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 299:
/* Line 1802 of yacc.c  */
#line 961 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 300:
/* Line 1802 of yacc.c  */
#line 962 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 301:
/* Line 1802 of yacc.c  */
#line 963 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 302:
/* Line 1802 of yacc.c  */
#line 964 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 303:
/* Line 1802 of yacc.c  */
#line 965 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 304:
/* Line 1802 of yacc.c  */
#line 966 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 305:
/* Line 1802 of yacc.c  */
#line 967 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 306:
/* Line 1802 of yacc.c  */
#line 968 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 307:
/* Line 1802 of yacc.c  */
#line 969 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 308:
/* Line 1802 of yacc.c  */
#line 970 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 309:
/* Line 1802 of yacc.c  */
#line 971 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 310:
/* Line 1802 of yacc.c  */
#line 972 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 311:
/* Line 1802 of yacc.c  */
#line 973 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 312:
/* Line 1802 of yacc.c  */
#line 974 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 313:
/* Line 1802 of yacc.c  */
#line 975 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 314:
/* Line 1802 of yacc.c  */
#line 976 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 315:
/* Line 1802 of yacc.c  */
#line 977 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 316:
/* Line 1802 of yacc.c  */
#line 978 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 317:
/* Line 1802 of yacc.c  */
#line 979 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 318:
/* Line 1802 of yacc.c  */
#line 980 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 319:
/* Line 1802 of yacc.c  */
#line 981 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 320:
/* Line 1802 of yacc.c  */
#line 982 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 321:
/* Line 1802 of yacc.c  */
#line 983 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 322:
/* Line 1802 of yacc.c  */
#line 984 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 323:
/* Line 1802 of yacc.c  */
#line 985 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 324:
/* Line 1802 of yacc.c  */
#line 986 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 325:
/* Line 1802 of yacc.c  */
#line 987 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 326:
/* Line 1802 of yacc.c  */
#line 988 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 327:
/* Line 1802 of yacc.c  */
#line 989 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 328:
/* Line 1802 of yacc.c  */
#line 990 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 329:
/* Line 1802 of yacc.c  */
#line 991 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 330:
/* Line 1802 of yacc.c  */
#line 992 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 331:
/* Line 1802 of yacc.c  */
#line 993 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 332:
/* Line 1802 of yacc.c  */
#line 994 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 333:
/* Line 1802 of yacc.c  */
#line 995 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 334:
/* Line 1802 of yacc.c  */
#line 996 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 335:
/* Line 1802 of yacc.c  */
#line 997 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 336:
/* Line 1802 of yacc.c  */
#line 998 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 337:
/* Line 1802 of yacc.c  */
#line 999 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 338:
/* Line 1802 of yacc.c  */
#line 1000 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 339:
/* Line 1802 of yacc.c  */
#line 1001 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 340:
/* Line 1802 of yacc.c  */
#line 1002 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 341:
/* Line 1802 of yacc.c  */
#line 1003 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 342:
/* Line 1802 of yacc.c  */
#line 1004 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 343:
/* Line 1802 of yacc.c  */
#line 1005 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 344:
/* Line 1802 of yacc.c  */
#line 1006 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 345:
/* Line 1802 of yacc.c  */
#line 1007 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 346:
/* Line 1802 of yacc.c  */
#line 1008 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 347:
/* Line 1802 of yacc.c  */
#line 1009 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 348:
/* Line 1802 of yacc.c  */
#line 1010 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 349:
/* Line 1802 of yacc.c  */
#line 1011 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 350:
/* Line 1802 of yacc.c  */
#line 1012 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 351:
/* Line 1802 of yacc.c  */
#line 1013 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 352:
/* Line 1802 of yacc.c  */
#line 1014 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 353:
/* Line 1802 of yacc.c  */
#line 1015 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 354:
/* Line 1802 of yacc.c  */
#line 1016 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 355:
/* Line 1802 of yacc.c  */
#line 1017 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 356:
/* Line 1802 of yacc.c  */
#line 1018 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 357:
/* Line 1802 of yacc.c  */
#line 1019 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 358:
/* Line 1802 of yacc.c  */
#line 1020 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 359:
/* Line 1802 of yacc.c  */
#line 1021 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 360:
/* Line 1802 of yacc.c  */
#line 1022 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 361:
/* Line 1802 of yacc.c  */
#line 1023 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 362:
/* Line 1802 of yacc.c  */
#line 1024 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 363:
/* Line 1802 of yacc.c  */
#line 1025 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 364:
/* Line 1802 of yacc.c  */
#line 1026 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 365:
/* Line 1802 of yacc.c  */
#line 1027 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 366:
/* Line 1802 of yacc.c  */
#line 1028 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (4)].expression)); /* TODO capture $4 */ }
    break;

  case 367:
/* Line 1802 of yacc.c  */
#line 1029 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 368:
/* Line 1802 of yacc.c  */
#line 1032 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 369:
/* Line 1802 of yacc.c  */
#line 1033 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(5) - (12)].parametersList), (yyvsp[(7) - (12)].statementList), (yyvsp[(11) - (12)].statementList), (yyvsp[(9) - (12)].semanticValue), (yyvsp[(12) - (12)].semanticValue), (yyvsp[(8) - (12)].qualifiedName)); 
																								   // end after we create the closure so that closure gets the correct scope
																								   // anonymous function count
																								   observers.EndAnonymousFunction(); 
																								 }
    break;

  case 370:
/* Line 1802 of yacc.c  */
#line 1040 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 371:
/* Line 1802 of yacc.c  */
#line 1041 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(6) - (13)].parametersList), (yyvsp[(8) - (13)].statementList), (yyvsp[(12) - (13)].statementList), (yyvsp[(10) - (13)].semanticValue), (yyvsp[(13) - (13)].semanticValue), (yyvsp[(9) - (13)].qualifiedName));  
																									// end after we create the closure so that closure gets the correct scope
																									// anonymous function count
																									observers.EndAnonymousFunction(); 
																								}
    break;

  case 373:
/* Line 1802 of yacc.c  */
#line 1053 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 374:
/* Line 1802 of yacc.c  */
#line 1057 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 375:
/* Line 1802 of yacc.c  */
#line 1058 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 376:
/* Line 1802 of yacc.c  */
#line 1062 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 377:
/* Line 1802 of yacc.c  */
#line 1063 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 378:
/* Line 1802 of yacc.c  */
#line 1067 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].variable)); }
    break;

  case 379:
/* Line 1802 of yacc.c  */
#line 1068 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 380:
/* Line 1802 of yacc.c  */
#line 1072 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 381:
/* Line 1802 of yacc.c  */
#line 1073 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true); }
    break;

  case 382:
/* Line 1802 of yacc.c  */
#line 1077 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (2)].qualifiedName),  (yyvsp[(2) - (2)].statementList), analyzer.GetLineNumber()); }
    break;

  case 383:
/* Line 1802 of yacc.c  */
#line 1078 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 384:
/* Line 1802 of yacc.c  */
#line 1079 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall(observers.QualifiedNameNil(), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 385:
/* Line 1802 of yacc.c  */
#line 1080 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStartIndirectFunctionCall((yyvsp[(1) - (2)].expression), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 386:
/* Line 1802 of yacc.c  */
#line 1084 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 387:
/* Line 1802 of yacc.c  */
#line 1085 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 388:
/* Line 1802 of yacc.c  */
#line 1089 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 389:
/* Line 1802 of yacc.c  */
#line 1090 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 390:
/* Line 1802 of yacc.c  */
#line 1094 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 391:
/* Line 1802 of yacc.c  */
#line 1095 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 392:
/* Line 1802 of yacc.c  */
#line 1099 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 393:
/* Line 1802 of yacc.c  */
#line 1100 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 394:
/* Line 1802 of yacc.c  */
#line 1101 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].expression)); }
    break;

  case 395:
/* Line 1802 of yacc.c  */
#line 1105 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 396:
/* Line 1802 of yacc.c  */
#line 1106 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 397:
/* Line 1802 of yacc.c  */
#line 1110 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 398:
/* Line 1802 of yacc.c  */
#line 1111 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); }
    break;

  case 399:
/* Line 1802 of yacc.c  */
#line 1112 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 400:
/* Line 1802 of yacc.c  */
#line 1116 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 401:
/* Line 1802 of yacc.c  */
#line 1117 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 402:
/* Line 1802 of yacc.c  */
#line 1118 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 403:
/* Line 1802 of yacc.c  */
#line 1119 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 404:
/* Line 1802 of yacc.c  */
#line 1120 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 405:
/* Line 1802 of yacc.c  */
#line 1121 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 406:
/* Line 1802 of yacc.c  */
#line 1122 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 407:
/* Line 1802 of yacc.c  */
#line 1123 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 408:
/* Line 1802 of yacc.c  */
#line 1124 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 409:
/* Line 1802 of yacc.c  */
#line 1125 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 410:
/* Line 1802 of yacc.c  */
#line 1126 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 411:
/* Line 1802 of yacc.c  */
#line 1127 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 412:
/* Line 1802 of yacc.c  */
#line 1128 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 413:
/* Line 1802 of yacc.c  */
#line 1129 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 414:
/* Line 1802 of yacc.c  */
#line 1130 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 415:
/* Line 1802 of yacc.c  */
#line 1131 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 416:
/* Line 1802 of yacc.c  */
#line 1135 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 417:
/* Line 1802 of yacc.c  */
#line 1136 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), observers.VariableStart((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 418:
/* Line 1802 of yacc.c  */
#line 1137 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.VariableStartStaticMember(observers.QualifiedNameNil(), observers.VariableStart((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 419:
/* Line 1802 of yacc.c  */
#line 1141 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 420:
/* Line 1802 of yacc.c  */
#line 1142 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 421:
/* Line 1802 of yacc.c  */
#line 1146 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 422:
/* Line 1802 of yacc.c  */
#line 1147 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 423:
/* Line 1802 of yacc.c  */
#line 1151 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 424:
/* Line 1802 of yacc.c  */
#line 1152 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 425:
/* Line 1802 of yacc.c  */
#line 1156 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 426:
/* Line 1802 of yacc.c  */
#line 1160 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 427:
/* Line 1802 of yacc.c  */
#line 1161 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression((yyvsp[(2) - (3)].expression)); }
    break;

  case 428:
/* Line 1802 of yacc.c  */
#line 1162 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression((yyvsp[(1) - (1)].expression)); }
    break;

  case 429:
/* Line 1802 of yacc.c  */
#line 1166 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 430:
/* Line 1802 of yacc.c  */
#line 1167 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 431:
/* Line 1802 of yacc.c  */
#line 1168 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 432:
/* Line 1802 of yacc.c  */
#line 1172 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 433:
/* Line 1802 of yacc.c  */
#line 1173 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 434:
/* Line 1802 of yacc.c  */
#line 1174 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeFromExpression(observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression))); }
    break;

  case 435:
/* Line 1802 of yacc.c  */
#line 1175 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 436:
/* Line 1802 of yacc.c  */
#line 1176 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) =  observers.VariableAppendToChain(
																							(yyvsp[(1) - (4)].variable),
																						  observers.VariableAppendToChain((yyvsp[(3) - (4)].variable), observers.VariableMakeAndAppendFunctionCall((yyvsp[(4) - (4)].statementList), true), (yyvsp[(2) - (4)].semanticValue))
																						);
																				}
    break;

  case 437:
/* Line 1802 of yacc.c  */
#line 1181 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 438:
/* Line 1802 of yacc.c  */
#line 1185 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 439:
/* Line 1802 of yacc.c  */
#line 1186 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 440:
/* Line 1802 of yacc.c  */
#line 1187 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable), NULL, NULL); }
    break;

  case 441:
/* Line 1802 of yacc.c  */
#line 1191 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 442:
/* Line 1802 of yacc.c  */
#line 1192 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 443:
/* Line 1802 of yacc.c  */
#line 1193 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 444:
/* Line 1802 of yacc.c  */
#line 1197 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 445:
/* Line 1802 of yacc.c  */
#line 1198 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChainStaticMember((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 446:
/* Line 1802 of yacc.c  */
#line 1202 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 447:
/* Line 1802 of yacc.c  */
#line 1203 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 448:
/* Line 1802 of yacc.c  */
#line 1204 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 449:
/* Line 1802 of yacc.c  */
#line 1205 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 450:
/* Line 1802 of yacc.c  */
#line 1206 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 451:
/* Line 1802 of yacc.c  */
#line 1207 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChainStaticMember((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].variable)); }
    break;

  case 452:
/* Line 1802 of yacc.c  */
#line 1212 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 453:
/* Line 1802 of yacc.c  */
#line 1213 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 454:
/* Line 1802 of yacc.c  */
#line 1214 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(1) - (1)].variable)); }
    break;

  case 455:
/* Line 1802 of yacc.c  */
#line 1218 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 456:
/* Line 1802 of yacc.c  */
#line 1219 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableNil(); /* TODO propagate expr to AST */ }
    break;

  case 457:
/* Line 1802 of yacc.c  */
#line 1220 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(1) - (1)].variable)); }
    break;

  case 458:
/* Line 1802 of yacc.c  */
#line 1224 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 459:
/* Line 1802 of yacc.c  */
#line 1225 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 460:
/* Line 1802 of yacc.c  */
#line 1229 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 461:
/* Line 1802 of yacc.c  */
#line 1230 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 462:
/* Line 1802 of yacc.c  */
#line 1231 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 463:
/* Line 1802 of yacc.c  */
#line 1235 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 464:
/* Line 1802 of yacc.c  */
#line 1236 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 465:
/* Line 1802 of yacc.c  */
#line 1240 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 466:
/* Line 1802 of yacc.c  */
#line 1241 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 467:
/* Line 1802 of yacc.c  */
#line 1245 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 468:
/* Line 1802 of yacc.c  */
#line 1246 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 469:
/* Line 1802 of yacc.c  */
#line 1247 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 470:
/* Line 1802 of yacc.c  */
#line 1248 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 471:
/* Line 1802 of yacc.c  */
#line 1253 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 472:
/* Line 1802 of yacc.c  */
#line 1254 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 473:
/* Line 1802 of yacc.c  */
#line 1255 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 474:
/* Line 1802 of yacc.c  */
#line 1256 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 475:
/* Line 1802 of yacc.c  */
#line 1261 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 476:
/* Line 1802 of yacc.c  */
#line 1262 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 477:
/* Line 1802 of yacc.c  */
#line 1263 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 478:
/* Line 1802 of yacc.c  */
#line 1264 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 479:
/* Line 1802 of yacc.c  */
#line 1265 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 480:
/* Line 1802 of yacc.c  */
#line 1266 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 481:
/* Line 1802 of yacc.c  */
#line 1267 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 482:
/* Line 1802 of yacc.c  */
#line 1271 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 483:
/* Line 1802 of yacc.c  */
#line 1272 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 484:
/* Line 1802 of yacc.c  */
#line 1273 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 485:
/* Line 1802 of yacc.c  */
#line 1278 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 486:
/* Line 1802 of yacc.c  */
#line 1279 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 487:
/* Line 1802 of yacc.c  */
#line 1280 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 488:
/* Line 1802 of yacc.c  */
#line 1281 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 489:
/* Line 1802 of yacc.c  */
#line 1282 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 490:
/* Line 1802 of yacc.c  */
#line 1283 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 491:
/* Line 1802 of yacc.c  */
#line 1284 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 492:
/* Line 1802 of yacc.c  */
#line 1288 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].expression)); }
    break;

  case 493:
/* Line 1802 of yacc.c  */
#line 1289 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 494:
/* Line 1802 of yacc.c  */
#line 1293 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;


/* Line 1802 of yacc.c  */
#line 6344 "/Users/roberto/Projects/pelet/src/Php70FullParser.cpp"
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
#line 1296 "/Users/roberto/Projects/pelet/src/Php70FullParser.y"

