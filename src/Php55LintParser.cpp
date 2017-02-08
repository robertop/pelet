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
#define yyparse         php55_lint_parse
#define yylex           php55_lint_lex
#define yyerror         php55_lint_error
#define yylval          php55_lint_lval
#define yychar          php55_lint_char
#define yydebug         php55_lint_debug
#define yynerrs         php55_lint_nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php55LintParser.y"


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
#define php55_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php55_lint_error pelet::LintGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php55LintParser.cpp"

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
extern int php55_lint_debug;
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
int php55_lint_parse (void *YYPARSE_PARAM);
#else
int php55_lint_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php55_lint_parse (pelet::LexicalAnalyzerClass &analyzer);
#else
int php55_lint_parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 312 "/Users/roberto/Projects/pelet/src/Php55LintParser.cpp"

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
#define YYLAST   7900

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  160
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  469
/* YYNRULES -- Number of states.  */
#define YYNSTATES  926

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
      21,    26,    30,    36,    41,    45,    48,    52,    54,    56,
      60,    63,    68,    74,    79,    82,    83,    85,    87,    89,
      94,    96,    99,   103,   109,   118,   122,   128,   138,   142,
     145,   149,   152,   156,   159,   163,   167,   170,   174,   178,
     182,   184,   187,   193,   202,   211,   217,   219,   226,   230,
     234,   235,   245,   246,   251,   253,   254,   256,   259,   268,
     270,   274,   276,   278,   280,   281,   283,   293,   301,   308,
     310,   313,   315,   318,   319,   322,   324,   325,   328,   329,
     332,   334,   338,   339,   342,   344,   347,   352,   354,   359,
     361,   366,   368,   373,   377,   383,   387,   392,   397,   403,
     404,   410,   415,   417,   419,   421,   426,   427,   432,   433,
     439,   440,   443,   444,   448,   450,   451,   454,   458,   464,
     469,   474,   480,   488,   495,   496,   498,   500,   502,   505,
     509,   513,   515,   517,   520,   524,   528,   533,   537,   539,
     541,   544,   549,   553,   559,   561,   565,   568,   569,   573,
     576,   578,   587,   591,   593,   597,   599,   603,   604,   606,
     608,   611,   614,   617,   621,   623,   627,   629,   631,   635,
     640,   644,   645,   647,   649,   653,   655,   657,   658,   660,
     662,   665,   667,   669,   671,   673,   675,   677,   681,   687,
     689,   693,   699,   704,   708,   710,   711,   713,   717,   719,
     722,   724,   729,   733,   736,   738,   740,   741,   743,   747,
     754,   758,   763,   770,   773,   777,   781,   785,   789,   793,
     797,   801,   805,   809,   813,   817,   820,   823,   826,   829,
     833,   837,   841,   845,   849,   853,   857,   861,   865,   869,
     873,   877,   881,   885,   889,   893,   896,   899,   902,   905,
     909,   913,   917,   921,   925,   929,   933,   937,   941,   943,
     945,   950,   956,   961,   963,   966,   969,   972,   975,   978,
     981,   984,   987,   990,   992,   994,   996,  1000,  1003,  1005,
    1015,  1026,  1029,  1032,  1037,  1042,  1047,  1052,  1057,  1062,
    1066,  1068,  1069,  1074,  1078,  1083,  1085,  1088,  1091,  1096,
    1100,  1105,  1110,  1115,  1120,  1123,  1125,  1127,  1131,  1134,
    1136,  1140,  1143,  1145,  1147,  1152,  1154,  1157,  1158,  1161,
    1162,  1165,  1167,  1168,  1170,  1172,  1173,  1175,  1177,  1179,
    1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,  1199,  1202,
    1204,  1206,  1208,  1212,  1215,  1218,  1221,  1226,  1230,  1232,
    1234,  1238,  1240,  1242,  1244,  1246,  1250,  1253,  1255,  1259,
    1263,  1265,  1266,  1269,  1270,  1272,  1278,  1282,  1286,  1288,
    1290,  1292,  1296,  1300,  1302,  1304,  1306,  1312,  1314,  1317,
    1318,  1322,  1327,  1332,  1334,  1336,  1338,  1339,  1341,  1344,
    1348,  1352,  1354,  1359,  1364,  1366,  1368,  1370,  1372,  1375,
    1377,  1382,  1387,  1389,  1391,  1396,  1397,  1399,  1401,  1403,
    1408,  1413,  1415,  1417,  1421,  1423,  1426,  1430,  1432,  1434,
    1439,  1440,  1441,  1444,  1450,  1454,  1458,  1460,  1467,  1472,
    1477,  1480,  1483,  1486,  1488,  1491,  1493,  1498,  1502,  1506,
    1513,  1517,  1519,  1521,  1523,  1528,  1533,  1538,  1541,  1544,
    1549,  1552,  1555,  1557,  1561,  1563,  1565,  1569,  1573,  1577
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     161,     0,    -1,   162,    -1,   162,   164,    -1,    -1,   137,
      -1,   163,   129,   137,    -1,   170,    -1,   179,    -1,   180,
      -1,   116,   153,   154,   155,    -1,   127,   163,   155,    -1,
     127,   163,   151,   162,   152,    -1,   127,   151,   162,   152,
      -1,   145,   165,   155,    -1,   167,   155,    -1,   165,     8,
     166,    -1,   166,    -1,   163,    -1,   163,    75,   137,    -1,
     129,   163,    -1,   129,   163,    75,   137,    -1,   167,     8,
     137,    14,   259,    -1,    86,   137,    14,   259,    -1,   168,
     169,    -1,    -1,   170,    -1,   179,    -1,   180,    -1,   116,
     153,   154,   155,    -1,   171,    -1,   137,    27,    -1,   151,
     168,   152,    -1,   117,   266,   170,   200,   202,    -1,   117,
     266,    27,   168,   201,   203,    67,   155,    -1,   148,   266,
     199,    -1,    94,   170,   148,   266,   155,    -1,   110,   153,
     234,   155,   234,   155,   234,   154,   192,    -1,   139,   266,
     196,    -1,    77,   155,    -1,    77,   265,   155,    -1,    88,
     155,    -1,    88,   265,   155,    -1,   135,   155,    -1,   135,
     241,   155,    -1,   135,   270,   155,    -1,   242,   155,    -1,
     114,   209,   155,    -1,    73,   211,   155,    -1,    98,   233,
     155,    -1,   119,    -1,   265,   155,    -1,   144,   153,   177,
     154,   155,    -1,   111,   153,   270,    75,   191,   190,   154,
     193,    -1,   111,   153,   241,    75,   191,   190,   154,   193,
      -1,    90,   153,   195,   154,   194,    -1,   155,    -1,   143,
     151,   168,   152,   172,   173,    -1,   140,   265,   155,    -1,
     115,   137,   155,    -1,    -1,    80,   153,   250,   147,   154,
     151,   168,   152,   174,    -1,    -1,   150,   151,   168,   152,
      -1,   175,    -1,    -1,   176,    -1,   175,   176,    -1,    80,
     153,   250,   147,   154,   151,   168,   152,    -1,   178,    -1,
     177,     8,   178,    -1,   270,    -1,   182,    -1,   183,    -1,
      -1,    32,    -1,   245,   181,   137,   153,   204,   154,   151,
     168,   152,    -1,   184,   137,   185,   188,   151,   212,   152,
      -1,   186,   137,   187,   151,   212,   152,    -1,    82,    -1,
      72,    82,    -1,   141,    -1,    71,    82,    -1,    -1,   108,
     250,    -1,   121,    -1,    -1,   108,   189,    -1,    -1,   118,
     189,    -1,   250,    -1,   189,     8,   250,    -1,    -1,    97,
     191,    -1,   270,    -1,    32,   270,    -1,   124,   153,   289,
     154,    -1,   170,    -1,    27,   168,   102,   155,    -1,   170,
      -1,    27,   168,   103,   155,    -1,   170,    -1,    27,   168,
     101,   155,    -1,   137,    14,   259,    -1,   195,     8,   137,
      14,   259,    -1,   151,   197,   152,    -1,   151,   155,   197,
     152,    -1,    27,   197,   105,   155,    -1,    27,   155,   197,
     105,   155,    -1,    -1,   197,    79,   265,   198,   168,    -1,
     197,    91,   198,   168,    -1,    27,    -1,   155,    -1,   170,
      -1,    27,   168,   106,   155,    -1,    -1,   200,    65,   266,
     170,    -1,    -1,   201,    65,   266,    27,   168,    -1,    -1,
      66,   170,    -1,    -1,    66,    27,   168,    -1,   205,    -1,
      -1,   206,   147,    -1,   206,    32,   147,    -1,   206,    32,
     147,    14,   259,    -1,   206,   147,    14,   259,    -1,   205,
       8,   206,   147,    -1,   205,     8,   206,    32,   147,    -1,
     205,     8,   206,    32,   147,    14,   259,    -1,   205,     8,
     206,   147,    14,   259,    -1,    -1,    74,    -1,    78,    -1,
     250,    -1,   153,   154,    -1,   153,   208,   154,    -1,   153,
     242,   154,    -1,   241,    -1,   270,    -1,    32,   268,    -1,
     208,     8,   241,    -1,   208,     8,   270,    -1,   208,     8,
      32,   268,    -1,   209,     8,   210,    -1,   210,    -1,   147,
      -1,   157,   267,    -1,   157,   151,   265,   152,    -1,   211,
       8,   147,    -1,   211,     8,   147,    14,   259,    -1,   147,
      -1,   147,    14,   259,    -1,   212,   213,    -1,    -1,   227,
     231,   155,    -1,   232,   155,    -1,   214,    -1,   228,   245,
     181,   137,   153,   204,   154,   226,    -1,   145,   215,   216,
      -1,   250,    -1,   215,     8,   250,    -1,   155,    -1,   151,
     217,   152,    -1,    -1,   218,    -1,   219,    -1,   218,   219,
      -1,   220,   155,    -1,   224,   155,    -1,   223,   120,   221,
      -1,   250,    -1,   221,     8,   250,    -1,   137,    -1,   223,
      -1,   250,   134,   137,    -1,   222,    75,   225,   137,    -1,
     222,    75,   230,    -1,    -1,   230,    -1,   155,    -1,   151,
     168,   152,    -1,   229,    -1,   146,    -1,    -1,   229,    -1,
     230,    -1,   229,   230,    -1,    68,    -1,    69,    -1,    70,
      -1,    73,    -1,    72,    -1,    71,    -1,   231,     8,   147,
      -1,   231,     8,   147,    14,   259,    -1,   147,    -1,   147,
      14,   259,    -1,   232,     8,   137,    14,   259,    -1,    86,
     137,    14,   259,    -1,   233,     8,   265,    -1,   265,    -1,
      -1,   235,    -1,   235,     8,   265,    -1,   265,    -1,   236,
     272,    -1,   272,    -1,   237,    62,   284,   159,    -1,    62,
     284,   159,    -1,   237,   236,    -1,   237,    -1,   236,    -1,
      -1,   238,    -1,    64,   251,   257,    -1,   124,   153,   289,
     154,    14,   265,    -1,   270,    14,   265,    -1,   270,    14,
      32,   270,    -1,   270,    14,    32,    64,   251,   257,    -1,
      63,   265,    -1,   270,    25,   265,    -1,   270,    24,   265,
      -1,   270,    23,   265,    -1,   270,    22,   265,    -1,   270,
      21,   265,    -1,   270,    20,   265,    -1,   270,    19,   265,
      -1,   270,    18,   265,    -1,   270,    17,   265,    -1,   270,
      16,   265,    -1,   270,    15,   265,    -1,   269,    60,    -1,
      60,   269,    -1,   269,    59,    -1,    59,   269,    -1,   265,
      28,   265,    -1,   265,    29,   265,    -1,   265,     9,   265,
      -1,   265,    11,   265,    -1,   265,    10,   265,    -1,   265,
      30,   265,    -1,   265,    32,   265,    -1,   265,    31,   265,
      -1,   265,    45,   265,    -1,   265,    43,   265,    -1,   265,
      44,   265,    -1,   265,    46,   265,    -1,   265,    47,   265,
      -1,   265,    48,   265,    -1,   265,    42,   265,    -1,   265,
      41,   265,    -1,    43,   265,    -1,    44,   265,    -1,    49,
     265,    -1,    51,   265,    -1,   265,    34,   265,    -1,   265,
      33,   265,    -1,   265,    36,   265,    -1,   265,    35,   265,
      -1,   265,    37,   265,    -1,   265,    40,   265,    -1,   265,
      38,   265,    -1,   265,    39,   265,    -1,   265,    50,   251,
      -1,   266,    -1,   240,    -1,   153,   240,   154,   239,    -1,
     265,    26,   265,    27,   265,    -1,   265,    26,    27,   265,
      -1,   296,    -1,    58,   265,    -1,    57,   265,    -1,    56,
     265,    -1,    55,   265,    -1,    54,   265,    -1,    53,   265,
      -1,    52,   265,    -1,   107,   255,    -1,    61,   265,    -1,
     261,    -1,   243,    -1,   244,    -1,   156,   256,   156,    -1,
      12,   265,    -1,    13,    -1,   245,   181,   153,   204,   154,
     246,   151,   168,   152,    -1,    73,   245,   181,   153,   204,
     154,   246,   151,   168,   152,    -1,    13,   241,    -1,    13,
     270,    -1,    13,   265,    97,   241,    -1,    13,   265,    97,
     270,    -1,   244,    62,   284,   159,    -1,   243,    62,   284,
     159,    -1,    87,    62,   284,   159,    -1,    74,   153,   291,
     154,    -1,    62,   291,   159,    -1,   113,    -1,    -1,   145,
     153,   247,   154,    -1,   247,     8,   147,    -1,   247,     8,
      32,   147,    -1,   147,    -1,    32,   147,    -1,   163,   207,
      -1,   127,   129,   163,   207,    -1,   129,   163,   207,    -1,
     249,   134,   287,   207,    -1,   249,   134,   276,   207,    -1,
     278,   134,   287,   207,    -1,   278,   134,   276,   207,    -1,
     276,   207,    -1,    73,    -1,   163,    -1,   127,   129,   163,
      -1,   129,   163,    -1,   163,    -1,   127,   129,   163,    -1,
     129,   163,    -1,   249,    -1,   252,    -1,   281,   131,   285,
     253,    -1,   281,    -1,   253,   254,    -1,    -1,   131,   285,
      -1,    -1,   153,   154,    -1,   266,    -1,    -1,   100,    -1,
     293,    -1,    -1,   207,    -1,   125,    -1,    93,    -1,    87,
      -1,   123,    -1,   109,    -1,    92,    -1,   142,    -1,   126,
      -1,   112,    -1,   128,    -1,   136,   100,   104,    -1,   136,
     104,    -1,   258,    -1,   300,    -1,   163,    -1,   127,   129,
     163,    -1,   129,   163,    -1,    43,   259,    -1,    44,   259,
      -1,    74,   153,   262,   154,    -1,    62,   262,   159,    -1,
     260,    -1,    83,    -1,   249,   134,   137,    -1,   138,    -1,
     301,    -1,   299,    -1,   163,    -1,   127,   129,   163,    -1,
     129,   163,    -1,   258,    -1,   158,   293,   158,    -1,   136,
     293,   104,    -1,    83,    -1,    -1,   264,   263,    -1,    -1,
       8,    -1,   264,     8,   259,    97,   259,    -1,   264,     8,
     259,    -1,   259,    97,   259,    -1,   259,    -1,   267,    -1,
     241,    -1,   153,   265,   154,    -1,   153,   242,   154,    -1,
     270,    -1,   270,    -1,   270,    -1,   280,   131,   285,   275,
     271,    -1,   280,    -1,   271,   272,    -1,    -1,   131,   285,
     275,    -1,   273,    62,   284,   159,    -1,   274,    62,   284,
     159,    -1,   207,    -1,   274,    -1,   273,    -1,    -1,   282,
      -1,   288,   282,    -1,   249,   134,   276,    -1,   278,   134,
     276,    -1,   282,    -1,   279,    62,   284,   159,    -1,   248,
      62,   284,   159,    -1,   281,    -1,   279,    -1,   248,    -1,
     282,    -1,   288,   282,    -1,   277,    -1,   282,    62,   284,
     159,    -1,   282,   151,   265,   152,    -1,   283,    -1,   147,
      -1,   157,   151,   265,   152,    -1,    -1,   265,    -1,   286,
      -1,   276,    -1,   286,    62,   284,   159,    -1,   286,   151,
     265,   152,    -1,   287,    -1,   137,    -1,   151,   265,   152,
      -1,   157,    -1,   288,   157,    -1,   289,     8,   290,    -1,
     290,    -1,   270,    -1,   124,   153,   289,   154,    -1,    -1,
      -1,   292,   263,    -1,   292,     8,   265,    97,   265,    -1,
     292,     8,   265,    -1,   265,    97,   265,    -1,   265,    -1,
     292,     8,   265,    97,    32,   268,    -1,   292,     8,    32,
     268,    -1,   265,    97,    32,   268,    -1,    32,   268,    -1,
     293,   294,    -1,   293,   100,    -1,   294,    -1,   100,   294,
      -1,   147,    -1,   147,    62,   295,   159,    -1,   147,   131,
     137,    -1,    96,   265,   152,    -1,    96,   138,    62,   265,
     159,   152,    -1,    89,   270,   152,    -1,   137,    -1,   130,
      -1,   147,    -1,   122,   153,   297,   154,    -1,    99,   153,
     270,   154,    -1,    99,   153,   241,   154,    -1,     7,   265,
      -1,     6,   265,    -1,     5,   153,   265,   154,    -1,     4,
     265,    -1,     3,   265,    -1,   298,    -1,   297,     8,   298,
      -1,   270,    -1,   241,    -1,   249,   134,   137,    -1,   278,
     134,   137,    -1,   249,   134,    82,    -1,   249,   134,    82,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   231,   231,   235,   236,   240,   241,   245,   246,   247,
     248,   249,   250,   252,   254,   255,   259,   260,   264,   265,
     266,   267,   271,   272,   276,   277,   282,   283,   284,   285,
     290,   291,   295,   296,   297,   298,   299,   300,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   328,   332,   333,   334,   337,   338,
     341,   343,   349,   351,   355,   356,   360,   361,   365,   369,
     370,   374,   378,   382,   385,   387,   392,   398,   404,   414,
     415,   416,   417,   420,   422,   426,   429,   431,   434,   436,
     440,   441,   444,   446,   450,   451,   452,   456,   457,   462,
     463,   468,   469,   474,   475,   480,   481,   482,   483,   487,
     489,   490,   495,   496,   501,   502,   507,   509,   513,   515,
     519,   521,   525,   527,   532,   533,   538,   539,   540,   541,
     542,   543,   544,   545,   549,   551,   552,   553,   558,   559,
     560,   565,   566,   567,   568,   569,   570,   574,   575,   580,
     581,   582,   587,   588,   589,   590,   596,   597,   602,   603,
     604,   605,   611,   615,   616,   620,   621,   624,   626,   630,
     631,   635,   636,   640,   644,   645,   649,   650,   654,   658,
     659,   662,   664,   668,   669,   673,   674,   677,   679,   683,
     684,   688,   689,   690,   691,   692,   693,   697,   698,   699,
     700,   704,   705,   709,   710,   714,   716,   720,   721,   725,
     726,   730,   731,   735,   736,   737,   740,   743,   747,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   806,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     827,   833,   834,   835,   836,   840,   841,   842,   845,   846,
     849,   852,   854,   858,   859,   860,   861,   865,   867,   869,
     871,   873,   875,   877,   879,   884,   885,   886,   887,   891,
     892,   893,   899,   900,   905,   908,   913,   914,   919,   922,
     924,   925,   928,   930,   931,   935,   937,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     972,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   989,   991,   994,   996,  1000,  1001,  1002,  1003,  1007,
    1008,  1012,  1013,  1018,  1023,  1027,  1031,  1034,  1038,  1039,
    1044,  1048,  1049,  1054,  1058,  1059,  1060,  1064,  1065,  1069,
    1070,  1075,  1079,  1080,  1085,  1086,  1087,  1092,  1093,  1094,
    1098,  1099,  1100,  1105,  1106,  1109,  1111,  1116,  1117,  1121,
    1122,  1123,  1127,  1128,  1132,  1133,  1137,  1138,  1143,  1144,
    1145,  1149,  1151,  1155,  1156,  1157,  1158,  1159,  1160,  1161,
    1162,  1166,  1167,  1168,  1169,  1175,  1176,  1177,  1178,  1179,
    1180,  1185,  1186,  1187,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1203,  1204,  1208,  1209,  1213,  1214,  1218,  1222
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
  "namespace_name", "top_statement", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "catch_statement",
  "finally_statement", "additional_catches",
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
  "class_statement_list", "class_statement", "trait_use_statement",
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
  "expr_without_variable", "yield_expr", "combined_scalar_offset",
  "combined_scalar", "function", "lexical_vars", "lexical_var_list",
  "function_call", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
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
     164,   164,   164,   164,   164,   164,   165,   165,   166,   166,
     166,   166,   167,   167,   168,   168,   169,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   178,   179,   180,   181,   181,   182,   183,   183,   184,
     184,   184,   184,   185,   185,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   196,   197,
     197,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   205,   205,
     205,   205,   205,   205,   206,   206,   206,   206,   207,   207,
     207,   208,   208,   208,   208,   208,   208,   209,   209,   210,
     210,   210,   211,   211,   211,   211,   212,   212,   213,   213,
     213,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   221,   221,   222,   222,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   238,   238,   239,   239,   240,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   242,   242,   243,   243,   243,   244,   244,
     245,   246,   246,   247,   247,   247,   247,   248,   248,   248,
     248,   248,   248,   248,   248,   249,   249,   249,   249,   250,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   255,
     255,   255,   256,   256,   256,   257,   257,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   262,   262,   263,   263,   264,   264,   264,   264,   265,
     265,   266,   266,   267,   268,   269,   270,   270,   271,   271,
     272,   273,   273,   274,   275,   275,   275,   276,   276,   277,
     277,   278,   279,   279,   280,   280,   280,   281,   281,   281,
     282,   282,   282,   283,   283,   284,   284,   285,   285,   286,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     290,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   295,   295,   295,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   298,   298,   299,   299,   300,   301
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     3,     5,     8,     3,     5,     9,     3,     2,
       3,     2,     3,     2,     3,     3,     2,     3,     3,     3,
       1,     2,     5,     8,     8,     5,     1,     6,     3,     3,
       0,     9,     0,     4,     1,     0,     1,     2,     8,     1,
       3,     1,     1,     1,     0,     1,     9,     7,     6,     1,
       2,     1,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     4,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       5,     4,     1,     1,     1,     4,     0,     4,     0,     5,
       0,     2,     0,     3,     1,     0,     2,     3,     5,     4,
       4,     5,     7,     6,     0,     1,     1,     1,     2,     3,
       3,     1,     1,     2,     3,     3,     4,     3,     1,     1,
       2,     4,     3,     5,     1,     3,     2,     0,     3,     2,
       1,     8,     3,     1,     3,     1,     3,     0,     1,     1,
       2,     2,     2,     3,     1,     3,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     5,     4,     3,     1,     0,     1,     3,     1,     2,
       1,     4,     3,     2,     1,     1,     0,     1,     3,     6,
       3,     4,     6,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       4,     5,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     3,     2,     1,     9,
      10,     2,     2,     4,     4,     4,     4,     4,     4,     3,
       1,     0,     4,     3,     4,     1,     2,     2,     4,     3,
       4,     4,     4,     4,     2,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     4,     1,     2,     0,     2,     0,
       2,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     3,     2,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     1,     3,     2,     1,     3,     3,
       1,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     3,     3,     1,     1,     1,     5,     1,     2,     0,
       3,     4,     4,     1,     1,     1,     0,     1,     2,     3,
       3,     1,     4,     4,     1,     1,     1,     1,     2,     1,
       4,     4,     1,     1,     4,     0,     1,     1,     1,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     4,
       0,     0,     2,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     2,     1,     2,     1,     4,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     4,     2,     2,     4,
       2,     2,     1,     3,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     288,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   431,     0,     0,     0,     0,
     315,     0,     0,    79,   370,     0,   339,     0,     0,   342,
     338,     0,     0,     0,   329,   341,     0,     0,   345,   300,
       0,     0,     0,     0,    50,    85,     0,   340,     0,   337,
     344,     0,   346,     0,     0,     0,     5,   361,     0,     0,
      81,   343,     0,     0,     0,   413,     0,    25,     0,    56,
     332,   424,     0,   364,     3,     0,     7,    30,     8,     9,
      72,    73,     0,     0,   269,   380,     0,   284,   285,    74,
     406,     0,   367,   283,     0,   268,   379,     0,   383,     0,
     409,     0,   405,   387,   404,   407,   412,     0,   273,   363,
     362,   288,   315,     0,     5,    74,   461,   460,     0,   458,
     457,   287,   380,     0,   383,   255,   256,   257,   258,   280,
     279,   278,   277,   276,   275,   274,   315,     0,     0,   316,
       0,   238,   385,     0,   236,   282,     0,   436,     0,   373,
     223,     0,     0,   316,   322,   335,   323,     0,   325,   407,
       0,    82,    80,   154,     0,    74,   431,    39,     0,     0,
     415,    41,     0,     0,     0,     0,   204,     0,     0,   281,
     331,   205,     0,   149,     0,     0,   148,     0,     0,     0,
       0,     0,   430,     0,     4,     0,   366,    43,   380,     0,
     383,     0,     0,     0,   348,   445,     0,   443,    31,     0,
       0,    25,     0,     0,    18,     0,    17,     0,     0,   269,
       0,     0,   333,     0,   334,     0,     0,     0,     0,     0,
     307,     0,    15,    83,    86,    46,   415,   415,    75,     0,
     415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,   237,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,   415,     0,   415,     0,   425,
     408,     0,     0,     0,     0,   318,     0,     0,   440,   384,
       0,   299,   374,   432,     0,   318,     0,   336,   218,     0,
       0,   408,     0,     0,    48,     0,     0,    40,     0,   416,
       0,    42,     0,     0,     0,     0,    49,   380,   383,   330,
       0,   206,   208,   380,   383,     0,   150,   383,     0,    47,
      59,     0,    25,   116,   380,   383,     0,   462,     0,   428,
       0,   427,   365,     0,     4,    11,   309,    44,    45,     0,
     361,     0,   347,   444,     0,     0,   442,   369,   441,   109,
     109,    38,    58,     0,     0,    69,    71,    20,     0,     0,
      14,    25,   114,    35,     0,    32,    24,    26,    27,    28,
     216,   382,   381,   286,     0,   368,     6,     0,   138,     0,
     380,     0,   383,     0,     0,    88,     0,     0,     0,     0,
       0,   134,     0,   469,   466,     0,   399,   397,     0,     0,
     241,   243,   242,     0,     0,   239,   240,   244,   246,   245,
     260,   259,   262,   261,   263,   265,   266,   264,   254,   253,
     248,   249,   247,   250,   251,   252,   267,     0,   220,   234,
     233,   232,   231,   230,   229,   228,   227,   226,   225,   224,
     467,   400,     0,     0,   422,   418,   396,   417,   421,     0,
       0,   459,   380,   383,   317,     0,   435,     0,   434,   317,
     399,   400,   327,     0,     0,   371,     0,   359,   339,     0,
       0,     0,   351,     0,   349,   155,   358,   350,   152,   134,
     298,    23,   297,     0,     0,     0,     0,   203,   456,   455,
     205,     0,     0,     0,     0,   147,    10,   118,   120,     0,
     454,   430,   430,     0,   308,    13,     0,   450,     0,   448,
     452,   451,   453,     0,   447,   109,     0,   109,     0,    60,
       0,     0,     0,    19,    16,     0,     0,   415,     0,   215,
     214,   217,   270,   210,   414,   143,     0,   139,   140,     0,
       0,     0,   319,    84,     0,     0,    87,    90,   157,   296,
     295,   134,   135,   136,     0,   124,     0,   137,   403,     0,
     311,   310,   398,   272,     0,     0,   221,   313,   312,   402,
     393,   395,   394,   389,   415,     0,   410,   411,   439,   438,
       0,   324,   354,   355,   378,     0,   373,   371,     0,   353,
       0,     0,     0,     0,   103,     0,    25,   101,    55,    36,
       0,   207,     0,     0,    92,    94,    92,   151,   122,     0,
       0,    33,   463,     0,   426,     0,    12,     0,   446,     0,
       0,     0,     0,     0,   105,     0,    62,    70,    52,    21,
       0,     0,     0,   396,   209,   415,   213,     0,   380,   383,
      22,     0,   321,    89,   157,     0,   187,     0,   301,   134,
       0,   126,   423,   271,   335,   415,   415,   386,     0,     0,
       0,   433,     0,   326,     0,   357,   374,   372,     0,   352,
     468,   360,   153,   301,     0,     0,   205,    95,   430,     0,
       0,     0,     0,     0,     0,     0,   121,   429,   219,     0,
       0,     0,   112,   113,    25,   107,   106,     0,     0,    57,
     115,    29,   212,   390,     0,   146,   320,   187,    91,   191,
     192,   193,   196,   195,   194,     0,     0,   186,    78,   156,
     160,     0,     0,   185,   189,     0,     0,     0,     0,     0,
     127,     0,   222,     0,     0,   388,   419,   420,   437,   328,
     377,   376,   356,     0,   104,     0,     0,     0,    93,     0,
       0,     0,    25,     0,   117,   449,   108,    25,   111,     0,
      25,   211,    77,     0,     0,   163,   199,     0,    74,   190,
       0,   159,    25,     0,    25,     0,   130,     0,   129,   391,
     392,     0,    25,   102,     0,    96,    25,    99,    54,    53,
      25,   123,    34,   110,     0,     0,     0,     0,   167,   165,
     162,     0,     0,   158,     0,     0,     0,     0,   305,     0,
       0,   131,     0,   128,   375,     0,    25,    97,    37,     0,
     119,     0,    63,   202,   164,     5,     0,   168,   169,     0,
       0,   177,     0,     0,   200,   197,     0,     0,    76,   306,
       0,   302,   289,     0,   133,   290,     0,     0,    25,   166,
     170,   171,   181,     0,   172,     0,     0,   134,   201,     0,
     303,   132,     0,   100,     0,     0,   180,   173,   174,   178,
     198,     0,   304,    98,    65,   179,     0,     0,     0,    61,
      64,    66,   175,    25,   183,   161,     0,    67,     0,     0,
     184,     0,     0,    25,     0,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    83,    84,   225,   226,    85,   228,   396,
     397,    87,   656,   729,   909,   910,   911,   384,   385,   398,
     399,   249,    90,    91,    92,   415,    93,   417,   575,   576,
     710,   634,   848,   818,   628,   333,   381,   546,   724,   393,
     528,   638,   641,   714,   584,   585,   586,   240,   409,   195,
     196,   174,   676,   749,   750,   794,   830,   856,   857,   858,
     859,   897,   860,   861,   862,   895,   915,   751,   752,   753,
     754,   797,   755,   185,   340,   341,   559,   560,   561,   562,
      94,    95,    96,    97,    98,   125,   758,   839,   100,   101,
     587,   165,   166,   611,   693,   189,   233,   318,   102,   614,
     506,   103,   615,   313,   616,   104,   105,   106,   308,   107,
     108,   687,   563,   601,   602,   603,   109,   110,   111,   112,
     113,   114,   115,   116,   330,   476,   477,   478,   117,   360,
     361,   158,   159,   216,   217,   543,   118,   356,   357,   119,
     507,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -723
static const yytype_int16 yypact[] =
{
    -723,    45,  1861,  -723,  6662,  6662,   -67,  6662,  6662,  6662,
    6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,
    6662,  6662,   159,   159,  6662,  5264,  6662,   325,    30,    44,
     -18,   -64,  5391,  -723,  -723,   -39,    93,  5518,    77,  -723,
    -723,  4981,  6662,    80,   102,  -723,   113,   119,  -723,  -723,
     -20,    83,   128,   149,  -723,  -723,   165,  -723,   168,  -723,
    -723,   122,  -723,   187,  5645,   397,   108,  -723,   149,  6662,
    -723,  -723,   193,   203,    92,  -723,   149,  -723,  6789,  -723,
     341,   235,   449,   -13,  -723,    27,  -723,  -723,  -723,  -723,
    -723,  -723,   237,   252,  -723,  -723,    13,   329,   332,   364,
     340,   281,  -723,  -723,  7092,  -723,  -723,   295,   994,   264,
    -723,   289,   365,   307,  -723,    -4,  -723,   114,  -723,  -723,
    -723,  -723,   338,   313,  -723,   364,  7771,  7771,  6662,  7771,
    7771,  2161,   -22,  7602,  1715,  -723,  -723,   403,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,   327,   187,   105,
     330,  -723,  -723,   355,  -723,  -723,   159,  7645,   316,   482,
    -723,   369,   187,   371,   368,   264,  -723,   373,   372,   -10,
     114,  -723,  -723,   490,    28,   364,  5264,  -723,  7134,   498,
    6662,  -723,  7178,   382,   379,    32,  7771,  6662,  5772,  -723,
    -723,  6662,  6662,  -723,   384,    40,  -723,   375,   374,  6789,
    4201,  6662,   201,   187,  -723,   -38,   123,  -723,   385,  7771,
     716,   159,  6916,     4,  -723,    35,   462,  -723,  -723,    16,
    7220,  -723,   159,   187,    -6,    57,  -723,  4357,  2017,   378,
     388,  7262,   160,   383,   479,  6662,   160,     3,   406,  5137,
    -723,   410,  -723,   442,   448,  -723,  6662,  6662,  -723,   -57,
    6662,   -32,  6662,  6662,  6662,  5900,  6662,  6662,  6662,  6662,
    6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,
    6662,  6662,  6662,  6662,  6662,  6662,  6662,   325,  -723,  -723,
    -723,  6027,  6662,  6662,  6662,  6662,  6662,  6662,  6662,  6662,
    6662,  6662,  6662,  -723,   282,  6662,   423,  6662,  6662,   235,
      20,   408,  7306,  6662,   187,   105,   423,   423,  -723,  -723,
    6154,  -723,  6281,  -723,   187,   371,   166,  -723,  -723,   166,
     423,    21,  1399,   412,  -723,   414,   411,  -723,  1399,  7771,
     417,  -723,   555,    22,   149,  6662,  -723,   429,  2027,  -723,
     418,   569,  7771,   510,  1023,  6662,  -723,  -723,   -20,  -723,
    -723,   431,  -723,  -723,    46,   223,    55,  -723,   435,  -723,
      62,  -723,   164,  1549,  -723,  -723,  -723,  -723,  -723,   437,
     531,  7348,  -723,  -723,   -19,   457,  -723,  -723,  -723,   440,
     443,  -723,  -723,  2173,    63,  -723,  -723,   175,   469,    92,
    -723,  -723,  -723,  -723,   446,  -723,  -723,  -723,  -723,  -723,
      72,  -723,  -723,  -723,  7391,  -723,  -723,   159,  -723,    64,
      68,   453,  1043,   596,   172,   493,   172,   463,   454,   458,
     466,   241,   464,  -723,   471,  6662,   264,    21,   264,   114,
    7812,  7850,  2161,  6662,  7729,  2470,  1076,  2624,  2779,  2934,
    3090,  3090,  3090,  3090,  1526,   724,   724,   724,   621,   621,
     419,   419,   419,   403,   403,   403,  -723,   287,  2161,  2161,
    2161,  2161,  2161,  2161,  2161,  2161,  2161,  2161,  2161,  2161,
     471,   264,   264,   468,  -723,  -723,   264,    23,  -723,   470,
    7433,  -723,   208,  1871,   105,   159,  7771,   159,  7687,   371,
    -723,  -723,  -723,  1399,  1399,  1399,   472,  -723,  -723,   507,
     187,    53,   135,   488,  -723,  -723,  -723,  -723,   623,   241,
    -723,  -723,  -723,  1399,   501,  4513,   484,  7771,  -723,  -723,
    6662,  6662,   138,   138,  7475,  -723,  -723,  4045,   356,  6662,
    -723,   201,   201,   626,  -723,  -723,  1705,  -723,  6662,  -723,
    -723,  -723,  -723,   483,  -723,  -723,    31,  -723,    11,   563,
     159,   489,   508,  -723,  -723,  2329,   494,  6662,   423,   516,
      76,  -723,  -723,  -723,  -723,  -723,  6408,  -723,  -723,  1399,
     520,   187,   371,  -723,   172,   500,   644,  -723,  -723,  -723,
    -723,   241,  -723,  -723,   502,   647,     7,  -723,  -723,  7518,
    -723,  -723,    21,  2315,  6662,   325,  -723,  -723,  -723,  -723,
    -723,   595,   597,  -723,  6662,  6662,  -723,  -723,  -723,  -723,
    6535,   529,  -723,  -723,   564,   504,   664,  1399,   187,   242,
     577,    19,  1399,   530,  -723,   669,  -723,  -723,  -723,  -723,
     533,  7771,   159,   532,   589,  -723,   589,  -723,   370,   149,
    4981,  -723,  -723,    69,  -723,  6662,  -723,  1336,  -723,   189,
    6662,    14,   534,    67,  -723,   540,   552,  -723,  -723,  -723,
     549,   550,   547,   264,  -723,  6662,   516,   159,    70,  1272,
    -723,   187,   371,   644,  -723,   172,   339,   553,   566,   291,
     561,   695,  -723,  2315,   264,  6662,  6662,   516,   556,  7560,
     159,  7771,   423,  -723,  1399,  -723,  1399,  -723,   558,   254,
    -723,  -723,  -723,   566,  1399,  2485,  6662,  -723,   201,   138,
     560,   565,   149,   690,   653,  4981,  -723,  -723,  2161,   570,
     571,  7050,  -723,  -723,  -723,  -723,  -723,   172,   573,  -723,
    -723,  -723,  -723,  -723,   568,  -723,   371,   377,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,   584,   172,  -723,  -723,  -723,
    -723,   581,   338,   562,  -723,    59,   591,   590,   594,    15,
     732,  1399,  -723,   598,   599,  -723,  -723,  -723,  -723,  -723,
    -723,   651,  -723,   602,  -723,   604,   600,    71,  -723,  4669,
    4669,   722,  -723,   605,  -723,  -723,  -723,  -723,  4045,   630,
    -723,  -723,  -723,   759,    24,  -723,   764,    60,   364,  -723,
     642,  -723,  -723,    17,  -723,   635,   769,  1399,  -723,  -723,
    -723,  1399,  -723,  -723,  4825,  -723,  -723,  -723,  -723,  -723,
    -723,  4045,  -723,  4045,   631,  2641,  1399,   172,   230,  -723,
    -723,  1399,   637,  -723,   650,   774,  2797,   645,  -723,    73,
    2953,   775,  1399,  -723,  -723,  3109,  -723,  -723,  -723,  3265,
    4045,   640,  -723,  -723,  -723,   721,   646,   230,  -723,   648,
     725,   679,   649,   667,  -723,   788,   652,  1399,  -723,  -723,
      34,  -723,  -723,  1399,  -723,  -723,  3421,   658,  -723,  -723,
    -723,  -723,   628,   172,  -723,   681,  1399,   241,  -723,   659,
    -723,  -723,   661,  -723,  3577,   683,   685,   816,  -723,  -723,
    -723,   672,  -723,  -723,   747,  -723,   172,   192,   676,  -723,
     747,  -723,  -723,  -723,  -723,  -723,   172,  -723,  3733,   684,
    -723,   678,   682,  -723,  3889,  -723
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -723,  -723,  -171,   -17,  -723,  -723,   441,  -723,  -200,  -723,
       1,  -723,  -723,  -723,  -723,  -723,   -75,  -723,   286,    10,
      12,  -124,  -723,  -723,  -723,  -723,  -723,  -723,  -723,   263,
     205,  -507,  -723,    65,  -723,  -723,  -723,  -355,   118,  -723,
    -723,  -723,  -723,  -723,  -487,  -723,   163,   -92,  -723,  -723,
     496,  -723,   177,  -723,  -723,  -723,  -723,  -723,  -723,   -11,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -722,  -723,  -723,  -723,  -496,  -723,   292,  -723,  -723,  -723,
     776,    -3,   -40,  -723,  -723,    -2,   152,  -723,  -723,   -14,
    -396,  -254,  -723,  -723,  -723,  -723,  -723,   173,   433,   708,
    -723,  -723,   243,   245,  -723,   893,   -42,   668,  -378,   436,
     785,  -723,  -522,  -723,  -723,   195,  -232,  -723,   729,  -723,
    -723,   -23,    26,  -723,  -191,  -305,  -723,   -16,    33,  -504,
     331,   688,  -723,   255,   169,  -723,  -723,  -723,   336,  -723,
    -723,  -723
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -466
static const yytype_int16 yytable[] =
{
      99,   301,   190,    86,   168,   149,   149,   132,   150,   150,
     163,   200,    88,   164,    89,   492,   636,   293,   573,   426,
     577,   383,   623,   456,   630,   548,   219,   643,   175,   565,
     514,   799,   827,   363,   227,   241,   323,   664,   230,   680,
     335,   722,   184,   379,   205,     3,   206,   805,   348,   837,
     423,   325,   297,   169,  -465,   418,   419,   224,   297,   422,
     170,   208,   471,   529,   475,   389,   889,   800,   832,   388,
     532,   550,   566,   317,   426,   471,  -141,   532,  -144,   532,
     420,   870,   297,   297,   490,   604,   128,   491,   475,   176,
     650,   238,   211,   211,   677,    49,   421,   374,   179,   212,
     212,   700,   651,   376,   473,   424,   479,   608,   372,   609,
     650,   540,   171,   364,   366,    75,   238,   365,   541,   425,
     175,  -316,   651,   238,  -401,    81,   172,   193,   542,   173,
    -401,   305,  -291,  -291,   557,   218,   652,   194,   665,   149,
     239,   298,   150,   300,   664,   315,   650,   298,   230,  -397,
     215,   215,   527,   620,   681,   180,   701,   214,   651,   230,
     896,   405,   806,   654,   838,   765,   375,   380,   245,   723,
     632,   298,   298,  -398,   605,   828,   515,   149,   577,   829,
     150,   890,   242,   324,   337,   149,   362,   336,   150,   343,
     649,   555,   653,   536,   149,   349,   321,   150,   354,   411,
    -465,   353,   778,   558,   777,   149,   387,   558,   150,   530,
     776,   146,   390,   366,   801,   833,   533,   551,   567,   726,
     197,   223,  -141,   717,  -144,   815,    99,   871,   392,   124,
     183,  -464,   146,   187,   238,   428,   410,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   211,
     552,   203,   238,   663,   168,   188,   212,  -318,   239,   124,
     163,    75,   633,   164,   238,   147,   191,   148,   650,  -316,
     534,   299,   192,   204,   146,   124,   239,   427,   472,   738,
     651,   198,  -385,  -385,   429,    75,   147,   484,   148,   735,
     428,   472,   516,   238,   720,    81,   124,   489,  -317,   570,
     482,   571,   199,   169,   238,   502,    75,   215,   503,   124,
     170,   502,   768,    75,   503,   582,    81,   239,   201,   583,
     427,   202,   427,    81,   124,   358,   475,   429,   147,   429,
     148,   789,   427,   427,   590,   234,   591,   237,   124,   429,
     429,   684,   427,   913,   221,   427,   427,   914,    75,   429,
     795,   595,   429,   429,   279,   280,   222,   570,    81,   571,
     146,    99,  -293,  -293,    86,   582,   662,   855,   570,   583,
     571,   238,   224,    88,   243,    89,  -318,  -464,   124,   597,
     598,    99,   373,   238,   600,   378,   235,   769,  -317,   244,
     149,   246,   534,   150,   247,  -125,   248,   572,   146,   572,
     901,   373,   250,   378,   572,   373,   378,   739,   740,   741,
     742,   743,   744,   688,   147,   251,   148,   239,   570,   470,
     571,   639,   640,   294,   124,   745,   705,   295,   124,    75,
     211,   854,   863,   425,    75,   712,   713,   212,   296,    81,
     149,   232,   203,   150,    81,   739,   740,   741,   742,   743,
     744,    49,   161,   277,   162,   592,   304,   146,   151,   154,
     475,   863,   124,   745,   306,   274,   275,   276,   149,   277,
     149,   150,    75,   150,   734,   311,   502,   502,   502,   503,
     503,   503,    81,   619,   746,   747,   211,   898,   215,   307,
     312,   748,   572,   212,   763,   764,   502,   213,   314,   503,
     238,   214,   316,   320,   322,   149,   149,   319,   150,   150,
     912,   147,   328,   148,   149,   149,   627,   150,   150,   332,
     919,   124,   746,   747,   788,    99,   354,   334,   351,   792,
     350,    75,   400,   149,    99,   345,   150,    86,   211,   403,
     367,    81,   401,   406,   215,   212,    88,   413,    89,   236,
     414,   211,   502,    99,   672,   503,   416,   572,   212,   508,
     474,   421,   376,   668,   572,   510,   377,   509,   211,   513,
      75,   600,   168,   520,   425,   212,   512,   521,   163,   376,
      81,   164,   821,   518,   427,   522,   526,   823,   531,   537,
     825,   429,   317,   538,   544,   545,   215,   715,   547,   556,
     502,   699,   836,   503,   840,   502,   553,   568,   503,   215,
     569,   574,   845,   579,   578,   149,   849,   580,   150,   581,
     850,   169,   621,   588,  -422,   617,   215,   599,   170,   606,
     739,   740,   741,   742,   743,   744,   618,   622,   625,   629,
     645,   716,   648,   655,   658,   659,   876,   558,   661,   671,
     149,   674,   675,   150,   736,   679,   678,   685,   572,   686,
     692,   694,   572,   695,   271,   272,   273,   274,   275,   276,
     781,   277,   696,   149,   834,  -188,   150,   502,   894,   502,
     503,   372,   503,   704,   703,   708,   709,   502,   706,   725,
     503,   149,   149,   727,   150,   150,   739,   740,   741,   742,
     743,   744,   728,    99,   730,   731,   732,   756,   760,   761,
     572,   757,   772,   918,   779,   766,   784,   782,   427,   780,
     783,   793,   785,   924,   790,   429,   786,   791,   796,   572,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   802,   803,   502,   804,   807,   503,   811,   820,
     798,   153,   153,   812,   814,   504,   167,   809,   810,   813,
     822,   504,  -466,  -466,  -466,   269,   270,   271,   272,   273,
     274,   275,   276,   826,   277,  -385,  -385,   824,   831,   835,
     817,   817,   841,   842,   865,   851,    99,   866,   867,   873,
     502,   878,   869,   503,   502,   134,  -176,   503,   879,   883,
     882,   885,   886,   881,   884,   887,   902,   152,   152,   502,
     572,   572,   503,   893,   502,   847,   903,   503,   899,    99,
     905,    99,  -182,    99,   906,   502,   907,   908,   503,   916,
     554,   921,   922,   923,    99,   917,   657,   673,    99,   787,
     572,   711,   759,    99,   525,   819,   880,    99,    99,   210,
     502,   737,   666,   503,   229,   773,   502,   762,   733,   503,
     698,   697,   346,   644,   326,   642,   572,     0,     0,   502,
     572,   368,   503,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,   572,
       0,     0,    99,     0,     0,     0,     0,   126,   127,   572,
     129,   130,   131,   133,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,    99,   155,   157,   160,
       0,     0,    99,   153,     0,   178,   504,   504,   504,     0,
     182,   153,     0,     0,     0,   186,     0,     0,     0,     0,
     153,   309,     0,     0,     0,     0,   504,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,   231,   338,     0,     0,     0,     0,   344,     0,   347,
       0,     0,     0,     0,     0,     0,   355,   359,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,   504,     0,     0,     0,   167,   386,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   302,     0,     0,   412,     0,     0,     0,     0,     0,
     505,     0,     0,     0,     0,     0,   511,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     504,  -142,     0,  -385,  -385,   504,     0,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   157,
       0,     0,     0,   329,     0,     0,     0,     0,     0,     0,
     209,   231,  -385,  -385,   342,   209,     0,     0,   483,     0,
       0,     0,   231,     0,   209,     0,     0,     0,   523,     0,
       0,     0,  -385,  -385,     0,   371,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,   504,   404,   504,
       0,     0,   209,     0,     0,     0,   153,   504,     0,   329,
     329,     0,     0,   329,     0,   430,   431,   432,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
       0,     0,     0,     0,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   153,     0,   329,     0,
     329,   480,   309,     0,   504,     0,   209,  -142,     0,     0,
       0,   612,   613,   486,     0,   488,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,   153,     0,     0,     0,
       0,   624,     0,     0,     0,     0,     0,     0,   517,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   524,     0,
     504,     0,   596,     0,   504,     0,     0,     0,     0,     0,
       0,   153,   153,     0,     0,     0,     0,     0,     0,   504,
     153,   153,     0,     0,   504,     0,     0,     0,     0,     0,
     309,     0,   309,     0,     0,   504,     0,   670,     0,   153,
    -145,     0,     0,     0,     0,     0,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,     0,
     504,     0,     0,     0,     0,     0,   504,   635,   635,     0,
       0,     0,     0,     0,   355,     0,   359,   359,   589,   504,
       0,     0,     0,     0,   167,     0,   593,     0,     0,     0,
     702,  -385,  -385,     0,     0,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,   253,   254,     0,     0,
       0,   669,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   255,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,     0,   770,     0,   771,     0,     0,     0,     0,     0,
       0,     0,   774,   342,   631,     0,     0,   707,     0,   153,
       0,     0,   209,     0,     0,     0,  -145,     0,     0,     0,
       0,   647,     0,     0,     0,     0,     0,   153,   153,     0,
       0,     0,   493,   494,     0,     0,     0,     0,     0,     0,
     329,     0,   309,     0,     0,     0,     0,     0,     0,   209,
       0,   495,     0,     0,     0,     0,     0,     0,     0,   808,
       0,     0,   146,   496,     0,   309,     0,     0,     0,     0,
       0,     0,   497,     0,     0,     0,   498,   683,     0,     0,
       0,    39,    40,   359,   635,   719,     0,   329,   689,     0,
       0,     0,     0,   691,     0,     0,     0,     0,    45,     0,
       0,    48,     0,     0,     0,   843,     0,     0,     0,   844,
       0,     0,    57,     0,    59,    60,   499,    62,   500,     0,
       0,     0,     0,     0,   853,   501,   124,     0,   718,   864,
       0,    71,     0,   721,     0,     0,     0,     0,     0,     0,
     874,     0,     4,     5,     6,     7,     8,     0,   329,     0,
       0,     9,    10,  -466,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   888,   277,     0,   329,   329,
       0,   891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,   900,     0,     0,     0,    13,   342,
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
      77,   535,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,  -385,  -385,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,    35,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     0,    75,    76,     0,     0,    77,   646,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,  -292,
    -292,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
    -385,  -385,    28,    29,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,    35,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    75,    76,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,  -294,  -294,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,  -385,  -385,    28,    29,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   394,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   123,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,    77,   395,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,   519,     0,     0,     0,     9,    10,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,     0,     0,     0,     0,    11,    12,     0,     0,
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
      75,    76,     0,     0,    77,   549,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    34,     0,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,   660,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   394,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,     0,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,   775,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   394,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,     0,     0,     0,     0,
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
       0,     0,    77,   852,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
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
      72,    73,     0,     0,    75,    76,     0,     0,    77,   868,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,     0,     0,     0,     0,
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
      75,    76,     0,     0,    77,   872,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,  -466,  -466,  -466,  -466,   265,   266,   267,
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
      77,   875,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,   877,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,   394,    53,     0,    54,     0,    55,    56,    57,    58,
      59,    60,   123,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,    75,    76,     0,     0,    77,     0,    78,     0,
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
      43,     0,     0,   892,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   394,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   123,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
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
      72,    73,     0,     0,    75,    76,     0,     0,    77,   904,
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
      75,    76,     0,     0,    77,   920,    78,     0,    79,    80,
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
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   394,    53,     0,    54,     0,
      55,    56,    57,    58,    59,    60,   123,    62,    63,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    75,    76,     0,     0,
      77,   925,    78,     0,    79,    80,    81,    82,     4,     5,
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
       0,     0,    75,    76,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,     0,
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
       0,     0,     0,     0,   391,     0,     0,     0,     0,     0,
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
     626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   816,     0,     0,     0,
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
       0,     0,   846,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
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
      78,   408,     0,    80,    81,    82,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   122,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   123,    62,    63,     4,     5,     6,     7,     8,     0,
      65,   124,    67,     9,   121,     0,    71,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,    78,     0,     0,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,   122,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,   123,    62,
      63,     4,     5,     6,     7,     8,     0,    65,   124,    67,
       9,   121,     0,    71,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,    78,     0,   177,    80,    81,    82,
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
       0,    78,     0,   181,    80,    81,    82,     0,     0,     0,
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
       0,    65,   124,    67,     9,    10,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,    78,     0,
     207,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   122,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,    60,   123,
      62,    63,     0,     4,     5,     6,     7,     8,    65,   124,
      67,     0,     9,   121,    71,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    78,   339,   433,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     121,     0,    71,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,    78,     0,     0,    80,    81,    82,   457,
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
      78,     0,     0,    80,    81,    82,   485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   122,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   123,    62,    63,     4,     5,     6,     7,     8,     0,
      65,   124,    67,     9,   121,     0,    71,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,    78,     0,     0,
      80,    81,    82,   487,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,   122,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    36,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,   123,    62,
      63,     4,     5,     6,     7,     8,     0,    65,   124,    67,
       9,   121,     0,    71,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,    78,     0,     0,    80,    81,    82,
     667,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    78,     0,     0,    80,    81,    82,   690,     0,     0,
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
       0,    80,    81,    82,     0,     0,     0,     0,     0,     0,
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
      67,     9,    10,     0,    71,     0,     0,     0,     0,    75,
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
       0,     0,    78,     0,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,   122,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    36,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    45,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,    60,   123,    62,    63,     0,     0,     0,     0,
       0,     0,    65,   124,   370,     0,     0,     0,    71,   252,
     253,   254,     0,    75,     0,     0,     0,     0,     0,    78,
       0,     0,    80,    81,    82,     0,   255,   722,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,     0,     0,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,   723,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   278,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,   327,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,     0,   252,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   331,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     0,   277,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,   382,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,     0,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     481,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,   277,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     539,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,     0,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   564,   255,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,     0,   277,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   607,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   637,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,     0,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     682,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,   277,   252,   253,   254,   303,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   767,   255,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,   277,   252,   253,
     254,     0,   310,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,   594,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
     252,   253,   254,     0,   610,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
       0,   277,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   254,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
     277
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-723)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-466)))

static const yytype_int16 yycheck[] =
{
       2,   125,    44,     2,    27,    22,    23,    10,    22,    23,
      27,    53,     2,    27,     2,   320,   523,   109,   414,   251,
     416,   221,   509,   277,   520,   380,    68,   531,    30,   407,
       8,   753,     8,   204,    76,     8,     8,   559,    78,    32,
       8,    27,    41,    27,    61,     0,    63,    32,     8,    32,
      82,   175,    62,    27,     8,   246,   247,    74,    62,   250,
      27,    64,   294,     8,   296,     8,    32,     8,     8,    75,
       8,     8,     8,   165,   306,   307,     8,     8,     8,     8,
     137,     8,    62,    62,   316,    62,   153,   319,   320,   153,
      79,   129,    89,    89,   581,   113,   153,    62,   137,    96,
      96,    82,    91,   100,   295,   137,   297,   485,   104,   487,
      79,   130,    82,   151,   206,   147,   129,   155,   137,   151,
     122,   134,    91,   129,   134,   157,    82,   147,   147,   147,
     134,   148,   154,   155,    62,    27,   105,   157,    62,   156,
     153,   151,   156,   117,   666,   162,    79,   151,   188,   153,
     147,   147,   352,   100,   147,    62,   137,   104,    91,   199,
     882,   158,   147,   152,   147,   687,   131,   151,   155,   155,
      32,   151,   151,   153,   151,   151,   154,   194,   574,   155,
     194,   147,   155,   155,   187,   202,   203,   155,   202,   192,
     545,   391,   547,   364,   211,   155,   170,   211,   201,   239,
     154,   200,   709,   131,   708,   222,   223,   131,   222,   154,
     706,    73,   155,   305,   155,   155,   154,   154,   154,   152,
     137,   129,   154,   154,   154,   154,   228,   154,   227,   137,
     153,     8,    73,   153,   129,   251,   239,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    89,
      75,   129,   129,   558,   277,   153,    96,   134,   153,   137,
     277,   147,   124,   277,   129,   127,   153,   129,    79,   134,
     362,   157,   153,   151,    73,   137,   153,   251,   294,   675,
      91,   153,    59,    60,   251,   147,   127,   304,   129,   667,
     306,   307,   334,   129,   105,   157,   137,   314,   134,   127,
     303,   129,   153,   277,   129,   322,   147,   147,   322,   137,
     277,   328,   690,   147,   328,    74,   157,   153,   153,    78,
     294,   153,   296,   157,   137,   124,   558,   294,   127,   296,
     129,   727,   306,   307,   426,    80,   428,    82,   137,   306,
     307,   595,   316,   151,   151,   319,   320,   155,   147,   316,
     746,    64,   319,   320,    59,    60,   153,   127,   157,   129,
      73,   363,   154,   155,   363,    74,   557,   137,   127,    78,
     129,   129,   389,   363,   137,   363,   134,   154,   137,   471,
     472,   383,   213,   129,   476,   216,   151,   692,   134,   137,
     407,    62,   484,   407,    62,   154,    32,   414,    73,   416,
     887,   232,    62,   234,   421,   236,   237,    68,    69,    70,
      71,    72,    73,   604,   127,   134,   129,   153,   127,   137,
     129,    65,    66,   134,   137,    86,   626,    62,   137,   147,
      89,   827,   828,   151,   147,    65,    66,    96,   131,   157,
     457,   100,   129,   457,   157,    68,    69,    70,    71,    72,
      73,   113,   127,    50,   129,   429,   129,    73,    22,    23,
     692,   857,   137,    86,   134,    46,    47,    48,   485,    50,
     487,   485,   147,   487,   665,   159,   493,   494,   495,   493,
     494,   495,   157,   500,   145,   146,    89,   883,   147,   134,
       8,   152,   509,    96,   685,   686,   513,   100,   129,   513,
     129,   104,   134,   131,    14,   522,   523,   134,   522,   523,
     906,   127,    14,   129,   531,   532,   515,   531,   532,   137,
     916,   137,   145,   146,   724,   527,   529,   148,   154,   152,
     155,   147,   154,   550,   536,   151,   550,   536,    89,   156,
     155,   157,   154,   137,   147,    96,   536,   137,   536,   100,
     108,    89,   569,   555,   571,   569,   108,   574,    96,   147,
     137,   153,   100,   566,   581,   154,   104,   153,    89,    14,
     147,   663,   595,   155,   151,    96,   159,     8,   595,   100,
     157,   595,   782,   154,   558,    75,   155,   787,   153,   152,
     790,   558,   684,    62,   137,   155,   147,   639,   155,   153,
     617,   618,   802,   617,   804,   622,   137,   154,   622,   147,
      14,   118,   812,   159,   151,   632,   816,   159,   632,   153,
     820,   595,   134,   159,   153,   153,   147,   159,   595,   159,
      68,    69,    70,    71,    72,    73,   129,    14,   137,   155,
      14,   640,   159,    80,   155,   137,   846,   131,   154,   129,
     667,   151,     8,   667,   671,     8,   154,    62,   675,    62,
     131,    97,   679,   159,    43,    44,    45,    46,    47,    48,
     712,    50,     8,   690,   798,   113,   690,   694,   878,   696,
     694,   104,   696,    14,   154,   153,    97,   704,   155,   155,
     704,   708,   709,   153,   708,   709,    68,    69,    70,    71,
      72,    73,   150,   705,   155,   155,   159,   154,   147,    14,
     727,   145,   154,   913,   154,   159,   715,    27,   692,   154,
      67,   137,   152,   923,   151,   692,   155,   159,   147,   746,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   151,   153,   761,   151,    14,   761,    97,    27,
     752,    22,    23,   151,   154,   322,    27,   159,   159,   155,
     155,   328,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    50,    59,    60,   147,    14,   137,
     779,   780,   147,    14,   147,   154,   788,   137,    14,    14,
     807,   151,   147,   807,   811,    10,    75,   811,   152,   120,
      75,   134,    14,   155,   155,   153,   147,    22,    23,   826,
     827,   828,   826,   155,   831,   814,   155,   831,   137,   821,
     137,   823,   137,   825,     8,   842,   154,    80,   842,   153,
     389,   147,   154,   151,   836,   910,   550,   574,   840,   721,
     857,   636,   679,   845,   348,   780,   857,   849,   850,    64,
     867,   674,   560,   867,    78,   703,   873,   684,   663,   873,
     617,   616,   194,   532,   176,   529,   883,    -1,    -1,   886,
     887,   155,   886,    -1,   876,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,   906,
      -1,    -1,   894,    -1,    -1,    -1,    -1,     4,     5,   916,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   918,    24,    25,    26,
      -1,    -1,   924,   194,    -1,    32,   493,   494,   495,    -1,
      37,   202,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
     211,   156,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      -1,   222,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,   187,    -1,    -1,    -1,    -1,   192,    -1,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,   569,    -1,    -1,    -1,   277,   222,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,   128,    -1,    -1,   239,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,    -1,    -1,    -1,   328,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
     617,     8,    -1,    59,    60,   622,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   176,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,
     187,   188,    59,    60,   191,   192,    -1,    -1,   303,    -1,
      -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    59,    60,    -1,   212,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,   694,   235,   696,
      -1,    -1,   239,    -1,    -1,    -1,   407,   704,    -1,   246,
     247,    -1,    -1,   250,    -1,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   457,    -1,   295,    -1,
     297,   298,   407,    -1,   761,    -1,   303,   154,    -1,    -1,
      -1,   493,   494,   310,    -1,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   485,    -1,   487,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     807,    -1,   457,    -1,   811,    -1,    -1,    -1,    -1,    -1,
      -1,   522,   523,    -1,    -1,    -1,    -1,    -1,    -1,   826,
     531,   532,    -1,    -1,   831,    -1,    -1,    -1,    -1,    -1,
     485,    -1,   487,    -1,    -1,   842,    -1,   569,    -1,   550,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
     867,    -1,    -1,    -1,    -1,    -1,   873,   522,   523,    -1,
      -1,    -1,    -1,    -1,   529,    -1,   531,   532,   425,   886,
      -1,    -1,    -1,    -1,   595,    -1,   433,    -1,    -1,    -1,
     622,    59,    60,    -1,    -1,   550,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,   566,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   632,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   667,    -1,    -1,    -1,
      -1,    -1,   694,    -1,   696,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   704,   520,   521,    -1,    -1,   632,    -1,   690,
      -1,    -1,   529,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,   538,    -1,    -1,    -1,    -1,    -1,   708,   709,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
     557,    -1,   667,    -1,    -1,    -1,    -1,    -1,    -1,   566,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   761,
      -1,    -1,    73,    74,    -1,   690,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,   594,    -1,    -1,
      -1,    92,    93,   708,   709,   159,    -1,   604,   605,    -1,
      -1,    -1,    -1,   610,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,    -1,   807,    -1,    -1,    -1,   811,
      -1,    -1,   123,    -1,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   826,   136,   137,    -1,   645,   831,
      -1,   142,    -1,   650,    -1,    -1,    -1,    -1,    -1,    -1,
     842,    -1,     3,     4,     5,     6,     7,    -1,   665,    -1,
      -1,    12,    13,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   867,    50,    -1,   685,   686,
      -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,   886,    -1,    -1,    -1,    49,   706,
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
     151,   152,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    59,    60,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,   147,   148,    -1,    -1,   151,   152,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,   154,
     155,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      59,    60,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    86,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
      -1,    -1,   151,    -1,   153,    -1,   155,   156,   157,   158,
       3,     4,     5,     6,     7,   154,   155,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    59,    60,    71,    72,
      73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,    -1,   147,   148,    -1,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,     5,     6,
       7,   154,    -1,    -1,    -1,    12,    13,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
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
      -1,    12,    13,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,    -1,   153,    -1,   155,   156,   157,   158,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,    -1,   147,   148,    -1,    -1,   151,    -1,   153,    -1,
     155,   156,   157,   158,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
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
      13,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
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
       7,    -1,    -1,    -1,    -1,    12,    13,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
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
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      99,    -1,    -1,   102,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,    -1,   147,   148,
      -1,    -1,   151,    -1,   153,    -1,   155,   156,   157,   158,
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
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,   147,   148,    -1,    -1,
     151,   152,   153,    -1,   155,   156,   157,   158,     3,     4,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
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
     153,   154,    -1,   156,   157,   158,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,   137,   138,    12,    13,    -1,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,   137,   138,
      12,    13,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,   153,    -1,   155,   156,   157,   158,
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
      -1,   153,    -1,   155,   156,   157,   158,    -1,    -1,    -1,
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
     155,   156,   157,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,    -1,     3,     4,     5,     6,     7,   136,   137,
     138,    -1,    12,    13,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,   153,   154,    27,   156,   157,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    32,
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
     153,    -1,    -1,   156,   157,   158,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,   137,   138,    12,    13,    -1,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,   137,   138,
      12,    13,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   156,   157,   158,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,     9,
      10,    11,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,   155,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,   155,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,   155,
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
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     154,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    11,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50
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
     156,   157,   158,   163,   164,   167,   170,   171,   179,   180,
     182,   183,   184,   186,   240,   241,   242,   243,   244,   245,
     248,   249,   258,   261,   265,   266,   267,   269,   270,   276,
     277,   278,   279,   280,   281,   282,   283,   288,   296,   299,
     301,    13,    73,   127,   137,   245,   265,   265,   153,   265,
     265,   265,   241,   265,   270,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,    73,   127,   129,   163,
     249,   269,   270,   278,   269,   265,    32,   265,   291,   292,
     265,   127,   129,   163,   249,   251,   252,   278,   281,   282,
     288,    82,    82,   147,   211,   245,   153,   155,   265,   137,
      62,   155,   265,   153,   170,   233,   265,   153,   153,   255,
     266,   153,   153,   147,   157,   209,   210,   137,   153,   153,
     266,   153,   153,   129,   151,   163,   163,   155,   241,   265,
     270,    89,    96,   100,   104,   147,   293,   294,    27,   266,
     265,   151,   153,   129,   163,   165,   166,   266,   168,   240,
     242,   265,   100,   256,   293,   151,   100,   293,   129,   153,
     207,     8,   155,   137,   137,   155,    62,    62,    32,   181,
      62,   134,     9,    10,    11,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    50,   155,    59,
      60,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   207,   134,    62,   131,    62,   151,   157,
     282,   181,   265,    97,   129,   163,   134,   134,   268,   270,
      97,   159,     8,   263,   129,   163,   134,   207,   257,   134,
     131,   282,    14,     8,   155,   181,   291,   155,    14,   265,
     284,   155,   137,   195,   148,     8,   155,   241,   270,   154,
     234,   235,   265,   241,   270,   151,   267,   270,     8,   155,
     155,   154,    27,   170,   241,   270,   297,   298,   124,   270,
     289,   290,   163,   162,   151,   155,   207,   155,   155,   270,
     138,   265,   104,   294,    62,   131,   100,   104,   294,    27,
     151,   196,   155,   168,   177,   178,   270,   163,    75,     8,
     155,    27,   170,   199,   116,   152,   169,   170,   179,   180,
     154,   154,   154,   156,   265,   158,   137,    32,   154,   208,
     241,   242,   270,   137,   108,   185,   108,   187,   284,   284,
     137,   153,   284,    82,   137,   151,   276,   282,   287,   288,
     265,   265,   265,    27,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   251,    32,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     137,   276,   287,   284,   137,   276,   285,   286,   287,   284,
     265,   154,   241,   270,   163,    32,   265,    32,   265,   163,
     276,   276,   285,    43,    44,    62,    74,    83,    87,   127,
     129,   136,   163,   249,   258,   259,   260,   300,   147,   153,
     154,   259,   159,    14,     8,   154,   266,   265,   154,   154,
     155,     8,    75,    75,   265,   210,   155,   168,   200,     8,
     154,   153,     8,   154,   207,   152,   162,   152,    62,   152,
     130,   137,   147,   295,   137,   155,   197,   155,   197,   152,
       8,   154,    75,   137,   166,   168,   153,    62,   131,   236,
     237,   238,   239,   272,   152,   268,     8,   154,   154,    14,
     127,   129,   163,   250,   118,   188,   189,   250,   151,   159,
     159,   153,    74,    78,   204,   205,   206,   250,   159,   265,
     207,   207,   282,   265,    27,    64,   270,   207,   207,   159,
     207,   273,   274,   275,    62,   151,   159,   152,   268,   268,
      97,   253,   259,   259,   259,   262,   264,   153,   129,   163,
     100,   134,    14,   204,   259,   137,    27,   170,   194,   155,
     234,   265,    32,   124,   191,   270,   191,   152,   201,    65,
      66,   202,   298,   289,   290,    14,   152,   265,   159,   197,
      79,    91,   105,   197,   152,    80,   172,   178,   155,   137,
     106,   154,   284,   285,   272,    62,   236,    32,   241,   270,
     259,   129,   163,   189,   151,     8,   212,   204,   154,     8,
      32,   147,   152,   265,   251,    62,    62,   271,   284,   265,
      32,   265,   131,   254,    97,   159,     8,   263,   262,   163,
      82,   137,   259,   154,    14,   168,   155,   270,   153,    97,
     190,   190,    65,    66,   203,   266,   170,   154,   265,   159,
     105,   265,    27,   155,   198,   155,   152,   153,   150,   173,
     155,   155,   159,   275,   284,   268,   163,   212,   250,    68,
      69,    70,    71,    72,    73,    86,   145,   146,   152,   213,
     214,   227,   228,   229,   230,   232,   154,   145,   246,   206,
     147,    14,   257,   284,   284,   272,   159,   152,   268,   285,
     259,   259,   154,   246,   259,   101,   234,   289,   191,   154,
     154,   266,    27,    67,   170,   152,   155,   198,   168,   250,
     151,   159,   152,   137,   215,   250,   147,   231,   245,   230,
       8,   155,   151,   153,   151,    32,   147,    14,   259,   159,
     159,    97,   151,   155,   154,   154,    27,   170,   193,   193,
      27,   168,   155,   168,   147,   168,    14,     8,   151,   155,
     216,    14,     8,   155,   181,   137,   168,    32,   147,   247,
     168,   147,    14,   259,   259,   168,    27,   170,   192,   168,
     168,   154,   152,   259,   250,   137,   217,   218,   219,   220,
     222,   223,   224,   250,   259,   147,   137,    14,   152,   147,
       8,   154,   152,    14,   259,   152,   168,   103,   151,   152,
     219,   155,    75,   120,   155,   134,    14,   153,   259,    32,
     147,   259,   102,   155,   168,   225,   230,   221,   250,   137,
     259,   204,   147,   155,   152,   137,     8,   154,    80,   174,
     175,   176,   250,   151,   155,   226,   153,   176,   168,   250,
     152,   147,   154,   151,   168,   152
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
#line 3865 "/Users/roberto/Projects/pelet/src/Php55LintParser.cpp"
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
#line 1225 "/Users/roberto/Projects/pelet/src/Php55LintParser.y"

