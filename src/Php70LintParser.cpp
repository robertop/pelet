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
#define yyparse         php70_lint_parse
#define yylex           php70_lint_lex
#define yyerror         php70_lint_error
#define yylval          php70_lint_lval
#define yychar          php70_lint_char
#define yydebug         php70_lint_debug
#define yynerrs         php70_lint_nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php70LintParser.y"


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
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE int

// so that both bison parses call the same lex function
#define php70_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php70_lint_error pelet::LintGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php70LintParser.cpp"

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
extern int php70_lint_debug;
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
     T_SPACESHIP = 634,
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
int php70_lint_parse (void *YYPARSE_PARAM);
#else
int php70_lint_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php70_lint_parse (pelet::LexicalAnalyzerClass &analyzer);
#else
int php70_lint_parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 319 "/Users/roberto/Projects/pelet/src/Php70LintParser.cpp"

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
#define YYLAST   7493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  484
/* YYNRULES -- Number of states.  */
#define YYNSTATES  907

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
      42,    16,    43,    29,    57,     2,     2,     2,     2,     2,
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
       2,     2,    79,    22,    81,    61,    82,    83,    59,    33,
      32,    84,    85,    86,    87,    88,    89,    90,    69,    91,
      92,    24,    93,    94,    95,    96,    65,    97,    98,    99,
      25,   100,   101,   102,   103,    14,    63,   104,    73,    72,
     105,   106,   107,   108,   109,   110,    74,   111,   112,     5,
     113,   114,   115,    78,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    66,     7,     6,   125,    55,   126,    64,
     127,    41,    44,    39,    40,    38,   128,    45,   129,   130,
     131,    11,     9,    10,   132,    27,    23,    26,   133,    70,
     134,   135,   136,    60,   137,   138,   139,    21,   140,    28,
      12,    77,    76,    75,     4,     3,   141,    47,    19,    46,
      18,   142,    80,   143,    62,   144,   145,   146,   147,   148,
     149,   150,    58,   151,   152,   153,   154,   155,    20,   156,
      13,   157,    67,    17,    37,    31,    15,     2,    71
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
     184,   186,   191,   195,   201,   206,   210,   215,   219,   224,
     228,   230,   232,   238,   245,   251,   258,   262,   264,   268,
     270,   274,   276,   278,   281,   283,   287,   289,   292,   296,
     298,   301,   302,   304,   306,   308,   310,   312,   317,   321,
     323,   325,   331,   339,   349,   355,   359,   363,   367,   371,
     375,   379,   381,   384,   390,   398,   408,   414,   416,   423,
     427,   431,   434,   435,   445,   446,   451,   453,   457,   459,
     471,   472,   474,   475,   477,   487,   496,   498,   501,   503,
     505,   512,   520,   521,   524,   525,   528,   529,   532,   534,
     537,   542,   544,   549,   551,   556,   558,   563,   567,   572,
     577,   583,   584,   590,   595,   597,   599,   601,   606,   612,
     619,   621,   625,   632,   640,   644,   651,   653,   654,   656,
     660,   665,   672,   673,   675,   677,   679,   681,   682,   685,
     688,   692,   694,   698,   700,   703,   707,   709,   711,   715,
     717,   719,   723,   726,   727,   731,   735,   739,   750,   752,
     756,   758,   761,   765,   767,   770,   773,   776,   780,   784,
     788,   793,   797,   799,   801,   805,   807,   811,   813,   815,
     816,   818,   820,   823,   825,   827,   829,   831,   833,   835,
     839,   841,   844,   849,   853,   855,   859,   863,   867,   869,
     871,   872,   874,   878,   880,   889,   893,   896,   903,   907,
     912,   915,   919,   923,   927,   931,   935,   939,   943,   947,
     951,   955,   959,   963,   966,   969,   972,   975,   979,   983,
     987,   991,   995,   999,  1003,  1007,  1011,  1015,  1019,  1023,
    1027,  1031,  1035,  1039,  1043,  1046,  1049,  1052,  1055,  1059,
    1063,  1067,  1071,  1075,  1079,  1083,  1087,  1091,  1095,  1099,
    1101,  1107,  1112,  1116,  1118,  1121,  1124,  1127,  1130,  1133,
    1136,  1139,  1142,  1145,  1147,  1151,  1154,  1156,  1159,  1164,
    1167,  1179,  1192,  1194,  1195,  1196,  1198,  1199,  1204,  1208,
    1210,  1212,  1215,  1218,  1223,  1228,  1231,  1233,  1235,  1237,
    1239,  1240,  1244,  1245,  1247,  1249,  1250,  1252,  1257,  1261,
    1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,  1279,  1281,
    1283,  1287,  1290,  1294,  1298,  1300,  1302,  1304,  1308,  1312,
    1313,  1315,  1317,  1319,  1320,  1322,  1324,  1326,  1330,  1332,
    1334,  1338,  1340,  1342,  1347,  1352,  1357,  1362,  1364,  1366,
    1368,  1372,  1374,  1379,  1382,  1386,  1390,  1392,  1397,  1402,
    1406,  1410,  1414,  1416,  1420,  1422,  1424,  1428,  1430,  1434,
    1436,  1438,  1443,  1444,  1445,  1448,  1452,  1454,  1458,  1460,
    1465,  1468,  1471,  1474,  1476,  1479,  1481,  1486,  1490,  1494,
    1498,  1505,  1509,  1511,  1513,  1515,  1520,  1525,  1528,  1531,
    1536,  1539,  1542,  1544,  1548
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
     135,   173,    -1,   135,   173,    -1,   188,    -1,   193,    -1,
     196,    -1,   199,    -1,   200,    -1,   122,   160,   161,   162,
      -1,   133,   173,   162,    -1,   133,   173,   158,   172,   159,
      -1,   133,   158,   172,   159,    -1,   151,   178,   162,    -1,
     151,   176,   177,   162,    -1,   151,   181,   162,    -1,   151,
     176,   181,   162,    -1,    93,   185,   162,    -1,   119,    -1,
      93,    -1,   173,   135,   158,   180,   159,    -1,   135,   173,
     135,   158,   180,   159,    -1,   173,   135,   158,   179,   159,
      -1,   135,   173,   135,   158,   179,   159,    -1,   179,     8,
     182,    -1,   182,    -1,   180,     8,   183,    -1,   183,    -1,
     181,     8,   184,    -1,   184,    -1,   183,    -1,   176,   183,
      -1,   173,    -1,   173,    82,   143,    -1,   183,    -1,   135,
     183,    -1,   185,     8,   248,    -1,   248,    -1,   186,   187,
      -1,    -1,   188,    -1,   193,    -1,   196,    -1,   199,    -1,
     200,    -1,   122,   160,   161,   162,    -1,   158,   186,   159,
      -1,   213,    -1,   215,    -1,   154,   160,   272,   161,   211,
      -1,   101,   188,   154,   160,   272,   161,   162,    -1,   116,
     160,   251,   162,   251,   162,   251,   161,   205,    -1,   145,
     160,   272,   161,   208,    -1,    84,   273,   162,    -1,    95,
     273,   162,    -1,   141,   273,   162,    -1,   120,   225,   162,
      -1,    80,   227,   162,    -1,   104,   249,   162,    -1,   125,
      -1,   272,   162,    -1,   150,   160,   191,   161,   162,    -1,
     117,   160,   272,    82,   204,   161,   206,    -1,   117,   160,
     272,    82,   204,    14,   204,   161,   206,    -1,    97,   160,
     185,   161,   207,    -1,   162,    -1,   149,   158,   186,   159,
     189,   190,    -1,   146,   272,   162,    -1,   121,   143,   162,
      -1,   143,    30,    -1,    -1,   189,    87,   160,   174,   153,
     161,   158,   186,   159,    -1,    -1,   156,   158,   186,   159,
      -1,   192,    -1,   191,     8,   192,    -1,   278,    -1,   256,
     258,   143,   257,   160,   216,   161,   221,   158,   186,   159,
      -1,    -1,    36,    -1,    -1,   157,    -1,   197,    89,   143,
     201,   203,   257,   158,   229,   159,    -1,    89,   143,   201,
     203,   257,   158,   229,   159,    -1,   198,    -1,   197,   198,
      -1,    79,    -1,    78,    -1,   147,   143,   257,   158,   229,
     159,    -1,   127,   143,   202,   257,   158,   229,   159,    -1,
      -1,   114,   174,    -1,    -1,   114,   231,    -1,    -1,   124,
     231,    -1,   278,    -1,    36,   278,    -1,   130,   160,   284,
     161,    -1,   188,    -1,    30,   186,   108,   162,    -1,   188,
      -1,    30,   186,   109,   162,    -1,   188,    -1,    30,   186,
     107,   162,    -1,   158,   209,   159,    -1,   158,   162,   209,
     159,    -1,    30,   209,   111,   162,    -1,    30,   162,   209,
     111,   162,    -1,    -1,   209,    86,   272,   210,   186,    -1,
     209,    98,   210,   186,    -1,    30,    -1,   162,    -1,   188,
      -1,    30,   186,   112,   162,    -1,   123,   160,   272,   161,
     188,    -1,   212,    72,   160,   272,   161,   188,    -1,   212,
      -1,   212,    73,   188,    -1,   123,   160,   272,   161,    30,
     186,    -1,   214,    72,   160,   272,   161,    30,   186,    -1,
     214,    74,   162,    -1,   214,    73,    30,   186,    74,   162,
      -1,   217,    -1,    -1,   218,    -1,   217,     8,   218,    -1,
     219,   194,   195,   153,    -1,   219,   194,   195,   153,    16,
     272,    -1,    -1,   220,    -1,    81,    -1,    85,    -1,   174,
      -1,    -1,    30,   220,    -1,   160,   161,    -1,   160,   223,
     161,    -1,   224,    -1,   223,     8,   224,    -1,   272,    -1,
     157,   272,    -1,   225,     8,   226,    -1,   226,    -1,   279,
      -1,   227,     8,   228,    -1,   228,    -1,   153,    -1,   153,
      16,   272,    -1,   229,   230,    -1,    -1,   240,   244,   162,
      -1,    93,   246,   162,    -1,   151,   231,   232,    -1,   241,
     256,   258,   171,   257,   160,   216,   161,   221,   239,    -1,
     174,    -1,   231,     8,   174,    -1,   162,    -1,   158,   159,
      -1,   158,   233,   159,    -1,   234,    -1,   233,   234,    -1,
     235,   162,    -1,   236,   162,    -1,   238,   126,   231,    -1,
     237,    82,   143,    -1,   237,    82,   169,    -1,   237,    82,
     243,   171,    -1,   237,    82,   243,    -1,   171,    -1,   238,
      -1,   174,   140,   171,    -1,   162,    -1,   158,   186,   159,
      -1,   242,    -1,   152,    -1,    -1,   242,    -1,   243,    -1,
     242,   243,    -1,    75,    -1,    76,    -1,    77,    -1,    80,
      -1,    79,    -1,    78,    -1,   244,     8,   245,    -1,   245,
      -1,   153,   257,    -1,   153,    16,   272,   257,    -1,   246,
       8,   247,    -1,   247,    -1,   171,    16,   272,    -1,   143,
      16,   272,    -1,   249,     8,   250,    -1,   250,    -1,   272,
      -1,    -1,   252,    -1,   252,     8,   272,    -1,   272,    -1,
      89,   267,   201,   203,   257,   158,   229,   159,    -1,    70,
     264,   267,    -1,    70,   253,    -1,   130,   160,   284,   161,
      16,   272,    -1,   278,    16,   272,    -1,   278,    16,    36,
     278,    -1,    69,   272,    -1,   278,    28,   272,    -1,   278,
      27,   272,    -1,   278,    26,   272,    -1,   278,    17,   272,
      -1,   278,    25,   272,    -1,   278,    24,   272,    -1,   278,
      23,   272,    -1,   278,    22,   272,    -1,   278,    21,   272,
      -1,   278,    20,   272,    -1,   278,    19,   272,    -1,   278,
      18,   272,    -1,   278,    66,    -1,    66,   278,    -1,   278,
      65,    -1,    65,   278,    -1,   272,    32,   272,    -1,   272,
      33,   272,    -1,   272,     9,   272,    -1,   272,    11,   272,
      -1,   272,    10,   272,    -1,   272,    34,   272,    -1,   272,
      36,   272,    -1,   272,    35,   272,    -1,   272,    50,   272,
      -1,   272,    48,   272,    -1,   272,    49,   272,    -1,   272,
      51,   272,    -1,   272,    67,   272,    -1,   272,    52,   272,
      -1,   272,    53,   272,    -1,   272,    47,   272,    -1,   272,
      46,   272,    -1,    48,   272,    -1,    49,   272,    -1,    54,
     272,    -1,    56,   272,    -1,   272,    39,   272,    -1,   272,
      38,   272,    -1,   272,    41,   272,    -1,   272,    40,   272,
      -1,   272,    42,   272,    -1,   272,    45,   272,    -1,   272,
      43,   272,    -1,   272,    44,   272,    -1,   272,    37,   272,
      -1,   272,    55,   264,    -1,   160,   272,   161,    -1,   254,
      -1,   272,    29,   272,    30,   272,    -1,   272,    29,    30,
     272,    -1,   272,    31,   272,    -1,   292,    -1,    64,   272,
      -1,    63,   272,    -1,    62,   272,    -1,    61,   272,    -1,
      60,   272,    -1,    59,   272,    -1,    58,   272,    -1,   113,
     265,    -1,    57,   272,    -1,   269,    -1,   163,   266,   163,
      -1,    12,   272,    -1,    13,    -1,    13,   272,    -1,    13,
     272,    14,   272,    -1,    15,   272,    -1,   256,   258,   257,
     160,   216,   161,   259,   221,   158,   186,   159,    -1,    80,
     256,   258,   257,   160,   216,   161,   259,   221,   158,   186,
     159,    -1,   119,    -1,    -1,    -1,    36,    -1,    -1,   151,
     160,   260,   161,    -1,   260,     8,   261,    -1,   261,    -1,
     153,    -1,    36,   153,    -1,   174,   222,    -1,   263,   140,
     282,   222,    -1,   274,   140,   282,   222,    -1,   276,   222,
      -1,    80,    -1,   174,    -1,   263,    -1,   281,    -1,    -1,
     160,   273,   161,    -1,    -1,   106,    -1,   289,    -1,    -1,
     222,    -1,    81,   160,   286,   161,    -1,    68,   286,   166,
      -1,    94,    -1,   131,    -1,   100,    -1,   129,    -1,   115,
      -1,    99,    -1,   148,    -1,   132,    -1,   118,    -1,   134,
      -1,    90,    -1,   142,   106,   110,    -1,   142,   110,    -1,
     165,   289,   165,    -1,   142,   289,   110,    -1,   268,    -1,
     270,    -1,   174,    -1,   263,   140,   171,    -1,   274,   140,
     171,    -1,    -1,     8,    -1,   278,    -1,   255,    -1,    -1,
     272,    -1,   275,    -1,   278,    -1,   160,   272,   161,    -1,
     268,    -1,   277,    -1,   160,   272,   161,    -1,   268,    -1,
     279,    -1,   275,    68,   273,   166,    -1,   270,    68,   273,
     166,    -1,   275,   158,   272,   159,    -1,   275,   137,   283,
     222,    -1,   262,    -1,   277,    -1,   280,    -1,   275,   137,
     283,    -1,   153,    -1,   164,   158,   272,   159,    -1,   164,
     279,    -1,   263,   140,   279,    -1,   274,   140,   279,    -1,
     279,    -1,   281,    68,   273,   166,    -1,   281,   158,   272,
     159,    -1,   281,   137,   283,    -1,   263,   140,   279,    -1,
     281,   140,   279,    -1,   171,    -1,   158,   272,   159,    -1,
     279,    -1,   143,    -1,   158,   272,   159,    -1,   279,    -1,
     284,     8,   285,    -1,   285,    -1,   278,    -1,   130,   160,
     284,   161,    -1,    -1,    -1,   287,   271,    -1,   287,     8,
     288,    -1,   288,    -1,   272,    14,   272,    -1,   272,    -1,
     272,    14,    36,   278,    -1,    36,   278,    -1,   289,   290,
      -1,   289,   106,    -1,   290,    -1,   106,   290,    -1,   153,
      -1,   153,    68,   291,   166,    -1,   153,   137,   143,    -1,
     103,   272,   159,    -1,   103,   144,   159,    -1,   103,   144,
      68,   272,   166,   159,    -1,    96,   278,   159,    -1,   143,
      -1,   136,    -1,   153,    -1,   128,   160,   293,   161,    -1,
     105,   160,   272,   161,    -1,     7,   272,    -1,     6,   272,
      -1,     5,   160,   272,   161,    -1,     4,   272,    -1,     3,
     272,    -1,   294,    -1,   293,     8,   294,    -1,   272,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   242,   242,   246,   246,   246,   246,   246,   246,   246,
     246,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   251,   251,   251,   251,   251,   251,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
     256,   257,   257,   257,   257,   257,   257,   261,   262,   266,
     267,   271,   272,   276,   277,   278,   282,   283,   284,   285,
     286,   287,   289,   291,   294,   297,   298,   299,   300,   301,
     305,   306,   310,   312,   317,   319,   324,   326,   331,   333,
     338,   340,   345,   346,   350,   352,   357,   358,   362,   363,
     367,   369,   375,   376,   377,   378,   379,   380,   386,   387,
     388,   389,   391,   393,   395,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   408,   411,   415,   416,   418,
     419,   420,   423,   426,   430,   432,   436,   437,   441,   445,
     450,   452,   455,   457,   461,   464,   470,   471,   475,   476,
     480,   486,   491,   493,   496,   498,   501,   503,   507,   508,
     509,   513,   514,   518,   519,   523,   524,   528,   529,   530,
     531,   534,   536,   538,   543,   544,   549,   550,   555,   557,
     562,   563,   568,   570,   575,   576,   581,   582,   587,   589,
     594,   596,   601,   603,   607,   608,   609,   612,   614,   618,
     619,   623,   625,   630,   631,   635,   636,   640,   646,   647,
     651,   652,   657,   659,   665,   667,   669,   671,   677,   678,
     682,   683,   684,   688,   690,   695,   696,   700,   705,   707,
     709,   711,   716,   718,   722,   727,   728,   732,   733,   736,
     738,   743,   744,   749,   750,   751,   752,   753,   754,   758,
     759,   763,   765,   770,   771,   775,   779,   783,   784,   787,
     790,   792,   796,   797,   801,   806,   808,   813,   815,   817,
     819,   820,   822,   824,   826,   828,   830,   832,   834,   836,
     838,   840,   842,   844,   845,   846,   847,   848,   850,   852,
     854,   856,   858,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   876,
     878,   880,   882,   884,   886,   888,   890,   892,   894,   895,
     896,   898,   900,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   922,   928,   931,   935,   937,   940,   942,   946,   947,
     951,   952,   956,   958,   960,   962,   967,   969,   973,   974,
     977,   979,   982,   985,   986,   990,   992,   997,   998,   999,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,  1016,  1017,  1018,  1019,  1023,  1024,  1026,  1030,
    1032,  1036,  1037,  1040,  1042,  1046,  1050,  1051,  1052,  1056,
    1057,  1058,  1062,  1064,  1066,  1068,  1070,  1072,  1076,  1078,
    1080,  1085,  1086,  1087,  1091,  1093,  1098,  1100,  1102,  1104,
    1106,  1108,  1113,  1114,  1115,  1119,  1120,  1121,  1125,  1127,
    1132,  1133,  1134,  1138,  1140,  1144,  1146,  1151,  1153,  1154,
    1156,  1161,  1163,  1165,  1167,  1172,  1174,  1176,  1178,  1180,
    1182,  1184,  1188,  1189,  1190,  1195,  1196,  1197,  1199,  1201,
    1203,  1205,  1210,  1211,  1216
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
  "'&'", "T_SPACESHIP", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL",
  "T_IS_NOT_EQUAL", "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "T_POW", "'['",
  "T_CLONE", "T_NEW", "T_NOELSE", "T_ELSEIF", "T_ELSE", "T_ENDIF",
  "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL", "T_ABSTRACT",
  "T_STATIC", "T_ARRAY", "T_AS", "T_BAD_CHARACTER", "T_BREAK",
  "T_CALLABLE", "T_CASE", "T_CATCH", "T_CHARACTER", "T_CLASS", "T_CLASS_C",
  "T_CLOSE_TAG", "T_COMMENT", "T_CONST", "T_CONSTANT_ENCAPSED_STRING",
  "T_CONTINUE", "T_CURLY_OPEN", "T_DECLARE", "T_DEFAULT", "T_DIR",
  "T_DNUMBER", "T_DO", "T_DOC_COMMENT", "T_DOLLAR_OPEN_CURLY_BRACES",
  "T_ECHO", "T_EMPTY", "T_ENCAPSED_AND_WHITESPACE", "T_ENDDECLARE",
  "T_ENDFOR", "T_ENDFOREACH", "T_END_HEREDOC", "T_ENDSWITCH", "T_ENDWHILE",
  "T_EXIT", "T_EXTENDS", "T_FILE", "T_FOR", "T_FOREACH", "T_FUNC_C",
  "T_FUNCTION", "T_GLOBAL", "T_GOTO", "T_HALT_COMPILER", "T_IF",
  "T_IMPLEMENTS", "T_INLINE_HTML", "T_INSTEADOF", "T_INTERFACE", "T_ISSET",
  "T_LINE", "T_LIST", "T_LNUMBER", "T_METHOD_C", "T_NAMESPACE", "T_NS_C",
  "T_NS_SEPARATOR", "T_NUM_STRING", "T_OBJECT_OPERATOR", "T_OPEN_TAG",
  "T_OPEN_TAG_WITH_ECHO", "T_PAAMAYIM_NEKUDOTAYIM", "T_RETURN",
  "T_START_HEREDOC", "T_STRING", "T_STRING_VARNAME", "T_SWITCH", "T_THROW",
  "T_TRAIT", "T_TRAIT_C", "T_TRY", "T_UNSET", "T_USE", "T_VAR",
  "T_VARIABLE", "T_WHILE", "T_WHITESPACE", "T_FINALLY", "T_ELLIPSIS",
  "'{'", "'}'", "'('", "')'", "';'", "'`'", "'$'", "'\"'", "']'",
  "$accept", "start", "reserved_non_modifiers", "semi_reserved",
  "identifier", "top_statement_list", "namespace_name", "name",
  "top_statement", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "catch_list", "finally_statement",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "is_reference", "is_variadic", "class_declaration_statement",
  "class_modifiers", "class_modifier", "trait_declaration_statement",
  "interface_declaration_statement", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment", "returns_ref",
  "lexical_vars", "lexical_var_list", "lexical_var", "function_call",
  "class_name", "class_name_reference", "exit_expr", "backticks_expr",
  "ctor_arguments", "dereferencable_scalar", "scalar", "constant",
  "possible_comma", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "assignment_list", "assignment_list_element",
  "array_pair_list", "non_empty_array_pair_list", "array_pair",
  "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULL
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
      58,   635,   510,   509,   124,    94,    38,   634,   575,   573,
     574,   571,    60,    62,   572,   577,   609,   607,    43,    45,
      46,    42,    47,    37,    33,   567,   126,    64,   622,   508,
     593,   505,   614,   536,   569,   526,   563,   632,    91,   518,
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
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   187,   187,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   208,
     208,   209,   209,   209,   210,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   227,   227,
     228,   228,   229,   229,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   233,   233,   234,   234,   235,   236,   236,
     236,   236,   237,   237,   238,   239,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   243,   243,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   248,   249,   249,   250,
     251,   251,   252,   252,   253,   254,   254,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   256,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   268,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   270,   270,   270,   271,
     271,   272,   272,   273,   273,   274,   275,   275,   275,   276,
     276,   276,   277,   277,   277,   277,   277,   277,   278,   278,
     278,   279,   279,   279,   280,   280,   281,   281,   281,   281,
     281,   281,   282,   282,   282,   283,   283,   283,   284,   284,
     285,   285,   285,   286,   286,   287,   287,   288,   288,   288,
     288,   289,   289,   289,   289,   290,   290,   290,   290,   290,
     290,   290,   291,   291,   291,   292,   292,   292,   292,   292,
     292,   292,   293,   293,   294
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
       1,     4,     3,     5,     4,     3,     4,     3,     4,     3,
       1,     1,     5,     6,     5,     6,     3,     1,     3,     1,
       3,     1,     1,     2,     1,     3,     1,     2,     3,     1,
       2,     0,     1,     1,     1,     1,     1,     4,     3,     1,
       1,     5,     7,     9,     5,     3,     3,     3,     3,     3,
       3,     1,     2,     5,     7,     9,     5,     1,     6,     3,
       3,     2,     0,     9,     0,     4,     1,     3,     1,    11,
       0,     1,     0,     1,     9,     8,     1,     2,     1,     1,
       6,     7,     0,     2,     0,     2,     0,     2,     1,     2,
       4,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     1,     4,     5,     6,
       1,     3,     6,     7,     3,     6,     1,     0,     1,     3,
       4,     6,     0,     1,     1,     1,     1,     0,     2,     2,
       3,     1,     3,     1,     2,     3,     1,     1,     3,     1,
       1,     3,     2,     0,     3,     3,     3,    10,     1,     3,
       1,     2,     3,     1,     2,     2,     2,     3,     3,     3,
       4,     3,     1,     1,     3,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     4,     3,     1,     3,     3,     3,     1,     1,
       0,     1,     3,     1,     8,     3,     2,     6,     3,     4,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     4,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     2,     1,     2,     4,     2,
      11,    12,     1,     0,     0,     1,     0,     4,     3,     1,
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
     356,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,     0,   169,
     168,   376,     0,   413,     0,   399,     0,   389,   413,     0,
     394,   391,     0,     0,     0,   380,   393,     0,     0,   397,
     362,     0,     0,     0,     0,   141,     0,     0,   392,     0,
     390,   396,     0,   398,     0,   413,     0,    81,     0,     0,
       0,   395,     0,     0,     0,   431,     0,   121,     0,   147,
     382,     0,     0,    83,   406,    79,    86,    87,    88,     0,
     166,    89,    90,   200,   129,     0,   130,   339,   412,   364,
     427,     0,   404,   353,   405,     0,     0,   415,     0,   428,
     411,   422,   429,   343,   376,     0,    81,   364,   481,   480,
       0,   478,   477,   355,   357,   359,   324,   325,   326,   327,
     352,   350,   349,   348,   347,   346,   345,   344,   376,     0,
     418,     0,   306,   304,     0,   458,     0,   409,   456,   290,
     385,   377,   286,   378,   385,   436,   379,   230,     0,   229,
     364,   453,   414,     0,   172,     0,     0,   119,     0,     0,
       0,     0,   278,   279,     0,   413,   351,   280,     0,     0,
     226,   227,     0,     0,     0,   174,     0,   452,     0,    80,
       0,    85,     0,     0,     0,     0,   401,   465,     0,   463,
     151,     0,     0,   363,   121,     0,   101,   100,     0,   114,
       0,     0,     0,   116,   111,     0,     0,     0,   383,     0,
     384,     0,   433,     0,     0,     0,     0,   372,     0,   167,
       0,     0,     0,     0,     0,   365,   363,     0,   413,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
     413,     0,     0,   375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,   303,   363,
       0,     0,     0,   416,     0,   388,   410,   454,   386,   172,
       0,   285,   413,     0,     0,     0,     0,     0,   139,   363,
       0,   135,     0,   176,     0,     0,    99,   136,     0,     0,
       0,   140,     0,     0,     0,   281,   283,     0,     0,   138,
     150,     0,     0,     0,   363,   484,     0,   482,     0,   416,
       0,   449,    84,     0,    80,    92,   137,   416,     0,     0,
     400,   464,     0,     0,   462,   403,   461,     0,   149,     0,
       0,     0,   156,   416,   114,   117,     0,     0,     0,   114,
       0,     0,    95,     0,    97,     0,     0,   128,   120,   122,
     123,   124,   125,   126,   338,   354,     0,   402,    82,     0,
     219,     0,   221,   223,   172,     0,   201,     0,   121,   204,
     363,     0,     7,     6,     5,     4,     3,     8,     9,    10,
      46,    47,    11,    13,    12,    16,    17,    18,    76,    75,
      74,    73,    72,    71,    54,    29,    53,    55,    51,    31,
      61,    62,    44,    41,    27,    52,    68,    20,    19,    40,
      28,    24,    26,    50,    22,    14,    56,    67,    23,    25,
      64,    43,    36,    42,    15,    57,    35,    60,    39,    66,
      48,    65,    58,    69,    45,    77,    49,    33,    59,    63,
      30,    38,    34,    37,    21,    32,     0,    70,    78,   407,
     434,     0,     0,   309,   311,   310,     0,     0,   342,   307,
     308,   312,   314,   313,   336,   329,   328,   331,   330,   332,
     334,   335,   333,   323,   322,   316,   317,   315,   318,   320,
     321,   337,   319,   408,   435,     0,     0,   445,     0,   447,
     430,     0,     0,   288,   294,   302,   301,   300,   299,   298,
     297,   296,   295,   293,   292,   291,   479,   358,   417,     0,
     457,   455,   176,   440,     0,   439,   441,     0,   231,   228,
       0,   387,   173,     0,   363,   276,   118,     0,     0,   277,
     476,   381,   280,     0,     0,   225,    91,     0,   238,   175,
       0,     0,   475,   452,   452,     0,    94,     0,   471,     0,
     469,   468,   473,   472,   474,     0,   467,     0,   233,   152,
       0,     0,     0,   115,     0,   114,     0,    96,    98,     0,
     114,   110,     0,     0,   432,   224,     0,   220,   176,     0,
       0,     0,     0,   212,     0,   373,   424,   341,     0,   374,
     423,     0,   426,   425,   289,   416,   363,   437,   438,   212,
     177,     0,   121,   185,   146,     0,     0,   282,     0,     0,
       0,   416,   121,   198,     0,   233,   483,     0,   448,     0,
      93,     0,   466,   191,   191,   134,   259,   154,   157,   143,
       0,     0,     0,   107,   112,     0,     0,   121,   196,   131,
       0,   222,   363,     0,     0,     0,   212,   214,   215,   216,
       0,   206,   208,   160,   213,   443,   340,   446,     0,     0,
     233,     0,     0,   280,   416,   452,     0,     0,   202,   239,
     259,   451,   287,     0,   191,     0,   191,     0,   263,   264,
     265,   268,   267,   266,     0,     0,   258,   170,   232,     0,
       0,   257,   261,     0,     0,   148,     0,   113,     0,   104,
       0,     0,   109,     0,   127,     0,   199,   121,   205,     0,
     366,   212,   161,   162,   233,   366,   259,     0,   132,     0,
       0,     0,   121,   183,   144,   171,   470,     0,     0,     0,
       0,     0,   187,     0,     0,   274,     0,   363,     0,   270,
     364,   262,     0,   121,   105,   106,     0,     0,   102,     0,
     233,   203,   217,     0,   217,   209,   163,     0,   259,   217,
     165,   186,     0,   180,     0,     0,     0,     0,   194,   195,
     121,   189,   188,     0,     0,   235,     0,   240,   236,     0,
     271,     0,   234,     0,     0,     0,   103,   108,   197,   259,
       0,     0,     0,     0,   210,   284,     0,   121,   181,   133,
     145,     0,   190,   121,   193,   275,   273,    58,    81,   241,
     252,     0,     0,   243,     0,     0,     0,   253,   363,   269,
     363,     0,   155,   164,   218,   121,     0,   370,     0,   369,
     121,     0,   121,     0,   184,   192,     0,   242,   244,   245,
     246,     0,     0,   272,     0,     0,     0,   371,     0,   367,
       0,   211,     0,     0,   254,   248,   249,   251,   247,   212,
     121,   159,   368,   360,   361,   182,   250,     0,     0,   217,
     153,     0,   121,   255,   237,     0,   256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   477,   478,   763,     2,    83,    84,    85,   661,
     370,   211,   662,   731,   212,   663,   213,   214,   166,   216,
     378,   379,   657,   725,   361,   362,   380,   743,   787,   381,
      89,    90,   382,   383,   313,   334,   554,   640,   829,   754,
     634,   655,   705,   800,   669,    93,    94,    95,    96,   680,
     681,   682,   683,   684,   821,   298,   391,   392,   179,   180,
     158,   159,   656,   718,   569,   808,   842,   843,   844,   845,
     846,   847,   904,   719,   720,   721,   722,   768,   769,   764,
     765,   167,   171,   172,   324,   325,   152,    97,    98,   117,
     401,   236,   784,   858,   859,   100,   101,   154,   176,   219,
     299,   102,   103,   104,   297,   105,   163,   106,   107,   108,
     109,   110,   111,   112,   156,   481,   520,   340,   341,   146,
     147,   148,   198,   199,   585,   113,   336,   337
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -702
static const yytype_int16 yypact[] =
{
    -702,   105,  1220,  -702,  5610,  5610,   -49,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,   376,   376,  4777,  5610,   551,  -702,
    -702,   -45,   -47,  5610,   100,  -702,   102,  -702,  5610,   -19,
    -702,  -702,  4480,  5610,    84,    86,  -702,    87,    88,  -702,
    -702,   171,   107,   109,   110,  -702,   124,   119,  -702,   188,
    -702,  -702,   133,  -702,   211,  5610,   368,   330,   243,  5610,
     224,  -702,   213,   270,   315,  -702,   273,  -702,  5610,  -702,
     446,   -26,   448,   234,   -31,  -702,  -702,  -702,  -702,   239,
    -702,  -702,  -702,   381,  -702,   374,  -702,  -702,  -702,   400,
    -702,   311,    96,  -702,   394,  6523,   323,   101,   306,   309,
    4661,  -702,  -702,  -702,   357,   377,  -702,   400,  7426,  7426,
    5610,  7426,  7426,  1694,  5914,  1694,   440,   440,   -30,   440,
     440,   440,   440,   440,   440,   440,   440,   440,  -702,  5610,
     355,   394,   162,   162,   376,  7332,   350,   517,  -702,  -702,
     306,  -702,  -702,   386,   306,  -702,   174,   522,    20,  -702,
     400,  4777,  7426,   379,   425,   527,    26,  -702,   391,   102,
     401,    28,  -702,  7426,  5610,  5610,  -702,  5610,  5610,    30,
    -702,  -702,   398,   402,  5610,   453,  5610,   465,   211,  -702,
     169,   234,   406,   376,  4911,   417,  -702,    97,   568,  -702,
    -702,  5610,  6570,  -702,  -702,   376,  -702,  -702,   211,   146,
     195,   407,    31,  -702,  -702,  5610,  1383,  6617,   269,   409,
     520,  5610,  -702,   269,   369,   421,  4643,  -702,   430,  -702,
     416,  4480,   418,   555,   428,  -702,   454,  5773,  5610,  5610,
    5610,  5610,  5074,  5610,  5610,  5610,  5610,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,  5610,  5610,   142,  5610,  -702,  5773,
    5610,   449,  5610,  -702,  5208,  5610,  5610,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,  5610,  5610,  5610,  -702,  -702,  -702,
    6664,  5610,  6712,    15,  5342,  -702,  4777,  -702,  -702,   425,
     171,  -702,  5610,   449,   171,  5610,  5610,   438,  -702,  -702,
     435,  -702,   375,   479,  5610,   102,  -702,  -702,    35,   445,
    5610,  -702,  6759,   459,   452,   616,  7426,  7280,   171,  -702,
    -702,   466,  6807,   375,  -702,  7426,    41,  -702,   467,    46,
      48,  -702,   234,   894,  -702,  -702,  -702,   473,   -44,   879,
    -702,  -702,   292,   490,  -702,  -702,  -702,  6854,  -702,   477,
    1546,    55,  -702,    57,   158,  -702,   493,   -27,   211,   202,
     476,    32,  -702,   209,  -702,  6902,   481,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,   143,  -702,  5758,  -702,  -702,  5610,
    -702,    58,  -702,  7426,   425,  5610,  -702,  5610,  -702,  -702,
    -702,   482,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  5610,  -702,  -702,   484,
     486,   306,   483,  6076,  1857,  1694,  5610,  7379,  2020,  2181,
    2344,  2507,  2667,  2829,  2992,  2992,  2992,  2992,  2992,  1043,
    1043,  1043,  1043,   725,   725,   372,   372,   372,   -30,   -30,
     -30,  -702,   440,   484,   486,   306,   491,  -702,  5610,  -702,
     306,  7092,   376,  1694,  1694,  1694,  1694,  1694,  1694,  1694,
    1694,  1694,  1694,  1694,  1694,  1694,  -702,  1694,   487,   376,
    7426,  -702,   479,  -702,   492,  -702,  -702,  7139,  7426,  -702,
     488,  -702,  -702,   375,  -702,  7426,  -702,  3665,  5610,  -702,
    -702,  -702,  5610,  5610,   669,  -702,  -702,  3828,  -702,   642,
     494,  5610,  -702,   465,   465,   646,  -702,  1057,  -702,  5610,
    -702,  -702,  -702,  -702,  -702,   497,  -702,     2,  -702,  -702,
     376,   504,   197,  -702,   173,   204,   206,  -702,  -702,   211,
     207,  -702,  3991,   506,  -702,  7426,  5476,  -702,   479,  6949,
    6997,  1709,   515,   172,  7186,  -702,  -702,  2020,  5610,  -702,
    -702,  7233,  -702,  -702,   162,    25,  -702,  -702,  -702,   172,
     642,   518,  -702,  -702,  -702,  7044,   519,  7426,   376,   523,
      37,    63,  -702,  -702,   375,  -702,  -702,    59,  -702,  5610,
    -702,    51,  -702,   529,   530,  -702,   689,   -35,  -702,  -702,
     173,   211,    13,  -702,  -702,   208,   211,  -702,  -702,  -702,
     533,  -702,  -702,  4480,   652,   537,   172,  -702,  -702,  -702,
     541,   695,  -702,   672,  -702,  -702,  2020,  -702,   553,   548,
    -702,  1872,   557,  5610,    64,   465,   669,  4154,  3502,  -702,
     925,  -702,  1694,   554,  -702,   151,  -702,   166,  -702,  -702,
    -702,  -702,  -702,  -702,  6243,   375,  -702,  -702,  -702,   564,
     357,   681,  -702,   560,   566,  -702,    40,  -702,   173,  -702,
     211,    47,  -702,  2035,  -702,   569,  -702,  -702,  -702,   561,
     578,    -9,  -702,   577,  -702,   578,  1088,   576,  -702,   579,
      60,   581,  -702,  -702,  -702,  -702,  -702,   259,  5610,    -3,
     582,   175,  -702,   723,    33,  -702,    22,   727,    39,  -702,
     400,  -702,   375,  -702,  -702,  -702,    56,   211,  -702,   583,
    -702,  3502,   716,   588,   716,  -702,  -702,   598,  1251,   716,
    -702,  -702,  4317,  -702,  4154,  2198,   590,   450,  -702,  -702,
    -702,  -702,  -702,  5610,  6243,  -702,  5929,  -702,  -702,  5610,
    -702,   564,  -702,  6243,   601,  2361,  -702,  -702,  -702,  1414,
      -9,   597,    14,   604,   754,  -702,   613,  -702,  -702,  -702,
    -702,   621,  -702,  -702,  3502,  7426,  -702,   377,   703,  -702,
    -702,   647,  6086,  -702,   624,   626,   707,   668,  7426,  -702,
    -702,   636,  -702,  -702,  -702,  -702,   648,  -702,    62,  -702,
    -702,  5610,  -702,  2524,  -702,  3502,  6243,  -702,  -702,  -702,
    -702,  6397,   375,  -702,   643,   649,  2687,  -702,    14,  -702,
    2850,  7426,  3013,   644,  -702,  -702,  -702,  6243,   642,   172,
    -702,  -702,  -702,  -702,  -702,  -702,  -702,   650,  3176,   716,
    -702,   -48,  -702,  -702,  -702,  3339,  -702
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -702,  -702,   -66,  -702,  -227,  -170,    -5,   -25,  -702,   734,
    -702,  -702,   149,    80,   605,    90,  -193,   441,   651,  -190,
    -702,     4,  -702,  -702,  -702,   226,     0,  -702,  -702,     3,
    -702,   730,    10,    16,  -264,  -702,  -471,   125,  -702,    29,
    -702,  -702,  -581,    27,  -702,  -702,  -702,  -702,  -702,  -618,
    -702,    85,  -702,     5,  -667,   -77,  -702,   221,  -702,   502,
    -702,   524,  -418,  -702,  -549,  -702,  -702,    -7,  -702,  -702,
    -702,  -702,  -702,  -702,  -702,  -702,  -701,  -702,    23,  -702,
      34,   521,  -702,   525,  -483,  -702,  -702,  -702,  -702,    -2,
    -122,  -116,    92,  -702,   -39,  -702,   -15,   580,  -702,  -702,
     688,   -16,  -702,    -8,  -702,   135,   -12,  -702,  -702,  -702,
    -702,    95,    -6,  -702,  -702,   574,   546,  -466,   276,   683,
    -702,   556,    53,   512,  -702,  -702,  -702,   280
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -461
static const yytype_int16 yytable[] =
{
      99,   289,    87,   151,   630,    88,    86,   227,   140,   140,
     479,   689,    91,   153,   360,   365,   141,   141,    92,   343,
     771,   728,   155,  -460,   579,   266,   168,   798,   307,   160,
     644,   273,   653,  -459,   315,   542,   320,   267,   328,   373,
     373,   804,   513,   315,   309,   181,   170,   811,   728,   571,
     856,   696,   723,   192,  -450,   777,   574,   190,   739,   191,
     239,   240,   241,   590,   777,  -158,   606,   574,   574,   209,
     878,   626,   677,   707,    50,   222,   678,  -178,  -179,   636,
     242,   359,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     3,   266,   647,   157,  -377,
     902,   120,   160,   161,   903,   580,   388,   823,   267,   142,
     143,   724,   826,   757,   115,   761,    64,    75,   140,   226,
     608,   594,   221,   220,   116,   224,   141,   672,    81,   118,
     119,   169,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   799,
     654,   145,   149,   323,  -418,   352,   766,   857,   162,   270,
     887,   140,   729,   162,   577,   365,  -460,   140,   173,   141,
     806,  -460,   308,   342,   807,   141,  -459,   550,   316,   140,
     321,  -459,   329,   374,   598,   805,   557,   141,   697,   774,
     162,   812,   572,   364,   202,   369,   778,  -450,   611,   575,
     749,  -417,   570,   217,    99,   816,   591,   703,  -158,   607,
     701,   793,   138,   879,  -178,  -179,   482,   700,   366,   750,
    -416,   480,   901,  -418,   353,   396,  -418,   758,   271,   293,
     366,   151,   302,   164,   174,   165,   175,   177,   178,   759,
     182,   153,   758,   677,  -418,   290,  -421,   678,   516,   272,
     155,   758,   760,   514,   759,   519,   206,   185,   188,   183,
     184,   897,   746,   759,   292,   115,   116,    64,   612,   186,
    -417,   367,   339,  -417,   366,   116,   366,   552,   347,   366,
     544,   189,   207,   592,   543,    75,   145,   519,   546,  -416,
     363,  -417,  -416,  -420,   225,   115,    81,    64,   568,   322,
     162,   303,   326,   327,   304,   116,   116,    29,    30,   332,
    -416,   335,   181,   888,    75,   762,   788,   344,   228,   349,
     368,   345,   305,  -207,   802,    81,   357,   596,   116,   665,
     388,    99,   225,    87,   599,   758,    88,    86,   187,   388,
     375,   388,   116,    91,   116,   660,   386,   759,    99,    92,
     200,   393,   819,   595,   666,   193,   730,   203,   600,   225,
     796,   204,   194,   162,   483,   484,   485,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   664,   512,   201,   615,   162,   365,   521,   206,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   197,   263,   264,   265,   537,   266,   582,   540,
     205,   145,   631,   215,   207,   583,   235,   162,   619,   267,
     547,   548,   691,   622,    26,   584,   232,   233,   234,   555,
     208,   237,   698,   230,   231,   173,   138,    32,   116,   239,
     240,   241,   238,   269,   193,   193,   226,   664,   727,  -419,
      37,   194,   194,   732,   195,   354,    50,   733,   196,   242,
     798,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   688,   266,   140,   267,   115,   115,
      64,    64,   188,   193,   141,  -421,   295,   267,   116,   116,
     194,   197,   197,   140,   605,   296,   300,   350,   568,    75,
     609,   141,   610,    26,   387,   664,   139,   732,   306,   312,
      81,   311,   193,   314,   193,   138,    32,   781,   140,   194,
     735,   194,   218,   317,   223,   319,   141,   140,   140,    37,
     330,   633,   795,   331,   388,   141,   141,   333,   346,   372,
     197,   643,   385,   394,   140,    99,   395,    87,   397,   840,
      88,    86,   141,   815,   817,   398,   850,    91,   679,   600,
     399,   157,   517,    92,   600,   338,   551,   400,   115,   197,
      64,   197,    75,   553,   679,   558,   668,   518,   116,    99,
     834,   614,   799,    81,   562,   840,   193,   624,    75,   699,
     561,   617,   140,   194,   563,   139,   354,   573,   566,    81,
     141,   138,   578,   586,   625,   588,   593,   863,   597,   884,
     150,   603,   613,   865,  -442,   810,  -444,  -420,   629,   616,
     644,   679,   645,   621,   813,   600,   600,   620,   627,   641,
     896,   600,   649,   652,   193,   876,   659,   670,   339,   339,
     880,   194,   882,   197,   354,   676,   690,   736,   355,   140,
     140,   693,   737,   695,   115,   363,    64,   141,   141,    99,
     568,   704,   706,   635,   116,   734,    99,   326,   637,   738,
     898,   753,   740,   741,    75,   638,   335,   351,   742,   745,
     356,   744,   905,   756,   651,    81,   679,   767,   770,   748,
     772,   197,   782,   600,   773,   600,   873,   780,   874,   783,
     351,    99,   356,   694,   786,   351,   356,    26,   791,   803,
     792,   393,   794,   809,   801,   818,   820,   814,   822,   138,
      32,   824,   832,   686,   851,   855,   708,   709,   710,   711,
     712,   713,   860,    37,   708,   709,   710,   711,   712,   713,
     861,   862,   600,   260,   261,   262,   263,   264,   265,    99,
     266,   841,   714,   864,   702,   -77,   869,   866,   870,   871,
     339,   641,   267,    99,   872,   679,   828,   875,   753,   639,
    -260,   877,   115,   889,    64,   886,   895,   890,   210,   726,
     776,   899,   116,    99,   601,   371,   658,   841,   775,   229,
     318,   751,    75,   830,   833,   854,   785,   671,   326,   139,
     565,   549,    99,    81,   849,   868,   556,   789,   836,   892,
     715,   716,   301,   515,   310,   559,   511,   568,   717,   545,
     648,   646,   541,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,    99,   679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,    99,     0,
      99,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     241,     0,     0,   797,     0,     0,    99,     4,     5,     6,
       7,     8,     0,    99,     0,     0,     9,    10,   242,    11,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,     0,     0,   835,     0,
       0,     0,    12,    13,   848,     0,   267,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,     0,
       0,     0,     0,    34,    35,     0,     0,    36,    37,    38,
       0,    39,     0,    40,    41,    42,   881,     0,    43,    44,
     708,   709,   710,   711,   712,   713,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   714,    55,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,   581,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,     0,
       0,     0,    77,   576,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,   715,   716,     0,     0,
       0,     0,     0,     0,   755,  -461,  -461,  -461,  -461,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
     267,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,     0,    34,    35,     0,     0,
      36,    37,    38,     0,    39,     0,    40,    41,    42,     0,
       0,    43,    44,   708,   709,   710,   711,   712,   713,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   714,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,     0,
      75,    76,     0,     0,     0,    77,   650,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,   715,
     716,     0,     0,     0,     0,     0,     0,   790,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,     0,    34,
      35,     0,     0,    36,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,   708,   709,   710,   711,
     712,   713,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   714,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,   715,   716,     0,     0,     0,     0,     0,     0,
     825,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,   708,
     709,   710,   711,   712,   713,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,   376,    54,   714,    55,     0,
      56,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,   377,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,   715,   716,     0,     0,     0,
       0,     0,     0,   853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,   376,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,   589,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   242,    11,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,   267,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,   675,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    37,    38,     0,    39,     0,    40,    41,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,    47,    48,    49,    50,    51,
      52,   376,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,   241,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,   242,    11,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,   267,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,   747,
       0,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,   376,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,   267,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    37,
      38,     0,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,     0,     0,     0,     0,     0,   779,    45,     0,
      46,    47,    48,    49,    50,    51,    52,   376,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   267,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,   831,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
     376,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,   267,     0,     0,     0,    14,     0,    15,    16,    17,
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
     852,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,   267,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    37,    38,
       0,    39,     0,    40,    41,    42,     0,     0,    43,    44,
       0,     0,   883,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,   376,    54,     0,    55,
       0,    56,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,    12,    13,     0,     0,     0,
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
      75,    76,     0,     0,     0,    77,   891,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,    12,    13,
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
      73,     0,     0,    75,    76,     0,     0,     0,    77,   893,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,  -461,
    -461,  -461,  -461,  -461,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,   376,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
       0,    77,   894,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,   376,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,   900,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
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
       0,     0,    75,    76,     0,     0,     0,    77,   906,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,   376,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   632,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   642,     0,
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
       0,   667,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   752,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    37,    38,
       0,    39,     0,    40,    41,    42,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,     0,    54,     0,    55,
       0,     0,    57,    58,    59,    60,    61,   115,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,     0,    68,
      69,     0,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   827,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
       0,    33,     0,     0,     0,     0,     0,    35,     0,     0,
       0,    37,    38,     0,    39,     0,    40,    41,    42,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,     0,
      54,     0,    55,     0,     0,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,     0,    54,     0,    55,     0,     0,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,     0,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,    32,     0,   287,   288,     0,  -416,
       0,     0,     0,    35,     0,     0,     0,    37,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       4,     5,     6,     7,     8,    66,   116,     0,     0,     9,
      10,    71,    11,     0,     0,     0,    75,     0,  -416,     0,
     389,  -416,     0,    78,   390,     0,    80,    81,    82,     0,
       0,     0,     0,   144,     0,     0,     0,     0,     0,  -416,
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
      75,     0,     0,     0,     0,     0,     0,    78,     0,     0,
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
       0,     0,     0,    66,   116,   348,     0,     0,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,    78,     0,     0,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    78,     0,     0,    80,    81,    82,
       0,     0,     0,     0,   522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    37,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     4,     5,     6,     7,     8,
      66,   116,     0,     0,     9,    10,    71,    11,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,    78,     0,
       0,    80,    81,    82,     0,     0,     0,     0,   539,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   389,     0,     0,    78,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    37,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
      59,    60,    61,   115,    63,    64,     0,     0,     0,     0,
       0,     0,    66,   116,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    75,     0,     0,     0,   239,   240,   241,
      78,     0,     0,    80,    81,    82,   402,   403,   404,   405,
     406,     0,   407,   408,   409,   410,   411,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,     0,   426,   427,   428,
     429,     0,   430,   431,     0,     0,   432,     0,   433,     0,
     434,   435,   436,     0,   437,     0,     0,   438,   439,     0,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,   454,   455,     0,   456,
     457,   458,   459,   460,     0,   461,   462,   463,     0,     0,
       0,     0,     0,     0,   464,     0,   465,   604,   466,   467,
     468,   469,   470,   471,   472,   473,    75,   474,   291,   475,
       0,   476,   402,   403,   404,   405,   406,    81,   407,   408,
     409,   410,   411,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,   412,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,     0,   426,   427,   428,   429,     0,   430,   431,
       0,     0,   432,     0,   433,     0,   434,   435,   436,     0,
     437,     0,     0,   438,   439,     0,   440,   441,   442,     0,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,     0,   454,   455,     0,   456,   457,   458,   459,   460,
       0,   461,   837,   463,    64,     0,     0,     0,     0,     0,
     464,     0,   838,     0,   466,   467,   468,   469,   470,   471,
     472,   473,     0,   474,     0,   475,   240,   241,   839,   402,
     403,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,     0,
     426,   427,   428,   429,     0,   430,   431,     0,     0,   432,
       0,   433,     0,   434,   435,   436,     0,   437,     0,     0,
     438,   439,     0,   440,   441,   442,     0,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,     0,   454,
     455,     0,   456,   457,   458,   459,   460,     0,   461,   837,
     463,    64,     0,     0,     0,     0,     0,   464,     0,   838,
       0,   466,   467,   468,   469,   470,   471,   472,   473,     0,
     474,     0,   475,     0,     0,   867,   402,   403,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,     0,   426,   427,   428,
     429,     0,   430,   431,     0,     0,   432,     0,   433,     0,
     434,   435,   436,     0,   437,     0,     0,   438,   439,     0,
     440,   441,   442,     0,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,     0,   454,   455,     0,   456,
     457,   458,   459,   460,     0,   461,   462,   463,     0,     0,
       0,     0,     0,     0,   464,     0,   465,     0,   466,   467,
     468,   469,   470,   471,   472,   473,     0,   474,     0,   475,
     402,   403,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,   414,     0,   415,
     416,   417,   708,   709,   710,   711,   712,   713,   424,   425,
       0,   426,   427,   428,   429,     0,   430,   431,     0,     0,
     432,     0,   433,     0,   434,   435,   436,     0,   437,     0,
       0,   438,   439,     0,   440,   441,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,     0,
     454,   455,     0,   456,   457,   458,   459,   460,     0,   461,
     462,   463,   239,   240,   241,     0,     0,     0,   464,     0,
     885,     0,   466,   467,   468,   469,   470,   471,   472,   473,
       0,   474,   242,   475,   243,   244,   245,   246,   247,   248,
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
       0,     0,     0,     0,   267,   268,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,   267,   358,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   384,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   536,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,   538,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   239,   240,   241,     0,     0,     0,     0,     0,     0,
     560,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   567,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   587,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,   602,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   239,   240,   241,     0,     0,     0,     0,     0,     0,
     673,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   674,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,   692,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
       0,   623,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,   628,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,   239,   240,   241,     0,   685,   294,   267,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   564,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,   687,     0,     0,     0,     0,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   618,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-702)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-461)))

static const yytype_int16 yycheck[] =
{
       2,   117,     2,    28,   553,     2,     2,    84,    24,    25,
     237,   629,     2,    28,   204,   208,    24,    25,     2,   189,
     721,     8,    28,     8,    68,    55,    38,    30,     8,    31,
       8,   108,    30,     8,     8,   299,     8,    67,     8,     8,
       8,     8,   269,     8,   160,    51,    42,     8,     8,     8,
      36,    14,    87,    65,     8,     8,     8,    62,   676,    64,
       9,    10,    11,     8,     8,     8,     8,     8,     8,    74,
       8,   542,    81,   654,   119,    81,    85,    14,    14,   562,
      29,   203,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,    55,   573,   153,   140,
     158,   160,   114,   160,   162,   159,   143,   784,    67,    24,
      25,   156,   789,   704,   133,   706,   135,   153,   144,   160,
     394,   158,   158,    80,   143,    82,   144,   608,   164,     4,
       5,   160,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   162,
     158,    26,    27,   175,    68,    68,   715,   153,    33,    68,
     871,   187,   159,    38,   344,   368,   161,   193,    43,   187,
     158,   166,   162,   188,   162,   193,   161,   309,   162,   205,
     162,   166,   162,   162,   162,   162,   161,   205,   161,   159,
      65,   162,   161,   208,    69,   210,   159,   161,   398,   161,
     693,    68,   334,    78,   216,   159,   161,   166,   161,   161,
     161,   161,    80,   161,   161,   161,   238,   645,    82,   695,
      68,   237,   899,   137,   137,   231,   140,    86,   137,   144,
      82,   266,    68,   143,   160,   143,   160,   160,   160,    98,
     143,   266,    86,    81,   158,   120,   160,    85,   270,   158,
     266,    86,   111,   269,    98,   271,    93,   143,   135,   160,
     160,   889,   690,    98,   139,   133,   143,   135,   400,   160,
     137,   135,   187,   140,    82,   143,    82,   312,   193,    82,
     302,   158,   119,   135,   300,   153,   161,   303,   304,   137,
     205,   158,   140,   160,   135,   133,   164,   135,   333,   174,
     175,   137,   177,   178,   140,   143,   143,    78,    79,   184,
     158,   186,   328,   872,   153,   159,   744,   158,    89,   194,
     135,   162,   158,   161,   159,   164,   201,   135,   143,   135,
     143,   343,   135,   343,   135,    86,   343,   343,   160,   143,
     215,   143,   143,   343,   143,   158,   221,    98,   360,   343,
      30,   226,   780,   368,   158,    96,   158,   143,   373,   135,
     111,   158,   103,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   594,   267,   160,   481,   270,   599,   272,    93,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   153,    51,    52,    53,   291,    55,   136,   294,
     160,   296,   554,   160,   119,   143,    36,   302,   515,    67,
     305,   306,   632,   520,    68,   153,    72,    73,    74,   314,
     135,   140,   642,    72,    73,   320,    80,    81,   143,     9,
      10,    11,    68,   140,    96,    96,   160,   660,   661,   160,
      94,   103,   103,   666,   106,   106,   119,   667,   110,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   626,    55,   522,    67,   133,   133,
     135,   135,   135,    96,   522,   160,   166,    67,   143,   143,
     103,   153,   153,   539,   389,     8,   140,   110,   553,   153,
     395,   539,   397,    68,   165,   728,   160,   730,    16,   114,
     164,   162,    96,    16,    96,    80,    81,   737,   564,   103,
     672,   103,   106,   162,   106,   154,   564,   573,   574,    94,
     162,   557,   752,   161,   143,   573,   574,   114,   162,   162,
     153,   567,   163,   143,   590,   577,   160,   577,   160,   806,
     577,   577,   590,   773,   777,    30,   813,   577,   613,   594,
     162,   153,   143,   577,   599,   130,   161,   143,   133,   153,
     135,   153,   153,   124,   629,   160,   602,   158,   143,   611,
     800,   476,   162,   164,   162,   842,    96,   522,   153,   644,
     161,   486,   638,   103,     8,   160,   106,   160,   162,   164,
     638,    80,   159,   143,   539,   158,   143,   827,   162,   866,
      89,   160,   160,   833,   160,   767,   160,   160,   160,   166,
       8,   676,   158,   518,   770,   660,   661,   166,   166,   564,
     887,   666,    16,   166,    96,   855,   162,   161,   573,   574,
     860,   103,   862,   153,   106,   160,   158,   673,   110,   695,
     696,   162,    30,   160,   133,   590,   135,   695,   696,   691,
     715,   162,   162,   558,   143,   162,   698,   562,   563,   162,
     890,   697,   161,     8,   153,    36,   571,   195,    36,   161,
     198,   158,   902,   159,   579,   164,   741,   153,   720,   162,
     160,   153,   161,   728,   158,   730,   848,   158,   850,   151,
     218,   733,   220,   638,   157,   223,   224,    68,   162,    16,
     161,   606,   161,    16,   162,   162,    30,   772,   160,    80,
      81,   153,   162,   618,   153,   158,    75,    76,    77,    78,
      79,    80,   158,    94,    75,    76,    77,    78,    79,    80,
      16,   158,   777,    48,    49,    50,    51,    52,    53,   781,
      55,   806,    93,   162,   649,    82,   162,   140,   162,    82,
     695,   696,    67,   795,   126,   820,   792,   161,   794,   130,
     119,   153,   133,   160,   135,   871,   162,   158,    74,   660,
     730,   161,   143,   815,   373,   210,   590,   842,   728,    89,
     169,   696,   153,   794,   797,   820,   741,   606,   693,   160,
     328,   307,   834,   164,   811,   842,   315,   745,   804,   878,
     151,   152,   154,   269,   161,   320,   266,   872,   159,   303,
     574,   571,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   863,    -1,   865,   889,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,   880,    -1,
     882,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,   758,    -1,    -1,   898,     3,     4,     5,
       6,     7,    -1,   905,    -1,    -1,    12,    13,    29,    15,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,   803,    -1,
      -1,    -1,    48,    49,   809,    -1,    67,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    93,    94,    95,
      -1,    97,    -1,    99,   100,   101,   861,    -1,   104,   105,
      75,    76,    77,    78,    79,    80,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    93,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   159,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,    -1,
      -1,    -1,   158,   159,   160,    -1,   162,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      67,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      93,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    75,    76,    77,    78,    79,    80,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    93,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    75,    76,    77,    78,
      79,    80,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    93,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    75,
      76,    77,    78,    79,    80,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    93,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,
      -1,   158,   159,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,    -1,    -1,   153,
     154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    29,    15,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    67,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
      -1,    -1,   153,   154,    -1,    -1,    -1,   158,    11,   160,
      -1,   162,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    29,    15,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,   107,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,
     158,    -1,   160,    -1,   162,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,    -1,
      -1,   153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
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
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,    -1,    -1,   153,   154,    -1,
      -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    48,    49,    -1,    -1,    -1,
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
      -1,    -1,    12,    13,    -1,    15,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,
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
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
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
      -1,   158,   159,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,    -1,    -1,   153,
     154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
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
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,    -1,   125,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,
     146,    -1,   148,   149,   150,    -1,    -1,   153,   154,    -1,
      -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,    -1,   125,    -1,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,    -1,   148,   149,   150,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,    -1,   125,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,    -1,   148,   149,
     150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    65,    66,    -1,    68,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,
      -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
       3,     4,     5,     6,     7,   142,   143,    -1,    -1,    12,
      13,   148,    15,    -1,    -1,    -1,   153,    -1,   137,    -1,
     157,   140,    -1,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,   158,
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
     153,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
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
      -1,    -1,    -1,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
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
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    36,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,     9,    10,    11,
     160,    -1,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      87,    -1,    89,    90,    -1,    -1,    93,    -1,    95,    -1,
      97,    98,    99,    -1,   101,    -1,    -1,   104,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,   159,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    14,   156,
      -1,   158,     3,     4,     5,     6,     7,   164,     9,    10,
      11,    12,    13,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    87,    -1,    89,    90,
      -1,    -1,    93,    -1,    95,    -1,    97,    98,    99,    -1,
     101,    -1,    -1,   104,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,    -1,   156,    10,    11,   159,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    87,    -1,    89,    90,    -1,    -1,    93,
      -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,    -1,   156,    -1,    -1,   159,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      87,    -1,    89,    90,    -1,    -1,    93,    -1,    95,    -1,
      97,    98,    99,    -1,   101,    -1,    -1,   104,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,   154,    -1,   156,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    87,    -1,    89,    90,    -1,    -1,
      93,    -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,
      -1,   104,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,     9,    10,    11,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,   154,    29,   156,    31,    32,    33,    34,    35,    36,
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
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,   159,    14,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    82,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
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
     163,   164,   165,   173,   174,   175,   188,   193,   196,   197,
     198,   199,   200,   212,   213,   214,   215,   254,   255,   256,
     262,   263,   268,   269,   270,   272,   274,   275,   276,   277,
     278,   279,   280,   292,    80,   133,   143,   256,   272,   272,
     160,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,    80,   160,
     268,   270,   278,   278,    36,   272,   286,   287,   288,   272,
      89,   174,   253,   263,   264,   279,   281,   153,   227,   228,
     256,   160,   272,   273,   143,   143,   185,   248,   273,   160,
     188,   249,   250,   272,   160,   160,   265,   160,   160,   225,
     226,   279,   143,   160,   160,   143,   160,   160,   135,   158,
     173,   173,   273,    96,   103,   106,   110,   153,   289,   290,
      30,   160,   272,   143,   158,   160,    93,   119,   135,   173,
     176,   178,   181,   183,   184,   160,   186,   272,   106,   266,
     289,   158,   279,   106,   289,   135,   160,   222,    89,   198,
      72,    73,    72,    73,    74,    36,   258,   140,    68,     9,
      10,    11,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    55,    67,   162,   140,
      68,   137,   158,   222,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    65,    66,   258,
     272,    14,   272,   278,    14,   166,     8,   271,   222,   267,
     140,   267,    68,   137,   140,   158,    16,     8,   162,   258,
     286,   162,   114,   201,    16,     8,   162,   162,   185,   154,
       8,   162,   272,   273,   251,   252,   272,   272,     8,   162,
     162,   161,   272,   114,   202,   272,   293,   294,   130,   278,
     284,   285,   173,   172,   158,   162,   162,   278,   144,   272,
     110,   290,    68,   137,   106,   110,   290,   272,   162,   257,
     186,   191,   192,   278,   173,   183,    82,   135,   135,   173,
     177,   181,   162,     8,   162,   272,   122,   159,   187,   188,
     193,   196,   199,   200,   161,   163,   272,   165,   143,   157,
     161,   223,   224,   272,   143,   160,   188,   160,    30,   162,
     143,   257,     3,     4,     5,     6,     7,     9,    10,    11,
      12,    13,    55,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    84,    85,    86,    87,
      89,    90,    93,    95,    97,    98,    99,   101,   104,   105,
     107,   108,   109,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   124,   126,   127,   128,   129,
     130,   132,   133,   134,   141,   143,   145,   146,   147,   148,
     149,   150,   151,   152,   154,   156,   158,   169,   170,   171,
     279,   282,   273,   272,   272,   272,    30,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   264,   272,   171,   279,   282,   273,   143,   158,   279,
     283,   272,    36,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   161,   272,   161,    36,
     272,   288,   201,   279,   273,   283,   279,   272,   272,   228,
     257,   161,   174,   124,   203,   272,   248,   161,   160,   250,
     161,   161,   162,     8,    82,   226,   162,   161,   174,   231,
     257,     8,   161,   160,     8,   161,   159,   172,   159,    68,
     159,   159,   136,   143,   153,   291,   143,   161,   158,   159,
       8,   161,   135,   143,   158,   173,   135,   162,   162,   135,
     173,   184,   161,   160,   159,   272,     8,   161,   201,   272,
     272,   186,   257,   160,   272,   222,   166,   272,    30,   222,
     166,   272,   222,   159,   278,   278,   203,   166,   159,   160,
     231,   257,    30,   188,   207,   272,   251,   272,    36,   130,
     204,   278,    30,   188,     8,   158,   294,   284,   285,    16,
     159,   272,   166,    30,   158,   208,   229,   189,   192,   162,
     158,   176,   179,   182,   183,   135,   158,    30,   188,   211,
     161,   224,   203,   161,   161,    74,   160,    81,    85,   174,
     216,   217,   218,   219,   220,   159,   272,   159,   257,   216,
     158,   186,   161,   162,   278,   160,    14,   161,   186,   174,
     229,   161,   272,   166,   162,   209,   162,   209,    75,    76,
      77,    78,    79,    80,    93,   151,   152,   159,   230,   240,
     241,   242,   243,    87,   156,   190,   179,   183,     8,   159,
     158,   180,   183,   186,   162,   257,   188,    30,   162,   216,
     161,     8,    36,   194,   158,   161,   229,   107,   162,   251,
     284,   204,    30,   188,   206,   159,   159,   209,    86,    98,
     111,   209,   159,   171,   246,   247,   231,   153,   244,   245,
     256,   243,   160,   158,   159,   182,   180,     8,   159,   112,
     158,   186,   161,   151,   259,   218,   157,   195,   229,   259,
     159,   162,   161,   161,   161,   186,   111,   272,    30,   162,
     210,   162,   159,    16,     8,   162,   158,   162,   232,    16,
     257,     8,   162,   258,   174,   186,   159,   183,   162,   229,
      30,   221,   160,   221,   153,   159,   221,    30,   188,   205,
     206,   109,   162,   210,   186,   272,   247,   133,   143,   159,
     171,   174,   233,   234,   235,   236,   237,   238,   272,   245,
     171,   153,   159,   159,   220,   158,    36,   153,   260,   261,
     158,    16,   158,   186,   162,   186,   140,   159,   234,   162,
     162,    82,   126,   257,   257,   161,   186,   153,     8,   161,
     186,   272,   186,   108,   171,   143,   169,   243,   231,   160,
     158,   159,   261,   159,   159,   162,   171,   216,   186,   161,
     159,   221,   158,   162,   239,   186,   159
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
      yyerror (analyzer, YY_("syntax error: cannot back up")); \
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
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
      
/* Line 1802 of yacc.c  */
#line 3774 "/Users/roberto/Projects/pelet/src/Php70LintParser.cpp"
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


/* Line 2050 of yacc.c  */
#line 1219 "/Users/roberto/Projects/pelet/src/Php70LintParser.y"

