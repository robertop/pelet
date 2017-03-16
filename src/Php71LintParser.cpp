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
#define yyparse         php71_lint_parse
#define yylex           php71_lint_lex
#define yyerror         php71_lint_error
#define yylval          php71_lint_lval
#define yychar          php71_lint_char
#define yydebug         php71_lint_debug
#define yynerrs         php71_lint_nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php71LintParser.y"


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
#define php71_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php71_lint_error pelet::LintGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php71LintParser.cpp"

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
extern int php71_lint_debug;
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
int php71_lint_parse (void *YYPARSE_PARAM);
#else
int php71_lint_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php71_lint_parse (pelet::LexicalAnalyzerClass &analyzer);
#else
int php71_lint_parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 319 "/Users/roberto/Projects/pelet/src/Php71LintParser.cpp"

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
#define YYLAST   7582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  487
/* YYNRULES -- Number of states.  */
#define YYNSTATES  929

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
     427,   431,   434,   435,   445,   447,   451,   452,   457,   459,
     463,   465,   479,   480,   482,   483,   485,   495,   504,   506,
     509,   511,   513,   520,   528,   529,   532,   533,   536,   537,
     540,   542,   545,   550,   554,   556,   561,   563,   568,   570,
     575,   579,   584,   589,   595,   596,   602,   607,   609,   611,
     613,   618,   624,   631,   633,   637,   644,   652,   656,   663,
     665,   666,   668,   672,   677,   684,   685,   687,   689,   692,
     694,   696,   698,   699,   702,   705,   709,   711,   715,   717,
     720,   724,   726,   728,   732,   734,   736,   740,   743,   744,
     748,   753,   757,   770,   772,   776,   778,   781,   785,   787,
     790,   793,   796,   800,   804,   808,   813,   817,   819,   821,
     825,   827,   831,   833,   835,   836,   838,   840,   843,   845,
     847,   849,   851,   853,   855,   859,   861,   864,   869,   873,
     875,   880,   885,   889,   891,   893,   894,   896,   900,   902,
     911,   915,   918,   925,   931,   935,   940,   943,   947,   951,
     955,   959,   963,   967,   971,   975,   979,   983,   987,   991,
     994,   997,  1000,  1003,  1007,  1011,  1015,  1019,  1023,  1027,
    1031,  1035,  1039,  1043,  1047,  1051,  1055,  1059,  1063,  1067,
    1071,  1074,  1077,  1080,  1083,  1087,  1091,  1095,  1099,  1103,
    1107,  1111,  1115,  1119,  1123,  1127,  1129,  1135,  1140,  1144,
    1146,  1149,  1152,  1155,  1158,  1161,  1164,  1167,  1170,  1173,
    1175,  1179,  1182,  1184,  1187,  1192,  1195,  1209,  1224,  1226,
    1227,  1228,  1229,  1231,  1232,  1237,  1241,  1243,  1245,  1248,
    1251,  1256,  1261,  1264,  1266,  1268,  1270,  1272,  1273,  1277,
    1278,  1280,  1282,  1283,  1285,  1290,  1294,  1296,  1298,  1300,
    1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1320,  1323,
    1327,  1331,  1333,  1335,  1337,  1341,  1345,  1347,  1349,  1350,
    1352,  1354,  1356,  1360,  1362,  1364,  1368,  1370,  1372,  1377,
    1382,  1387,  1392,  1394,  1396,  1398,  1402,  1404,  1409,  1412,
    1416,  1420,  1422,  1427,  1432,  1436,  1440,  1444,  1446,  1450,
    1452,  1454,  1458,  1460,  1462,  1463,  1465,  1469,  1471,  1475,
    1477,  1482,  1485,  1490,  1493,  1496,  1498,  1501,  1503,  1508,
    1512,  1516,  1520,  1527,  1531,  1533,  1535,  1538,  1540,  1545,
    1550,  1553,  1556,  1561,  1564,  1567,  1569,  1573
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
     135,   173,    -1,   135,   173,    -1,   188,    -1,   194,    -1,
     197,    -1,   200,    -1,   201,    -1,   122,   160,   161,   162,
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
     183,    -1,   185,     8,   250,    -1,   250,    -1,   186,   187,
      -1,    -1,   188,    -1,   194,    -1,   197,    -1,   200,    -1,
     201,    -1,   122,   160,   161,   162,    -1,   158,   186,   159,
      -1,   214,    -1,   216,    -1,   154,   160,   274,   161,   212,
      -1,   101,   188,   154,   160,   274,   161,   162,    -1,   116,
     160,   253,   162,   253,   162,   253,   161,   206,    -1,   145,
     160,   274,   161,   209,    -1,    84,   275,   162,    -1,    95,
     275,   162,    -1,   141,   275,   162,    -1,   120,   227,   162,
      -1,    80,   229,   162,    -1,   104,   251,   162,    -1,   125,
      -1,   274,   162,    -1,   150,   160,   192,   161,   162,    -1,
     117,   160,   274,    82,   205,   161,   207,    -1,   117,   160,
     274,    82,   205,    14,   205,   161,   207,    -1,    97,   160,
     185,   161,   208,    -1,   162,    -1,   149,   158,   186,   159,
     189,   191,    -1,   146,   274,   162,    -1,   121,   143,   162,
      -1,   143,    30,    -1,    -1,   189,    87,   160,   190,   153,
     161,   158,   186,   159,    -1,   174,    -1,   190,    34,   174,
      -1,    -1,   156,   158,   186,   159,    -1,   193,    -1,   192,
       8,   193,    -1,   280,    -1,   258,   261,   143,   259,   160,
     217,   161,   223,   260,   158,   186,   159,   260,    -1,    -1,
      36,    -1,    -1,   157,    -1,   198,    89,   143,   202,   204,
     259,   158,   231,   159,    -1,    89,   143,   202,   204,   259,
     158,   231,   159,    -1,   199,    -1,   198,   199,    -1,    79,
      -1,    78,    -1,   147,   143,   259,   158,   231,   159,    -1,
     127,   143,   203,   259,   158,   231,   159,    -1,    -1,   114,
     174,    -1,    -1,   114,   233,    -1,    -1,   124,   233,    -1,
     280,    -1,    36,   280,    -1,   130,   160,   286,   161,    -1,
      68,   286,   166,    -1,   188,    -1,    30,   186,   108,   162,
      -1,   188,    -1,    30,   186,   109,   162,    -1,   188,    -1,
      30,   186,   107,   162,    -1,   158,   210,   159,    -1,   158,
     162,   210,   159,    -1,    30,   210,   111,   162,    -1,    30,
     162,   210,   111,   162,    -1,    -1,   210,    86,   274,   211,
     186,    -1,   210,    98,   211,   186,    -1,    30,    -1,   162,
      -1,   188,    -1,    30,   186,   112,   162,    -1,   123,   160,
     274,   161,   188,    -1,   213,    72,   160,   274,   161,   188,
      -1,   213,    -1,   213,    73,   188,    -1,   123,   160,   274,
     161,    30,   186,    -1,   215,    72,   160,   274,   161,    30,
     186,    -1,   215,    74,   162,    -1,   215,    73,    30,   186,
      74,   162,    -1,   218,    -1,    -1,   219,    -1,   218,     8,
     219,    -1,   220,   195,   196,   153,    -1,   220,   195,   196,
     153,    16,   274,    -1,    -1,   221,    -1,   222,    -1,    29,
     222,    -1,    81,    -1,    85,    -1,   174,    -1,    -1,    30,
     221,    -1,   160,   161,    -1,   160,   225,   161,    -1,   226,
      -1,   225,     8,   226,    -1,   274,    -1,   157,   274,    -1,
     227,     8,   228,    -1,   228,    -1,   281,    -1,   229,     8,
     230,    -1,   230,    -1,   153,    -1,   153,    16,   274,    -1,
     231,   232,    -1,    -1,   242,   246,   162,    -1,   243,    93,
     248,   162,    -1,   151,   233,   234,    -1,   243,   258,   261,
     171,   259,   160,   217,   161,   223,   260,   241,   260,    -1,
     174,    -1,   233,     8,   174,    -1,   162,    -1,   158,   159,
      -1,   158,   235,   159,    -1,   236,    -1,   235,   236,    -1,
     237,   162,    -1,   238,   162,    -1,   240,   126,   233,    -1,
     239,    82,   143,    -1,   239,    82,   169,    -1,   239,    82,
     245,   171,    -1,   239,    82,   245,    -1,   171,    -1,   240,
      -1,   174,   140,   171,    -1,   162,    -1,   158,   186,   159,
      -1,   244,    -1,   152,    -1,    -1,   244,    -1,   245,    -1,
     244,   245,    -1,    75,    -1,    76,    -1,    77,    -1,    80,
      -1,    79,    -1,    78,    -1,   246,     8,   247,    -1,   247,
      -1,   153,   259,    -1,   153,    16,   274,   259,    -1,   248,
       8,   249,    -1,   249,    -1,   171,    16,   274,   259,    -1,
     143,    16,   274,   259,    -1,   251,     8,   252,    -1,   252,
      -1,   274,    -1,    -1,   254,    -1,   254,     8,   274,    -1,
     274,    -1,    89,   270,   202,   204,   259,   158,   231,   159,
      -1,    70,   267,   270,    -1,    70,   255,    -1,   130,   160,
     286,   161,    16,   274,    -1,    68,   286,   166,    16,   274,
      -1,   280,    16,   274,    -1,   280,    16,    36,   280,    -1,
      69,   274,    -1,   280,    28,   274,    -1,   280,    27,   274,
      -1,   280,    26,   274,    -1,   280,    17,   274,    -1,   280,
      25,   274,    -1,   280,    24,   274,    -1,   280,    23,   274,
      -1,   280,    22,   274,    -1,   280,    21,   274,    -1,   280,
      20,   274,    -1,   280,    19,   274,    -1,   280,    18,   274,
      -1,   280,    66,    -1,    66,   280,    -1,   280,    65,    -1,
      65,   280,    -1,   274,    32,   274,    -1,   274,    33,   274,
      -1,   274,     9,   274,    -1,   274,    11,   274,    -1,   274,
      10,   274,    -1,   274,    34,   274,    -1,   274,    36,   274,
      -1,   274,    35,   274,    -1,   274,    50,   274,    -1,   274,
      48,   274,    -1,   274,    49,   274,    -1,   274,    51,   274,
      -1,   274,    67,   274,    -1,   274,    52,   274,    -1,   274,
      53,   274,    -1,   274,    47,   274,    -1,   274,    46,   274,
      -1,    48,   274,    -1,    49,   274,    -1,    54,   274,    -1,
      56,   274,    -1,   274,    39,   274,    -1,   274,    38,   274,
      -1,   274,    41,   274,    -1,   274,    40,   274,    -1,   274,
      42,   274,    -1,   274,    45,   274,    -1,   274,    43,   274,
      -1,   274,    44,   274,    -1,   274,    37,   274,    -1,   274,
      55,   267,    -1,   160,   274,   161,    -1,   256,    -1,   274,
      29,   274,    30,   274,    -1,   274,    29,    30,   274,    -1,
     274,    31,   274,    -1,   293,    -1,    64,   274,    -1,    63,
     274,    -1,    62,   274,    -1,    61,   274,    -1,    60,   274,
      -1,    59,   274,    -1,    58,   274,    -1,   113,   268,    -1,
      57,   274,    -1,   272,    -1,   163,   269,   163,    -1,    12,
     274,    -1,    13,    -1,    13,   274,    -1,    13,   274,    14,
     274,    -1,    15,   274,    -1,   258,   261,   259,   160,   217,
     161,   262,   223,   260,   158,   186,   159,   260,    -1,    80,
     258,   261,   259,   160,   217,   161,   262,   223,   260,   158,
     186,   159,   260,    -1,   119,    -1,    -1,    -1,    -1,    36,
      -1,    -1,   151,   160,   263,   161,    -1,   263,     8,   264,
      -1,   264,    -1,   153,    -1,    36,   153,    -1,   174,   224,
      -1,   266,   140,   284,   224,    -1,   276,   140,   284,   224,
      -1,   278,   224,    -1,    80,    -1,   174,    -1,   266,    -1,
     283,    -1,    -1,   160,   275,   161,    -1,    -1,   106,    -1,
     290,    -1,    -1,   224,    -1,    81,   160,   286,   161,    -1,
      68,   286,   166,    -1,    94,    -1,   131,    -1,   100,    -1,
     129,    -1,   115,    -1,    99,    -1,   148,    -1,   132,    -1,
     118,    -1,   134,    -1,    90,    -1,   142,   106,   110,    -1,
     142,   110,    -1,   165,   290,   165,    -1,   142,   290,   110,
      -1,   271,    -1,   273,    -1,   174,    -1,   266,   140,   171,
      -1,   276,   140,   171,    -1,   280,    -1,   257,    -1,    -1,
     274,    -1,   277,    -1,   280,    -1,   160,   274,   161,    -1,
     271,    -1,   279,    -1,   160,   274,   161,    -1,   271,    -1,
     281,    -1,   277,    68,   275,   166,    -1,   273,    68,   275,
     166,    -1,   277,   158,   274,   159,    -1,   277,   137,   285,
     224,    -1,   265,    -1,   279,    -1,   282,    -1,   277,   137,
     285,    -1,   153,    -1,   164,   158,   274,   159,    -1,   164,
     281,    -1,   266,   140,   281,    -1,   276,   140,   281,    -1,
     281,    -1,   283,    68,   275,   166,    -1,   283,   158,   274,
     159,    -1,   283,   137,   285,    -1,   266,   140,   281,    -1,
     283,   140,   281,    -1,   171,    -1,   158,   274,   159,    -1,
     281,    -1,   143,    -1,   158,   274,   159,    -1,   281,    -1,
     288,    -1,    -1,   289,    -1,   288,     8,   287,    -1,   287,
      -1,   274,    14,   274,    -1,   274,    -1,   274,    14,    36,
     280,    -1,    36,   280,    -1,   130,   160,   286,   161,    -1,
     290,   291,    -1,   290,   106,    -1,   291,    -1,   106,   291,
      -1,   153,    -1,   153,    68,   292,   166,    -1,   153,   137,
     143,    -1,   103,   274,   159,    -1,   103,   144,   159,    -1,
     103,   144,    68,   274,   166,   159,    -1,    96,   280,   159,
      -1,   143,    -1,   136,    -1,    49,   136,    -1,   153,    -1,
     128,   160,   294,   161,    -1,   105,   160,   274,   161,    -1,
       7,   274,    -1,     6,   274,    -1,     5,   160,   274,   161,
      -1,     4,   274,    -1,     3,   274,    -1,   295,    -1,   294,
       8,   295,    -1,   274,    -1
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
     419,   420,   423,   425,   429,   430,   433,   435,   439,   440,
     444,   448,   453,   455,   458,   460,   464,   467,   473,   474,
     478,   479,   483,   489,   494,   496,   499,   501,   504,   506,
     510,   511,   512,   513,   517,   518,   522,   523,   527,   528,
     532,   533,   534,   535,   538,   540,   542,   547,   548,   553,
     554,   559,   561,   566,   567,   572,   574,   579,   580,   585,
     586,   591,   593,   598,   600,   605,   607,   611,   612,   616,
     617,   618,   621,   623,   627,   628,   632,   634,   639,   640,
     644,   645,   649,   655,   656,   660,   661,   666,   668,   674,
     676,   678,   680,   686,   687,   691,   692,   693,   697,   699,
     704,   705,   709,   714,   716,   718,   720,   725,   727,   731,
     736,   737,   741,   742,   745,   747,   752,   753,   758,   759,
     760,   761,   762,   763,   767,   768,   772,   774,   779,   780,
     784,   788,   792,   793,   796,   799,   801,   805,   806,   810,
     815,   817,   822,   824,   826,   828,   830,   831,   833,   835,
     837,   839,   841,   843,   845,   847,   849,   851,   853,   855,
     856,   857,   858,   859,   861,   863,   865,   867,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   887,   889,   891,   893,   895,
     897,   899,   901,   903,   905,   906,   907,   909,   911,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   930,   933,   939,   942,
     946,   950,   952,   955,   957,   961,   962,   966,   967,   971,
     973,   975,   977,   982,   984,   988,   989,   992,   994,   997,
    1000,  1001,  1005,  1007,  1012,  1013,  1014,  1018,  1019,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1031,
    1032,  1033,  1034,  1038,  1039,  1041,  1046,  1047,  1050,  1052,
    1056,  1060,  1061,  1062,  1066,  1067,  1068,  1072,  1074,  1076,
    1078,  1080,  1082,  1086,  1088,  1090,  1095,  1096,  1097,  1101,
    1103,  1108,  1110,  1112,  1114,  1116,  1118,  1123,  1124,  1125,
    1129,  1130,  1131,  1135,  1138,  1140,  1144,  1146,  1151,  1153,
    1154,  1156,  1158,  1162,  1164,  1166,  1168,  1173,  1175,  1177,
    1179,  1181,  1183,  1185,  1189,  1190,  1191,  1192,  1197,  1198,
    1199,  1201,  1203,  1205,  1207,  1212,  1213,  1218
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
  "inner_statement", "statement", "catch_list", "catch_name_list",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "class_modifiers", "class_modifier",
  "trait_declaration_statement", "interface_declaration_statement",
  "extends_from", "interface_extends_list", "implements_list",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "switch_case_list", "case_list", "case_separator",
  "while_statement", "if_stmt_without_else", "if_stmt",
  "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_type", "type_expr",
  "type", "return_type", "argument_list", "non_empty_argument_list",
  "argument", "global_var_list", "global_var", "static_var_list",
  "static_var", "class_statement_list", "class_statement", "name_list",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_precedence", "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment",
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
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   210,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   222,   223,   223,   224,   224,   225,   225,   226,   226,
     227,   227,   228,   229,   229,   230,   230,   231,   231,   232,
     232,   232,   232,   233,   233,   234,   234,   234,   235,   235,
     236,   236,   237,   238,   238,   238,   238,   239,   239,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     245,   245,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   250,   251,   251,   252,   253,   253,   254,   254,   255,
     256,   256,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   259,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   265,   265,   266,   266,   267,   267,   268,   268,   269,
     269,   269,   270,   270,   271,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   274,   274,   275,   275,
     276,   277,   277,   277,   278,   278,   278,   279,   279,   279,
     279,   279,   279,   280,   280,   280,   281,   281,   281,   282,
     282,   283,   283,   283,   283,   283,   283,   284,   284,   284,
     285,   285,   285,   286,   287,   287,   288,   288,   289,   289,
     289,   289,   289,   290,   290,   290,   290,   291,   291,   291,
     291,   291,   291,   291,   292,   292,   292,   292,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   295
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
       3,     2,     0,     9,     1,     3,     0,     4,     1,     3,
       1,    13,     0,     1,     0,     1,     9,     8,     1,     2,
       1,     1,     6,     7,     0,     2,     0,     2,     0,     2,
       1,     2,     4,     3,     1,     4,     1,     4,     1,     4,
       3,     4,     4,     5,     0,     5,     4,     1,     1,     1,
       4,     5,     6,     1,     3,     6,     7,     3,     6,     1,
       0,     1,     3,     4,     6,     0,     1,     1,     2,     1,
       1,     1,     0,     2,     2,     3,     1,     3,     1,     2,
       3,     1,     1,     3,     1,     1,     3,     2,     0,     3,
       4,     3,    12,     1,     3,     1,     2,     3,     1,     2,
       2,     2,     3,     3,     3,     4,     3,     1,     1,     3,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     3,     1,
       4,     4,     3,     1,     1,     0,     1,     3,     1,     8,
       3,     2,     6,     5,     3,     4,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     4,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     2,     1,     2,     4,     2,    13,    14,     1,     0,
       0,     0,     1,     0,     4,     3,     1,     1,     2,     2,
       4,     4,     2,     1,     1,     1,     1,     0,     3,     0,
       1,     1,     0,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     1,     1,     1,     3,     3,     1,     1,     0,     1,
       1,     1,     3,     1,     1,     3,     1,     1,     4,     4,
       4,     4,     1,     1,     1,     3,     1,     4,     2,     3,
       3,     1,     4,     4,     3,     3,     3,     1,     3,     1,
       1,     3,     1,     1,     0,     1,     3,     1,     3,     1,
       4,     2,     4,     2,     2,     1,     2,     1,     4,     3,
       3,     3,     6,     3,     1,     1,     2,     1,     4,     4,
       2,     2,     4,     2,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   454,     0,     0,   171,
     170,   383,     0,   418,     0,   406,     0,   396,   418,     0,
     401,   398,     0,     0,     0,   387,   400,     0,     0,   404,
     368,     0,     0,     0,     0,   141,     0,     0,   399,     0,
     397,   403,     0,   405,     0,   418,     0,    81,     0,     0,
       0,   402,     0,     0,     0,   436,     0,   121,     0,   147,
     389,     0,     0,    83,   413,    79,    86,    87,    88,     0,
     168,    89,    90,   203,   129,     0,   130,   345,   417,   371,
     432,     0,   411,   359,   412,     0,     0,   420,     0,   433,
     416,   427,   434,   349,   383,     0,    81,   371,   484,   483,
       0,   481,   480,   361,   363,   365,   330,   331,   332,   333,
     358,   356,   355,   354,   353,   352,   351,   350,   454,   383,
       0,   423,     0,   312,   310,     0,     0,   459,     0,   457,
     453,   455,   296,   392,   384,   291,   385,   392,   441,   386,
     235,     0,   234,   371,   454,   419,     0,   174,     0,     0,
     119,     0,     0,     0,     0,   283,   284,     0,   418,   357,
     285,     0,     0,   231,   232,     0,     0,     0,   176,     0,
     454,     0,    80,     0,    85,     0,     0,     0,     0,   408,
     467,     0,   465,   151,     0,     0,   369,   121,     0,   101,
     100,     0,   114,     0,     0,     0,   116,   111,     0,     0,
       0,   390,     0,   391,     0,   438,     0,     0,     0,     0,
     379,     0,   169,     0,     0,     0,     0,     0,   372,   369,
       0,   418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,     0,   418,     0,     0,   382,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     311,   309,   369,     0,     0,     0,     0,   421,   454,     0,
     395,   454,   393,   174,     0,   290,   418,     0,     0,     0,
       0,     0,   139,   369,     0,   135,     0,   178,     0,     0,
      99,   136,     0,     0,     0,   140,     0,     0,     0,   286,
     288,     0,     0,   138,   150,     0,     0,     0,   369,   487,
       0,   485,     0,    84,     0,    80,    92,   137,   421,     0,
       0,   407,   466,     0,     0,   464,   410,   463,     0,   149,
       0,     0,     0,   158,   421,   114,   117,     0,     0,     0,
     114,     0,     0,    95,     0,    97,     0,     0,   128,   120,
     122,   123,   124,   125,   126,   344,   360,     0,   409,    82,
       0,   224,     0,   226,   228,   174,     0,   204,     0,   121,
     207,   369,     0,     7,     6,     5,     4,     3,     8,     9,
      10,    46,    47,    11,    13,    12,    16,    17,    18,    76,
      75,    74,    73,    72,    71,    54,    29,    53,    55,    51,
      31,    61,    62,    44,    41,    27,    52,    68,    20,    19,
      40,    28,    24,    26,    50,    22,    14,    56,    67,    23,
      25,    64,    43,    36,    42,    15,    57,    35,    60,    39,
      66,    48,    65,    58,    69,    45,    77,    49,    33,    59,
      63,    30,    38,    34,    37,    21,    32,     0,    70,    78,
     414,   439,     0,     0,   315,   317,   316,     0,     0,   348,
     313,   314,   318,   320,   319,   342,   335,   334,   337,   336,
     338,   340,   341,   339,   329,   328,   322,   323,   321,   324,
     326,   327,   343,   325,   415,   440,     0,     0,   450,     0,
     452,   435,     0,     0,   294,   300,   308,   307,   306,   305,
     304,   303,   302,   301,   299,   298,   297,   482,   364,   395,
     422,     0,     0,   458,     0,   456,   178,   445,     0,   444,
     446,     0,   236,   233,     0,   394,   175,     0,   369,   369,
     118,     0,     0,   282,   479,   388,   285,     0,     0,   230,
      91,     0,   243,   177,     0,     0,   478,     0,    94,     0,
     473,     0,   471,   470,     0,   475,   474,   477,     0,   469,
       0,   238,   152,     0,     0,     0,   115,     0,   114,     0,
      96,    98,     0,   114,   110,     0,     0,   437,   229,     0,
     225,   178,     0,     0,     0,     0,   215,     0,   380,   429,
     347,     0,   381,   428,     0,   431,   430,   295,   462,   421,
     293,   369,   442,   443,   215,   179,     0,   281,   121,   188,
     146,     0,     0,   287,     0,   454,     0,     0,   421,   121,
     201,     0,   238,   486,     0,    93,     0,   476,   468,   194,
     194,   134,   264,   156,   159,   143,     0,     0,     0,   107,
     112,     0,     0,   121,   199,   131,     0,   227,   369,     0,
       0,     0,   215,     0,   219,   220,   221,     0,   209,   211,
     162,   216,   217,   448,   346,   451,     0,     0,   238,     0,
       0,   285,   421,     0,   454,     0,     0,   205,   244,   264,
     292,     0,   194,     0,   194,     0,   268,   269,   270,   273,
     272,   271,     0,   263,   172,   237,     0,     0,   265,   266,
       0,     0,   148,     0,   113,     0,   104,     0,     0,   109,
       0,   127,     0,   202,   121,   208,     0,   218,   373,   215,
     163,   164,   238,   373,   264,     0,   132,     0,   395,     0,
       0,   121,   186,   144,   173,   472,     0,     0,     0,     0,
       0,   190,     0,   369,     0,   275,     0,   371,   267,     0,
     121,   105,   106,     0,     0,   102,     0,   238,   206,   222,
       0,   222,   212,   165,     0,   264,   222,   167,   189,     0,
     182,     0,     0,     0,     0,   197,   198,   121,   192,   191,
       0,   245,   241,     0,   276,     0,   239,     0,     0,   279,
       0,   154,     0,     0,   103,   108,   200,   264,     0,   370,
       0,   370,   213,   289,   370,   121,   184,   133,   145,     0,
     193,   121,   196,    58,    81,   246,   257,     0,     0,   248,
       0,     0,     0,   258,   369,   274,     0,     0,   240,   369,
       0,     0,   157,   166,   223,     0,     0,   377,     0,   376,
       0,     0,     0,     0,   187,   195,     0,   247,   249,   250,
     251,     0,     0,   277,   369,   278,     0,   155,     0,   121,
     378,     0,   374,   121,   214,   121,     0,   259,   253,   254,
     256,   252,   280,   215,   121,     0,   375,     0,     0,   185,
     255,     0,     0,   370,   370,   370,   222,   153,   161,   366,
     367,   370,     0,   121,   260,   370,     0,   242,   261
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   478,   479,   817,     2,    83,    84,    85,   667,
     371,   214,   668,   738,   215,   669,   216,   217,   169,   219,
     379,   380,   663,   822,   732,   362,   363,   381,   751,   794,
     382,    89,    90,   383,   384,   317,   338,   558,   647,   837,
     763,   640,   661,   713,   807,   675,    93,    94,    95,    96,
     687,   688,   689,   690,   691,   692,   829,   302,   392,   393,
     182,   183,   161,   162,   662,   725,   573,   812,   848,   849,
     850,   851,   852,   853,   925,   726,   727,   728,   729,   774,
     775,   818,   819,   170,   174,   175,   328,   329,   155,    97,
      98,   117,   402,   865,   239,   791,   868,   869,   100,   101,
     157,   179,   222,   303,   102,   103,   104,   105,   166,   106,
     107,   108,   109,   110,   111,   112,   159,   482,   521,   148,
     149,   150,   151,   201,   202,   588,   113,   340,   341
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -692
static const yytype_int16 yypact[] =
{
    -692,    70,  1213,  -692,  5603,  5603,   -47,  5603,  5603,  5603,
    5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,
    5603,  5603,  5603,  5603,   594,   594,  4770,  5603,   377,  -692,
    -692,     0,   -45,  5603,   -25,  -692,    22,  -692,  5603,    87,
    -692,  -692,  4473,  5603,    90,    93,  -692,    96,   100,  -692,
    -692,   125,    85,   131,   132,  -692,   175,   161,  -692,   195,
    -692,  -692,   136,  -692,   210,  5603,   178,   185,   228,  5603,
     215,  -692,   162,   231,   211,  -692,   233,  -692,  5603,  -692,
     342,   435,   439,   279,   -83,  -692,  -692,  -692,  -692,   381,
    -692,  -692,  -692,    78,  -692,   389,  -692,  -692,  -692,   396,
    -692,   328,   327,  -692,   388,  6565,   338,    42,   329,   332,
     771,  -692,  -692,  -692,   374,   364,  -692,   396,  7515,  7515,
    5603,  7515,  7515,  1035,  5907,  1035,   433,   433,   368,   433,
     433,   433,   433,   433,   433,   433,   433,   433,  4770,  -692,
    5603,   351,   388,   127,   127,   594,   356,  7421,   391,  -692,
     524,  -692,  -692,   329,  -692,  -692,   400,   329,  -692,   177,
     527,    25,  -692,   396,  4770,  7515,   392,   446,   548,    27,
    -692,   406,    22,   411,    31,  -692,  7515,  5603,  5603,  -692,
    5603,  5603,    34,  -692,  -692,   412,   414,  5603,   459,  5603,
    4770,   210,  -692,   366,   279,   421,   594,  4904,   452,  -692,
      49,   316,  -692,  -692,  5603,  6612,  -692,  -692,   594,  -692,
    -692,   210,    72,    21,   440,    40,  -692,  -692,  5603,  1376,
    6659,    98,   413,   441,  5603,  -692,    98,   174,   458,  4636,
    -692,   460,  -692,   447,  4473,   451,   565,   456,  -692,   477,
    5766,  5603,  5603,  5603,  5603,  5067,  5603,  5603,  5603,  5603,
    5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,
    5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,   160,
    5603,  -692,  5766,  5603,   457,  5603,  -692,  5201,  5603,  5603,
    5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,  5603,
    -692,  -692,  -692,  6706,  5603,   461,  6754,    10,  4770,  5335,
     607,  4770,  -692,   446,   125,  -692,  5603,   457,   125,  5603,
    5603,   471,  -692,  -692,   465,  -692,   386,   504,  5603,    22,
    -692,  -692,     9,   472,  5603,  -692,  6801,   473,   478,   625,
    7515,  7369,   125,  -692,  -692,   479,  6849,   386,  -692,  7515,
      19,  -692,   474,   279,   887,  -692,  -692,  -692,   487,   -34,
    5751,  -692,  -692,    95,   505,  -692,  -692,  -692,  6896,  -692,
     491,  1539,    48,  -692,    57,   170,  -692,   508,   -84,   210,
     180,   490,    41,  -692,   214,  -692,  6944,   493,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,   365,  -692,  7134,  -692,  -692,
    5603,  -692,    59,  -692,  7515,   446,  5603,  -692,  5603,  -692,
    -692,  -692,   494,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  5603,  -692,  -692,
     495,   498,   329,   506,  6069,  1361,  1035,  5603,  7468,  1198,
    1522,  1685,  1848,  2008,  2170,  2333,  2333,  2333,  2333,  2333,
     817,   817,   817,   817,   424,   424,   640,   640,   640,   368,
     368,   368,  -692,   433,   495,   498,   329,   510,  -692,  5603,
    -692,   329,  7181,   594,  1035,  1035,  1035,  1035,  1035,  1035,
    1035,  1035,  1035,  1035,  1035,  1035,  1035,  -692,  1035,  -692,
     499,   509,   594,  7515,  5603,  -692,   504,  -692,   511,  -692,
    -692,  7228,  7515,  -692,   518,  -692,  -692,   386,  -692,  7515,
    -692,  3658,  5603,  -692,  -692,  -692,  5603,  5603,   403,  -692,
    -692,  3821,  -692,   671,   525,  5603,  -692,   666,  -692,  1050,
    -692,  5603,  -692,  -692,   553,  -692,  -692,  -692,   537,  -692,
      77,  -692,  -692,   594,   522,   103,  -692,   322,   187,   182,
    -692,  -692,   210,   193,  -692,  3984,   529,  -692,  7515,  5469,
    -692,   504,  6991,  7039,  1702,   546,   361,  7275,  -692,  -692,
    1198,  5603,  -692,  -692,  7322,  -692,  -692,   127,   666,    12,
    1035,  -692,  -692,  -692,   361,   671,   550,  -692,  -692,  -692,
    -692,  7086,   547,  7515,   594,  4770,   551,    30,    52,  -692,
    -692,   386,  -692,  -692,  5603,  -692,    53,  -692,  -692,   554,
     555,  -692,   375,    -7,  -692,  -692,   322,   210,    13,  -692,
    -692,   198,   210,  -692,  -692,  -692,   556,  -692,  -692,  4473,
     680,   557,   361,   355,  -692,  -692,  -692,   559,   704,  -692,
     679,  -692,  -692,  -692,  1198,  -692,   564,   563,  -692,  1865,
     568,  5603,    55,   567,  4770,   403,  4147,  3495,  -692,   690,
    1035,   576,  -692,   221,  -692,   106,  -692,  -692,  -692,  -692,
    -692,  -692,   386,  -692,  -692,  -692,   583,    28,   589,  -692,
     579,   585,  -692,    23,  -692,   322,  -692,   210,    64,  -692,
    2028,  -692,   586,  -692,  -692,  -692,   584,  -692,   595,   201,
    -692,   592,  -692,   595,   699,   588,  -692,   590,    65,   591,
     596,  -692,  -692,  -692,  -692,  -692,   323,  5603,    79,   593,
     113,  -692,     5,   743,    43,  -692,  6236,   396,  -692,   386,
    -692,  -692,  -692,    68,   210,  -692,   598,  -692,  3495,   731,
     602,   731,  -692,  -692,   610,   736,   731,  -692,  -692,  4310,
    -692,  4147,  2191,   609,  6518,  -692,  -692,  -692,  -692,  -692,
    5922,  -692,  -692,  5603,  -692,   583,  -692,   756,    44,  -692,
    6236,  -692,   -10,  2354,  -692,  -692,  -692,   768,   201,  -692,
      45,  -692,   764,  -692,  -692,  -692,  -692,  -692,  -692,   619,
    -692,  -692,  3495,   364,   700,  -692,  -692,   643,  6079,  -692,
     623,   639,   721,   678,  7515,  -692,  5603,  6236,  -692,  -692,
     386,   644,  -692,  -692,  -692,   648,   655,  -692,    60,  -692,
     652,  5603,   659,  2517,  -692,  3495,  6236,  -692,  -692,  -692,
    -692,  6390,   386,  -692,  7515,  -692,   658,  -692,   661,  -692,
    -692,    45,  -692,  -692,  7515,  -692,   662,  -692,  -692,  -692,
    6236,   671,  -692,   361,  -692,  2680,  -692,  2843,  3006,  -692,
    -692,   664,  3169,  -692,  -692,  -692,   731,  -692,  -692,  -692,
    -692,  -692,    71,  -692,  -692,  -692,  3332,  -692,  -692
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -692,  -692,   -55,  -692,  -229,  -177,   -36,   -26,  -692,   753,
    -692,  -692,   163,    91,   617,    97,  -186,   464,   663,  -191,
    -692,     8,  -692,  -692,  -692,  -692,   238,     1,  -692,  -692,
       3,  -692,   744,     6,     7,  -273,  -692,  -463,   147,  -692,
      54,  -692,  -692,  -402,    50,  -692,  -692,  -692,  -692,  -692,
    -627,  -692,   104,  -692,    46,   192,  -680,   -72,  -692,   248,
    -692,   544,  -692,   569,  -538,  -692,  -553,  -692,  -692,    33,
    -692,  -692,  -692,  -692,  -692,  -692,  -692,  -692,  -691,  -692,
      63,  -692,    26,   560,  -692,   558,  -543,  -692,  -692,  -692,
    -692,    -2,  -128,  -407,  -116,   143,  -692,    18,  -692,   -14,
     616,  -692,  -692,   732,    16,  -692,    29,   119,   -19,  -692,
    -692,  -692,  -692,    36,    -6,  -692,  -692,   626,   597,  -132,
     600,  -692,  -692,    -9,   416,  -692,  -692,  -692,   337
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -462
static const yytype_int16 yytable[] =
{
      99,   292,   154,    87,   635,    88,   295,   697,    91,    92,
      86,   480,   230,   651,   156,   344,   361,   319,  -461,   171,
    -460,   735,   158,   642,   860,   366,   193,   575,   194,   163,
     546,   735,   314,   311,   581,   319,   276,   778,   212,   324,
     141,   141,   332,   514,   705,   184,   195,   313,   374,   374,
     173,   815,   857,   142,   142,   746,   593,  -384,   342,   389,
     143,   144,   242,   243,   244,  -160,  -180,   609,   891,  -181,
       3,   223,   784,   227,   597,   225,   784,   229,   360,  -183,
     730,   866,   245,   631,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   659,   269,   805,
     273,   831,   163,   120,   709,   164,   834,   353,   167,    50,
     270,   776,   611,   118,   119,   582,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   861,   584,   147,   152,    50,   678,   731,
     233,   234,   165,   160,   367,   343,   369,   165,   757,   327,
     754,   141,   176,   810,   116,   168,   541,   811,   579,   772,
     561,  -461,   736,  -460,   142,   365,  -461,   370,  -460,   274,
     576,   297,   781,   366,   165,   554,   354,   312,   205,   320,
     900,   706,   767,   325,   196,  -421,   333,   220,   867,   767,
     275,   197,   375,   601,   768,   816,   858,   368,   614,   594,
     574,   768,   141,  -180,   795,   203,  -181,    99,  -160,   711,
     610,   892,   483,   785,   141,   142,  -183,   824,   185,   923,
     683,   585,   348,   924,   481,   660,   921,   142,   586,   293,
     139,   806,   397,   154,   364,   306,   389,   172,   587,   827,
     177,   200,   367,   178,   517,   156,   180,   147,   715,   296,
     181,   666,   367,   158,  -421,   771,   515,  -421,   520,   367,
     196,   191,   809,   615,   196,   367,   911,   197,    75,   116,
     355,   197,   684,   147,   198,  -421,   685,   548,   199,    81,
     556,   186,   187,   115,   192,    64,   326,   165,   547,   330,
     331,   520,   550,   116,   209,   595,   336,   767,   339,   147,
     766,   572,   770,    75,   307,   599,   350,   308,   188,   768,
     207,   189,   671,   358,    81,   389,   184,   200,   228,   901,
     210,   200,   769,   598,   115,   309,    64,   376,   603,   388,
     672,   389,    99,   387,   116,    87,   211,    88,   394,   602,
      91,    92,    86,   116,   116,   190,   737,   116,   206,    99,
     165,   484,   485,   486,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   204,   513,
     683,   208,   165,   218,   522,  -423,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   767,
     618,   670,   196,   538,   228,   209,   366,   147,   543,   197,
     147,   768,   355,   269,   870,   165,   356,   872,   551,   552,
     636,   637,   238,  -422,   803,   270,   684,   559,   196,   644,
     685,   210,   684,   176,   622,   197,   685,   699,   221,   625,
     716,   717,   718,   719,   720,   721,   241,   139,   707,    29,
      30,   235,   236,   237,  -423,   116,   153,  -423,   240,   200,
     231,   645,   263,   264,   265,   266,   267,   268,   272,   269,
     670,   734,   740,   139,    32,  -423,   739,  -426,   115,   229,
      64,   270,  -424,    50,   115,   200,    64,    37,   116,   191,
     270,   228,  -422,   696,   116,  -422,   918,   919,   920,   608,
     115,  -426,    64,   703,   922,   612,   298,   613,   927,   115,
     116,    64,  -210,  -422,   345,  -425,   722,   723,   346,   116,
      75,   572,   301,   646,   724,   196,   115,   196,    64,   141,
     304,    81,   197,   310,   197,   226,   116,   355,   196,   670,
     742,   739,   142,   788,   315,   197,    75,   300,   141,   627,
     316,   603,   351,   140,   318,   323,   603,    81,   321,   639,
     802,   142,   759,   337,   334,   335,   386,    99,   629,   650,
      87,   846,    88,   347,   141,    91,    92,    86,    75,   823,
     686,   859,   200,   224,   200,   399,   617,   142,   825,    81,
     518,   389,   373,   395,   648,   200,   620,   396,   686,   141,
      75,   398,    99,   674,   352,   519,   842,   357,   400,   846,
     401,    81,   142,   544,   160,   708,   555,   539,   557,   364,
     603,   603,   562,   567,   565,   577,   603,   352,   624,   357,
     566,   570,   352,   357,   873,   814,   580,   897,   589,   591,
     875,   596,   600,   606,   616,  -447,   686,   686,  -449,  -425,
     141,   820,   138,   630,   716,   717,   718,   719,   720,   721,
     628,   910,   619,   142,   139,    32,   623,   632,   634,   651,
     702,   641,   654,   652,   665,   330,   643,   743,    37,   657,
     676,   266,   267,   268,   339,   269,   572,    99,   905,   603,
     656,   603,   907,   658,   908,    99,   682,   270,   698,   701,
     744,   704,   749,   912,   762,   750,   712,   714,   741,   745,
     748,   141,   752,   686,   753,   777,   883,   115,   394,    64,
     756,   886,   926,   758,   142,   765,   773,   116,    99,   779,
     694,   648,  -262,   780,   787,   789,   790,    75,   603,   793,
     798,   799,   800,   821,   140,   808,   902,   801,    81,   813,
     826,   828,   830,   832,   147,   716,   717,   718,   719,   720,
     721,   840,   856,   710,   716,   717,   718,   719,   720,   721,
     871,   874,   -77,   876,   847,   879,    99,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      99,   880,   686,   881,   882,   888,   889,   836,   890,   762,
     893,   716,   717,   718,   719,   720,   721,   895,   903,   904,
     330,    99,   847,   147,   909,   916,   899,   213,   783,   733,
     372,   664,   782,   232,   887,   322,   290,   291,   604,  -421,
      99,   722,   723,   716,   717,   718,   719,   720,   721,   764,
     722,   723,   760,   792,   841,   838,   572,   677,   797,  -462,
    -462,  -462,  -462,   261,   262,   263,   264,   265,   266,   267,
     268,    99,   269,    99,   864,   747,   569,   686,   855,   560,
     553,   878,   563,   885,   270,   512,   804,   722,   723,   305,
       4,     5,     6,     7,     8,   833,   796,     0,   516,     9,
      10,   545,    11,    99,   549,    99,    99,     0,  -421,   906,
      99,  -421,   653,     0,     0,     0,     0,     0,     0,   722,
     723,     0,     0,     0,    99,     0,     0,   863,     0,  -421,
       0,     0,   854,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,     0,     0,     0,   884,    34,    35,     0,     0,
      36,    37,    38,     0,    39,     0,    40,    41,    42,     0,
     894,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,     0,
      75,    76,     0,     0,     0,    77,   578,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,   245,    11,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,   270,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    33,     0,     0,     0,     0,    34,
      35,     0,     0,    36,    37,    38,     0,    39,     0,    40,
      41,    42,     0,     0,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,    74,     0,    75,    76,     0,     0,     0,    77,   655,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,   270,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,    34,    35,     0,     0,    36,    37,    38,     0,
      39,     0,    40,    41,    42,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,    74,     0,    75,    76,     0,     0,
       0,    77,   244,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
     245,    11,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,   270,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      37,    38,     0,    39,     0,    40,    41,    42,     0,     0,
      43,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,   377,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,   378,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,   270,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    37,    38,     0,    39,     0,    40,    41,
      42,     0,     0,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,    47,    48,    49,    50,    51,
      52,   377,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,   592,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,   270,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,   681,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    37,    38,     0,    39,
       0,    40,    41,    42,     0,     0,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,   377,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,   270,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    37,
      38,     0,    39,     0,    40,    41,    42,     0,     0,    43,
      44,     0,   755,     0,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,    50,    51,    52,   377,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,    33,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    37,    38,     0,    39,     0,    40,    41,    42,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
     786,    45,     0,    46,    47,    48,    49,    50,    51,    52,
     377,    54,     0,    55,     0,    56,    57,    58,    59,    60,
      61,   115,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    37,    38,     0,    39,     0,
      40,    41,    42,     0,     0,    43,    44,     0,     0,     0,
     839,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,   377,    54,     0,    55,     0,    56,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
    -462,  -462,  -462,  -462,  -462,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     270,     0,    12,    13,     0,     0,     0,     0,    14,     0,
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
       0,     0,    77,   862,    78,     0,    79,    80,    81,    82,
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
       0,    43,    44,     0,     0,   896,     0,     0,     0,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,   377,
      54,     0,    55,     0,    56,    57,    58,    59,    60,    61,
     115,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
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
      73,     0,     0,    75,    76,     0,     0,     0,    77,   913,
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
       0,    77,   914,    78,     0,    79,    80,    81,    82,     4,
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
       0,    46,    47,    48,    49,    50,    51,    52,   377,    54,
       0,    55,     0,    56,    57,    58,    59,    60,    61,   115,
      63,    64,     0,     0,     0,     0,     0,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    75,
      76,     0,     0,     0,    77,   915,    78,     0,    79,    80,
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
      52,   377,    54,     0,    55,     0,    56,    57,    58,    59,
      60,    61,   115,    63,    64,     0,     0,     0,     0,     0,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,   917,    78,
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
      49,    50,    51,    52,   377,    54,     0,    55,     0,    56,
      57,    58,    59,    60,    61,   115,    63,    64,     0,     0,
       0,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     0,     0,     0,
      77,   928,    78,     0,    79,    80,    81,    82,     4,     5,
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
      46,    47,    48,    49,    50,    51,    52,   377,    54,     0,
      55,     0,    56,    57,    58,    59,    60,    61,   115,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   638,     0,
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
       0,   649,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   673,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
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
     835,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   390,     0,     0,    78,   391,     0,    80,
      81,    82,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    37,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
     146,    60,    61,   115,    63,    64,     0,     4,     5,     6,
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
       0,     0,     0,     0,     0,     0,    66,   116,   349,     0,
       0,     0,    71,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,     0,     0,
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
      75,     0,     0,     0,     0,     0,     0,    78,     0,     0,
      80,    81,    82,     0,     0,     0,     0,   523,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    37,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    45,     0,    46,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,   115,    63,    64,     0,     4,     5,
       6,     7,     8,    66,   116,     0,     0,     9,    10,    71,
      11,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,    78,     0,     0,    80,    81,    82,     0,     0,     0,
       0,   542,     0,     0,     0,     0,     0,     0,     0,     0,
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
      60,    61,   115,    63,    64,     0,     4,     5,     6,     7,
       8,    66,   116,     0,     0,     9,    10,    71,    11,     0,
       0,     0,    75,     0,     0,     0,   390,     0,     0,    78,
       0,     0,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,    32,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    37,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    46,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,    59,    60,    61,   115,    63,    64,     0,
       0,     0,     0,     0,     0,    66,   116,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
     242,   243,   244,    78,     0,     0,    80,    81,    82,   403,
     404,   405,   406,   407,     0,   408,   409,   410,   411,   412,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,   413,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,     0,
     427,   428,   429,   430,     0,   431,   432,     0,     0,   433,
       0,   434,     0,   435,   436,   437,     0,   438,     0,     0,
     439,   440,     0,   441,   442,   443,     0,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,     0,   455,
     456,     0,   457,   458,   459,   460,   461,     0,   462,   463,
     464,     0,     0,     0,     0,     0,     0,   465,     0,   466,
     583,   467,   468,   469,   470,   471,   472,   473,   474,    75,
     475,   294,   476,     0,   477,   403,   404,   405,   406,   407,
      81,   408,   409,   410,   411,   412,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,     0,     0,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,     0,   427,   428,   429,   430,
       0,   431,   432,     0,     0,   433,     0,   434,     0,   435,
     436,   437,     0,   438,     0,     0,   439,   440,     0,   441,
     442,   443,     0,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,     0,   455,   456,     0,   457,   458,
     459,   460,   461,     0,   462,   843,   464,    64,     0,     0,
       0,     0,     0,   465,     0,   844,     0,   467,   468,   469,
     470,   471,   472,   473,   474,     0,   475,     0,   476,   243,
     244,   845,   403,   404,   405,   406,   407,     0,   408,   409,
     410,   411,   412,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   413,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   414,   415,
       0,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,     0,   427,   428,   429,   430,     0,   431,   432,
       0,     0,   433,     0,   434,     0,   435,   436,   437,     0,
     438,     0,     0,   439,   440,     0,   441,   442,   443,     0,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,     0,   455,   456,     0,   457,   458,   459,   460,   461,
       0,   462,   843,   464,    64,     0,     0,     0,     0,     0,
     465,     0,   844,     0,   467,   468,   469,   470,   471,   472,
     473,   474,     0,   475,     0,   476,     0,     0,   877,   403,
     404,   405,   406,   407,     0,   408,   409,   410,   411,   412,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   413,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,     0,
     427,   428,   429,   430,     0,   431,   432,     0,     0,   433,
       0,   434,     0,   435,   436,   437,     0,   438,     0,     0,
     439,   440,     0,   441,   442,   443,     0,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,     0,   455,
     456,     0,   457,   458,   459,   460,   461,     0,   462,   463,
     464,     0,     0,     0,     0,     0,     0,   465,     0,   466,
       0,   467,   468,   469,   470,   471,   472,   473,   474,     0,
     475,     0,   476,   403,   404,   405,   406,   407,     0,   408,
     409,   410,   411,   412,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
     415,     0,   416,   417,   418,   716,   717,   718,   719,   720,
     721,   425,   426,     0,   427,   428,   429,   430,     0,   431,
     432,     0,     0,   433,     0,   434,     0,   435,   436,   437,
       0,   438,     0,     0,   439,   440,     0,   441,   442,   443,
       0,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,     0,   457,   458,   459,   460,
     461,     0,   462,   463,   464,     0,     0,   242,   243,   244,
       0,   465,     0,   898,     0,   467,   468,   469,   470,   471,
     472,   473,   474,     0,   475,     0,   476,   245,   805,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   242,   243,   244,     0,     0,     0,     0,     0,     0,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,   270,
     806,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   270,   271,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,   270,   359,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
     385,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,   242,   243,
     244,     0,     0,     0,     0,     0,     0,   537,   270,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   540,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,   242,   243,   244,     0,     0,     0,     0,
       0,     0,   564,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
     571,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,   242,   243,
     244,     0,     0,     0,     0,     0,     0,   590,   270,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   605,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,   242,   243,   244,     0,     0,     0,     0,
       0,     0,   679,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
     680,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,   700,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,   607,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   242,   243,   244,     0,     0,     0,     0,     0,     0,
     626,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,   633,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
     242,   243,   244,     0,   693,   299,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   568,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,   695,     0,     0,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   621,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-692)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-462)))

static const yytype_int16 yycheck[] =
{
       2,   117,    28,     2,   557,     2,   138,   634,     2,     2,
       2,   240,    84,     8,    28,   192,   207,     8,     8,    38,
       8,     8,    28,   566,    34,   211,    62,     8,    64,    31,
     303,     8,   164,     8,    68,     8,   108,   728,    74,     8,
      24,    25,     8,   272,    14,    51,    65,   163,     8,     8,
      42,     8,     8,    24,    25,   682,     8,   140,   190,   143,
      24,    25,     9,    10,    11,     8,    14,     8,     8,    14,
       0,    80,     8,    82,   158,    81,     8,   160,   206,    14,
      87,    36,    29,   546,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    30,    55,    30,
      68,   791,   114,   160,   652,   160,   796,    68,   143,   119,
      67,    93,   395,     4,     5,   159,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   153,    49,    26,    27,   119,   611,   156,
      72,    73,    33,   153,    82,   191,   135,    38,   701,   178,
     698,   145,    43,   158,   143,   143,   298,   162,   345,   722,
     161,   161,   159,   161,   145,   211,   166,   213,   166,   137,
     161,   145,   159,   369,    65,   313,   137,   162,    69,   162,
     881,   161,    86,   162,    96,    68,   162,    78,   153,    86,
     158,   103,   162,   162,    98,   162,   162,   135,   399,   161,
     338,    98,   196,   161,   752,    30,   161,   219,   161,   166,
     161,   161,   241,   159,   208,   196,   161,   159,   143,   158,
      29,   136,   196,   162,   240,   158,   916,   208,   143,   120,
      80,   162,   234,   269,   208,    68,   143,   160,   153,   787,
     160,   153,    82,   160,   273,   269,   160,   138,   660,   140,
     160,   158,    82,   269,   137,   159,   272,   140,   274,    82,
      96,   135,   159,   401,    96,    82,   903,   103,   153,   143,
     106,   103,    81,   164,   106,   158,    85,   306,   110,   164,
     316,   160,   160,   133,   158,   135,   177,   178,   304,   180,
     181,   307,   308,   143,    93,   135,   187,    86,   189,   190,
     712,   337,   714,   153,   137,   135,   197,   140,   143,    98,
     158,   160,   135,   204,   164,   143,   332,   153,   135,   882,
     119,   153,   111,   369,   133,   158,   135,   218,   374,   165,
     158,   143,   344,   224,   143,   344,   135,   344,   229,   135,
     344,   344,   344,   143,   143,   160,   158,   143,   143,   361,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   160,   270,
      29,   160,   273,   160,   275,    68,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,    86,
     482,   597,    96,   294,   135,    93,   602,   298,   299,   103,
     301,    98,   106,    55,   831,   306,   110,   834,   309,   310,
     558,   559,    36,    68,   111,    67,    81,   318,    96,    36,
      85,   119,    81,   324,   516,   103,    85,   638,   106,   521,
      75,    76,    77,    78,    79,    80,    68,    80,   649,    78,
      79,    72,    73,    74,   137,   143,    89,   140,   140,   153,
      89,    68,    48,    49,    50,    51,    52,    53,   140,    55,
     666,   667,   673,    80,    81,   158,   672,   160,   133,   160,
     135,    67,   160,   119,   133,   153,   135,    94,   143,   135,
      67,   135,   137,   631,   143,   140,   913,   914,   915,   390,
     133,   160,   135,   645,   921,   396,   160,   398,   925,   133,
     143,   135,   161,   158,   158,   160,   151,   152,   162,   143,
     153,   557,     8,   130,   159,    96,   133,    96,   135,   523,
     140,   164,   103,    16,   103,   106,   143,   106,    96,   735,
     678,   737,   523,   744,   162,   103,   153,   166,   542,   523,
     114,   597,   110,   160,    16,   154,   602,   164,   162,   561,
     761,   542,   704,   114,   162,   161,   163,   579,   542,   571,
     579,   810,   579,   162,   568,   579,   579,   579,   153,   780,
     616,   820,   153,   158,   153,    30,   477,   568,   784,   164,
     143,   143,   162,   143,   568,   153,   487,   160,   634,   593,
     153,   160,   614,   605,   198,   158,   807,   201,   162,   848,
     143,   164,   593,    16,   153,   651,   161,   166,   124,   593,
     666,   667,   160,     8,   161,   161,   672,   221,   519,   223,
     162,   162,   226,   227,   835,   773,   159,   876,   143,   158,
     841,   143,   162,   160,   160,   160,   682,   683,   160,   160,
     644,   777,    68,   544,    75,    76,    77,    78,    79,    80,
     161,   900,   166,   644,    80,    81,   166,   166,   160,     8,
     644,   562,    16,   158,   162,   566,   567,   679,    94,   136,
     161,    51,    52,    53,   575,    55,   722,   699,   889,   735,
     581,   737,   893,   166,   895,   707,   160,    67,   158,   162,
      30,   160,     8,   904,   706,    36,   162,   162,   162,   162,
     161,   705,   158,   749,   161,   727,   854,   133,   609,   135,
     162,   859,   923,   166,   705,   159,   153,   143,   740,   160,
     621,   705,   153,   158,   158,   161,   151,   153,   784,   157,
     162,   161,   161,   779,   160,   162,   884,   161,   164,    16,
     162,    30,   160,   153,   645,    75,    76,    77,    78,    79,
      80,   162,    16,   654,    75,    76,    77,    78,    79,    80,
      16,   162,    82,   140,   810,   162,   788,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     802,   162,   828,    82,   126,   161,   158,   799,   153,   801,
     158,    75,    76,    77,    78,    79,    80,   158,   160,   158,
     701,   823,   848,   704,   162,   161,   881,    74,   737,   666,
     213,   593,   735,    89,   860,   172,    65,    66,   374,    68,
     842,   151,   152,    75,    76,    77,    78,    79,    80,   159,
     151,   152,   705,   749,   804,   801,   882,   609,   159,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   873,    55,   875,   828,   683,   332,   903,   815,   319,
     311,   848,   324,   857,    67,   269,   767,   151,   152,   157,
       3,     4,     5,     6,     7,   159,   753,    -1,   272,    12,
      13,   301,    15,   905,   307,   907,   908,    -1,   137,   891,
     912,   140,   575,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     152,    -1,    -1,    -1,   926,    -1,    -1,   159,    -1,   158,
      -1,    -1,   813,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,   856,    89,    90,    -1,    -1,
      93,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
     871,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,    -1,    -1,    -1,   158,   159,   160,    -1,   162,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    29,    15,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    67,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,    -1,    -1,    -1,   158,   159,
     160,    -1,   162,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    93,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,    -1,    -1,
      -1,   158,    11,   160,    -1,   162,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      29,    15,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,
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
      -1,    12,    13,    -1,    15,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,
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
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    67,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
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
      15,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
     105,    -1,   107,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      -1,    -1,    -1,   158,    -1,   160,    -1,   162,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,    -1,
      -1,   153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,
     162,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,   150,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,
      -1,   160,    -1,   162,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
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
      -1,   104,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,    -1,    -1,
     153,   154,    -1,    -1,    -1,   158,    -1,   160,    -1,   162,
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
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
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
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,    -1,   163,
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
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
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
     153,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,    -1,     3,     4,
       5,     6,     7,   142,   143,    -1,    -1,    12,    13,   148,
      15,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     131,   132,   133,   134,   135,    -1,     3,     4,     5,     6,
       7,   142,   143,    -1,    -1,    12,    13,   148,    15,    -1,
      -1,    -1,   153,    -1,    -1,    -1,   157,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
       9,    10,    11,   160,    -1,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    87,    -1,    89,    90,    -1,    -1,    93,
      -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
     134,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
     159,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    14,   156,    -1,   158,     3,     4,     5,     6,     7,
     164,     9,    10,    11,    12,    13,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    87,
      -1,    89,    90,    -1,    -1,    93,    -1,    95,    -1,    97,
      98,    99,    -1,   101,    -1,    -1,   104,   105,    -1,   107,
     108,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,    -1,   156,    10,
      11,   159,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    87,    -1,    89,    90,
      -1,    -1,    93,    -1,    95,    -1,    97,    98,    99,    -1,
     101,    -1,    -1,   104,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,   154,    -1,   156,    -1,    -1,   159,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    87,    -1,    89,    90,    -1,    -1,    93,
      -1,    95,    -1,    97,    98,    99,    -1,   101,    -1,    -1,
     104,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
     134,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,    -1,   156,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    87,    -1,    89,
      90,    -1,    -1,    93,    -1,    95,    -1,    97,    98,    99,
      -1,   101,    -1,    -1,   104,   105,    -1,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,   134,    -1,    -1,     9,    10,    11,
      -1,   141,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,    -1,   156,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,   162,    -1,    -1,    -1,    -1,    -1,
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
      -1,    55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,   159,    14,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    82,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67
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
     163,   164,   165,   173,   174,   175,   188,   194,   197,   198,
     199,   200,   201,   213,   214,   215,   216,   256,   257,   258,
     265,   266,   271,   272,   273,   274,   276,   277,   278,   279,
     280,   281,   282,   293,    80,   133,   143,   258,   274,   274,
     160,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,    68,    80,
     160,   271,   273,   280,   280,    36,   130,   274,   286,   287,
     288,   289,   274,    89,   174,   255,   266,   267,   281,   283,
     153,   229,   230,   258,   160,   274,   275,   143,   143,   185,
     250,   275,   160,   188,   251,   252,   274,   160,   160,   268,
     160,   160,   227,   228,   281,   143,   160,   160,   143,   160,
     160,   135,   158,   173,   173,   275,    96,   103,   106,   110,
     153,   290,   291,    30,   160,   274,   143,   158,   160,    93,
     119,   135,   173,   176,   178,   181,   183,   184,   160,   186,
     274,   106,   269,   290,   158,   281,   106,   290,   135,   160,
     224,    89,   199,    72,    73,    72,    73,    74,    36,   261,
     140,    68,     9,    10,    11,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,   162,   140,    68,   137,   158,   224,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      65,    66,   261,   274,    14,   286,   274,   280,   160,    14,
     166,     8,   224,   270,   140,   270,    68,   137,   140,   158,
      16,     8,   162,   261,   286,   162,   114,   202,    16,     8,
     162,   162,   185,   154,     8,   162,   274,   275,   253,   254,
     274,   274,     8,   162,   162,   161,   274,   114,   203,   274,
     294,   295,   286,   173,   172,   158,   162,   162,   280,   144,
     274,   110,   291,    68,   137,   106,   110,   291,   274,   162,
     259,   186,   192,   193,   280,   173,   183,    82,   135,   135,
     173,   177,   181,   162,     8,   162,   274,   122,   159,   187,
     188,   194,   197,   200,   201,   161,   163,   274,   165,   143,
     157,   161,   225,   226,   274,   143,   160,   188,   160,    30,
     162,   143,   259,     3,     4,     5,     6,     7,     9,    10,
      11,    12,    13,    55,    69,    70,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    84,    85,    86,
      87,    89,    90,    93,    95,    97,    98,    99,   101,   104,
     105,   107,   108,   109,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   123,   124,   126,   127,   128,
     129,   130,   132,   133,   134,   141,   143,   145,   146,   147,
     148,   149,   150,   151,   152,   154,   156,   158,   169,   170,
     171,   281,   284,   275,   274,   274,   274,    30,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   267,   274,   171,   281,   284,   275,   143,   158,
     281,   285,   274,    36,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   161,   274,   166,
     161,   286,    36,   274,    16,   287,   202,   281,   275,   285,
     281,   274,   274,   230,   259,   161,   174,   124,   204,   274,
     250,   161,   160,   252,   161,   161,   162,     8,    82,   228,
     162,   161,   174,   233,   259,     8,   161,   161,   159,   172,
     159,    68,   159,   159,    49,   136,   143,   153,   292,   143,
     161,   158,   159,     8,   161,   135,   143,   158,   173,   135,
     162,   162,   135,   173,   184,   161,   160,   159,   274,     8,
     161,   202,   274,   274,   186,   259,   160,   274,   224,   166,
     274,    30,   224,   166,   274,   224,   159,   280,   161,   280,
     274,   204,   166,   159,   160,   233,   259,   259,    30,   188,
     208,   274,   253,   274,    36,    68,   130,   205,   280,    30,
     188,     8,   158,   295,    16,   159,   274,   136,   166,    30,
     158,   209,   231,   189,   193,   162,   158,   176,   179,   182,
     183,   135,   158,    30,   188,   212,   161,   226,   204,   161,
     161,    74,   160,    29,    81,    85,   174,   217,   218,   219,
     220,   221,   222,   159,   274,   159,   259,   217,   158,   186,
     161,   162,   280,   286,   160,    14,   161,   186,   174,   231,
     274,   166,   162,   210,   162,   210,    75,    76,    77,    78,
      79,    80,   151,   152,   159,   232,   242,   243,   244,   245,
      87,   156,   191,   179,   183,     8,   159,   158,   180,   183,
     186,   162,   259,   188,    30,   162,   217,   222,   161,     8,
      36,   195,   158,   161,   231,   107,   162,   253,   166,   286,
     205,    30,   188,   207,   159,   159,   210,    86,    98,   111,
     210,   159,   233,   153,   246,   247,    93,   258,   245,   160,
     158,   159,   182,   180,     8,   159,   112,   158,   186,   161,
     151,   262,   219,   157,   196,   231,   262,   159,   162,   161,
     161,   161,   186,   111,   274,    30,   162,   211,   162,   159,
     158,   162,   234,    16,   259,     8,   162,   171,   248,   249,
     261,   174,   190,   186,   159,   183,   162,   231,    30,   223,
     160,   223,   153,   159,   223,    30,   188,   206,   207,   109,
     162,   211,   186,   133,   143,   159,   171,   174,   235,   236,
     237,   238,   239,   240,   274,   247,    16,     8,   162,   171,
      34,   153,   159,   159,   221,   260,    36,   153,   263,   264,
     260,    16,   260,   186,   162,   186,   140,   159,   236,   162,
     162,    82,   126,   259,   274,   249,   259,   174,   161,   158,
     153,     8,   161,   158,   274,   158,   108,   171,   143,   169,
     245,   233,   259,   160,   158,   186,   264,   186,   186,   162,
     171,   217,   186,   159,   159,   159,   161,   159,   260,   260,
     260,   223,   260,   158,   162,   241,   186,   260,   159
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
#line 3801 "/Users/roberto/Projects/pelet/src/Php71LintParser.cpp"
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
#line 1221 "/Users/roberto/Projects/pelet/src/Php71LintParser.y"

