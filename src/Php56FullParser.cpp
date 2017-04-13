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
#define yyparse         php56parse
#define yylex           php56lex
#define yyerror         php56error
#define yylval          php56lval
#define yychar          php56char
#define yydebug         php56debug
#define yynerrs         php56nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"


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
#define php56lex pelet::FullLex

// so that both bison parses call the same error function
#define php56error pelet::FullGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php56FullParser.cpp"

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
extern int php56debug;
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
     T_POW = 632,
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
     T_POW_EQUAL = 633,
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
     T_PUBLIC = 603,
     T_PROTECTED = 602,
     T_PRIVATE = 601,
     T_FINAL = 553,
     T_ABSTRACT = 502,
     T_STATIC = 612,
     T_ENDIF = 546,
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
int php56parse (void *YYPARSE_PARAM);
#else
int php56parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php56parse (pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass &observers);
#else
int php56parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 315 "/Users/roberto/Projects/pelet/src/Php56FullParser.cpp"

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
#define YYLAST   8819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  526
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1029

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   634

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,   161,     2,   160,    50,    33,     2,
     156,   157,    48,    45,     8,    46,    47,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,   158,
      38,    15,    39,    27,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   162,    32,     2,   159,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   154,    31,   155,    53,     2,     2,     2,
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
       2,     2,    73,    20,    76,    57,    77,    78,    55,    30,
      29,    79,    80,    81,    82,    83,    84,    85,    65,    86,
      87,    22,    88,    89,    90,    91,    61,    92,    93,    94,
      23,    95,    96,    97,    98,    99,    59,   100,    68,    67,
     101,   102,   103,   104,   105,   106,    75,   107,   108,     5,
     109,   110,   111,    72,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    62,     7,     6,   121,    52,   122,    60,
     123,    37,    40,    35,    36,    34,   124,    41,   125,   126,
     127,    11,     9,    10,   128,    25,    21,    24,   129,    66,
     130,   131,   132,    56,   133,   134,   135,    19,   136,    26,
      12,    71,    70,    69,     4,     3,   137,    44,    17,    43,
      16,   138,    74,   139,    58,   140,   141,   142,   143,   144,
     145,   146,    54,   147,   148,   149,   150,   151,    18,   152,
      13,   153,    14,    42,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    54,    59,
      62,    66,    68,    70,    74,    77,    82,    86,    88,    90,
      94,    97,   102,   106,   108,   110,   114,   117,   122,   128,
     133,   136,   137,   139,   141,   143,   148,   150,   153,   157,
     163,   172,   176,   182,   192,   196,   199,   203,   206,   210,
     213,   217,   221,   224,   228,   232,   236,   238,   241,   247,
     256,   265,   271,   273,   280,   284,   288,   289,   299,   300,
     305,   307,   308,   310,   313,   322,   324,   328,   330,   332,
     334,   335,   337,   338,   340,   341,   352,   353,   362,   363,
     371,   373,   376,   378,   381,   382,   385,   387,   388,   391,
     392,   395,   397,   401,   402,   405,   407,   410,   415,   417,
     422,   424,   429,   431,   436,   440,   446,   450,   455,   460,
     466,   467,   473,   478,   480,   482,   484,   489,   490,   495,
     496,   502,   503,   506,   507,   511,   513,   514,   516,   520,
     525,   532,   533,   535,   537,   539,   542,   546,   550,   552,
     556,   558,   560,   563,   566,   570,   572,   574,   577,   582,
     586,   592,   594,   598,   601,   602,   606,   609,   611,   612,
     622,   626,   628,   632,   634,   638,   639,   641,   643,   646,
     649,   652,   656,   658,   662,   664,   666,   670,   675,   679,
     680,   682,   684,   688,   690,   692,   693,   695,   697,   700,
     702,   704,   706,   708,   710,   712,   716,   722,   724,   728,
     734,   739,   743,   745,   746,   748,   752,   754,   757,   759,
     764,   768,   771,   773,   775,   776,   778,   782,   789,   793,
     798,   805,   808,   812,   816,   820,   824,   828,   832,   836,
     840,   844,   848,   852,   856,   859,   862,   865,   868,   872,
     876,   880,   884,   888,   892,   896,   900,   904,   908,   912,
     916,   920,   924,   928,   932,   936,   939,   942,   945,   948,
     952,   956,   960,   964,   968,   972,   976,   980,   984,   986,
     988,   993,   999,  1004,  1006,  1009,  1012,  1015,  1018,  1021,
    1024,  1027,  1030,  1033,  1035,  1037,  1039,  1043,  1046,  1048,
    1049,  1060,  1061,  1073,  1076,  1079,  1084,  1089,  1094,  1099,
    1104,  1109,  1114,  1118,  1120,  1121,  1126,  1130,  1135,  1137,
    1140,  1143,  1148,  1152,  1157,  1162,  1167,  1172,  1175,  1177,
    1179,  1183,  1186,  1188,  1192,  1195,  1197,  1199,  1204,  1206,
    1209,  1210,  1213,  1214,  1217,  1219,  1220,  1222,  1224,  1225,
    1227,  1229,  1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,
    1247,  1251,  1254,  1258,  1260,  1262,  1264,  1266,  1270,  1273,
    1278,  1282,  1284,  1286,  1288,  1293,  1297,  1301,  1305,  1309,
    1313,  1317,  1320,  1323,  1327,  1331,  1335,  1339,  1343,  1347,
    1351,  1355,  1359,  1363,  1367,  1371,  1375,  1379,  1383,  1387,
    1391,  1395,  1399,  1404,  1410,  1413,  1416,  1420,  1422,  1424,
    1428,  1431,  1433,  1435,  1437,  1439,  1443,  1447,  1449,  1450,
    1453,  1454,  1456,  1462,  1466,  1470,  1472,  1474,  1476,  1480,
    1484,  1486,  1488,  1490,  1496,  1498,  1501,  1502,  1506,  1511,
    1516,  1518,  1520,  1522,  1523,  1525,  1528,  1532,  1536,  1538,
    1543,  1548,  1550,  1552,  1554,  1556,  1559,  1561,  1566,  1571,
    1573,  1575,  1580,  1581,  1583,  1585,  1587,  1592,  1597,  1599,
    1601,  1605,  1607,  1610,  1614,  1616,  1618,  1623,  1624,  1625,
    1628,  1634,  1638,  1642,  1644,  1651,  1656,  1661,  1664,  1667,
    1670,  1672,  1675,  1677,  1682,  1686,  1690,  1697,  1701,  1703,
    1705,  1707,  1712,  1717,  1722,  1725,  1728,  1733,  1736,  1739,
    1741,  1745,  1747,  1749,  1753,  1757,  1761
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,   165,    -1,   165,   167,    -1,    -1,   139,
      -1,   166,   131,   139,    -1,   179,    -1,   188,    -1,   189,
      -1,   118,   156,   157,   158,    -1,   129,   166,   158,    -1,
      -1,   129,   166,   154,   168,   165,   155,    -1,    -1,   129,
     154,   169,   165,   155,    -1,   147,   170,   158,    -1,   147,
     115,   172,   158,    -1,   147,    88,   174,   158,    -1,   176,
     158,    -1,   170,     8,   171,    -1,   171,    -1,   166,    -1,
     166,    77,   139,    -1,   131,   166,    -1,   131,   166,    77,
     139,    -1,   172,     8,   173,    -1,   173,    -1,   166,    -1,
     166,    77,   139,    -1,   131,   166,    -1,   131,   166,    77,
     139,    -1,   174,     8,   175,    -1,   175,    -1,   166,    -1,
     166,    77,   139,    -1,   131,   166,    -1,   131,   166,    77,
     139,    -1,   176,     8,   139,    15,   278,    -1,    88,   139,
      15,   278,    -1,   177,   178,    -1,    -1,   179,    -1,   188,
      -1,   189,    -1,   118,   156,   157,   158,    -1,   180,    -1,
     139,    28,    -1,   154,   177,   155,    -1,   119,   287,   179,
     213,   215,    -1,   119,   287,    28,   177,   214,   216,    75,
     158,    -1,   150,   287,   212,    -1,    96,   179,   150,   287,
     158,    -1,   112,   156,   250,   158,   250,   158,   250,   157,
     205,    -1,   141,   287,   209,    -1,    79,   158,    -1,    79,
     286,   158,    -1,    90,   158,    -1,    90,   286,   158,    -1,
     137,   158,    -1,   137,   257,   158,    -1,   137,   291,   158,
      -1,   260,   158,    -1,   116,   224,   158,    -1,    74,   226,
     158,    -1,   100,   249,   158,    -1,   121,    -1,   286,   158,
      -1,   146,   156,   186,   157,   158,    -1,   113,   156,   291,
      77,   204,   203,   157,   206,    -1,   113,   156,   257,    77,
     204,   203,   157,   206,    -1,    92,   156,   208,   157,   207,
      -1,   158,    -1,   145,   154,   177,   155,   181,   182,    -1,
     142,   286,   158,    -1,   117,   139,   158,    -1,    -1,    82,
     156,   268,   149,   157,   154,   177,   155,   183,    -1,    -1,
     152,   154,   177,   155,    -1,   184,    -1,    -1,   185,    -1,
     184,   185,    -1,    82,   156,   268,   149,   157,   154,   177,
     155,    -1,   187,    -1,   186,     8,   187,    -1,   291,    -1,
     192,    -1,   194,    -1,    -1,    33,    -1,    -1,   153,    -1,
      -1,   263,   190,   139,   156,   217,   157,   193,   154,   177,
     155,    -1,    -1,   197,   139,   198,   201,   195,   154,   227,
     155,    -1,    -1,   199,   139,   200,   196,   154,   227,   155,
      -1,    84,    -1,    73,    84,    -1,   143,    -1,    72,    84,
      -1,    -1,   110,   268,    -1,   123,    -1,    -1,   110,   202,
      -1,    -1,   120,   202,    -1,   268,    -1,   202,     8,   268,
      -1,    -1,    99,   204,    -1,   291,    -1,    33,   291,    -1,
     126,   156,   310,   157,    -1,   179,    -1,    28,   177,   104,
     158,    -1,   179,    -1,    28,   177,   105,   158,    -1,   179,
      -1,    28,   177,   103,   158,    -1,   139,    15,   278,    -1,
     208,     8,   139,    15,   278,    -1,   154,   210,   155,    -1,
     154,   158,   210,   155,    -1,    28,   210,   107,   158,    -1,
      28,   158,   210,   107,   158,    -1,    -1,   210,    81,   286,
     211,   177,    -1,   210,    93,   211,   177,    -1,    28,    -1,
     158,    -1,   179,    -1,    28,   177,   108,   158,    -1,    -1,
     213,    67,   287,   179,    -1,    -1,   214,    67,   287,    28,
     177,    -1,    -1,    68,   179,    -1,    -1,    68,    28,   177,
      -1,   218,    -1,    -1,   219,    -1,   218,     8,   219,    -1,
     220,   190,   191,   149,    -1,   220,   190,   191,   149,    15,
     278,    -1,    -1,    76,    -1,    80,    -1,   268,    -1,   156,
     157,    -1,   156,   222,   157,    -1,   156,   260,   157,    -1,
     223,    -1,   222,     8,   223,    -1,   257,    -1,   291,    -1,
      33,   289,    -1,   153,   286,    -1,   224,     8,   225,    -1,
     225,    -1,   149,    -1,   160,   288,    -1,   160,   154,   286,
     155,    -1,   226,     8,   149,    -1,   226,     8,   149,    15,
     278,    -1,   149,    -1,   149,    15,   278,    -1,   227,   228,
      -1,    -1,   243,   247,   158,    -1,   248,   158,    -1,   230,
      -1,    -1,   244,   263,   190,   139,   156,   217,   157,   229,
     242,    -1,   147,   231,   232,    -1,   268,    -1,   231,     8,
     268,    -1,   158,    -1,   154,   233,   155,    -1,    -1,   234,
      -1,   235,    -1,   234,   235,    -1,   236,   158,    -1,   240,
     158,    -1,   239,   122,   237,    -1,   268,    -1,   237,     8,
     268,    -1,   139,    -1,   239,    -1,   268,   136,   139,    -1,
     238,    77,   241,   139,    -1,   238,    77,   246,    -1,    -1,
     246,    -1,   158,    -1,   154,   177,   155,    -1,   245,    -1,
     148,    -1,    -1,   245,    -1,   246,    -1,   245,   246,    -1,
      69,    -1,    70,    -1,    71,    -1,    74,    -1,    73,    -1,
      72,    -1,   247,     8,   149,    -1,   247,     8,   149,    15,
     278,    -1,   149,    -1,   149,    15,   278,    -1,   248,     8,
     139,    15,   278,    -1,    88,   139,    15,   278,    -1,   249,
       8,   286,    -1,   286,    -1,    -1,   251,    -1,   251,     8,
     286,    -1,   286,    -1,   252,   293,    -1,   293,    -1,   253,
      64,   305,   162,    -1,    64,   305,   162,    -1,   253,   252,
      -1,   253,    -1,   252,    -1,    -1,   254,    -1,    66,   269,
     275,    -1,   126,   156,   310,   157,    15,   286,    -1,   291,
      15,   286,    -1,   291,    15,    33,   291,    -1,   291,    15,
      33,    66,   269,   275,    -1,    65,   286,    -1,   291,    26,
     286,    -1,   291,    25,   286,    -1,   291,    24,   286,    -1,
     291,    42,   286,    -1,   291,    23,   286,    -1,   291,    22,
     286,    -1,   291,    21,   286,    -1,   291,    20,   286,    -1,
     291,    19,   286,    -1,   291,    18,   286,    -1,   291,    17,
     286,    -1,   291,    16,   286,    -1,   290,    62,    -1,    62,
     290,    -1,   290,    61,    -1,    61,   290,    -1,   286,    29,
     286,    -1,   286,    30,   286,    -1,   286,     9,   286,    -1,
     286,    11,   286,    -1,   286,    10,   286,    -1,   286,    31,
     286,    -1,   286,    33,   286,    -1,   286,    32,   286,    -1,
     286,    47,   286,    -1,   286,    45,   286,    -1,   286,    46,
     286,    -1,   286,    48,   286,    -1,   286,    14,   286,    -1,
     286,    49,   286,    -1,   286,    50,   286,    -1,   286,    44,
     286,    -1,   286,    43,   286,    -1,    45,   286,    -1,    46,
     286,    -1,    51,   286,    -1,    53,   286,    -1,   286,    35,
     286,    -1,   286,    34,   286,    -1,   286,    37,   286,    -1,
     286,    36,   286,    -1,   286,    38,   286,    -1,   286,    41,
     286,    -1,   286,    39,   286,    -1,   286,    40,   286,    -1,
     286,    52,   269,    -1,   287,    -1,   256,    -1,   156,   256,
     157,   255,    -1,   286,    27,   286,    28,   286,    -1,   286,
      27,    28,   286,    -1,   317,    -1,    60,   286,    -1,    59,
     286,    -1,    58,   286,    -1,    57,   286,    -1,    56,   286,
      -1,    55,   286,    -1,    54,   286,    -1,   109,   273,    -1,
      63,   286,    -1,   282,    -1,   261,    -1,   262,    -1,   159,
     274,   159,    -1,    12,   286,    -1,    13,    -1,    -1,   263,
     190,   156,   217,   157,   264,   154,   258,   177,   155,    -1,
      -1,    74,   263,   190,   156,   217,   157,   264,   154,   259,
     177,   155,    -1,    13,   257,    -1,    13,   291,    -1,    13,
     286,    99,   257,    -1,    13,   286,    99,   291,    -1,   262,
      64,   305,   162,    -1,   261,    64,   305,   162,    -1,    89,
      64,   305,   162,    -1,   281,    64,   305,   162,    -1,    76,
     156,   312,   157,    -1,    64,   312,   162,    -1,   115,    -1,
      -1,   147,   156,   265,   157,    -1,   265,     8,   149,    -1,
     265,     8,    33,   149,    -1,   149,    -1,    33,   149,    -1,
     166,   221,    -1,   129,   131,   166,   221,    -1,   131,   166,
     221,    -1,   267,   136,   308,   221,    -1,   267,   136,   297,
     221,    -1,   299,   136,   308,   221,    -1,   299,   136,   297,
     221,    -1,   297,   221,    -1,    74,    -1,   166,    -1,   129,
     131,   166,    -1,   131,   166,    -1,   166,    -1,   129,   131,
     166,    -1,   131,   166,    -1,   267,    -1,   270,    -1,   302,
     133,   306,   271,    -1,   302,    -1,   271,   272,    -1,    -1,
     133,   306,    -1,    -1,   156,   157,    -1,   287,    -1,    -1,
     102,    -1,   314,    -1,    -1,   221,    -1,   127,    -1,    95,
      -1,    89,    -1,   125,    -1,   111,    -1,    94,    -1,   144,
      -1,   128,    -1,   114,    -1,   130,    -1,   138,   102,   106,
      -1,   138,   106,    -1,   267,   136,   139,    -1,   279,    -1,
     276,    -1,   321,    -1,   166,    -1,   129,   131,   166,    -1,
     131,   166,    -1,    76,   156,   283,   157,    -1,    64,   283,
     162,    -1,   277,    -1,    85,    -1,   280,    -1,   279,    64,
     279,   162,    -1,   279,    45,   279,    -1,   279,    46,   279,
      -1,   279,    48,   279,    -1,   279,    14,   279,    -1,   279,
      49,   279,    -1,   279,    50,   279,    -1,    51,   279,    -1,
      53,   279,    -1,   279,    31,   279,    -1,   279,    33,   279,
      -1,   279,    32,   279,    -1,   279,    44,   279,    -1,   279,
      43,   279,    -1,   279,    47,   279,    -1,   279,    10,   279,
      -1,   279,    11,   279,    -1,   279,     9,   279,    -1,   279,
      30,   279,    -1,   279,    29,   279,    -1,   279,    35,   279,
      -1,   279,    34,   279,    -1,   279,    37,   279,    -1,   279,
      36,   279,    -1,   279,    38,   279,    -1,   279,    39,   279,
      -1,   279,    41,   279,    -1,   279,    40,   279,    -1,   279,
      27,    28,   279,    -1,   279,    27,   279,    28,   279,    -1,
      45,   279,    -1,    46,   279,    -1,   156,   279,   157,    -1,
     320,    -1,   166,    -1,   129,   131,   166,    -1,   131,   166,
      -1,   140,    -1,   281,    -1,   322,    -1,   276,    -1,   161,
     314,   161,    -1,   138,   314,   106,    -1,    85,    -1,    -1,
     285,   284,    -1,    -1,     8,    -1,   285,     8,   279,    99,
     279,    -1,   285,     8,   279,    -1,   279,    99,   279,    -1,
     279,    -1,   288,    -1,   257,    -1,   156,   286,   157,    -1,
     156,   260,   157,    -1,   291,    -1,   291,    -1,   291,    -1,
     301,   133,   306,   296,   292,    -1,   301,    -1,   292,   293,
      -1,    -1,   133,   306,   296,    -1,   294,    64,   305,   162,
      -1,   295,    64,   305,   162,    -1,   221,    -1,   295,    -1,
     294,    -1,    -1,   303,    -1,   309,   303,    -1,   267,   136,
     297,    -1,   299,   136,   297,    -1,   303,    -1,   300,    64,
     305,   162,    -1,   266,    64,   305,   162,    -1,   302,    -1,
     300,    -1,   266,    -1,   303,    -1,   309,   303,    -1,   298,
      -1,   303,    64,   305,   162,    -1,   303,   154,   286,   155,
      -1,   304,    -1,   149,    -1,   160,   154,   286,   155,    -1,
      -1,   286,    -1,   307,    -1,   297,    -1,   307,    64,   305,
     162,    -1,   307,   154,   286,   155,    -1,   308,    -1,   139,
      -1,   154,   286,   155,    -1,   160,    -1,   309,   160,    -1,
     310,     8,   311,    -1,   311,    -1,   291,    -1,   126,   156,
     310,   157,    -1,    -1,    -1,   313,   284,    -1,   313,     8,
     286,    99,   286,    -1,   313,     8,   286,    -1,   286,    99,
     286,    -1,   286,    -1,   313,     8,   286,    99,    33,   289,
      -1,   313,     8,    33,   289,    -1,   286,    99,    33,   289,
      -1,    33,   289,    -1,   314,   315,    -1,   314,   102,    -1,
     315,    -1,   102,   315,    -1,   149,    -1,   149,    64,   316,
     162,    -1,   149,   133,   139,    -1,    98,   286,   155,    -1,
      98,   140,    64,   286,   162,   155,    -1,    91,   291,   155,
      -1,   139,    -1,   132,    -1,   149,    -1,   124,   156,   318,
     157,    -1,   101,   156,   291,   157,    -1,   101,   156,   257,
     157,    -1,     7,   286,    -1,     6,   286,    -1,     5,   156,
     286,   157,    -1,     4,   286,    -1,     3,   286,    -1,   319,
      -1,   318,     8,   319,    -1,   291,    -1,   257,    -1,   267,
     136,   139,    -1,   299,   136,   139,    -1,   267,   136,    84,
      -1,   267,   136,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   392,   392,   396,   397,   401,   402,   406,   407,   408,
     409,   410,   411,   411,   413,   413,   415,   416,   417,   418,
     422,   423,   427,   428,   429,   430,   434,   435,   439,   440,
     441,   442,   446,   447,   451,   452,   453,   454,   458,   459,
     463,   464,   469,   470,   471,   472,   477,   478,   482,   483,
     487,   491,   493,   494,   506,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     530,   537,   538,   539,   546,   547,   551,   552,   566,   567,
     571,   572,   576,   577,   581,   591,   592,   596,   600,   604,
     608,   609,   613,   614,   619,   618,   627,   626,   639,   638,
     648,   649,   650,   651,   655,   656,   660,   664,   665,   669,
     670,   674,   675,   679,   680,   684,   685,   686,   690,   691,
     696,   697,   702,   703,   707,   708,   712,   713,   714,   715,
     720,   721,   725,   732,   733,   738,   739,   745,   746,   754,
     755,   763,   764,   769,   770,   775,   776,   781,   782,   786,
     787,   793,   794,   795,   796,   801,   802,   803,   808,   809,
     813,   814,   815,   816,   820,   821,   826,   827,   828,   833,
     834,   835,   836,   842,   843,   848,   849,   850,   852,   851,
     859,   863,   864,   868,   869,   873,   874,   878,   879,   883,
     884,   888,   892,   893,   897,   898,   902,   906,   907,   911,
     912,   916,   917,   921,   922,   926,   927,   931,   932,   936,
     937,   938,   939,   940,   941,   945,   946,   947,   948,   952,
     953,   957,   958,   963,   964,   968,   969,   973,   974,   978,
     979,   983,   984,   985,   989,   990,   994,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,
    1051,  1052,  1055,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,  1074,
    1073,  1081,  1080,  1090,  1091,  1092,  1093,  1097,  1098,  1099,
    1100,  1104,  1105,  1109,  1113,  1114,  1118,  1122,  1126,  1127,
    1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1150,  1151,
    1152,  1153,  1157,  1158,  1159,  1165,  1166,  1171,  1174,  1179,
    1180,  1185,  1189,  1190,  1191,  1195,  1196,  1197,  1202,  1203,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,  1217,
    1218,  1219,  1223,  1227,  1231,  1232,  1233,  1234,  1235,  1236,
    1237,  1238,  1239,  1240,  1244,  1245,  1246,  1247,  1248,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,
    1270,  1271,  1272,  1273,  1274,  1275,  1276,  1280,  1281,  1282,
    1283,  1287,  1288,  1289,  1290,  1291,  1292,  1293,  1297,  1298,
    1302,  1303,  1307,  1308,  1309,  1310,  1314,  1315,  1319,  1320,
    1325,  1330,  1334,  1338,  1341,  1345,  1346,  1351,  1355,  1356,
    1360,  1364,  1365,  1366,  1370,  1371,  1375,  1376,  1381,  1385,
    1386,  1390,  1391,  1392,  1397,  1398,  1399,  1403,  1404,  1405,
    1410,  1411,  1415,  1416,  1421,  1422,  1426,  1427,  1428,  1432,
    1433,  1437,  1438,  1442,  1443,  1447,  1448,  1449,  1454,  1455,
    1459,  1463,  1467,  1468,  1469,  1473,  1477,  1478,  1482,  1483,
    1484,  1485,  1491,  1492,  1493,  1494,  1495,  1496,  1501,  1502,
    1503,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1519,
    1520,  1524,  1525,  1529,  1530,  1534,  1538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "T_YIELD", "T_POW", "'='", "T_SR_EQUAL",
  "T_SL_EQUAL", "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_POW_EQUAL", "T_SR", "T_SL", "'+'", "'-'",
  "'.'", "'*'", "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'@'", "'['", "T_CLONE",
  "T_NEW", "T_ELSEIF", "T_ELSE", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE",
  "T_FINAL", "T_ABSTRACT", "T_STATIC", "T_ENDIF", "T_ARRAY", "T_AS",
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
  "T_WHITESPACE", "T_FINALLY", "T_ELLIPSIS", "'{'", "'}'", "'('", "')'",
  "';'", "'`'", "'$'", "'\"'", "']'", "$accept", "start",
  "top_statement_list", "namespace_name", "top_statement", "$@1", "$@2",
  "use_declarations", "use_declaration", "use_function_declarations",
  "use_function_declaration", "use_const_declarations",
  "use_const_declaration", "constant_declaration", "inner_statement_list",
  "inner_statement", "statement", "unticked_statement", "catch_statement",
  "finally_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference", "is_variadic",
  "unticked_function_declaration_statement", "$@3",
  "unticked_class_declaration_statement", "$@4", "$@5", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "function_call_parameter", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@6",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
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
  "ctor_arguments", "common_scalar", "static_class_constant",
  "static_scalar", "static_scalar_value", "static_operation",
  "general_constant", "scalar", "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "parenthesis_expr",
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
  "isset_variable", "class_constant", "static_class_name_scalar",
  "class_name_scalar", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   634,   605,   604,   549,   565,   564,    44,   582,
     583,   581,   600,   630,   632,    61,   610,   608,   628,   597,
     503,   586,   521,   530,   587,   585,   599,    63,    58,   510,
     509,   124,    94,    38,   575,   573,   574,   571,    60,    62,
     572,   577,   633,   609,   607,    43,    45,    46,    42,    47,
      37,    33,   567,   126,   622,   508,   593,   505,   614,   536,
     569,   526,   563,    64,    91,   518,   589,   539,   538,   603,
     602,   601,   553,   502,   612,   546,   504,   506,   507,   511,
     512,   513,   514,   515,   516,   517,   519,   520,   522,   523,
     524,   525,   527,   528,   529,   531,   532,   533,   534,   535,
     537,   540,   541,   542,   543,   544,   545,   547,   548,   550,
     551,   552,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   566,   568,   570,   576,   578,   579,   580,   584,   588,
     590,   591,   592,   594,   595,   596,   598,   606,   611,   613,
     615,   616,   617,   618,   619,   620,   621,   623,   624,   625,
     626,   627,   629,   631,   123,   125,    40,    41,    59,    96,
      36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   167,   167,   167,
     167,   167,   168,   167,   169,   167,   167,   167,   167,   167,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   178,   178,   178,   178,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   186,   186,   187,   188,   189,
     190,   190,   191,   191,   193,   192,   195,   194,   196,   194,
     197,   197,   197,   197,   198,   198,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   209,   209,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   224,   225,   225,   225,   226,
     226,   226,   226,   227,   227,   228,   228,   228,   229,   228,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   237,   237,   238,   238,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   246,   246,   246,   246,   247,   247,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   254,   255,   255,   256,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   258,
     257,   259,   257,   260,   260,   260,   260,   261,   261,   261,
     261,   262,   262,   263,   264,   264,   265,   265,   265,   265,
     266,   266,   266,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   268,   268,   268,   269,   269,   270,   270,   271,
     271,   272,   273,   273,   273,   274,   274,   274,   275,   275,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   277,   278,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   281,   281,   281,
     281,   282,   282,   282,   282,   282,   282,   282,   283,   283,
     284,   284,   285,   285,   285,   285,   286,   286,   287,   287,
     288,   289,   290,   291,   291,   292,   292,   293,   294,   294,
     295,   296,   296,   296,   297,   297,   298,   298,   299,   300,
     300,   301,   301,   301,   302,   302,   302,   303,   303,   303,
     304,   304,   305,   305,   306,   306,   307,   307,   307,   308,
     308,   309,   309,   310,   310,   311,   311,   311,   312,   312,
     313,   313,   313,   313,   313,   313,   313,   313,   314,   314,
     314,   314,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   322
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     4,     4,     2,
       3,     1,     1,     3,     2,     4,     3,     1,     1,     3,
       2,     4,     3,     1,     1,     3,     2,     4,     5,     4,
       2,     0,     1,     1,     1,     4,     1,     2,     3,     5,
       8,     3,     5,     9,     3,     2,     3,     2,     3,     2,
       3,     3,     2,     3,     3,     3,     1,     2,     5,     8,
       8,     5,     1,     6,     3,     3,     0,     9,     0,     4,
       1,     0,     1,     2,     8,     1,     3,     1,     1,     1,
       0,     1,     0,     1,     0,    10,     0,     8,     0,     7,
       1,     2,     1,     2,     0,     2,     1,     0,     2,     0,
       2,     1,     3,     0,     2,     1,     2,     4,     1,     4,
       1,     4,     1,     4,     3,     5,     3,     4,     4,     5,
       0,     5,     4,     1,     1,     1,     4,     0,     4,     0,
       5,     0,     2,     0,     3,     1,     0,     1,     3,     4,
       6,     0,     1,     1,     1,     2,     3,     3,     1,     3,
       1,     1,     2,     2,     3,     1,     1,     2,     4,     3,
       5,     1,     3,     2,     0,     3,     2,     1,     0,     9,
       3,     1,     3,     1,     3,     0,     1,     1,     2,     2,
       2,     3,     1,     3,     1,     1,     3,     4,     3,     0,
       1,     1,     3,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     3,     5,
       4,     3,     1,     0,     1,     3,     1,     2,     1,     4,
       3,     2,     1,     1,     0,     1,     3,     6,     3,     4,
       6,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       4,     5,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     3,     2,     1,     0,
      10,     0,    11,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     3,     1,     0,     4,     3,     4,     1,     2,
       2,     4,     3,     4,     4,     4,     4,     2,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     4,     1,     2,
       0,     2,     0,     2,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     1,     1,     1,     3,     2,     4,
       3,     1,     1,     1,     4,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     5,     2,     2,     3,     1,     1,     3,
       2,     1,     1,     1,     1,     3,     3,     1,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     3,     3,
       1,     1,     1,     5,     1,     2,     0,     3,     4,     4,
       1,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       4,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     1,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     4,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     4,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     4,     2,     2,     4,     2,     2,     1,
       3,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   488,     0,     0,     0,     0,
     338,     0,     0,   100,   427,     0,   362,     0,     0,   365,
     361,     0,     0,     0,   352,   364,     0,     0,   368,   323,
       0,     0,     0,     0,    66,   106,     0,   363,     0,   360,
     367,     0,   369,     0,     0,     0,     5,   421,     0,     0,
     102,   366,     0,     0,     0,   470,     0,    41,     0,    72,
     355,   481,     0,   418,     3,     0,     7,    46,     8,     9,
      88,    89,     0,     0,   289,   437,     0,   304,   305,    90,
     463,     0,   424,   422,   303,     0,   288,   436,     0,   440,
       0,   466,     0,   462,   444,   461,   464,   469,     0,   293,
     417,   423,   308,   338,     0,     5,    90,   518,   517,     0,
     515,   514,   307,   437,     0,   440,   275,   276,   277,   278,
     300,   299,   298,   297,   296,   295,   294,   338,     0,     0,
     339,     0,   257,   442,     0,   255,   302,     0,   493,     0,
     430,   241,     0,     0,   339,   345,   358,   346,     0,   348,
     464,     0,   103,   101,   171,     0,    90,   488,    55,     0,
       0,   472,    57,     0,     0,     0,     0,   222,     0,     0,
     301,   354,   223,     0,   166,     0,     0,   165,     0,     0,
       0,     0,     0,   487,     0,    14,     0,   420,    59,   437,
       0,   440,     0,     0,     0,   371,   502,     0,   500,    47,
       0,     0,    41,     0,     0,     0,     0,    22,     0,    21,
       0,     0,   289,     0,     0,   356,     0,   357,     0,     0,
       0,     0,     0,   330,     0,    19,   104,   107,    62,   472,
     472,    91,     0,   472,     0,   472,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,   256,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   337,
       0,   472,     0,   472,     0,   482,   465,     0,     0,     0,
       0,   341,     0,     0,   497,   441,     0,   322,   431,   489,
       0,   341,     0,   359,   236,     0,     0,   465,     0,     0,
      64,     0,     0,    56,     0,   473,     0,    58,     0,     0,
       0,     0,    65,   437,   440,   353,     0,   224,   226,   437,
     440,     0,   167,   440,     0,    63,    75,     0,    41,   137,
     437,   440,     0,   519,     0,   485,     0,   484,   419,     4,
      12,    11,   332,    60,    61,     0,   421,     0,   370,   501,
       0,     0,   499,   426,   498,   130,   130,    54,    74,     0,
       0,    85,    87,     0,    34,     0,    33,     0,    28,     0,
      27,    24,     0,     0,    16,    41,   135,    51,     0,    48,
      40,    42,    43,    44,   234,   439,   438,   306,     0,   425,
       6,     0,     0,   155,     0,   158,   437,     0,   440,     0,
       0,   109,     0,    98,     0,     0,     0,   151,     0,   526,
     523,     0,   456,   454,     0,     0,     0,   260,   262,   261,
     270,     0,     0,   258,   259,   263,   265,   264,   280,   279,
     282,   281,   283,   285,   286,   284,   274,   273,   267,   268,
     266,   269,   271,   272,   287,     0,   238,   253,   252,   251,
     250,   249,   248,   247,   246,   244,   243,   242,   245,   524,
     457,     0,     0,   479,   475,   453,   474,   478,     0,     0,
     516,   437,   440,   340,     0,   492,     0,   491,   340,   456,
     457,   350,     0,     0,     0,     0,   428,     0,   382,   362,
       0,     0,     0,     0,   376,     0,   374,   381,   172,   373,
     383,   375,   169,   151,   321,    39,   319,     0,     0,     0,
       0,   221,   513,   512,   223,     0,     0,     0,     0,   164,
      10,   139,   141,     0,   511,   487,   487,     0,   331,     0,
       4,   507,     0,   505,   509,   508,   510,     0,   504,   130,
       0,   130,     0,    76,     0,     0,    36,     0,     0,    18,
      30,     0,     0,    17,     0,    23,    20,     0,     0,   472,
       0,   233,   232,   235,   290,   228,   471,   162,   163,     0,
     156,   157,     0,     0,     0,   342,   105,     0,    96,   108,
     111,     0,   318,   317,   151,   152,   153,     0,   145,   147,
      90,   154,   460,     0,   334,   333,   455,   320,   292,     0,
       0,   239,   336,   335,   459,   450,   452,   451,   446,   472,
       0,   467,   468,   496,   495,     0,   347,   414,   415,   391,
     392,   435,     0,   430,   428,     0,   378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,    41,   122,    71,    52,     0,   225,     0,     0,   113,
     115,   113,   168,   143,     0,     0,    49,   520,     0,   483,
       0,    15,     0,     0,   503,     0,     0,     0,     0,     0,
     126,     0,    78,    86,    68,     0,    35,    32,     0,    29,
      26,    25,     0,     0,     0,   453,   227,   472,   231,   159,
      38,     0,   344,   110,     0,     0,   174,     0,   324,   151,
      92,   480,   291,   358,   472,   472,   443,     0,     0,     0,
     490,     0,   349,     0,   380,   431,   429,     0,   377,   416,
     525,   372,   401,   399,   400,   388,     0,     0,   403,   402,
     393,   395,   394,   405,   404,   407,   406,   408,   409,   411,
     410,   397,   396,   385,   386,   398,   387,   389,   390,     0,
     170,   324,     0,     0,   223,   116,   487,     0,     0,     0,
       0,     0,     0,     0,   142,   486,   237,    13,     0,     0,
       0,   133,   134,    41,   128,   127,     0,     0,    73,    37,
      31,   136,    45,   230,   447,     0,   343,   174,   112,   205,
      94,     0,     0,   148,    93,     0,   240,     0,     0,   445,
     476,   477,   494,   351,   434,   433,   379,   412,     0,   384,
       0,   125,     0,     0,     0,   114,     0,     0,     0,    41,
       0,   138,   506,   129,    41,   132,     0,    41,   229,   205,
     209,   210,   211,   214,   213,   212,     0,     0,   204,    99,
     173,   177,     0,     0,   203,   207,     0,     0,     0,   309,
     149,   448,   449,     0,   413,   311,   123,     0,   117,    41,
     120,    70,    69,    41,   144,    50,   131,     0,     0,    97,
       0,     0,   181,   217,     0,    90,   208,     0,   176,    41,
       0,   328,     0,    41,     0,   432,    41,    41,   118,    53,
       0,   140,     0,    79,     0,     0,   185,   183,   180,     0,
       0,   175,     0,     0,     0,   329,     0,   325,     0,   150,
       0,     0,     0,    41,   220,   182,     5,     0,   186,   187,
       0,     0,   195,     0,     0,   218,   215,     0,     0,    95,
       0,   326,   310,   312,     0,   121,     0,   184,   188,   189,
     199,     0,   190,     0,     0,   151,   219,   327,   119,    81,
       0,   198,   191,   192,   196,   216,     0,     0,    77,    80,
      82,   197,     0,   178,     0,    83,   193,     0,     0,    41,
     201,   179,     0,     0,     0,   202,    41,     0,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    83,    84,   560,   369,   228,   229,   399,
     400,   395,   396,    85,   231,   410,   411,    87,   722,   828,
    1008,  1009,  1010,   390,   391,   412,   413,   252,   845,    90,
     897,    91,   744,   611,    92,   431,    93,   433,   608,   609,
     808,   699,   939,   911,   693,   339,   387,   570,   823,   407,
     552,   703,   706,   812,   617,   618,   619,   620,   243,   424,
     425,   196,   197,   175,   839,   890,  1017,   891,   921,   948,
     967,   968,   969,   970,  1002,   971,   972,   973,  1000,  1021,
     892,   893,   894,   895,   924,   896,   186,   346,   347,   591,
     592,   593,   594,    94,    95,   933,   936,    96,    97,    98,
     126,   842,   932,   100,   101,   621,   166,   167,   646,   762,
     190,   236,   324,   102,   527,   528,   529,   530,   103,   104,
     652,   319,   653,   105,   106,   107,   314,   108,   109,   756,
     595,   636,   637,   638,   110,   111,   112,   113,   114,   115,
     116,   117,   336,   495,   496,   497,   118,   366,   367,   159,
     160,   217,   218,   567,   119,   362,   363,   120,   531,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -845
static const yytype_int16 yypact[] =
{
    -845,    74,  2275,  -845,  7034,  7034,   -56,  7034,  7034,  7034,
    7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,
    7034,  7034,   287,   287,  7034,  1765,  7034,   334,    39,    91,
     -36,   -13,  5872,  -845,  -845,   102,   100,  6001,   103,  -845,
    -845,  5455,  7034,   112,   116,  -845,   119,   131,  -845,  -845,
      17,   117,   150,   159,  -845,  -845,   166,  -845,   173,  -845,
    -845,     5,  -845,   158,  6130,   355,   313,  -845,   159,  7034,
    -845,  -845,   195,   196,   181,  -845,   159,  -845,  7163,  -845,
     426,   210,   428,   -41,  -845,    18,  -845,  -845,  -845,  -845,
    -845,  -845,   223,   230,  -845,  -845,   225,   326,   328,   352,
     341,   271,  -845,   349,  -845,  7514,  -845,  -845,    67,  2122,
     268,  -845,   295,   370,   319,  -845,    86,  -845,   106,  -845,
    -845,  -845,  -845,   340,   336,  -845,   352,  8656,  8656,  7034,
    8656,  8656,  8767,    66,  8229,   378,  -845,  -845,   407,  -845,
    -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,   353,   158,
     -40,   344,  -845,  -845,   351,  -845,  -845,   287,  8273,   310,
     482,  -845,   365,   158,   376,   379,   268,  -845,   380,   377,
      -3,   106,  -845,  -845,   497,    23,   352,  1765,  -845,  7562,
     499,  7034,  -845,  7606,   381,   375,    24,  8656,  7034,  6259,
    -845,  -845,  7034,  7034,  -845,   178,    25,  -845,   369,   372,
    7163,  4660,  7034,   208,   158,  -845,   -32,   -26,  -845,   387,
    8656,   985,   287,  7292,   193,  -845,    -9,   360,  -845,  -845,
      -1,  7650,  -845,   287,   -47,    88,   158,     1,    26,  -845,
    4819,  2434,   394,   401,  7694,   141,   412,   462,  7034,   141,
     321,   398,  5614,  -845,   430,  -845,   463,   464,  -845,  7034,
    7034,  -845,   -59,  7034,   325,  7034,  7034,  7034,  7034,  7034,
    6389,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,
    7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,
    7034,  7034,   334,  -845,  -845,  -845,  6518,  7034,  7034,  7034,
    7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  7034,  -845,
     332,  7034,   416,  7034,  7034,   210,    81,   422,  7738,  7034,
     158,   -40,   416,   416,  -845,  -845,  6647,  -845,  6776,  -845,
     158,   376,   114,  -845,  -845,   114,   416,     0,  8098,   434,
    -845,   432,   427,  -845,  8098,  8656,   424,  -845,   575,    35,
     159,  7034,  -845,   436,  1107,  -845,   439,   590,  8656,   524,
    1413,  7034,  -845,  -845,    17,  -845,  -845,   449,  -845,  -845,
      41,   747,    45,  -845,   454,  -845,    46,  -845,   190,  -845,
    -845,  -845,  -845,  -845,  -845,   457,   549,  7782,  -845,  -845,
     186,   475,  -845,  -845,  -845,   458,   459,  -845,  -845,  2593,
      49,  -845,  -845,   158,    34,    27,  -845,   158,    43,    28,
    -845,   149,   480,   155,  -845,  -845,  -845,  -845,   465,  -845,
    -845,  -845,  -845,  -845,    -8,  -845,  -845,  -845,  7826,  -845,
    -845,   287,  7034,  -845,    57,  -845,    58,   466,   841,   605,
     296,   504,   296,  -845,   472,   473,   469,   224,   474,  -845,
     470,  7034,   268,     0,   268,   106,   476,  8699,  8739,  8767,
    8767,  7034,  8612,  3054,  3212,  3370,  3528,  3686,  3845,  3845,
    3845,  3845,  1906,  1935,  1365,  1365,   730,   730,   498,   498,
     498,   407,   407,   407,  -845,   154,  2739,  2739,  2739,  2739,
    2739,  2739,  2739,  2739,  2739,  2739,  2739,  2739,   832,   470,
     268,   268,   479,  -845,  -845,   268,    13,  -845,   517,  7870,
    -845,   202,   925,   -40,   287,  8656,   287,  8321,   376,  -845,
    -845,  -845,  8098,  8098,  8098,  8098,  8098,   471,  -845,  -845,
     506,   158,    94,  8098,   -43,   544,  -845,  -845,  -845,  8491,
    -845,  -845,   627,   224,  -845,  -845,  -845,  8098,   542,  4978,
     525,  8656,  -845,  -845,  7034,  7034,   105,   105,  7914,  -845,
    -845,  4501,   343,  7034,  -845,   208,   208,   670,  -845,  1957,
    -845,  -845,  7034,  -845,  -845,  -845,  -845,   526,  -845,  -845,
     284,  -845,     8,   608,   287,   529,   161,   553,   -47,  -845,
     185,   554,    88,  -845,   557,  -845,  -845,  2752,   547,  7034,
     416,   572,    -6,  -845,  -845,  -845,  -845,  -845,  8656,  5743,
    -845,  -845,  8098,   576,   158,   376,  -845,   296,  -845,   698,
    -845,   555,  -845,  -845,   224,  -845,  -845,   556,   704,  -845,
     352,  -845,  -845,  7958,  -845,  -845,     0,  -845,  2896,  7034,
     334,  -845,  -845,  -845,  -845,  -845,   652,   654,  -845,  7034,
    7034,  -845,  -845,  -845,  -845,  6905,   589,   532,   532,   659,
     659,  8365,   562,   717,  8098,   158,   209,   621,  1688,   -21,
    8098,  8098,  8098,  8098,  8025,  8098,  8098,  8098,  8098,  8098,
    8098,  8098,  8098,  8098,  8098,  8098,  8098,  8098,  8098,  8098,
    8098,  8098,  8098,  8098,  8098,  8098,  8098,  8098,   574,  -845,
     720,  -845,  -845,  -845,  -845,   580,  8656,   287,   584,   633,
    -845,   633,  -845,   410,   159,  5455,  -845,  -845,    59,  -845,
    7034,  -845,  2116,  7428,  -845,   395,  7034,    10,   583,    38,
    -845,   586,   591,  -845,  -845,   607,  -845,  -845,   612,  -845,
    -845,  -845,   594,   596,   585,   268,  -845,  7034,   572,  -845,
    -845,   158,   376,   698,   604,   296,  -845,   602,   613,   374,
     631,  -845,  2896,   268,  7034,  7034,   572,   623,  8002,   287,
    8656,   416,  -845,  8098,  -845,  8098,  -845,   617,   212,  -845,
    -845,  -845,  8532,  1588,  8570,  8570,  8098,  8449,  1222,  1710,
    2258,  2417,  1745,  2573,  2573,  2573,  2573,  1299,  1111,   849,
     849,   653,   653,   532,   532,   532,   659,   659,   659,  7472,
    -845,   613,  8098,  2911,  7034,  -845,   208,   105,   629,   636,
     159,   760,   715,  5455,  -845,  -845,  2739,  -845,   639,   637,
    1351,  -845,  -845,  -845,  -845,  -845,   296,   642,  -845,  -845,
    -845,  -845,  -845,  -845,  -845,   635,   376,  -845,  -845,   176,
    -845,   643,   648,  -845,  -845,   655,  -845,   641,   644,  -845,
    -845,  -845,  -845,  -845,  8491,  8407,  -845,   788,  8098,  -845,
     651,  -845,   656,   673,    60,  -845,  5137,  5137,   782,  -845,
     682,  -845,  -845,  -845,  -845,  4501,   663,  -845,  -845,   301,
    -845,  -845,  -845,  -845,  -845,  -845,   674,   296,  -845,  -845,
    -845,  -845,   692,   340,   559,  -845,    29,   688,     7,  -845,
     830,  -845,  -845,  8098,   788,  -845,  -845,  5296,  -845,  -845,
    -845,  -845,  -845,  -845,  4501,  -845,  4501,   690,  3070,  -845,
     833,    15,  -845,   836,    33,   352,  -845,   714,  -845,  -845,
     719,  -845,    61,  -845,  8098,  8491,  -845,  -845,  -845,  -845,
    3229,  4501,   731,  -845,  8098,   296,   299,  -845,  -845,  8098,
     722,  -845,   735,   871,  3388,  -845,    12,  -845,  3547,  -845,
    3706,  3865,   729,  -845,  -845,  -845,   823,   746,   299,  -845,
     748,   828,   785,   751,   775,  -845,   900,   761,  8098,  -845,
     769,  -845,  -845,  -845,   770,  -845,  4024,  -845,  -845,  -845,
     853,   296,  -845,   793,  8098,   224,  -845,  -845,  -845,   851,
     796,   797,   946,  -845,  -845,  -845,   798,   801,  -845,   851,
    -845,  -845,   296,  -845,   296,  -845,  -845,   -52,   811,  -845,
    -845,  -845,   804,  4183,   810,  -845,  -845,  4342,  -845
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -845,  -845,  -347,   -15,  -845,  -845,  -845,  -845,   563,  -845,
     383,  -845,   390,  -845,  -180,  -845,     3,  -845,  -845,  -845,
    -845,  -845,   -39,  -845,   397,     2,     9,  -125,  -845,  -845,
    -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,   362,
     272,  -530,  -845,   107,  -845,  -845,  -845,  -370,   152,  -845,
    -845,  -845,  -845,  -845,  -527,  -845,   226,  -845,   -58,  -845,
     382,  -845,   624,  -845,   140,  -845,  -845,  -845,  -845,  -845,
    -845,  -845,    14,  -845,  -845,  -845,  -845,  -845,  -845,  -845,
    -845,  -845,  -845,  -844,  -845,  -845,  -845,  -523,  -845,   391,
    -845,  -845,  -845,   907,    19,  -845,  -845,   -48,  -845,  -845,
      -2,   187,  -845,  -845,   516,  -412,  -272,  -845,  -845,  -845,
    -845,  -845,   236,   999,  -845,  -258,   565,  -845,  -845,  -845,
     338,   337,  -845,  1289,   -29,   799,  -408,   419,   898,  -845,
    -566,  -845,  -845,   258,  -240,  -845,    48,  -845,  -845,   -25,
     -24,  -845,  -146,  -317,  -845,  -142,    54,  -536,   440,   818,
    -845,    80,  -100,  -845,  -845,  -845,   460,  -845,  -845,  -845
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -523
static const yytype_int16 yytable[] =
{
      99,   307,   169,   170,    88,    86,   688,   150,   150,   511,
     474,    89,   164,   597,   442,   191,   572,   701,   606,   708,
     610,   695,   559,   945,   201,   736,   244,   385,   176,   133,
     233,   329,   341,   354,   403,   578,   582,   927,   821,   220,
     930,   950,   389,   538,   185,   980,   206,   230,   207,  -522,
     926,   331,   299,   553,   556,   380,   589,   574,   737,   227,
     490,   303,   494,   770,   303,   599,  -160,   556,   556,   956,
     154,   154,   442,   490,     3,   168,   535,   639,   402,    49,
     436,   171,   509,   209,   393,   510,   494,   747,   241,   716,
     241,   241,   125,  -339,   306,  -339,   643,   437,   644,   241,
     129,   717,  1019,   434,   435,   241,  1020,   438,   323,   446,
    -341,   577,   444,   174,   379,   242,   242,   384,   771,   716,
     581,   176,   370,   172,   381,   590,   371,   590,   284,   285,
     242,   717,   241,  -458,   311,   379,   204,   384,   697,   379,
     384,   233,   150,   177,   125,   303,  1001,   327,   321,   372,
     303,   304,   233,   386,   304,   492,   931,   498,   491,   205,
     237,   981,   240,   720,   181,   241,   194,   640,   822,   946,
     444,   491,   736,   947,   241,   173,   245,   195,   551,   147,
     150,   330,   342,   355,   404,   579,   583,   928,   150,   368,
     849,   951,   539,   825,   427,   610,   657,   150,  -522,   715,
     215,   719,   554,   557,   359,   154,   575,   343,   150,   394,
     398,   401,   349,   712,   600,  -160,   815,   908,   957,   397,
     630,   360,  -458,  -313,  -313,   587,   584,   125,   147,    99,
     443,   698,   212,   406,   148,   304,   149,  -455,   725,   213,
     304,   180,  -454,   154,   125,   880,   881,   882,   883,   884,
     885,   154,   147,   372,    75,    75,   198,   169,   170,   184,
     154,   426,   728,    75,   886,    81,   305,   164,   188,   224,
     864,   154,   189,   735,    81,   192,   443,   865,   443,   689,
     241,   863,   147,   148,   212,   149,   226,   193,   443,   443,
     216,   213,   241,   125,   125,   503,   225,   125,   443,   378,
     615,   443,   443,    75,   616,   508,   199,   148,   445,   149,
     558,   540,   226,   524,    81,   200,   241,   125,   564,   524,
     125,   241,   202,   887,   888,   565,  -340,    75,   501,   203,
     168,   889,   351,   838,   364,   566,   171,   148,    81,   149,
     241,   219,   216,   241,   740,  -341,   242,   125,  -340,   222,
     494,   852,   223,   603,   445,   604,   445,    75,   753,  -315,
    -315,   147,   246,   125,   238,   716,   445,   445,    81,   247,
     880,   881,   882,   883,   884,   885,   445,   717,   576,   445,
     445,  -146,   580,   248,   624,   251,   625,    99,   227,   886,
     249,   718,   250,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   253,   150,   254,   147,   439,
     704,   705,   212,   255,   876,   605,   148,   605,   149,   213,
     298,   626,   605,   382,   242,   603,   125,   604,   603,   800,
     604,   300,   632,   633,   301,   125,    75,   635,   966,  -442,
    -442,   152,   155,   734,   853,   558,   212,    81,   887,   888,
     615,   212,   302,   213,   616,    49,   919,   214,   213,   282,
     150,   215,   382,   162,   440,   163,   383,   204,  1006,   154,
     216,   489,   317,   125,    75,   922,   716,   810,   811,   441,
     312,    75,   419,    75,   310,    81,   441,   313,   717,   150,
     318,   150,    81,   757,    81,   750,   320,   524,   524,   524,
     524,   524,   819,   603,   216,   604,   656,   241,   524,   216,
     326,   803,   328,   125,   334,   322,   325,   212,   605,   212,
     338,   494,   524,   154,   213,   340,   213,   356,   235,   357,
     239,   150,   150,   965,   974,  -314,  -314,   420,   151,   151,
     150,   150,   692,   165,   861,   373,   279,   280,   281,    99,
     282,   414,   154,   212,   154,   493,   974,    99,   415,   150,
     213,    88,    86,   394,   382,    75,   443,   398,    89,   429,
     441,   417,   360,   430,   432,   216,    81,   216,   437,  1003,
     683,   684,   685,   532,   534,    99,   536,   524,   533,   742,
     537,   835,   605,   542,   154,   154,   686,   544,   545,   605,
    1016,   546,  1018,   154,   154,   169,   170,   550,   847,   848,
     555,   216,   561,   562,   568,   164,   569,   571,   426,   585,
     602,   588,   154,   601,   607,   614,  -479,   654,   880,   881,
     882,   883,   884,   885,   612,   613,   622,   655,   627,   524,
     768,   634,   687,   875,   445,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   151,  -206,   813,   959,   635,   168,   641,
     659,   690,   150,   694,   171,   710,   964,   724,   714,   914,
     721,   975,   726,   729,   916,   323,   731,   918,   680,   681,
     682,   683,   684,   685,   733,   590,   745,   741,   814,   746,
      99,   151,   749,   748,    88,    86,   754,   686,   755,   151,
     996,    89,   761,   686,   764,   765,   836,   378,   151,   940,
     605,   801,   807,   941,   605,   802,  1005,   443,   804,   151,
     806,   824,   826,   827,   150,   154,   829,   833,   524,   954,
     524,   830,   831,   958,   832,  -521,   960,   961,   837,   840,
     841,   524,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   856,   276,   277,   278,   279,   280,
     281,   868,   282,   986,   844,   850,   866,   524,   869,   298,
     870,   150,   150,   867,   872,   873,   877,   878,   165,   898,
     952,    99,   899,   901,   900,   905,   902,   154,  -442,  -442,
     913,   605,   917,   920,   906,   445,   871,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     907,   678,   679,   680,   681,   682,   683,   684,   685,  1023,
     915,   923,   929,   524,   525,   934,  1027,   942,   944,  -161,
     525,   949,   686,   953,   154,   154,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   955,   910,
     910,   976,   605,    99,   977,   274,   275,   276,   277,   278,
     279,   280,   281,   298,   282,   963,   978,   985,   524,  -523,
    -523,   925,   678,   679,   680,   681,   682,   683,   684,   685,
    -194,   987,  -442,  -442,  -521,   990,   989,   991,   135,   992,
     938,   993,    99,   686,    99,   994,    99,   995,   997,   524,
     153,   153,   880,   881,   882,   883,   884,   885,   998,   524,
     605,   605,  1004,  1007,   524,  1011,  -200,   151,    99,    99,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,    99,   605,  1012,  1013,    99,  1014,    99,    99,
    1022,  1024,   211,   524,  1026,   730,   586,   298,   727,   743,
    1015,   723,   874,   809,   912,   843,   605,   879,   549,   524,
     605,   739,   988,   738,    99,   232,  -442,  -442,   860,   846,
     766,   151,   767,   834,   352,   332,   709,   605,  -161,   605,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   707,     0,     0,     0,     0,     0,     0,
     151,    99,   151,     0,     0,    99,     0,   298,   525,   525,
     525,   525,   525,     0,     0,     0,     0,     0,     0,   525,
       0,     0,     0,     0,     0,     0,  -442,  -442,     0,     0,
       0,     0,     0,   525,     0,   315,     0,     0,     0,     0,
       0,     0,   151,   151,     0,     0,     0,     0,     0,     0,
       0,   151,   151,     0,     0,     0,     0,   647,   648,   649,
     650,   651,  -316,  -316,     0,     0,   344,     0,   658,     0,
     151,   350,     0,   353,     0,     0,     0,     0,     0,     0,
     361,   365,     0,     0,     0,     0,     0,     0,     0,     0,
     375,     0,     0,     0,     0,     0,     0,     0,   525,     0,
       0,   392,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,     0,     0,     0,
     428,     0,     0,   374,     0,     0,   165,     0,     0,   298,
    -523,   676,   677,     0,   678,   679,   680,   681,   682,   683,
     684,   685,     0,     0,     0,     0,     0,     0,  -442,  -442,
     525,     0,     0,     0,     0,   686,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,     0,     0,     0,   502,     0,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,   651,
       0,     0,     0,     0,     0,   772,   773,   774,   775,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   543,   678,   679,   680,   681,   682,
     683,   684,   685,     0,     0,   151,     0,     0,     0,   525,
       0,   525,     0,     0,     0,     0,   686,     0,     0,     0,
       0,     0,   525,   127,   128,     0,   130,   131,   132,   134,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,     0,   156,   158,   161,     0,     0,   525,   315,
       0,   179,   151,   151,     0,     0,   183,   526,   854,     0,
     855,   187,     0,   526,     0,     0,     0,  -523,   675,   676,
     677,   857,   678,   679,   680,   681,   682,   683,   684,   685,
       0,     0,     0,   210,     0,     0,     0,     0,   221,     0,
     256,   257,   258,   686,     0,   259,     0,   234,     0,     0,
       0,     0,     0,   631,   525,     0,     0,     0,   260,   821,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,   274,   275,   276,   277,   278,   279,
     280,   281,   315,   282,   315,  -523,  -523,     0,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,   308,   525,
       0,     0,     0,   904,     0,     0,     0,     0,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,     0,   700,   700,     0,     0,     0,     0,
     525,   361,     0,   365,   365,   298,     0,     0,     0,     0,
     525,     0,     0,     0,     0,   525,   158,     0,   935,     0,
     335,     0,   392,     0,  -442,  -442,     0,   210,   234,     0,
       0,   348,   210,     0,     0,     0,     0,     0,     0,   234,
     547,   210,     0,     0,   525,     0,     0,   428,     0,     0,
       0,     0,   377,     0,     0,     0,     0,     0,     0,   822,
     525,   526,   526,   526,   526,   526,     0,     0,     0,     0,
       0,     0,   526,     0,     0,     0,     0,   418,     0,     0,
       0,   210,     0,     0,     0,     0,   526,     0,   335,   335,
       0,     0,   335,     0,   335,   447,   448,   449,   450,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,     0,     0,     0,     0,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,     0,     0,
     335,     0,   335,   499,     0,   805,     0,     0,   210,   662,
       0,   526,   663,     0,     0,   505,     0,   507,     0,     0,
       0,     0,     0,     0,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     541,   678,   679,   680,   681,   682,   683,   684,   685,     0,
     548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   686,   526,     0,     0,     0,   315,     0,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   660,   661,   662,
       0,     0,   663,     0,   365,   700,     0,     0,     0,     0,
       0,   598,     0,     0,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     623,   678,   679,   680,   681,   682,   683,   684,   685,     0,
     628,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   686,   678,   679,   680,   681,   682,   683,   684,
     685,     0,   526,     0,   526,     0,     0,     0,     4,     5,
       6,     7,     8,     0,   686,   526,     0,     9,   122,   670,
     671,   672,   673,   674,   675,   676,   677,     0,   678,   679,
     680,   681,   682,   683,   684,   685,     0,     0,   157,     0,
       0,   526,     0,     0,     0,     0,     0,     0,     0,   686,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,   348,   696,     0,     0,     0,     0,   123,
       0,    31,   210,     0,     0,   769,     0,     0,     0,     0,
      34,   713,     0,     0,    36,     0,     0,   526,     0,    39,
      40,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,     0,   335,    48,
      49,     0,     0,     0,     0,     0,     0,     0,   210,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,   526,    65,   125,    67,     0,     0,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,   752,     0,
       0,    78,     0,     0,    80,    81,    82,     0,   335,   758,
       0,     0,     0,   526,   760,     0,     0,     0,     0,     0,
       0,     0,     0,   526,  -523,   271,   272,   273,   526,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,  -523,   272,   273,   526,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,     0,     0,
       0,     0,     0,   526,     0,     0,     0,     0,     0,   816,
       0,     0,    11,    12,     0,   820,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,   335,     0,     0,    28,
      29,    30,     0,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,   335,   335,    35,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,   348,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    75,    76,     0,     0,
       0,    77,   711,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,   298,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,  -442,  -442,     0,     0,     0,    28,    29,
      30,     0,    31,     0,     0,    32,     0,     0,     0,     0,
      33,    34,     0,     0,    35,    36,    37,     0,    38,     0,
      39,    40,    41,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,    54,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    75,    76,     0,     0,     0,
      77,   817,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
       0,   678,   679,   680,   681,   682,   683,   684,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,   686,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,    35,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,     0,
     669,   670,   671,   672,   673,   674,   675,   676,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,   686,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,    28,    29,    30,     0,
      31,     0,     0,    32,     0,     0,     0,     0,    33,    34,
       0,     0,     0,    36,    37,     0,    38,     0,    39,    40,
      41,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,    46,    47,    48,    49,
      50,    51,   408,    53,     0,    54,     0,    55,    56,    57,
      58,    59,    60,   124,    62,    63,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,   409,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,  -523,  -523,  -523,
    -523,   674,   675,   676,   677,     0,   678,   679,   680,   681,
     682,   683,   684,   685,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   686,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,    28,    29,    30,     0,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   408,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   124,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,   573,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,    28,    29,    30,     0,    31,     0,
       0,    32,     0,     0,     0,     0,    33,    34,     0,     0,
       0,    36,    37,     0,    38,     0,    39,    40,    41,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
     732,    44,     0,    45,    46,    47,    48,    49,    50,    51,
     408,    53,     0,    54,     0,    55,    56,    57,    58,    59,
      60,   124,    62,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,    28,    29,    30,     0,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,   862,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,   408,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
     124,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,    28,    29,    30,     0,    31,     0,     0,    32,
       0,     0,     0,     0,    33,    34,     0,     0,     0,    36,
      37,     0,    38,     0,    39,    40,    41,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,    46,    47,    48,    49,    50,    51,   408,    53,
       0,    54,     0,    55,    56,    57,    58,    59,    60,   124,
      62,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,   943,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,    28,    29,    30,     0,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,   962,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   408,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   124,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,   274,   275,   276,   277,   278,   279,   280,
     281,     0,   282,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,    33,    34,     0,     0,     0,    36,    37,     0,
      38,     0,    39,    40,    41,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
      46,    47,    48,    49,    50,    51,   408,    53,     0,    54,
       0,    55,    56,    57,    58,    59,    60,   124,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,   979,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,    28,
      29,    30,     0,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   408,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,   124,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,   982,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,    28,    29,
      30,     0,    31,     0,     0,    32,     0,     0,     0,     0,
      33,    34,     0,     0,     0,    36,    37,     0,    38,     0,
      39,    40,    41,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,    45,    46,    47,
      48,    49,    50,    51,   408,    53,     0,    54,     0,    55,
      56,    57,    58,    59,    60,   124,    62,    63,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,   983,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,  -523,
    -523,  -523,  -523,   270,   271,   272,   273,     0,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,   984,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   408,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,    28,    29,    30,     0,
      31,     0,     0,    32,     0,     0,     0,     0,    33,    34,
       0,     0,     0,    36,    37,     0,    38,     0,    39,    40,
      41,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,    46,    47,    48,    49,
      50,    51,   408,    53,     0,    54,     0,    55,    56,    57,
      58,    59,    60,   124,    62,    63,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,   999,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,    28,    29,    30,     0,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   408,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   124,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,  1025,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,    28,    29,    30,     0,    31,     0,
       0,    32,     0,     0,     0,     0,    33,    34,     0,     0,
       0,    36,    37,     0,    38,     0,    39,    40,    41,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
     408,    53,     0,    54,     0,    55,    56,    57,    58,    59,
      60,   124,    62,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,  1028,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,    28,    29,    30,     0,    31,     0,     0,
      32,     0,     0,     0,     0,    33,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,   408,
      53,     0,    54,     0,    55,    56,    57,    58,    59,    60,
     124,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,     0,     0,    32,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    36,
      37,     0,    38,     0,    39,    40,    41,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,    46,    47,    48,    49,    50,    51,     0,    53,
       0,    54,     0,     0,    56,    57,    58,    59,    60,   124,
      62,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,     0,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,     0,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,    30,     0,    31,     0,     0,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,     0,    53,     0,
      54,     0,     0,    56,    57,    58,    59,    60,   124,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,     0,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   691,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    36,    37,     0,
      38,     0,    39,    40,    41,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
      46,    47,    48,    49,    50,    51,     0,    53,     0,    54,
       0,     0,    56,    57,    58,    59,    60,   124,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,     0,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   909,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    31,     0,     0,    32,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,     0,    53,     0,    54,     0,
       0,    56,    57,    58,    59,    60,   124,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
       0,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,     0,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   937,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,     0,     0,    32,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    36,    37,     0,    38,     0,
      39,    40,    41,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,    45,    46,    47,
      48,    49,    50,    51,     0,    53,     0,    54,     0,     0,
      56,    57,    58,    59,    60,   124,    62,    63,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,     0,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,     0,     0,    32,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,     0,    53,     0,    54,     0,     0,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,     0,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   421,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,   123,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    36,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,   124,    62,    63,     4,     5,     6,     7,
       8,     0,    65,   125,    67,     9,   122,     0,    71,     0,
       0,     0,     0,    75,     0,     0,     0,   422,     0,     0,
      78,   423,     0,    80,    81,    82,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,   123,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   124,    62,    63,     4,     5,     6,     7,     8,
       0,    65,   125,    67,     9,   122,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,   422,     0,     0,    78,
       0,     0,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,   123,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   124,    62,    63,     4,     5,     6,     7,     8,     0,
      65,   125,    67,     9,   122,     0,    71,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,    78,     0,
     178,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,   123,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      36,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
     124,    62,    63,     4,     5,     6,     7,     8,     0,    65,
     125,    67,     9,   122,     0,    71,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,    78,     0,   182,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,   123,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,   124,
      62,    63,     4,     5,     6,     7,     8,     0,    65,   125,
      67,     9,    10,     0,    71,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,    78,     0,   208,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,   123,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,   124,    62,
      63,     0,     4,     5,     6,     7,     8,    65,   125,    67,
       0,     9,   122,    71,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,    78,   345,   451,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,   123,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,   124,    62,
      63,     4,     5,     6,     7,     8,     0,    65,   125,    67,
       9,   122,     0,    71,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,    78,     0,     0,    80,    81,
      82,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,   123,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    36,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,   124,    62,    63,
       4,     5,     6,     7,     8,     0,    65,   125,    67,     9,
     122,     0,    71,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    80,    81,    82,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,   123,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,   124,    62,    63,     4,
       5,     6,     7,     8,     0,    65,   125,    67,     9,   122,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,    78,     0,     0,    80,    81,    82,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
     123,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    36,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,    45,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,    60,   124,    62,    63,     4,     5,
       6,     7,     8,     0,    65,   125,    67,     9,   122,     0,
      71,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    80,    81,    82,   759,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,   123,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    36,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,    60,   124,    62,    63,     4,     5,     6,
       7,     8,     0,    65,   125,    67,     9,   122,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,    78,     0,     0,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,   123,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    36,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,   124,    62,    63,     4,     5,     6,     7,
       8,     0,    65,   125,    67,     9,    10,     0,    71,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,   123,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   124,    62,    63,     4,     5,     6,     7,     8,
       0,    65,   125,    67,     9,   122,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,    78,
       0,     0,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,   123,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   124,    62,    63,     0,     0,     0,     0,     0,     0,
      65,   125,   376,     0,     0,     0,    71,   256,   257,   258,
       0,    75,   259,     0,     0,     0,     0,     0,    78,     0,
       0,    80,    81,    82,     0,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     282,   660,   661,   662,     0,     0,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,     0,   678,   679,   680,   681,   682,
     683,   684,   685,   256,   257,   258,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,   686,     0,     0,     0,
       0,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,     0,     0,     0,
       0,   256,   257,   258,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
     818,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,   256,   257,   258,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,   859,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,   256,
     257,   258,     0,     0,   259,     0,     0,     0,     0,     0,
       0,     0,   283,     0,     0,     0,     0,   260,     0,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,   274,   275,   276,   277,   278,   279,   280,
     281,     0,   282,   256,   257,   258,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,   256,   257,   258,
       0,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     282,   256,   257,   258,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   388,   260,
       0,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,   256,   257,   258,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   416,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,   256,
     257,   258,     0,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,     0,   260,     0,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,   274,   275,   276,   277,   278,   279,   280,
     281,     0,   282,   256,   257,   258,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   563,     0,     0,
       0,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,   256,   257,   258,
       0,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,   596,     0,     0,     0,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     282,   256,   257,   258,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,   642,     0,     0,     0,   260,
       0,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,   776,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   702,
     512,   513,     0,     0,     0,     0,   514,     0,   515,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   516,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,   517,     0,     0,     0,     0,     0,     0,     0,     0,
     518,     0,     0,   751,   519,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,    48,
       0,     0,     0,   512,   513,     0,     0,     0,     0,   514,
      57,   515,    59,    60,   520,    62,   521,   851,     0,     0,
       0,     0,   516,   522,   125,     0,     0,     0,     0,    71,
       0,     0,   147,     0,   517,     0,     0,     0,     0,     0,
       0,   523,     0,   518,     0,     0,     0,   519,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    59,    60,   520,    62,   521,
       0,     0,     0,     0,     0,     0,   522,   125,   256,   257,
     258,     0,    71,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   523,     0,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,   256,   257,   258,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,     0,   274,   275,   276,   277,
     278,   279,   280,   281,     0,   282,     0,     0,   309,     0,
     256,   257,   258,     0,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,   274,   275,   276,   277,   278,   279,
     280,   281,   316,   282,   660,   661,   662,     0,     0,   663,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,     0,   678,   679,
     680,   681,   682,   683,   684,   685,   660,   661,   662,     0,
     645,   663,     0,     0,     0,     0,     0,     0,     0,   686,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,   660,   661,
     662,     0,     0,   663,   763,     0,     0,     0,     0,     0,
       0,   686,     0,     0,     0,     0,   664,   858,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,     0,   678,   679,   680,   681,   682,   683,   684,   685,
     660,   661,   662,     0,     0,   663,   903,     0,     0,     0,
       0,     0,     0,   686,     0,     0,     0,     0,   664,     0,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,     0,   678,   679,   680,   681,   682,   683,
     684,   685,   661,   662,     0,     0,   663,     0,     0,     0,
       0,     0,     0,     0,     0,   686,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,     0,   678,   679,   680,   681,   682,
     683,   684,   685,     0,   663,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   686,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,     0,   678,   679,   680,   681,   682,   683,   684,
     685,   256,   257,   258,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,   686,     0,     0,     0,     0,   260,
     629,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,   256,   257,   258,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,   257,
     258,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
     258,   282,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   259,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,     0,     0,   260,     0,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     0,
     274,   275,   276,   277,   278,   279,   280,   281,     0,   282
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-845)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-523)))

static const yytype_int16 yycheck[] =
{
       2,   126,    27,    27,     2,     2,   533,    22,    23,   326,
     282,     2,    27,   421,   254,    44,   386,   547,   430,   555,
     432,   544,   369,     8,    53,   591,     8,    28,    30,    10,
      78,     8,     8,     8,     8,     8,     8,     8,    28,    68,
      33,     8,   222,     8,    41,    33,    61,    76,    63,     8,
     894,   176,   110,     8,     8,    64,    64,     8,    64,    74,
     300,    64,   302,    84,    64,     8,     8,     8,     8,     8,
      22,    23,   312,   313,     0,    27,   334,    64,    77,   115,
     139,    27,   322,    64,   131,   325,   326,   614,   131,    81,
     131,   131,   139,   136,   118,   136,   504,   156,   506,   131,
     156,    93,   154,   249,   250,   131,   158,   253,   166,   255,
     136,    77,   254,   149,   214,   156,   156,   217,   139,    81,
      77,   123,   154,    84,   133,   133,   158,   133,    61,    62,
     156,    93,   131,   136,   149,   235,   131,   237,    33,   239,
     240,   189,   157,   156,   139,    64,   990,   171,   163,   207,
      64,   154,   200,   154,   154,   301,   149,   303,   300,   154,
      80,   149,    82,   155,    64,   131,   149,   154,   158,   154,
     312,   313,   738,   158,   131,    84,   158,   160,   358,    74,
     195,   158,   158,   158,   158,   158,   158,   158,   203,   204,
     756,   158,   157,   155,   242,   607,   102,   212,   157,   569,
     106,   571,   157,   157,   201,   157,   157,   188,   223,   224,
     225,   226,   193,   560,   157,   157,   157,   157,   157,   131,
      66,   202,   136,   157,   158,   405,    77,   139,    74,   231,
     254,   126,    91,   230,   129,   154,   131,   156,    77,    98,
     154,   139,   156,   195,   139,    69,    70,    71,    72,    73,
      74,   203,    74,   311,   149,   149,   139,   282,   282,   156,
     212,   242,    77,   149,    88,   160,   160,   282,   156,    88,
     806,   223,   156,   590,   160,   156,   300,   807,   302,   537,
     131,   804,    74,   129,    91,   131,   131,   156,   312,   313,
     149,    98,   131,   139,   139,   310,   115,   139,   322,   106,
      76,   325,   326,   149,    80,   320,   156,   129,   254,   131,
     368,   340,   131,   328,   160,   156,   131,   139,   132,   334,
     139,   131,   156,   147,   148,   139,   136,   149,   309,   156,
     282,   155,   154,   745,   126,   149,   282,   129,   160,   131,
     131,    28,   149,   131,   602,   136,   156,   139,   136,   154,
     590,   759,   156,   129,   300,   131,   302,   149,   630,   157,
     158,    74,   139,   139,   154,    81,   312,   313,   160,   139,
      69,    70,    71,    72,    73,    74,   322,    93,   393,   325,
     326,   157,   397,   158,   442,    33,   444,   389,   403,    88,
      64,   107,    64,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    64,   421,   136,    74,    84,
      67,    68,    91,    64,   826,   430,   129,   432,   131,    98,
      42,   445,   437,   102,   156,   129,   139,   131,   129,   687,
     131,   136,   490,   491,    64,   139,   149,   495,   139,    61,
      62,    22,    23,   589,   761,   503,    91,   160,   147,   148,
      76,    91,   133,    98,    80,   115,   155,   102,    98,    52,
     475,   106,   102,   129,   139,   131,   106,   131,   995,   421,
     149,   139,   162,   139,   149,   887,    81,    67,    68,   154,
     136,   149,   161,   149,   131,   160,   154,   136,    93,   504,
       8,   506,   160,   639,   160,   620,   131,   512,   513,   514,
     515,   516,   107,   129,   149,   131,   521,   131,   523,   149,
     133,   691,    15,   139,    15,   136,   136,    91,   533,    91,
     139,   761,   537,   475,    98,   150,    98,   158,   102,   157,
     102,   546,   547,   945,   946,   157,   158,   139,    22,    23,
     555,   556,   539,    27,   802,   158,    48,    49,    50,   551,
      52,   157,   504,    91,   506,   139,   968,   559,   157,   574,
      98,   559,   559,   578,   102,   149,   590,   582,   559,   139,
     154,   159,   553,   110,   110,   149,   160,   149,   156,   991,
      48,    49,    50,   149,   157,   587,   162,   602,   156,   604,
      15,   737,   607,   157,   546,   547,    64,   158,     8,   614,
    1012,    77,  1014,   555,   556,   630,   630,   158,   754,   755,
     156,   149,   155,    64,   139,   630,   158,   158,   599,   139,
      15,   156,   574,   157,   120,   156,   156,   156,    69,    70,
      71,    72,    73,    74,   162,   162,   162,   131,   162,   654,
     655,   162,    15,   823,   590,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   157,   115,   704,   934,   735,   630,   162,
     136,   139,   697,   158,   630,    15,   944,   158,   162,   869,
      82,   949,   139,   139,   874,   753,   139,   877,    45,    46,
      47,    48,    49,    50,   157,   133,     8,   131,   705,   154,
     712,   195,     8,   157,   712,   712,    64,    64,    64,   203,
     978,   712,   133,    64,   162,     8,   741,   106,   212,   909,
     745,   157,    99,   913,   749,    15,   994,   761,   158,   223,
     156,   158,   156,   152,   759,   697,   139,   162,   763,   929,
     765,   139,   158,   933,   158,     8,   936,   937,   154,   157,
     147,   776,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   157,    45,    46,    47,    48,    49,
      50,   810,    52,   963,   153,   162,   157,   802,    28,    42,
      75,   806,   807,   157,   155,   158,   154,   162,   282,   156,
     925,   803,   154,   162,   149,   154,   162,   759,    61,    62,
      28,   826,   149,   139,   158,   761,   813,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     157,    43,    44,    45,    46,    47,    48,    49,    50,  1019,
     158,   149,   154,   858,   328,    15,  1026,   157,    15,     8,
     334,    15,    64,   139,   806,   807,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   149,   866,
     867,   149,   887,   875,   139,    43,    44,    45,    46,    47,
      48,    49,    50,    42,    52,   154,    15,   158,   903,    40,
      41,   893,    43,    44,    45,    46,    47,    48,    49,    50,
      77,   155,    61,    62,   157,    77,   158,   122,    10,   158,
     907,   136,   914,    64,   916,    15,   918,   156,   149,   934,
      22,    23,    69,    70,    71,    72,    73,    74,   158,   944,
     945,   946,   139,    82,   949,   139,   139,   421,   940,   941,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   954,   968,     8,   157,   958,   156,   960,   961,
     149,   157,    64,   978,   154,   582,   403,    42,   578,   607,
    1009,   574,   820,   701,   867,   749,   991,   837,   354,   994,
     995,   599,   968,   592,   986,    78,    61,    62,   801,   753,
     653,   475,   654,   735,   195,   177,   556,  1012,   157,  1014,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,   553,    -1,    -1,    -1,    -1,    -1,    -1,
     504,  1023,   506,    -1,    -1,  1027,    -1,    42,   512,   513,
     514,   515,   516,    -1,    -1,    -1,    -1,    -1,    -1,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,   537,    -1,   157,    -1,    -1,    -1,    -1,
      -1,    -1,   546,   547,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   555,   556,    -1,    -1,    -1,    -1,   512,   513,   514,
     515,   516,   157,   158,    -1,    -1,   188,    -1,   523,    -1,
     574,   193,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   602,    -1,
      -1,   223,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,   158,    -1,    -1,   630,    -1,    -1,    42,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
     654,    -1,    -1,    -1,    -1,    64,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,   697,    -1,    -1,    -1,    -1,    -1,   654,
      -1,    -1,    -1,    -1,    -1,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   157,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,   759,    -1,    -1,    -1,   763,
      -1,   765,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,   776,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    -1,   802,   421,
      -1,    32,   806,   807,    -1,    -1,    37,   328,   763,    -1,
     765,    42,    -1,   334,    -1,    -1,    -1,    38,    39,    40,
      41,   776,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
       9,    10,    11,    64,    -1,    14,    -1,    78,    -1,    -1,
      -1,    -1,    -1,   475,   858,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,   504,    52,   506,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,   129,   903,
      -1,    -1,    -1,   858,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,   546,   547,    -1,    -1,    -1,    -1,
     934,   553,    -1,   555,   556,    42,    -1,    -1,    -1,    -1,
     944,    -1,    -1,    -1,    -1,   949,   177,    -1,   903,    -1,
     181,    -1,   574,    -1,    61,    62,    -1,   188,   189,    -1,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      77,   202,    -1,    -1,   978,    -1,    -1,   599,    -1,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     994,   512,   513,   514,   515,   516,    -1,    -1,    -1,    -1,
      -1,    -1,   523,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,   537,    -1,   249,   250,
      -1,    -1,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,    -1,    -1,    -1,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,    -1,    -1,
     301,    -1,   303,   304,    -1,   697,    -1,    -1,   309,    11,
      -1,   602,    14,    -1,    -1,   316,    -1,   318,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     341,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,   654,    -1,    -1,    -1,   759,    -1,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    14,    -1,   806,   807,    -1,    -1,    -1,    -1,
      -1,   422,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     441,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
     451,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    64,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,   763,    -1,   765,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    64,   776,    -1,    12,    13,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    33,    -1,
      -1,   802,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,   544,   545,    -1,    -1,    -1,    -1,    74,
      -1,    76,   553,    -1,    -1,   157,    -1,    -1,    -1,    -1,
      85,   562,    -1,    -1,    89,    -1,    -1,   858,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,   589,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   599,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   903,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   629,    -1,
      -1,   156,    -1,    -1,   159,   160,   161,    -1,   639,   640,
      -1,    -1,    -1,   934,   645,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   944,    38,    39,    40,    41,   949,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    39,    40,    41,   978,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,   994,    -1,    -1,    -1,    -1,    -1,   710,
      -1,    -1,    45,    46,    -1,   716,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,   737,    -1,    -1,    72,
      73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    85,   754,   755,    88,    89,    90,    -1,    92,
      -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    -1,   121,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    -1,
      -1,    -1,    -1,   804,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,   154,   155,   156,    -1,   158,   159,   160,   161,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    42,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    61,    62,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    64,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    88,    89,    90,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,   156,    -1,   158,   159,   160,   161,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    64,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,   158,   159,   160,   161,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,    96,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    -1,   121,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,   149,   150,    -1,    -1,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      -1,    89,    90,    -1,    92,    -1,    94,    95,    96,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,   149,   150,    -1,    -1,    -1,   154,    -1,   156,    -1,
     158,   159,   160,   161,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      89,    90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,
      -1,   100,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,    -1,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
     149,   150,    -1,    -1,    -1,   154,    -1,   156,    -1,   158,
     159,   160,   161,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    89,
      90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,   154,   155,   156,    -1,   158,   159,
     160,   161,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    89,    90,
      -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,
     101,    -1,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,   149,   150,
      -1,    -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,
     161,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    89,    90,    -1,
      92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    85,    -1,    -1,    -1,    89,    90,    -1,    92,
      -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    -1,   121,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    -1,
      -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,   149,   150,    -1,    -1,
      -1,   154,   155,   156,    -1,   158,   159,   160,   161,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,
      94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,   156,    -1,   158,   159,   160,   161,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,   158,   159,   160,   161,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,    96,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    -1,   121,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,   149,   150,    -1,    -1,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      -1,    89,    90,    -1,    92,    -1,    94,    95,    96,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,   149,   150,    -1,    -1,    -1,   154,   155,   156,    -1,
     158,   159,   160,   161,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      89,    90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,    -1,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
     149,   150,    -1,    -1,    -1,   154,    -1,   156,    -1,   158,
     159,   160,   161,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,   114,   115,   116,   117,    -1,   119,
      -1,   121,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,   154,    -1,   156,    -1,   158,   159,
     160,   161,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
      -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,    -1,    -1,   149,   150,
      -1,    -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,
     161,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,    -1,
      92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,    -1,   119,    -1,   121,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,   161,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    89,    90,    -1,    92,
      -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,    -1,
      -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,    -1,    -1,   149,   150,    -1,    -1,
      -1,   154,    -1,   156,    -1,   158,   159,   160,   161,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,
      94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,    -1,   119,    -1,   121,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,
     154,    -1,   156,    -1,   158,   159,   160,   161,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,   156,    -1,   158,   159,   160,   161,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,     3,     4,     5,     6,
       7,    -1,   138,   139,   140,    12,    13,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,    -1,   159,   160,   161,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,     3,     4,     5,     6,     7,
      -1,   138,   139,   140,    12,    13,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,     3,     4,     5,     6,     7,    -1,
     138,   139,   140,    12,    13,    -1,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,     3,     4,     5,     6,     7,    -1,   138,
     139,   140,    12,    13,    -1,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,
     159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,     3,     4,     5,     6,     7,    -1,   138,   139,
     140,    12,    13,    -1,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,   158,   159,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,     3,     4,     5,     6,     7,   138,   139,   140,
      -1,    12,    13,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,   156,   157,    28,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,     3,     4,     5,     6,     7,    -1,   138,   139,   140,
      12,    13,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,
     161,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
       3,     4,     5,     6,     7,    -1,   138,   139,   140,    12,
      13,    -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,     3,
       4,     5,     6,     7,    -1,   138,   139,   140,    12,    13,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,   159,   160,   161,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,     3,     4,
       5,     6,     7,    -1,   138,   139,   140,    12,    13,    -1,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,     3,     4,     5,
       6,     7,    -1,   138,   139,   140,    12,    13,    -1,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,     3,     4,     5,     6,
       7,    -1,   138,   139,   140,    12,    13,    -1,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,     3,     4,     5,     6,     7,
      -1,   138,   139,   140,    12,    13,    -1,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,    -1,    -1,    -1,   144,     9,    10,    11,
      -1,   149,    14,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,   159,   160,   161,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     162,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   162,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,     9,
      10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,     9,
      10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    28,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,   155,    89,    -1,    -1,    -1,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
     125,    53,   127,   128,   129,   130,   131,   155,    -1,    -1,
      -1,    -1,    64,   138,   139,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,     9,    10,
      11,    -1,   144,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    99,    -1,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    99,    52,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,     9,    10,    11,    -1,
      99,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,     9,    10,
      11,    -1,    -1,    14,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
       9,    10,    11,    -1,    -1,    14,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      11,    52,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   164,   165,     0,     3,     4,     5,     6,     7,    12,
      13,    45,    46,    51,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    72,    73,
      74,    76,    79,    84,    85,    88,    89,    90,    92,    94,
      95,    96,   100,   101,   109,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   149,   150,   154,   156,   158,
     159,   160,   161,   166,   167,   176,   179,   180,   188,   189,
     192,   194,   197,   199,   256,   257,   260,   261,   262,   263,
     266,   267,   276,   281,   282,   286,   287,   288,   290,   291,
     297,   298,   299,   300,   301,   302,   303,   304,   309,   317,
     320,   322,    13,    74,   129,   139,   263,   286,   286,   156,
     286,   286,   286,   257,   286,   291,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,    74,   129,   131,
     166,   267,   290,   291,   299,   290,   286,    33,   286,   312,
     313,   286,   129,   131,   166,   267,   269,   270,   299,   302,
     303,   309,    84,    84,   149,   226,   263,   156,   158,   286,
     139,    64,   158,   286,   156,   179,   249,   286,   156,   156,
     273,   287,   156,   156,   149,   160,   224,   225,   139,   156,
     156,   287,   156,   156,   131,   154,   166,   166,   158,   257,
     286,   291,    91,    98,   102,   106,   149,   314,   315,    28,
     287,   286,   154,   156,    88,   115,   131,   166,   170,   171,
     287,   177,   256,   260,   286,   102,   274,   314,   154,   102,
     314,   131,   156,   221,     8,   158,   139,   139,   158,    64,
      64,    33,   190,    64,   136,    64,     9,    10,    11,    14,
      27,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    43,    44,    45,    46,    47,    48,
      49,    50,    52,   158,    61,    62,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    42,   221,
     136,    64,   133,    64,   154,   160,   303,   190,   286,    99,
     131,   166,   136,   136,   289,   291,    99,   162,     8,   284,
     131,   166,   136,   221,   275,   136,   133,   303,    15,     8,
     158,   190,   312,   158,    15,   286,   305,   158,   139,   208,
     150,     8,   158,   257,   291,   157,   250,   251,   286,   257,
     291,   154,   288,   291,     8,   158,   158,   157,    28,   179,
     257,   291,   318,   319,   126,   291,   310,   311,   166,   169,
     154,   158,   221,   158,   158,   291,   140,   286,   106,   315,
      64,   133,   102,   106,   315,    28,   154,   209,   158,   177,
     186,   187,   291,   131,   166,   174,   175,   131,   166,   172,
     173,   166,    77,     8,   158,    28,   179,   212,   118,   155,
     178,   179,   188,   189,   157,   157,   157,   159,   286,   161,
     139,    33,   153,   157,   222,   223,   257,   260,   291,   139,
     110,   198,   110,   200,   305,   305,   139,   156,   305,    84,
     139,   154,   297,   303,   308,   309,   305,   286,   286,   286,
     286,    28,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   269,    33,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   139,
     297,   308,   305,   139,   297,   306,   307,   308,   305,   286,
     157,   257,   291,   166,    33,   286,    33,   286,   166,   297,
     297,   306,    45,    46,    51,    53,    64,    76,    85,    89,
     129,   131,   138,   156,   166,   267,   276,   277,   278,   279,
     280,   321,   149,   156,   157,   278,   162,    15,     8,   157,
     287,   286,   157,   157,   158,     8,    77,    77,   286,   225,
     158,   177,   213,     8,   157,   156,     8,   157,   221,   165,
     168,   155,    64,   155,   132,   139,   149,   316,   139,   158,
     210,   158,   210,   155,     8,   157,   166,    77,     8,   158,
     166,    77,     8,   158,    77,   139,   171,   177,   156,    64,
     133,   252,   253,   254,   255,   293,   155,   289,   286,     8,
     157,   157,    15,   129,   131,   166,   268,   120,   201,   202,
     268,   196,   162,   162,   156,    76,    80,   217,   218,   219,
     220,   268,   162,   286,   221,   221,   303,   162,   286,    28,
      66,   291,   221,   221,   162,   221,   294,   295,   296,    64,
     154,   162,   155,   289,   289,    99,   271,   279,   279,   279,
     279,   279,   283,   285,   156,   131,   166,   102,   279,   136,
       9,    10,    11,    14,    27,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    46,    47,    48,    49,    50,    64,    15,   217,   278,
     139,    28,   179,   207,   158,   250,   286,    33,   126,   204,
     291,   204,   155,   214,    67,    68,   215,   319,   310,   311,
      15,   155,   165,   286,   162,   210,    81,    93,   107,   210,
     155,    82,   181,   187,   158,    77,   139,   175,    77,   139,
     173,   139,   108,   157,   305,   306,   293,    64,   252,   223,
     278,   131,   166,   202,   195,     8,   154,   217,   157,     8,
     190,   155,   286,   269,    64,    64,   292,   305,   286,    33,
     286,   133,   272,    99,   162,     8,   284,   283,   166,   157,
      84,   139,   279,   279,   279,   279,    28,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     278,   157,    15,   177,   158,   291,   156,    99,   203,   203,
      67,    68,   216,   287,   179,   157,   286,   155,   162,   107,
     286,    28,   158,   211,   158,   155,   156,   152,   182,   139,
     139,   158,   158,   162,   296,   305,   166,   154,   268,   227,
     157,   147,   264,   219,   153,   191,   275,   305,   305,   293,
     162,   155,   289,   306,   279,   279,   157,   279,    28,   162,
     264,   278,   103,   250,   310,   204,   157,   157,   287,    28,
      75,   179,   155,   158,   211,   177,   268,   154,   162,   227,
      69,    70,    71,    72,    73,    74,    88,   147,   148,   155,
     228,   230,   243,   244,   245,   246,   248,   193,   156,   154,
     149,   162,   162,    99,   279,   154,   158,   157,   157,    28,
     179,   206,   206,    28,   177,   158,   177,   149,   177,   155,
     139,   231,   268,   149,   247,   263,   246,     8,   158,   154,
      33,   149,   265,   258,    15,   279,   259,    28,   179,   205,
     177,   177,   157,   155,    15,     8,   154,   158,   232,    15,
       8,   158,   190,   139,   177,   149,     8,   157,   177,   278,
     177,   177,   105,   154,   278,   268,   139,   233,   234,   235,
     236,   238,   239,   240,   268,   278,   149,   139,    15,   155,
      33,   149,   155,   155,   104,   158,   177,   155,   235,   158,
      77,   122,   158,   136,    15,   156,   278,   149,   158,   155,
     241,   246,   237,   268,   139,   278,   217,    82,   183,   184,
     185,   139,     8,   157,   156,   185,   268,   229,   268,   154,
     158,   242,   149,   177,   157,   155,   154,   177,   155
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
#line 392 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:
/* Line 1802 of yacc.c  */
#line 396 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:
/* Line 1802 of yacc.c  */
#line 397 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 5:
/* Line 1802 of yacc.c  */
#line 401 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 6:
/* Line 1802 of yacc.c  */
#line 402 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.NamespaceNameAppend((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 7:
/* Line 1802 of yacc.c  */
#line 406 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:
/* Line 1802 of yacc.c  */
#line 407 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:
/* Line 1802 of yacc.c  */
#line 408 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:
/* Line 1802 of yacc.c  */
#line 409 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 11:
/* Line 1802 of yacc.c  */
#line 410 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].semanticValue)); observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 12:
/* Line 1802 of yacc.c  */
#line 411 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:
/* Line 1802 of yacc.c  */
#line 412 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceDeclarationFound((yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList)); }
    break;

  case 14:
/* Line 1802 of yacc.c  */
#line 413 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:
/* Line 1802 of yacc.c  */
#line 414 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    {  (yyval.statementList) = observers.NamespaceGlobalDeclarationFound((yyvsp[(1) - (5)].semanticValue)); (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList)); }
    break;

  case 16:
/* Line 1802 of yacc.c  */
#line 415 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 17:
/* Line 1802 of yacc.c  */
#line 416 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 18:
/* Line 1802 of yacc.c  */
#line 417 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseSetStartingPos((yyvsp[(3) - (4)].statementList), (yyvsp[(1) - (4)].semanticValue)); }
    break;

  case 19:
/* Line 1802 of yacc.c  */
#line 418 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 20:
/* Line 1802 of yacc.c  */
#line 422 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 21:
/* Line 1802 of yacc.c  */
#line 423 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 22:
/* Line 1802 of yacc.c  */
#line 427 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUse((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 23:
/* Line 1802 of yacc.c  */
#line 428 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAlias((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 24:
/* Line 1802 of yacc.c  */
#line 429 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 25:
/* Line 1802 of yacc.c  */
#line 430 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.NamespaceUseAbsoluteAlias((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 26:
/* Line 1802 of yacc.c  */
#line 434 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].functionImport)); }
    break;

  case 27:
/* Line 1802 of yacc.c  */
#line 435 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].functionImport)); }
    break;

  case 28:
/* Line 1802 of yacc.c  */
#line 439 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.functionImport) = observers.FunctionImportMake((yyvsp[(1) - (1)].qualifiedName), NULL); }
    break;

  case 29:
/* Line 1802 of yacc.c  */
#line 440 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.functionImport) = observers.FunctionImportMake((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 30:
/* Line 1802 of yacc.c  */
#line 441 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.functionImport) = observers.FunctionImportAbsoluteMake((yyvsp[(2) - (2)].qualifiedName), NULL); }
    break;

  case 31:
/* Line 1802 of yacc.c  */
#line 442 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.functionImport) = observers.FunctionImportAbsoluteMake((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 32:
/* Line 1802 of yacc.c  */
#line 446 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].constantImport)); }
    break;

  case 33:
/* Line 1802 of yacc.c  */
#line 447 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].constantImport)); }
    break;

  case 34:
/* Line 1802 of yacc.c  */
#line 451 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.constantImport) = observers.ConstantImportMake((yyvsp[(1) - (1)].qualifiedName), NULL); }
    break;

  case 35:
/* Line 1802 of yacc.c  */
#line 452 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.constantImport) = observers.ConstantImportMake((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 36:
/* Line 1802 of yacc.c  */
#line 453 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.constantImport) = observers.ConstantImportAbsoluteMake((yyvsp[(2) - (2)].qualifiedName), NULL); }
    break;

  case 37:
/* Line 1802 of yacc.c  */
#line 454 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.constantImport) = observers.ConstantImportAbsoluteMake((yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 38:
/* Line 1802 of yacc.c  */
#line 458 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 39:
/* Line 1802 of yacc.c  */
#line 459 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(2) - (4)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 40:
/* Line 1802 of yacc.c  */
#line 463 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 41:
/* Line 1802 of yacc.c  */
#line 464 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 45:
/* Line 1802 of yacc.c  */
#line 472 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 47:
/* Line 1802 of yacc.c  */
#line 478 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 48:
/* Line 1802 of yacc.c  */
#line 482 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 49:
/* Line 1802 of yacc.c  */
#line 483 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (5)].expression));
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (5)].statementList)); 
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (5)].statementList));
                                                                                                                    (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 50:
/* Line 1802 of yacc.c  */
#line 487 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (8)].statementList));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (8)].statementList));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (8)].statementList)); }
    break;

  case 51:
/* Line 1802 of yacc.c  */
#line 491 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));
																										               (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 52:
/* Line 1802 of yacc.c  */
#line 493 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(2) - (5)].statementList), (yyvsp[(4) - (5)].expression)); }
    break;

  case 53:
/* Line 1802 of yacc.c  */
#line 502 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(3) - (9)].statementList), (yyvsp[(5) - (9)].statementList)); 
																												   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList)); 
																												   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); 
																											     }
    break;

  case 54:
/* Line 1802 of yacc.c  */
#line 506 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression));
																												   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (3)].statementList));
																												 }
    break;

  case 55:
/* Line 1802 of yacc.c  */
#line 509 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 56:
/* Line 1802 of yacc.c  */
#line 510 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 57:
/* Line 1802 of yacc.c  */
#line 511 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 58:
/* Line 1802 of yacc.c  */
#line 512 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 59:
/* Line 1802 of yacc.c  */
#line 513 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 60:
/* Line 1802 of yacc.c  */
#line 514 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 61:
/* Line 1802 of yacc.c  */
#line 515 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].variable)); }
    break;

  case 62:
/* Line 1802 of yacc.c  */
#line 516 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 63:
/* Line 1802 of yacc.c  */
#line 517 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 64:
/* Line 1802 of yacc.c  */
#line 518 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StaticVariablesStatementMake((yyvsp[(2) - (3)].statementList)); }
    break;

  case 65:
/* Line 1802 of yacc.c  */
#line 519 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 66:
/* Line 1802 of yacc.c  */
#line 520 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 67:
/* Line 1802 of yacc.c  */
#line 521 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].expression)); }
    break;

  case 68:
/* Line 1802 of yacc.c  */
#line 522 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 69:
/* Line 1802 of yacc.c  */
#line 525 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].variable));
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																													   (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 70:
/* Line 1802 of yacc.c  */
#line 532 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(5) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListAppend((yyval.statementList), (yyvsp[(6) - (8)].expression));
																													  (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(8) - (8)].statementList)); }
    break;

  case 71:
/* Line 1802 of yacc.c  */
#line 537 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake((yyvsp[(3) - (5)].statementList), (yyvsp[(5) - (5)].statementList))); }
    break;

  case 72:
/* Line 1802 of yacc.c  */
#line 538 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 73:
/* Line 1802 of yacc.c  */
#line 541 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																													 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(3) - (6)].statementList));
																									                 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (6)].statementList));
																													 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (6)].statementList)); 
																												 }
    break;

  case 74:
/* Line 1802 of yacc.c  */
#line 546 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 75:
/* Line 1802 of yacc.c  */
#line 547 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 76:
/* Line 1802 of yacc.c  */
#line 551 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 77:
/* Line 1802 of yacc.c  */
#line 556 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake();
																											 (yyval.statementList) = observers.StatementListAppend((yyval.statementList),
																											   observers.AssignmentExpressionFromNewFound(
																											   observers.VariableStart((yyvsp[(4) - (9)].semanticValue)), 
																											   (yyvsp[(3) - (9)].qualifiedName),
																											   NULL));
																											 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (9)].statementList));
																											 (yyval.statementList) = observers.StatementListMerge((yyval.statementList), (yyvsp[(9) - (9)].statementList)); }
    break;

  case 78:
/* Line 1802 of yacc.c  */
#line 566 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 567 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 571 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 572 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 576 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 577 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); (yyval.statementList) = (yyvsp[(1) - (2)].statementList);}
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 581 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(
																														observers.AssignmentExpressionFromNewFound(
																													 observers.VariableStart((yyvsp[(4) - (8)].semanticValue)),
																													 (yyvsp[(3) - (8)].qualifiedName),
																													NULL));
																												   observers.StatementListMerge((yyval.statementList), (yyvsp[(7) - (8)].statementList));
																												}
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 591 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 592 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 608 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isMethod) = false; }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 609 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isMethod) = true; }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 613 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isVariadic) = false; }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 614 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isVariadic) = true; }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 619 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(3) - (6)].semanticValue)); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 620 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeFunction((yyvsp[(3) - (10)].semanticValue), (yyvsp[(2) - (10)].isMethod), (yyvsp[(1) - (10)].semanticValue), (yyvsp[(5) - (10)].parametersList), (yyvsp[(9) - (10)].statementList), (yyvsp[(8) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue));
											                  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 627 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].semanticValue)); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 628 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
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

  case 98:
/* Line 1802 of yacc.c  */
#line 639 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 640 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassSymbolMake((yyvsp[(2) - (7)].semanticValue), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].semanticValue));
										                   	  observers.StatementListMerge((yyval.statementList), (yyvsp[(6) - (7)].statementList)); 
										                   	  observers.SetCurrentClassName(NULL);    
										              }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 648 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, false); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 649 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), true, false, false, false); }
    break;

  case 102:
/* Line 1802 of yacc.c  */
#line 650 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, false, true); }
    break;

  case 103:
/* Line 1802 of yacc.c  */
#line 651 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (2)].semanticValue), false, true, false, false); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 655 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 656 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolExtends((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 106:
/* Line 1802 of yacc.c  */
#line 660 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart((yyvsp[(1) - (1)].semanticValue), false, false, true, false); }
    break;

  case 107:
/* Line 1802 of yacc.c  */
#line 664 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 108:
/* Line 1802 of yacc.c  */
#line 665 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 109:
/* Line 1802 of yacc.c  */
#line 669 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolStart(NULL, false, false, false, false); }
    break;

  case 110:
/* Line 1802 of yacc.c  */
#line 670 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 111:
/* Line 1802 of yacc.c  */
#line 674 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 112:
/* Line 1802 of yacc.c  */
#line 675 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classSymbol) = observers.ClassSymbolAddToImplements((yyvsp[(1) - (3)].classSymbol), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 113:
/* Line 1802 of yacc.c  */
#line 679 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) =  observers.ExpressionNil(); }
    break;

  case 114:
/* Line 1802 of yacc.c  */
#line 680 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 115:
/* Line 1802 of yacc.c  */
#line 684 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(1) - (1)].variable)); }
    break;

  case 116:
/* Line 1802 of yacc.c  */
#line 685 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAsAssignmentExpression((yyvsp[(2) - (2)].variable)); }
    break;

  case 117:
/* Line 1802 of yacc.c  */
#line 686 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (4)].statementList), observers.ExpressionNil()); }
    break;

  case 118:
/* Line 1802 of yacc.c  */
#line 690 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 119:
/* Line 1802 of yacc.c  */
#line 691 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 120:
/* Line 1802 of yacc.c  */
#line 696 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 121:
/* Line 1802 of yacc.c  */
#line 697 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 122:
/* Line 1802 of yacc.c  */
#line 702 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 123:
/* Line 1802 of yacc.c  */
#line 703 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 124:
/* Line 1802 of yacc.c  */
#line 707 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ConstantMake((yyvsp[(1) - (3)].semanticValue), analyzer.GetLineNumber()); }
    break;

  case 125:
/* Line 1802 of yacc.c  */
#line 708 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ConstantMake((yyvsp[(3) - (5)].semanticValue), analyzer.GetLineNumber())); }
    break;

  case 126:
/* Line 1802 of yacc.c  */
#line 712 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 127:
/* Line 1802 of yacc.c  */
#line 713 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 128:
/* Line 1802 of yacc.c  */
#line 714 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 129:
/* Line 1802 of yacc.c  */
#line 715 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 130:
/* Line 1802 of yacc.c  */
#line 720 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 131:
/* Line 1802 of yacc.c  */
#line 721 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (5)].statementList);
																			observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression));
																			observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); 
																		  }
    break;

  case 132:
/* Line 1802 of yacc.c  */
#line 725 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList); 
																			observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList));
																		  }
    break;

  case 135:
/* Line 1802 of yacc.c  */
#line 738 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 136:
/* Line 1802 of yacc.c  */
#line 739 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 137:
/* Line 1802 of yacc.c  */
#line 745 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 138:
/* Line 1802 of yacc.c  */
#line 746 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																   observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (4)].statementList));
																   observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (4)].expression));
																   observers.StatementListMerge((yyval.statementList), (yyvsp[(4) - (4)].statementList)); }
    break;

  case 139:
/* Line 1802 of yacc.c  */
#line 754 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 140:
/* Line 1802 of yacc.c  */
#line 755 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); 
																				          observers.StatementListMerge((yyval.statementList), (yyvsp[(1) - (5)].statementList));
																			  	          observers.StatementListAppend((yyval.statementList), (yyvsp[(3) - (5)].expression)); 
																				          observers.StatementListMerge((yyval.statementList), (yyvsp[(5) - (5)].statementList)); }
    break;

  case 141:
/* Line 1802 of yacc.c  */
#line 763 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 142:
/* Line 1802 of yacc.c  */
#line 764 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 143:
/* Line 1802 of yacc.c  */
#line 769 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 144:
/* Line 1802 of yacc.c  */
#line 770 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 145:
/* Line 1802 of yacc.c  */
#line 775 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 146:
/* Line 1802 of yacc.c  */
#line 776 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = observers.ParametersListNil(); }
    break;

  case 147:
/* Line 1802 of yacc.c  */
#line 781 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 148:
/* Line 1802 of yacc.c  */
#line 782 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = observers.ParametersListAppend((yyvsp[(1) - (3)].parametersList), (yyvsp[(3) - (3)].parametersList)); }
    break;

  case 149:
/* Line 1802 of yacc.c  */
#line 786 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(4) - (4)].semanticValue), (yyvsp[(2) - (4)].isMethod), false, (yyvsp[(3) - (4)].isVariadic)); }
    break;

  case 150:
/* Line 1802 of yacc.c  */
#line 787 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.parametersList) = observers.ParametersListCreate((yyvsp[(1) - (6)].qualifiedName), (yyvsp[(4) - (6)].semanticValue), (yyvsp[(2) - (6)].isMethod), true, (yyvsp[(3) - (6)].isVariadic)); }
    break;

  case 151:
/* Line 1802 of yacc.c  */
#line 793 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 152:
/* Line 1802 of yacc.c  */
#line 794 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 153:
/* Line 1802 of yacc.c  */
#line 795 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameCreate((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 154:
/* Line 1802 of yacc.c  */
#line 796 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 155:
/* Line 1802 of yacc.c  */
#line 801 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) =  observers.StatementListNil(); }
    break;

  case 156:
/* Line 1802 of yacc.c  */
#line 802 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 157:
/* Line 1802 of yacc.c  */
#line 803 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (3)].expression)); }
    break;

  case 158:
/* Line 1802 of yacc.c  */
#line 808 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 159:
/* Line 1802 of yacc.c  */
#line 809 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 160:
/* Line 1802 of yacc.c  */
#line 813 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 161:
/* Line 1802 of yacc.c  */
#line 814 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 162:
/* Line 1802 of yacc.c  */
#line 815 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].variable)); }
    break;

  case 163:
/* Line 1802 of yacc.c  */
#line 816 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyvsp[(2) - (2)].expression)->IsUnpack = true; (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression)); }
    break;

  case 164:
/* Line 1802 of yacc.c  */
#line 820 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 165:
/* Line 1802 of yacc.c  */
#line 821 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 166:
/* Line 1802 of yacc.c  */
#line 826 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeGlobalVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 167:
/* Line 1802 of yacc.c  */
#line 827 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 168:
/* Line 1802 of yacc.c  */
#line 828 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 169:
/* Line 1802 of yacc.c  */
#line 833 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 170:
/* Line 1802 of yacc.c  */
#line 834 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (5)].statementList), observers.ExpressionMakeStaticVariable((yyvsp[(3) - (5)].semanticValue))); }
    break;

  case 171:
/* Line 1802 of yacc.c  */
#line 835 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 172:
/* Line 1802 of yacc.c  */
#line 836 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable((yyvsp[(1) - (3)].semanticValue))); }
    break;

  case 173:
/* Line 1802 of yacc.c  */
#line 842 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 174:
/* Line 1802 of yacc.c  */
#line 843 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 175:
/* Line 1802 of yacc.c  */
#line 848 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); }
    break;

  case 176:
/* Line 1802 of yacc.c  */
#line 849 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 177:
/* Line 1802 of yacc.c  */
#line 850 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 178:
/* Line 1802 of yacc.c  */
#line 852 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].semanticValue)); }
    break;

  case 179:
/* Line 1802 of yacc.c  */
#line 853 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeMethod((yyvsp[(4) - (9)].semanticValue), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isMethod), (yyvsp[(2) - (9)].semanticValue), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol));
																	  observers.SetCurrentMemberName(NULL);
																	}
    break;

  case 180:
/* Line 1802 of yacc.c  */
#line 859 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.TraitUseMake((yyvsp[(2) - (3)].traitUse), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 181:
/* Line 1802 of yacc.c  */
#line 863 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitUse) = observers.TraitUseStart((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 182:
/* Line 1802 of yacc.c  */
#line 864 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitUse) = observers.TraitUseAppend((yyvsp[(1) - (3)].traitUse), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 183:
/* Line 1802 of yacc.c  */
#line 868 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 184:
/* Line 1802 of yacc.c  */
#line 869 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 185:
/* Line 1802 of yacc.c  */
#line 873 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 186:
/* Line 1802 of yacc.c  */
#line 874 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 187:
/* Line 1802 of yacc.c  */
#line 878 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 188:
/* Line 1802 of yacc.c  */
#line 879 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 189:
/* Line 1802 of yacc.c  */
#line 883 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitInsteadOf)); }
    break;

  case 190:
/* Line 1802 of yacc.c  */
#line 884 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (2)].traitAlias)); }
    break;

  case 191:
/* Line 1802 of yacc.c  */
#line 888 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitInsteadOf) =  observers.TraitInsteadOfMake((yyvsp[(1) - (3)].traitAlias), (yyvsp[(3) - (3)].traitInsteadOf)); }
    break;

  case 192:
/* Line 1802 of yacc.c  */
#line 892 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfMakeReferenceList((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 193:
/* Line 1802 of yacc.c  */
#line 893 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitInsteadOf) = observers.TraitInsteadOfAppendReferenceList((yyvsp[(1) - (3)].traitInsteadOf), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 194:
/* Line 1802 of yacc.c  */
#line 897 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 195:
/* Line 1802 of yacc.c  */
#line 898 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 196:
/* Line 1802 of yacc.c  */
#line 902 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMakeMethodReferenceList((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 197:
/* Line 1802 of yacc.c  */
#line 906 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (4)].traitAlias), (yyvsp[(3) - (4)].classMemberSymbol), (yyvsp[(4) - (4)].semanticValue)); }
    break;

  case 198:
/* Line 1802 of yacc.c  */
#line 907 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.traitAlias) = observers.TraitAliasMake((yyvsp[(1) - (3)].traitAlias), observers.ClassMemberSymbolMake((yyvsp[(3) - (3)].semanticValue))); }
    break;

  case 199:
/* Line 1802 of yacc.c  */
#line 911 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 200:
/* Line 1802 of yacc.c  */
#line 912 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 201:
/* Line 1802 of yacc.c  */
#line 916 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody(observers.StatementListNil(), (yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 202:
/* Line 1802 of yacc.c  */
#line 917 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberMakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 203:
/* Line 1802 of yacc.c  */
#line 921 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 204:
/* Line 1802 of yacc.c  */
#line 922 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMakeAsPublicVariable((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 205:
/* Line 1802 of yacc.c  */
#line 926 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake(NULL); }
    break;

  case 206:
/* Line 1802 of yacc.c  */
#line 927 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 207:
/* Line 1802 of yacc.c  */
#line 931 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolMake((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 208:
/* Line 1802 of yacc.c  */
#line 932 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.classMemberSymbol) = observers.ClassMemberSymbolSetModifier((yyvsp[(1) - (2)].classMemberSymbol), (yyvsp[(2) - (2)].semanticValue)); }
    break;

  case 215:
/* Line 1802 of yacc.c  */
#line 945 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (3)].semanticValue), (yyvsp[(3) - (3)].semanticValue), false, analyzer.GetLineNumber())); }
    break;

  case 216:
/* Line 1802 of yacc.c  */
#line 946 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), false, analyzer.GetLineNumber()));  }
    break;

  case 217:
/* Line 1802 of yacc.c  */
#line 947 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (1)].semanticValue), (yyvsp[(1) - (1)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 218:
/* Line 1802 of yacc.c  */
#line 948 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(1) - (3)].semanticValue), (yyvsp[(1) - (3)].semanticValue), false, analyzer.GetLineNumber()); }
    break;

  case 219:
/* Line 1802 of yacc.c  */
#line 952 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), observers.ClassMemberSymbolMakeVariable((yyvsp[(3) - (5)].semanticValue), (yyvsp[(3) - (5)].semanticValue), true, analyzer.GetLineNumber())); }
    break;

  case 220:
/* Line 1802 of yacc.c  */
#line 953 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ClassMemberSymbolMakeVariable((yyvsp[(2) - (4)].semanticValue), (yyvsp[(1) - (4)].semanticValue), true, analyzer.GetLineNumber()); }
    break;

  case 221:
/* Line 1802 of yacc.c  */
#line 957 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 222:
/* Line 1802 of yacc.c  */
#line 958 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 223:
/* Line 1802 of yacc.c  */
#line 963 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 224:
/* Line 1802 of yacc.c  */
#line 964 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 225:
/* Line 1802 of yacc.c  */
#line 968 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) =  observers.StatementListAppend((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].expression)); }
    break;

  case 226:
/* Line 1802 of yacc.c  */
#line 969 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].expression)); }
    break;

  case 227:
/* Line 1802 of yacc.c  */
#line 973 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 228:
/* Line 1802 of yacc.c  */
#line 974 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 229:
/* Line 1802 of yacc.c  */
#line 978 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (4)].variable); }
    break;

  case 230:
/* Line 1802 of yacc.c  */
#line 979 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 231:
/* Line 1802 of yacc.c  */
#line 983 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 232:
/* Line 1802 of yacc.c  */
#line 984 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 233:
/* Line 1802 of yacc.c  */
#line 985 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 234:
/* Line 1802 of yacc.c  */
#line 989 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 235:
/* Line 1802 of yacc.c  */
#line 990 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 236:
/* Line 1802 of yacc.c  */
#line 994 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeNewInstanceCall((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList));  }
    break;

  case 237:
/* Line 1802 of yacc.c  */
#line 998 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeAssignmentList((yyvsp[(3) - (6)].statementList), (yyvsp[(6) - (6)].expression)); }
    break;

  case 238:
/* Line 1802 of yacc.c  */
#line 999 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromExpressionFound((yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 239:
/* Line 1802 of yacc.c  */
#line 1000 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromVariableFound((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); }
    break;

  case 240:
/* Line 1802 of yacc.c  */
#line 1001 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.AssignmentExpressionFromNewFound((yyvsp[(1) - (6)].variable), (yyvsp[(5) - (6)].qualifiedName), (yyvsp[(6) - (6)].statementList)); }
    break;

  case 241:
/* Line 1802 of yacc.c  */
#line 1002 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 242:
/* Line 1802 of yacc.c  */
#line 1003 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 243:
/* Line 1802 of yacc.c  */
#line 1004 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 244:
/* Line 1802 of yacc.c  */
#line 1005 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 245:
/* Line 1802 of yacc.c  */
#line 1006 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 246:
/* Line 1802 of yacc.c  */
#line 1007 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 247:
/* Line 1802 of yacc.c  */
#line 1008 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 248:
/* Line 1802 of yacc.c  */
#line 1009 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 249:
/* Line 1802 of yacc.c  */
#line 1010 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 250:
/* Line 1802 of yacc.c  */
#line 1011 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 251:
/* Line 1802 of yacc.c  */
#line 1012 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 252:
/* Line 1802 of yacc.c  */
#line 1013 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 253:
/* Line 1802 of yacc.c  */
#line 1014 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAssignmentCompoundOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].variable), (yyvsp[(3) - (3)].expression)); }
    break;

  case 254:
/* Line 1802 of yacc.c  */
#line 1015 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 255:
/* Line 1802 of yacc.c  */
#line 1016 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 256:
/* Line 1802 of yacc.c  */
#line 1017 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(2) - (2)].semanticValue)->Token, (yyvsp[(1) - (2)].variable)); }
    break;

  case 257:
/* Line 1802 of yacc.c  */
#line 1018 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryVariableOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].variable)); }
    break;

  case 258:
/* Line 1802 of yacc.c  */
#line 1019 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 259:
/* Line 1802 of yacc.c  */
#line 1020 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 260:
/* Line 1802 of yacc.c  */
#line 1021 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 261:
/* Line 1802 of yacc.c  */
#line 1022 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 262:
/* Line 1802 of yacc.c  */
#line 1023 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 263:
/* Line 1802 of yacc.c  */
#line 1024 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 264:
/* Line 1802 of yacc.c  */
#line 1025 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 265:
/* Line 1802 of yacc.c  */
#line 1026 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 266:
/* Line 1802 of yacc.c  */
#line 1027 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 267:
/* Line 1802 of yacc.c  */
#line 1028 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 268:
/* Line 1802 of yacc.c  */
#line 1029 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 269:
/* Line 1802 of yacc.c  */
#line 1030 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 270:
/* Line 1802 of yacc.c  */
#line 1031 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 271:
/* Line 1802 of yacc.c  */
#line 1032 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 272:
/* Line 1802 of yacc.c  */
#line 1033 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 273:
/* Line 1802 of yacc.c  */
#line 1034 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 274:
/* Line 1802 of yacc.c  */
#line 1035 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 275:
/* Line 1802 of yacc.c  */
#line 1036 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 276:
/* Line 1802 of yacc.c  */
#line 1037 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 277:
/* Line 1802 of yacc.c  */
#line 1038 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 278:
/* Line 1802 of yacc.c  */
#line 1039 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 279:
/* Line 1802 of yacc.c  */
#line 1040 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 280:
/* Line 1802 of yacc.c  */
#line 1041 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 281:
/* Line 1802 of yacc.c  */
#line 1042 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 282:
/* Line 1802 of yacc.c  */
#line 1043 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 283:
/* Line 1802 of yacc.c  */
#line 1044 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 284:
/* Line 1802 of yacc.c  */
#line 1045 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 285:
/* Line 1802 of yacc.c  */
#line 1046 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 286:
/* Line 1802 of yacc.c  */
#line 1047 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 287:
/* Line 1802 of yacc.c  */
#line 1048 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionInstanceOfOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 288:
/* Line 1802 of yacc.c  */
#line 1049 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 289:
/* Line 1802 of yacc.c  */
#line 1050 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 290:
/* Line 1802 of yacc.c  */
#line 1051 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.NewInstanceAppendToChain((yyvsp[(2) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 291:
/* Line 1802 of yacc.c  */
#line 1054 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 292:
/* Line 1802 of yacc.c  */
#line 1056 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 293:
/* Line 1802 of yacc.c  */
#line 1057 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 294:
/* Line 1802 of yacc.c  */
#line 1058 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 295:
/* Line 1802 of yacc.c  */
#line 1059 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 296:
/* Line 1802 of yacc.c  */
#line 1060 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 297:
/* Line 1802 of yacc.c  */
#line 1061 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend((yyvsp[(2) - (2)].expression))); }
    break;

  case 298:
/* Line 1802 of yacc.c  */
#line 1062 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 299:
/* Line 1802 of yacc.c  */
#line 1063 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 300:
/* Line 1802 of yacc.c  */
#line 1064 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 301:
/* Line 1802 of yacc.c  */
#line 1065 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 302:
/* Line 1802 of yacc.c  */
#line 1066 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 303:
/* Line 1802 of yacc.c  */
#line 1067 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 304:
/* Line 1802 of yacc.c  */
#line 1068 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 305:
/* Line 1802 of yacc.c  */
#line 1069 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 306:
/* Line 1802 of yacc.c  */
#line 1070 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); /* results of backtick operator is a string */ }
    break;

  case 307:
/* Line 1802 of yacc.c  */
#line 1071 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (2)].expression)); }
    break;

  case 308:
/* Line 1802 of yacc.c  */
#line 1072 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 309:
/* Line 1802 of yacc.c  */
#line 1074 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 310:
/* Line 1802 of yacc.c  */
#line 1075 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(4) - (10)].parametersList), (yyvsp[(6) - (10)].statementList), (yyvsp[(9) - (10)].statementList), (yyvsp[(7) - (10)].semanticValue), (yyvsp[(10) - (10)].semanticValue)); 
																	           // end after we create the closure so that closure gets the correct scope
																	           // anonymous function count
																	           observers.EndAnonymousFunction(); 
																	         }
    break;

  case 311:
/* Line 1802 of yacc.c  */
#line 1081 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { observers.IncrementAnonymousFunctionCount(); }
    break;

  case 312:
/* Line 1802 of yacc.c  */
#line 1082 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClosure((yyvsp[(5) - (11)].parametersList), (yyvsp[(7) - (11)].statementList), (yyvsp[(10) - (11)].statementList), (yyvsp[(8) - (11)].semanticValue), (yyvsp[(11) - (11)].semanticValue));  
																				// end after we create the closure so that closure gets the correct scope
																				// anonymous function count
																				observers.EndAnonymousFunction(); 
																			  }
    break;

  case 313:
/* Line 1802 of yacc.c  */
#line 1090 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 314:
/* Line 1802 of yacc.c  */
#line 1091 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].variable); }
    break;

  case 315:
/* Line 1802 of yacc.c  */
#line 1092 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (4)].expression); }
    break;

  case 316:
/* Line 1802 of yacc.c  */
#line 1093 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (4)].expression); }
    break;

  case 317:
/* Line 1802 of yacc.c  */
#line 1097 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 318:
/* Line 1802 of yacc.c  */
#line 1098 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 319:
/* Line 1802 of yacc.c  */
#line 1099 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset(observers.ExpressionMakeScalar((yyvsp[(1) - (4)].semanticValue)), (yyvsp[(3) - (4)].expression)); }
    break;

  case 320:
/* Line 1802 of yacc.c  */
#line 1100 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 321:
/* Line 1802 of yacc.c  */
#line 1104 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(3) - (4)].statementList)); }
    break;

  case 322:
/* Line 1802 of yacc.c  */
#line 1105 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeArray((yyvsp[(2) - (3)].statementList)); }
    break;

  case 324:
/* Line 1802 of yacc.c  */
#line 1113 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 325:
/* Line 1802 of yacc.c  */
#line 1114 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 326:
/* Line 1802 of yacc.c  */
#line 1118 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (3)].statementList), 
																   observers.VariableStart((yyvsp[(3) - (3)].semanticValue))
																  ); 
														      }
    break;

  case 327:
/* Line 1802 of yacc.c  */
#line 1122 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListAppend((yyvsp[(1) - (4)].statementList), 
															     observers.VariableStart((yyvsp[(4) - (4)].semanticValue), true)
															   ); 
														     }
    break;

  case 328:
/* Line 1802 of yacc.c  */
#line 1126 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(1) - (1)].semanticValue))); }
    break;

  case 329:
/* Line 1802 of yacc.c  */
#line 1127 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend(observers.VariableStart((yyvsp[(2) - (2)].semanticValue), true)); }
    break;

  case 330:
/* Line 1802 of yacc.c  */
#line 1132 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCall((yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].statementList), analyzer.GetLineNumber()); }
    break;

  case 331:
/* Line 1802 of yacc.c  */
#line 1134 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromDeclaredNamespace((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 332:
/* Line 1802 of yacc.c  */
#line 1136 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (3)].qualifiedName), (yyvsp[(3) - (3)].statementList), analyzer.GetLineNumber()); }
    break;

  case 333:
/* Line 1802 of yacc.c  */
#line 1138 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeStaticMethodCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].variable), (yyvsp[(4) - (4)].statementList), analyzer.GetLineNumber()); }
    break;

  case 334:
/* Line 1802 of yacc.c  */
#line 1140 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 335:
/* Line 1802 of yacc.c  */
#line 1142 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 336:
/* Line 1802 of yacc.c  */
#line 1144 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 337:
/* Line 1802 of yacc.c  */
#line 1146 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 338:
/* Line 1802 of yacc.c  */
#line 1150 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 339:
/* Line 1802 of yacc.c  */
#line 1151 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 340:
/* Line 1802 of yacc.c  */
#line 1152 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 341:
/* Line 1802 of yacc.c  */
#line 1153 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 342:
/* Line 1802 of yacc.c  */
#line 1157 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 343:
/* Line 1802 of yacc.c  */
#line 1158 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName)); }
    break;

  case 344:
/* Line 1802 of yacc.c  */
#line 1159 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName)); }
    break;

  case 345:
/* Line 1802 of yacc.c  */
#line 1165 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 346:
/* Line 1802 of yacc.c  */
#line 1166 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 347:
/* Line 1802 of yacc.c  */
#line 1172 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 348:
/* Line 1802 of yacc.c  */
#line 1174 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.qualifiedName) = observers.QualifiedNameNil(); }
    break;

  case 349:
/* Line 1802 of yacc.c  */
#line 1179 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = (yyvsp[(1) - (2)].semanticValue); }
    break;

  case 350:
/* Line 1802 of yacc.c  */
#line 1180 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 352:
/* Line 1802 of yacc.c  */
#line 1189 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 353:
/* Line 1802 of yacc.c  */
#line 1190 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 354:
/* Line 1802 of yacc.c  */
#line 1191 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 355:
/* Line 1802 of yacc.c  */
#line 1195 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 356:
/* Line 1802 of yacc.c  */
#line 1196 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 357:
/* Line 1802 of yacc.c  */
#line 1197 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 358:
/* Line 1802 of yacc.c  */
#line 1202 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListNil(); }
    break;

  case 359:
/* Line 1802 of yacc.c  */
#line 1203 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 360:
/* Line 1802 of yacc.c  */
#line 1208 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 361:
/* Line 1802 of yacc.c  */
#line 1209 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 362:
/* Line 1802 of yacc.c  */
#line 1210 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 363:
/* Line 1802 of yacc.c  */
#line 1211 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 364:
/* Line 1802 of yacc.c  */
#line 1212 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 365:
/* Line 1802 of yacc.c  */
#line 1213 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 366:
/* Line 1802 of yacc.c  */
#line 1214 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 367:
/* Line 1802 of yacc.c  */
#line 1215 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 368:
/* Line 1802 of yacc.c  */
#line 1216 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 369:
/* Line 1802 of yacc.c  */
#line 1217 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 370:
/* Line 1802 of yacc.c  */
#line 1218 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 371:
/* Line 1802 of yacc.c  */
#line 1219 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (2)].semanticValue)); }
    break;

  case 372:
/* Line 1802 of yacc.c  */
#line 1223 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 374:
/* Line 1802 of yacc.c  */
#line 1231 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 375:
/* Line 1802 of yacc.c  */
#line 1232 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 376:
/* Line 1802 of yacc.c  */
#line 1233 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 377:
/* Line 1802 of yacc.c  */
#line 1234 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 378:
/* Line 1802 of yacc.c  */
#line 1235 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 379:
/* Line 1802 of yacc.c  */
#line 1236 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(3) - (4)].semanticValue)); }
    break;

  case 380:
/* Line 1802 of yacc.c  */
#line 1237 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].semanticValue)); }
    break;

  case 381:
/* Line 1802 of yacc.c  */
#line 1238 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 382:
/* Line 1802 of yacc.c  */
#line 1239 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 383:
/* Line 1802 of yacc.c  */
#line 1240 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 384:
/* Line 1802 of yacc.c  */
#line 1244 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionAddOffset((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression)); }
    break;

  case 385:
/* Line 1802 of yacc.c  */
#line 1245 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 386:
/* Line 1802 of yacc.c  */
#line 1246 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 387:
/* Line 1802 of yacc.c  */
#line 1247 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 388:
/* Line 1802 of yacc.c  */
#line 1248 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 389:
/* Line 1802 of yacc.c  */
#line 1249 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 390:
/* Line 1802 of yacc.c  */
#line 1250 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 391:
/* Line 1802 of yacc.c  */
#line 1251 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 392:
/* Line 1802 of yacc.c  */
#line 1252 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 393:
/* Line 1802 of yacc.c  */
#line 1253 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 394:
/* Line 1802 of yacc.c  */
#line 1254 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 395:
/* Line 1802 of yacc.c  */
#line 1255 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 396:
/* Line 1802 of yacc.c  */
#line 1256 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 397:
/* Line 1802 of yacc.c  */
#line 1257 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 398:
/* Line 1802 of yacc.c  */
#line 1258 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 399:
/* Line 1802 of yacc.c  */
#line 1259 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 400:
/* Line 1802 of yacc.c  */
#line 1260 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 401:
/* Line 1802 of yacc.c  */
#line 1261 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 402:
/* Line 1802 of yacc.c  */
#line 1262 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 403:
/* Line 1802 of yacc.c  */
#line 1263 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 404:
/* Line 1802 of yacc.c  */
#line 1264 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 405:
/* Line 1802 of yacc.c  */
#line 1265 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 406:
/* Line 1802 of yacc.c  */
#line 1266 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 407:
/* Line 1802 of yacc.c  */
#line 1267 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 408:
/* Line 1802 of yacc.c  */
#line 1268 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 409:
/* Line 1802 of yacc.c  */
#line 1269 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 410:
/* Line 1802 of yacc.c  */
#line 1270 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 411:
/* Line 1802 of yacc.c  */
#line 1271 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionBinaryOperation((yyvsp[(2) - (3)].semanticValue)->Token, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 412:
/* Line 1802 of yacc.c  */
#line 1272 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].expression), NULL); }
    break;

  case 413:
/* Line 1802 of yacc.c  */
#line 1273 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionTernaryOperation((yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression)); }
    break;

  case 414:
/* Line 1802 of yacc.c  */
#line 1274 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 415:
/* Line 1802 of yacc.c  */
#line 1275 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionUnaryOperation((yyvsp[(1) - (2)].semanticValue)->Token, (yyvsp[(2) - (2)].expression)); }
    break;

  case 416:
/* Line 1802 of yacc.c  */
#line 1276 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 417:
/* Line 1802 of yacc.c  */
#line 1280 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 418:
/* Line 1802 of yacc.c  */
#line 1281 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (1)].qualifiedName)); }
    break;

  case 419:
/* Line 1802 of yacc.c  */
#line 1282 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace((yyvsp[(3) - (3)].qualifiedName))); }
    break;

  case 420:
/* Line 1802 of yacc.c  */
#line 1283 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute((yyvsp[(2) - (2)].qualifiedName))); }
    break;

  case 421:
/* Line 1802 of yacc.c  */
#line 1287 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 422:
/* Line 1802 of yacc.c  */
#line 1288 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 423:
/* Line 1802 of yacc.c  */
#line 1289 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 424:
/* Line 1802 of yacc.c  */
#line 1290 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 425:
/* Line 1802 of yacc.c  */
#line 1291 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(2) - (3)].expression)); }
    break;

  case 426:
/* Line 1802 of yacc.c  */
#line 1292 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (3)].semanticValue)); }
    break;

  case 427:
/* Line 1802 of yacc.c  */
#line 1293 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalar((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 428:
/* Line 1802 of yacc.c  */
#line 1297 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 430:
/* Line 1802 of yacc.c  */
#line 1302 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isComma) = false; }
    break;

  case 431:
/* Line 1802 of yacc.c  */
#line 1303 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.isComma) = true; }
    break;

  case 432:
/* Line 1802 of yacc.c  */
#line 1307 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 433:
/* Line 1802 of yacc.c  */
#line 1308 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 434:
/* Line 1802 of yacc.c  */
#line 1309 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 435:
/* Line 1802 of yacc.c  */
#line 1310 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 436:
/* Line 1802 of yacc.c  */
#line 1314 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 438:
/* Line 1802 of yacc.c  */
#line 1319 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 439:
/* Line 1802 of yacc.c  */
#line 1320 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 443:
/* Line 1802 of yacc.c  */
#line 1340 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (5)].variable), (yyvsp[(3) - (5)].variable), (yyvsp[(4) - (5)].variable), (yyvsp[(5) - (5)].variable)); }
    break;

  case 444:
/* Line 1802 of yacc.c  */
#line 1341 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMake((yyvsp[(1) - (1)].variable), NULL, NULL, NULL); }
    break;

  case 445:
/* Line 1802 of yacc.c  */
#line 1345 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(1) - (2)].variable), (yyvsp[(2) - (2)].variable)); }
    break;

  case 446:
/* Line 1802 of yacc.c  */
#line 1346 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 447:
/* Line 1802 of yacc.c  */
#line 1351 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendToChain((yyvsp[(2) - (3)].variable), (yyvsp[(3) - (3)].variable), (yyvsp[(1) - (3)].semanticValue));  }
    break;

  case 448:
/* Line 1802 of yacc.c  */
#line 1355 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression));}
    break;

  case 449:
/* Line 1802 of yacc.c  */
#line 1356 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 450:
/* Line 1802 of yacc.c  */
#line 1360 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeAndAppendFunctionCall((yyvsp[(1) - (1)].statementList), true); }
    break;

  case 451:
/* Line 1802 of yacc.c  */
#line 1364 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 452:
/* Line 1802 of yacc.c  */
#line 1365 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 453:
/* Line 1802 of yacc.c  */
#line 1366 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 455:
/* Line 1802 of yacc.c  */
#line 1371 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 456:
/* Line 1802 of yacc.c  */
#line 1375 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableStartStaticMember((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].variable)); }
    break;

  case 457:
/* Line 1802 of yacc.c  */
#line 1376 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 458:
/* Line 1802 of yacc.c  */
#line 1381 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.semanticValue) = observers.SemanticValueNil(); }
    break;

  case 459:
/* Line 1802 of yacc.c  */
#line 1385 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 460:
/* Line 1802 of yacc.c  */
#line 1386 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 462:
/* Line 1802 of yacc.c  */
#line 1391 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 463:
/* Line 1802 of yacc.c  */
#line 1392 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 465:
/* Line 1802 of yacc.c  */
#line 1398 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableMakeIndirect((yyvsp[(2) - (2)].variable)); }
    break;

  case 467:
/* Line 1802 of yacc.c  */
#line 1403 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 468:
/* Line 1802 of yacc.c  */
#line 1404 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 470:
/* Line 1802 of yacc.c  */
#line 1410 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 471:
/* Line 1802 of yacc.c  */
#line 1411 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 472:
/* Line 1802 of yacc.c  */
#line 1415 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 473:
/* Line 1802 of yacc.c  */
#line 1416 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 474:
/* Line 1802 of yacc.c  */
#line 1421 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 475:
/* Line 1802 of yacc.c  */
#line 1422 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 476:
/* Line 1802 of yacc.c  */
#line 1426 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableAppendArrayOffset((yyvsp[(1) - (4)].variable), (yyvsp[(3) - (4)].expression)); }
    break;

  case 477:
/* Line 1802 of yacc.c  */
#line 1427 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 478:
/* Line 1802 of yacc.c  */
#line 1428 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = (yyvsp[(1) - (1)].variable); }
    break;

  case 479:
/* Line 1802 of yacc.c  */
#line 1432 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    {  (yyval.variable) = observers.VariableStart((yyvsp[(1) - (1)].semanticValue)); }
    break;

  case 480:
/* Line 1802 of yacc.c  */
#line 1433 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.variable) = observers.VariableNil(); }
    break;

  case 483:
/* Line 1802 of yacc.c  */
#line 1442 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), (yyvsp[(3) - (3)].statementList)); }
    break;

  case 484:
/* Line 1802 of yacc.c  */
#line 1443 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 485:
/* Line 1802 of yacc.c  */
#line 1447 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMakeAndAppend((yyvsp[(1) - (1)].variable)); }
    break;

  case 486:
/* Line 1802 of yacc.c  */
#line 1448 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 487:
/* Line 1802 of yacc.c  */
#line 1449 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 488:
/* Line 1802 of yacc.c  */
#line 1454 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMake(); }
    break;

  case 489:
/* Line 1802 of yacc.c  */
#line 1455 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 490:
/* Line 1802 of yacc.c  */
#line 1459 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (5)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression))
                                                                                       ); 
																					  }
    break;

  case 491:
/* Line 1802 of yacc.c  */
#line 1463 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (3)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(3) - (3)].expression))
                                                                                       ); 
                                                                                    }
    break;

  case 492:
/* Line 1802 of yacc.c  */
#line 1467 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 493:
/* Line 1802 of yacc.c  */
#line 1468 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(1) - (1)].expression)); }
    break;

  case 494:
/* Line 1802 of yacc.c  */
#line 1469 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (6)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair((yyvsp[(3) - (6)].expression), (yyvsp[(6) - (6)].variable))
                                                                                       ); 
																					  }
    break;

  case 495:
/* Line 1802 of yacc.c  */
#line 1473 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.StatementListMerge((yyvsp[(1) - (4)].statementList), 
                                                                                         observers.ExpressionMakeArrayPair(NULL, (yyvsp[(4) - (4)].variable))
                                                                                       ); 
                                                                                    }
    break;

  case 496:
/* Line 1802 of yacc.c  */
#line 1477 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair((yyvsp[(1) - (4)].expression), (yyvsp[(4) - (4)].variable)); }
    break;

  case 497:
/* Line 1802 of yacc.c  */
#line 1478 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.statementList) = observers.ExpressionMakeArrayPair(NULL, (yyvsp[(2) - (2)].variable)); }
    break;

  case 498:
/* Line 1802 of yacc.c  */
#line 1482 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 499:
/* Line 1802 of yacc.c  */
#line 1483 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (2)].expression); }
    break;

  case 500:
/* Line 1802 of yacc.c  */
#line 1484 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 501:
/* Line 1802 of yacc.c  */
#line 1485 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); }
    break;

  case 502:
/* Line 1802 of yacc.c  */
#line 1491 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 503:
/* Line 1802 of yacc.c  */
#line 1492 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 504:
/* Line 1802 of yacc.c  */
#line 1493 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 505:
/* Line 1802 of yacc.c  */
#line 1494 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 506:
/* Line 1802 of yacc.c  */
#line 1495 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 507:
/* Line 1802 of yacc.c  */
#line 1496 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 508:
/* Line 1802 of yacc.c  */
#line 1501 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 509:
/* Line 1802 of yacc.c  */
#line 1502 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 510:
/* Line 1802 of yacc.c  */
#line 1503 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 511:
/* Line 1802 of yacc.c  */
#line 1508 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(3) - (4)].expression); }
    break;

  case 512:
/* Line 1802 of yacc.c  */
#line 1509 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 513:
/* Line 1802 of yacc.c  */
#line 1510 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 514:
/* Line 1802 of yacc.c  */
#line 1511 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 515:
/* Line 1802 of yacc.c  */
#line 1512 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 516:
/* Line 1802 of yacc.c  */
#line 1513 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionEval((yyvsp[(3) - (4)].expression)); }
    break;

  case 517:
/* Line 1802 of yacc.c  */
#line 1514 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 518:
/* Line 1802 of yacc.c  */
#line 1515 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.IncludeFound((yyvsp[(2) - (2)].expression), analyzer.GetLineNumber()); }
    break;

  case 519:
/* Line 1802 of yacc.c  */
#line 1519 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionIsset((yyvsp[(1) - (1)].expression)); }
    break;

  case 520:
/* Line 1802 of yacc.c  */
#line 1520 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)(yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); }
    break;

  case 521:
/* Line 1802 of yacc.c  */
#line 1524 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].variable); }
    break;

  case 522:
/* Line 1802 of yacc.c  */
#line 1525 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = (yyvsp[(1) - (1)].expression); }
    break;

  case 523:
/* Line 1802 of yacc.c  */
#line 1529 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeClassConstant((yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].semanticValue)); }
    break;

  case 524:
/* Line 1802 of yacc.c  */
#line 1530 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionNil(); }
    break;

  case 525:
/* Line 1802 of yacc.c  */
#line 1534 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (3)].qualifiedName)); }
    break;

  case 526:
/* Line 1802 of yacc.c  */
#line 1538 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"
    { (yyval.expression) = observers.ExpressionMakeScalarFromConstant((yyvsp[(1) - (3)].qualifiedName)); }
    break;


/* Line 1802 of yacc.c  */
#line 7195 "/Users/roberto/Projects/pelet/src/Php56FullParser.cpp"
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
#line 1541 "/Users/roberto/Projects/pelet/src/Php56FullParser.y"

