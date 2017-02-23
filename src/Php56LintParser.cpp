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
#define yyparse         php56_lint_parse
#define yylex           php56_lint_lex
#define yyerror         php56_lint_error
#define yylval          php56_lint_lval
#define yychar          php56_lint_char
#define yydebug         php56_lint_debug
#define yynerrs         php56_lint_nerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/Users/roberto/Projects/pelet/src/Php56LintParser.y"


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
#define php56_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php56_lint_error pelet::LintGrammarError


/* Line 371 of yacc.c  */
#line 119 "/Users/roberto/Projects/pelet/src/Php56LintParser.cpp"

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
extern int php56_lint_debug;
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
int php56_lint_parse (void *YYPARSE_PARAM);
#else
int php56_lint_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int php56_lint_parse (pelet::LexicalAnalyzerClass &analyzer);
#else
int php56_lint_parse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 315 "/Users/roberto/Projects/pelet/src/Php56LintParser.cpp"

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
#define YYLAST   8856

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  518
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1021

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
      21,    26,    30,    36,    41,    45,    50,    55,    58,    62,
      64,    66,    70,    73,    78,    82,    84,    86,    90,    93,
      98,   102,   104,   106,   110,   113,   118,   124,   129,   132,
     133,   135,   137,   139,   144,   146,   149,   153,   159,   168,
     172,   178,   188,   192,   195,   199,   202,   206,   209,   213,
     217,   220,   224,   228,   232,   234,   237,   243,   252,   261,
     267,   269,   276,   280,   284,   285,   295,   296,   301,   303,
     304,   306,   309,   318,   320,   324,   326,   328,   330,   331,
     333,   334,   336,   346,   354,   361,   363,   366,   368,   371,
     372,   375,   377,   378,   381,   382,   385,   387,   391,   392,
     395,   397,   400,   405,   407,   412,   414,   419,   421,   426,
     430,   436,   440,   445,   450,   456,   457,   463,   468,   470,
     472,   474,   479,   480,   485,   486,   492,   493,   496,   497,
     501,   503,   504,   506,   510,   515,   522,   523,   525,   527,
     529,   532,   536,   540,   542,   546,   548,   550,   553,   556,
     560,   562,   564,   567,   572,   576,   582,   584,   588,   591,
     592,   596,   599,   601,   610,   614,   616,   620,   622,   626,
     627,   629,   631,   634,   637,   640,   644,   646,   650,   652,
     654,   658,   663,   667,   668,   670,   672,   676,   678,   680,
     681,   683,   685,   688,   690,   692,   694,   696,   698,   700,
     704,   710,   712,   716,   722,   727,   731,   733,   734,   736,
     740,   742,   745,   747,   752,   756,   759,   761,   763,   764,
     766,   770,   777,   781,   786,   793,   796,   800,   804,   808,
     812,   816,   820,   824,   828,   832,   836,   840,   844,   847,
     850,   853,   856,   860,   864,   868,   872,   876,   880,   884,
     888,   892,   896,   900,   904,   908,   912,   916,   920,   924,
     927,   930,   933,   936,   940,   944,   948,   952,   956,   960,
     964,   968,   972,   974,   976,   981,   987,   992,   994,   997,
    1000,  1003,  1006,  1009,  1012,  1015,  1018,  1021,  1023,  1025,
    1027,  1031,  1034,  1036,  1046,  1057,  1060,  1063,  1068,  1073,
    1078,  1083,  1088,  1093,  1098,  1102,  1104,  1105,  1110,  1114,
    1119,  1121,  1124,  1127,  1132,  1136,  1141,  1146,  1151,  1156,
    1159,  1161,  1163,  1167,  1170,  1172,  1176,  1179,  1181,  1183,
    1188,  1190,  1193,  1194,  1197,  1198,  1201,  1203,  1204,  1206,
    1208,  1209,  1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,
    1227,  1229,  1231,  1235,  1238,  1242,  1244,  1246,  1248,  1250,
    1254,  1257,  1262,  1266,  1268,  1270,  1272,  1277,  1281,  1285,
    1289,  1293,  1297,  1301,  1304,  1307,  1311,  1315,  1319,  1323,
    1327,  1331,  1335,  1339,  1343,  1347,  1351,  1355,  1359,  1363,
    1367,  1371,  1375,  1379,  1383,  1388,  1394,  1397,  1400,  1404,
    1406,  1408,  1412,  1415,  1417,  1419,  1421,  1423,  1427,  1431,
    1433,  1434,  1437,  1438,  1440,  1446,  1450,  1454,  1456,  1458,
    1460,  1464,  1468,  1470,  1472,  1474,  1480,  1482,  1485,  1486,
    1490,  1495,  1500,  1502,  1504,  1506,  1507,  1509,  1512,  1516,
    1520,  1522,  1527,  1532,  1534,  1536,  1538,  1540,  1543,  1545,
    1550,  1555,  1557,  1559,  1564,  1565,  1567,  1569,  1571,  1576,
    1581,  1583,  1585,  1589,  1591,  1594,  1598,  1600,  1602,  1607,
    1608,  1609,  1612,  1618,  1622,  1626,  1628,  1635,  1640,  1645,
    1648,  1651,  1654,  1656,  1659,  1661,  1666,  1670,  1674,  1681,
    1685,  1687,  1689,  1691,  1696,  1701,  1706,  1709,  1712,  1717,
    1720,  1723,  1725,  1729,  1731,  1733,  1737,  1741,  1745
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,   165,    -1,   165,   167,    -1,    -1,   139,
      -1,   166,   131,   139,    -1,   177,    -1,   186,    -1,   187,
      -1,   118,   156,   157,   158,    -1,   129,   166,   158,    -1,
     129,   166,   154,   165,   155,    -1,   129,   154,   165,   155,
      -1,   147,   168,   158,    -1,   147,   115,   170,   158,    -1,
     147,    88,   172,   158,    -1,   174,   158,    -1,   168,     8,
     169,    -1,   169,    -1,   166,    -1,   166,    77,   139,    -1,
     131,   166,    -1,   131,   166,    77,   139,    -1,   170,     8,
     171,    -1,   171,    -1,   166,    -1,   166,    77,   139,    -1,
     131,   166,    -1,   131,   166,    77,   139,    -1,   172,     8,
     173,    -1,   173,    -1,   166,    -1,   166,    77,   139,    -1,
     131,   166,    -1,   131,   166,    77,   139,    -1,   174,     8,
     139,    15,   270,    -1,    88,   139,    15,   270,    -1,   175,
     176,    -1,    -1,   177,    -1,   186,    -1,   187,    -1,   118,
     156,   157,   158,    -1,   178,    -1,   139,    28,    -1,   154,
     175,   155,    -1,   119,   279,   177,   208,   210,    -1,   119,
     279,    28,   175,   209,   211,    75,   158,    -1,   150,   279,
     207,    -1,    96,   177,   150,   279,   158,    -1,   112,   156,
     244,   158,   244,   158,   244,   157,   200,    -1,   141,   279,
     204,    -1,    79,   158,    -1,    79,   278,   158,    -1,    90,
     158,    -1,    90,   278,   158,    -1,   137,   158,    -1,   137,
     251,   158,    -1,   137,   283,   158,    -1,   252,   158,    -1,
     116,   219,   158,    -1,    74,   221,   158,    -1,   100,   243,
     158,    -1,   121,    -1,   278,   158,    -1,   146,   156,   184,
     157,   158,    -1,   113,   156,   283,    77,   199,   198,   157,
     201,    -1,   113,   156,   251,    77,   199,   198,   157,   201,
      -1,    92,   156,   203,   157,   202,    -1,   158,    -1,   145,
     154,   175,   155,   179,   180,    -1,   142,   278,   158,    -1,
     117,   139,   158,    -1,    -1,    82,   156,   260,   149,   157,
     154,   175,   155,   181,    -1,    -1,   152,   154,   175,   155,
      -1,   182,    -1,    -1,   183,    -1,   182,   183,    -1,    82,
     156,   260,   149,   157,   154,   175,   155,    -1,   185,    -1,
     184,     8,   185,    -1,   283,    -1,   190,    -1,   191,    -1,
      -1,    33,    -1,    -1,   153,    -1,   255,   188,   139,   156,
     212,   157,   154,   175,   155,    -1,   192,   139,   193,   196,
     154,   222,   155,    -1,   194,   139,   195,   154,   222,   155,
      -1,    84,    -1,    73,    84,    -1,   143,    -1,    72,    84,
      -1,    -1,   110,   260,    -1,   123,    -1,    -1,   110,   197,
      -1,    -1,   120,   197,    -1,   260,    -1,   197,     8,   260,
      -1,    -1,    99,   199,    -1,   283,    -1,    33,   283,    -1,
     126,   156,   302,   157,    -1,   177,    -1,    28,   175,   104,
     158,    -1,   177,    -1,    28,   175,   105,   158,    -1,   177,
      -1,    28,   175,   103,   158,    -1,   139,    15,   270,    -1,
     203,     8,   139,    15,   270,    -1,   154,   205,   155,    -1,
     154,   158,   205,   155,    -1,    28,   205,   107,   158,    -1,
      28,   158,   205,   107,   158,    -1,    -1,   205,    81,   278,
     206,   175,    -1,   205,    93,   206,   175,    -1,    28,    -1,
     158,    -1,   177,    -1,    28,   175,   108,   158,    -1,    -1,
     208,    67,   279,   177,    -1,    -1,   209,    67,   279,    28,
     175,    -1,    -1,    68,   177,    -1,    -1,    68,    28,   175,
      -1,   213,    -1,    -1,   214,    -1,   213,     8,   214,    -1,
     215,   188,   189,   149,    -1,   215,   188,   189,   149,    15,
     270,    -1,    -1,    76,    -1,    80,    -1,   260,    -1,   156,
     157,    -1,   156,   217,   157,    -1,   156,   252,   157,    -1,
     218,    -1,   217,     8,   218,    -1,   251,    -1,   283,    -1,
      33,   281,    -1,   153,   278,    -1,   219,     8,   220,    -1,
     220,    -1,   149,    -1,   160,   280,    -1,   160,   154,   278,
     155,    -1,   221,     8,   149,    -1,   221,     8,   149,    15,
     270,    -1,   149,    -1,   149,    15,   270,    -1,   222,   223,
      -1,    -1,   237,   241,   158,    -1,   242,   158,    -1,   224,
      -1,   238,   255,   188,   139,   156,   212,   157,   236,    -1,
     147,   225,   226,    -1,   260,    -1,   225,     8,   260,    -1,
     158,    -1,   154,   227,   155,    -1,    -1,   228,    -1,   229,
      -1,   228,   229,    -1,   230,   158,    -1,   234,   158,    -1,
     233,   122,   231,    -1,   260,    -1,   231,     8,   260,    -1,
     139,    -1,   233,    -1,   260,   136,   139,    -1,   232,    77,
     235,   139,    -1,   232,    77,   240,    -1,    -1,   240,    -1,
     158,    -1,   154,   175,   155,    -1,   239,    -1,   148,    -1,
      -1,   239,    -1,   240,    -1,   239,   240,    -1,    69,    -1,
      70,    -1,    71,    -1,    74,    -1,    73,    -1,    72,    -1,
     241,     8,   149,    -1,   241,     8,   149,    15,   270,    -1,
     149,    -1,   149,    15,   270,    -1,   242,     8,   139,    15,
     270,    -1,    88,   139,    15,   270,    -1,   243,     8,   278,
      -1,   278,    -1,    -1,   245,    -1,   245,     8,   278,    -1,
     278,    -1,   246,   285,    -1,   285,    -1,   247,    64,   297,
     162,    -1,    64,   297,   162,    -1,   247,   246,    -1,   247,
      -1,   246,    -1,    -1,   248,    -1,    66,   261,   267,    -1,
     126,   156,   302,   157,    15,   278,    -1,   283,    15,   278,
      -1,   283,    15,    33,   283,    -1,   283,    15,    33,    66,
     261,   267,    -1,    65,   278,    -1,   283,    26,   278,    -1,
     283,    25,   278,    -1,   283,    24,   278,    -1,   283,    42,
     278,    -1,   283,    23,   278,    -1,   283,    22,   278,    -1,
     283,    21,   278,    -1,   283,    20,   278,    -1,   283,    19,
     278,    -1,   283,    18,   278,    -1,   283,    17,   278,    -1,
     283,    16,   278,    -1,   282,    62,    -1,    62,   282,    -1,
     282,    61,    -1,    61,   282,    -1,   278,    29,   278,    -1,
     278,    30,   278,    -1,   278,     9,   278,    -1,   278,    11,
     278,    -1,   278,    10,   278,    -1,   278,    31,   278,    -1,
     278,    33,   278,    -1,   278,    32,   278,    -1,   278,    47,
     278,    -1,   278,    45,   278,    -1,   278,    46,   278,    -1,
     278,    48,   278,    -1,   278,    14,   278,    -1,   278,    49,
     278,    -1,   278,    50,   278,    -1,   278,    44,   278,    -1,
     278,    43,   278,    -1,    45,   278,    -1,    46,   278,    -1,
      51,   278,    -1,    53,   278,    -1,   278,    35,   278,    -1,
     278,    34,   278,    -1,   278,    37,   278,    -1,   278,    36,
     278,    -1,   278,    38,   278,    -1,   278,    41,   278,    -1,
     278,    39,   278,    -1,   278,    40,   278,    -1,   278,    52,
     261,    -1,   279,    -1,   250,    -1,   156,   250,   157,   249,
      -1,   278,    27,   278,    28,   278,    -1,   278,    27,    28,
     278,    -1,   309,    -1,    60,   278,    -1,    59,   278,    -1,
      58,   278,    -1,    57,   278,    -1,    56,   278,    -1,    55,
     278,    -1,    54,   278,    -1,   109,   265,    -1,    63,   278,
      -1,   274,    -1,   253,    -1,   254,    -1,   159,   266,   159,
      -1,    12,   278,    -1,    13,    -1,   255,   188,   156,   212,
     157,   256,   154,   175,   155,    -1,    74,   255,   188,   156,
     212,   157,   256,   154,   175,   155,    -1,    13,   251,    -1,
      13,   283,    -1,    13,   278,    99,   251,    -1,    13,   278,
      99,   283,    -1,   254,    64,   297,   162,    -1,   253,    64,
     297,   162,    -1,    89,    64,   297,   162,    -1,   273,    64,
     297,   162,    -1,    76,   156,   304,   157,    -1,    64,   304,
     162,    -1,   115,    -1,    -1,   147,   156,   257,   157,    -1,
     257,     8,   149,    -1,   257,     8,    33,   149,    -1,   149,
      -1,    33,   149,    -1,   166,   216,    -1,   129,   131,   166,
     216,    -1,   131,   166,   216,    -1,   259,   136,   300,   216,
      -1,   259,   136,   289,   216,    -1,   291,   136,   300,   216,
      -1,   291,   136,   289,   216,    -1,   289,   216,    -1,    74,
      -1,   166,    -1,   129,   131,   166,    -1,   131,   166,    -1,
     166,    -1,   129,   131,   166,    -1,   131,   166,    -1,   259,
      -1,   262,    -1,   294,   133,   298,   263,    -1,   294,    -1,
     263,   264,    -1,    -1,   133,   298,    -1,    -1,   156,   157,
      -1,   279,    -1,    -1,   102,    -1,   306,    -1,    -1,   216,
      -1,   127,    -1,    95,    -1,    89,    -1,   125,    -1,   111,
      -1,    94,    -1,   144,    -1,   128,    -1,   114,    -1,   130,
      -1,   138,   102,   106,    -1,   138,   106,    -1,   259,   136,
     139,    -1,   271,    -1,   268,    -1,   313,    -1,   166,    -1,
     129,   131,   166,    -1,   131,   166,    -1,    76,   156,   275,
     157,    -1,    64,   275,   162,    -1,   269,    -1,    85,    -1,
     272,    -1,   271,    64,   271,   162,    -1,   271,    45,   271,
      -1,   271,    46,   271,    -1,   271,    48,   271,    -1,   271,
      14,   271,    -1,   271,    49,   271,    -1,   271,    50,   271,
      -1,    51,   271,    -1,    53,   271,    -1,   271,    31,   271,
      -1,   271,    33,   271,    -1,   271,    32,   271,    -1,   271,
      44,   271,    -1,   271,    43,   271,    -1,   271,    47,   271,
      -1,   271,    10,   271,    -1,   271,    11,   271,    -1,   271,
       9,   271,    -1,   271,    30,   271,    -1,   271,    29,   271,
      -1,   271,    35,   271,    -1,   271,    34,   271,    -1,   271,
      37,   271,    -1,   271,    36,   271,    -1,   271,    38,   271,
      -1,   271,    39,   271,    -1,   271,    41,   271,    -1,   271,
      40,   271,    -1,   271,    27,    28,   271,    -1,   271,    27,
     271,    28,   271,    -1,    45,   271,    -1,    46,   271,    -1,
     156,   271,   157,    -1,   312,    -1,   166,    -1,   129,   131,
     166,    -1,   131,   166,    -1,   140,    -1,   273,    -1,   314,
      -1,   268,    -1,   161,   306,   161,    -1,   138,   306,   106,
      -1,    85,    -1,    -1,   277,   276,    -1,    -1,     8,    -1,
     277,     8,   271,    99,   271,    -1,   277,     8,   271,    -1,
     271,    99,   271,    -1,   271,    -1,   280,    -1,   251,    -1,
     156,   278,   157,    -1,   156,   252,   157,    -1,   283,    -1,
     283,    -1,   283,    -1,   293,   133,   298,   288,   284,    -1,
     293,    -1,   284,   285,    -1,    -1,   133,   298,   288,    -1,
     286,    64,   297,   162,    -1,   287,    64,   297,   162,    -1,
     216,    -1,   287,    -1,   286,    -1,    -1,   295,    -1,   301,
     295,    -1,   259,   136,   289,    -1,   291,   136,   289,    -1,
     295,    -1,   292,    64,   297,   162,    -1,   258,    64,   297,
     162,    -1,   294,    -1,   292,    -1,   258,    -1,   295,    -1,
     301,   295,    -1,   290,    -1,   295,    64,   297,   162,    -1,
     295,   154,   278,   155,    -1,   296,    -1,   149,    -1,   160,
     154,   278,   155,    -1,    -1,   278,    -1,   299,    -1,   289,
      -1,   299,    64,   297,   162,    -1,   299,   154,   278,   155,
      -1,   300,    -1,   139,    -1,   154,   278,   155,    -1,   160,
      -1,   301,   160,    -1,   302,     8,   303,    -1,   303,    -1,
     283,    -1,   126,   156,   302,   157,    -1,    -1,    -1,   305,
     276,    -1,   305,     8,   278,    99,   278,    -1,   305,     8,
     278,    -1,   278,    99,   278,    -1,   278,    -1,   305,     8,
     278,    99,    33,   281,    -1,   305,     8,    33,   281,    -1,
     278,    99,    33,   281,    -1,    33,   281,    -1,   306,   307,
      -1,   306,   102,    -1,   307,    -1,   102,   307,    -1,   149,
      -1,   149,    64,   308,   162,    -1,   149,   133,   139,    -1,
      98,   278,   155,    -1,    98,   140,    64,   278,   162,   155,
      -1,    91,   283,   155,    -1,   139,    -1,   132,    -1,   149,
      -1,   124,   156,   310,   157,    -1,   101,   156,   283,   157,
      -1,   101,   156,   251,   157,    -1,     7,   278,    -1,     6,
     278,    -1,     5,   156,   278,   157,    -1,     4,   278,    -1,
       3,   278,    -1,   311,    -1,   310,     8,   311,    -1,   283,
      -1,   251,    -1,   259,   136,   139,    -1,   291,   136,   139,
      -1,   259,   136,    84,    -1,   259,   136,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   238,   238,   242,   243,   247,   248,   252,   253,   254,
     255,   256,   257,   259,   261,   262,   263,   264,   268,   269,
     273,   274,   275,   276,   280,   281,   285,   286,   287,   288,
     292,   293,   297,   298,   299,   300,   304,   305,   309,   310,
     315,   316,   317,   318,   323,   324,   328,   329,   330,   331,
     332,   333,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   361,   365,
     366,   367,   370,   371,   374,   376,   382,   384,   388,   389,
     393,   394,   398,   402,   403,   407,   411,   415,   418,   420,
     423,   425,   429,   435,   441,   451,   452,   453,   454,   457,
     459,   463,   466,   468,   471,   473,   477,   478,   481,   483,
     487,   488,   489,   493,   494,   499,   500,   505,   506,   511,
     512,   517,   518,   519,   520,   524,   526,   527,   532,   533,
     538,   539,   544,   546,   550,   552,   556,   558,   562,   564,
     569,   570,   575,   576,   580,   582,   587,   589,   590,   591,
     596,   597,   598,   603,   604,   608,   609,   610,   611,   615,
     616,   621,   622,   623,   628,   629,   630,   631,   637,   638,
     643,   644,   645,   646,   652,   656,   657,   661,   662,   665,
     667,   671,   672,   676,   677,   681,   685,   686,   690,   691,
     695,   699,   700,   703,   705,   709,   710,   714,   715,   718,
     720,   724,   725,   729,   730,   731,   732,   733,   734,   738,
     739,   740,   741,   745,   746,   750,   751,   755,   757,   761,
     762,   766,   767,   771,   772,   776,   777,   778,   781,   784,
     788,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   849,   851,   852,   853,
     854,   855,   856,   857,   858,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   870,   876,   877,   878,   879,   883,
     884,   885,   886,   890,   891,   895,   898,   900,   904,   905,
     906,   907,   911,   913,   915,   917,   919,   921,   923,   925,
     930,   931,   932,   933,   937,   938,   939,   945,   946,   951,
     954,   959,   960,   965,   968,   970,   971,   974,   976,   977,
     981,   983,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1003,  1007,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1060,
    1061,  1062,  1063,  1067,  1068,  1069,  1070,  1071,  1072,  1073,
    1076,  1078,  1081,  1083,  1087,  1088,  1089,  1090,  1094,  1095,
    1099,  1100,  1105,  1110,  1114,  1118,  1121,  1125,  1126,  1131,
    1135,  1136,  1141,  1145,  1146,  1147,  1151,  1152,  1156,  1157,
    1162,  1166,  1167,  1172,  1173,  1174,  1179,  1180,  1181,  1185,
    1186,  1187,  1192,  1193,  1196,  1198,  1203,  1204,  1208,  1209,
    1210,  1214,  1215,  1219,  1220,  1224,  1225,  1230,  1231,  1232,
    1236,  1238,  1242,  1243,  1244,  1245,  1246,  1247,  1248,  1249,
    1253,  1254,  1255,  1256,  1262,  1263,  1264,  1265,  1266,  1267,
    1272,  1273,  1274,  1279,  1280,  1281,  1282,  1283,  1284,  1285,
    1286,  1290,  1291,  1295,  1296,  1300,  1301,  1305,  1309
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
  "top_statement_list", "namespace_name", "top_statement",
  "use_declarations", "use_declaration", "use_function_declarations",
  "use_function_declaration", "use_const_declarations",
  "use_const_declaration", "constant_declaration", "inner_statement_list",
  "inner_statement", "statement", "unticked_statement", "catch_statement",
  "finally_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference", "is_variadic",
  "unticked_function_declaration_statement",
  "unticked_class_declaration_statement", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "function_call_parameter", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement",
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
  "expr_without_variable", "yield_expr", "combined_scalar_offset",
  "combined_scalar", "function", "lexical_vars", "lexical_var_list",
  "function_call", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
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
     167,   167,   167,   167,   167,   167,   167,   167,   168,   168,
     169,   169,   169,   169,   170,   170,   171,   171,   171,   171,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   184,   184,   185,   186,   187,   188,   188,
     189,   189,   190,   191,   191,   192,   192,   192,   192,   193,
     193,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   204,   204,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   215,   215,
     216,   216,   216,   217,   217,   218,   218,   218,   218,   219,
     219,   220,   220,   220,   221,   221,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   231,   231,   232,   232,
     233,   234,   234,   235,   235,   236,   236,   237,   237,   238,
     238,   239,   239,   240,   240,   240,   240,   240,   240,   241,
     241,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   248,   249,   249,
     250,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   252,   252,   252,   252,   253,
     253,   253,   253,   254,   254,   255,   256,   256,   257,   257,
     257,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     259,   259,   259,   259,   260,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   265,   265,   265,   266,   266,   266,
     267,   267,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   269,   270,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     275,   275,   276,   276,   277,   277,   277,   277,   278,   278,
     279,   279,   280,   281,   282,   283,   283,   284,   284,   285,
     286,   286,   287,   288,   288,   288,   289,   289,   290,   290,
     291,   292,   292,   293,   293,   293,   294,   294,   294,   295,
     295,   295,   296,   296,   297,   297,   298,   298,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   303,   303,   303,
     304,   304,   305,   305,   305,   305,   305,   305,   305,   305,
     306,   306,   306,   306,   307,   307,   307,   307,   307,   307,
     308,   308,   308,   309,   309,   309,   309,   309,   309,   309,
     309,   310,   310,   311,   311,   312,   312,   313,   314
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     4,     4,     2,     3,     1,
       1,     3,     2,     4,     3,     1,     1,     3,     2,     4,
       3,     1,     1,     3,     2,     4,     5,     4,     2,     0,
       1,     1,     1,     4,     1,     2,     3,     5,     8,     3,
       5,     9,     3,     2,     3,     2,     3,     2,     3,     3,
       2,     3,     3,     3,     1,     2,     5,     8,     8,     5,
       1,     6,     3,     3,     0,     9,     0,     4,     1,     0,
       1,     2,     8,     1,     3,     1,     1,     1,     0,     1,
       0,     1,     9,     7,     6,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     4,     1,     4,     1,     4,     1,     4,     3,
       5,     3,     4,     4,     5,     0,     5,     4,     1,     1,
       1,     4,     0,     4,     0,     5,     0,     2,     0,     3,
       1,     0,     1,     3,     4,     6,     0,     1,     1,     1,
       2,     3,     3,     1,     3,     1,     1,     2,     2,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       3,     2,     1,     8,     3,     1,     3,     1,     3,     0,
       1,     1,     2,     2,     2,     3,     1,     3,     1,     1,
       3,     4,     3,     0,     1,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     3,
       1,     2,     1,     4,     3,     2,     1,     1,     0,     1,
       3,     6,     3,     4,     6,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     4,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       3,     2,     1,     9,    10,     2,     2,     4,     4,     4,
       4,     4,     4,     4,     3,     1,     0,     4,     3,     4,
       1,     2,     2,     4,     3,     4,     4,     4,     4,     2,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     4,
       1,     2,     0,     2,     0,     2,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     1,     1,     1,     1,     3,
       2,     4,     3,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     5,     2,     2,     3,     1,
       1,     3,     2,     1,     1,     1,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       3,     3,     1,     1,     1,     5,     1,     2,     0,     3,
       4,     4,     1,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     4,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     1,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     4,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     4,     2,     2,     4,     2,
       2,     1,     3,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     302,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   480,     0,     0,     0,     0,
     330,     0,     0,    95,   419,     0,   354,     0,     0,   357,
     353,     0,     0,     0,   344,   356,     0,     0,   360,   315,
       0,     0,     0,     0,    64,   101,     0,   355,     0,   352,
     359,     0,   361,     0,     0,     0,     5,   413,     0,     0,
      97,   358,     0,     0,     0,   462,     0,    39,     0,    70,
     347,   473,     0,   410,     3,     0,     7,    44,     8,     9,
      86,    87,     0,     0,   283,   429,     0,   298,   299,    88,
     455,     0,   416,   414,   297,     0,   282,   428,     0,   432,
       0,   458,     0,   454,   436,   453,   456,   461,     0,   287,
     409,   415,   302,   330,     0,     5,    88,   510,   509,     0,
     507,   506,   301,   429,     0,   432,   269,   270,   271,   272,
     294,   293,   292,   291,   290,   289,   288,   330,     0,     0,
     331,     0,   251,   434,     0,   249,   296,     0,   485,     0,
     422,   235,     0,     0,   331,   337,   350,   338,     0,   340,
     456,     0,    98,    96,   166,     0,    88,   480,    53,     0,
       0,   464,    55,     0,     0,     0,     0,   216,     0,     0,
     295,   346,   217,     0,   161,     0,     0,   160,     0,     0,
       0,     0,     0,   479,     0,     4,     0,   412,    57,   429,
       0,   432,     0,     0,     0,   363,   494,     0,   492,    45,
       0,     0,    39,     0,     0,     0,     0,    20,     0,    19,
       0,     0,   283,     0,     0,   348,     0,   349,     0,     0,
       0,     0,     0,   322,     0,    17,    99,   102,    60,   464,
     464,    89,     0,   464,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,   250,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   329,
       0,   464,     0,   464,     0,   474,   457,     0,     0,     0,
       0,   333,     0,     0,   489,   433,     0,   314,   423,   481,
       0,   333,     0,   351,   230,     0,     0,   457,     0,     0,
      62,     0,     0,    54,     0,   465,     0,    56,     0,     0,
       0,     0,    63,   429,   432,   345,     0,   218,   220,   429,
     432,     0,   162,   432,     0,    61,    73,     0,    39,   132,
     429,   432,     0,   511,     0,   477,     0,   476,   411,     0,
       4,    11,   324,    58,    59,     0,   413,     0,   362,   493,
       0,     0,   491,   418,   490,   125,   125,    52,    72,     0,
       0,    83,    85,     0,    32,     0,    31,     0,    26,     0,
      25,    22,     0,     0,    14,    39,   130,    49,     0,    46,
      38,    40,    41,    42,   228,   431,   430,   300,     0,   417,
       6,     0,     0,   150,     0,   153,   429,     0,   432,     0,
       0,   104,     0,     0,     0,     0,     0,   146,     0,   518,
     515,     0,   448,   446,     0,     0,     0,   254,   256,   255,
     264,     0,     0,   252,   253,   257,   259,   258,   274,   273,
     276,   275,   277,   279,   280,   278,   268,   267,   261,   262,
     260,   263,   265,   266,   281,     0,   232,   247,   246,   245,
     244,   243,   242,   241,   240,   238,   237,   236,   239,   516,
     449,     0,     0,   471,   467,   445,   466,   470,     0,     0,
     508,   429,   432,   332,     0,   484,     0,   483,   332,   448,
     449,   342,     0,     0,     0,     0,   420,     0,   374,   354,
       0,     0,     0,     0,   368,     0,   366,   373,   167,   365,
     375,   367,   164,   146,   313,    37,   311,     0,     0,     0,
       0,   215,   505,   504,   217,     0,     0,     0,     0,   159,
      10,   134,   136,     0,   503,   479,   479,     0,   323,    13,
       0,   499,     0,   497,   501,   500,   502,     0,   496,   125,
       0,   125,     0,    74,     0,     0,    34,     0,     0,    16,
      28,     0,     0,    15,     0,    21,    18,     0,     0,   464,
       0,   227,   226,   229,   284,   222,   463,   157,   158,     0,
     151,   152,     0,     0,     0,   334,   100,     0,     0,   103,
     106,   169,   310,   309,   146,   147,   148,     0,   140,   142,
      88,   149,   452,     0,   326,   325,   447,   312,   286,     0,
       0,   233,   328,   327,   451,   442,   444,   443,   438,   464,
       0,   459,   460,   488,   487,     0,   339,   406,   407,   383,
     384,   427,     0,   422,   420,     0,   370,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,    39,   117,    69,    50,     0,   219,     0,     0,   108,
     110,   108,   163,   138,     0,     0,    47,   512,     0,   475,
       0,    12,     0,   495,     0,     0,     0,     0,     0,   121,
       0,    76,    84,    66,     0,    33,    30,     0,    27,    24,
      23,     0,     0,     0,   445,   221,   464,   225,   154,    36,
       0,   336,   105,   169,     0,   199,     0,   316,   146,    90,
     472,   285,   350,   464,   464,   435,     0,     0,     0,   482,
       0,   341,     0,   372,   423,   421,     0,   369,   408,   517,
     364,   393,   391,   392,   380,     0,     0,   395,   394,   385,
     387,   386,   397,   396,   399,   398,   400,   401,   403,   402,
     389,   388,   377,   378,   390,   379,   381,   382,     0,   165,
     316,     0,     0,   217,   111,   479,     0,     0,     0,     0,
       0,     0,     0,   137,   478,   231,     0,     0,     0,   128,
     129,    39,   123,   122,     0,     0,    71,    35,    29,   131,
      43,   224,   439,     0,   335,   199,   107,   203,   204,   205,
     208,   207,   206,     0,     0,   198,    94,   168,   172,     0,
       0,   197,   201,     0,     0,     0,     0,   143,    91,     0,
     234,     0,     0,   437,   468,   469,   486,   343,   426,   425,
     371,   404,     0,   376,     0,   120,     0,     0,     0,   109,
       0,     0,     0,    39,     0,   133,   498,   124,    39,   127,
       0,    39,   223,    93,     0,     0,   175,   211,     0,    88,
     202,     0,   171,    39,     0,    39,   144,   440,   441,     0,
     405,    39,   118,     0,   112,    39,   115,    68,    67,    39,
     139,    48,   126,     0,     0,     0,     0,   179,   177,   174,
       0,     0,   170,     0,     0,     0,     0,   320,     0,     0,
       0,   424,     0,    39,   113,    51,     0,   135,     0,    77,
     214,   176,     5,     0,   180,   181,     0,     0,   189,     0,
       0,   212,   209,     0,     0,    92,   321,     0,   317,   303,
     145,   304,     0,     0,    39,   178,   182,   183,   193,     0,
     184,     0,     0,   146,   213,     0,   318,     0,   116,     0,
       0,   192,   185,   186,   190,   210,     0,   319,   114,    79,
     191,     0,     0,     0,    75,    78,    80,   187,    39,   195,
     173,     0,    81,     0,     0,   196,     0,     0,    39,     0,
      82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    83,    84,   228,   229,   399,   400,   395,
     396,    85,   231,   410,   411,    87,   721,   826,  1004,  1005,
    1006,   390,   391,   412,   413,   252,   859,    90,    91,    92,
     431,    93,   433,   608,   609,   807,   699,   945,   917,   693,
     339,   387,   570,   821,   407,   552,   703,   706,   811,   617,
     618,   619,   620,   243,   424,   425,   196,   197,   175,   745,
     847,   848,   895,   929,   953,   954,   955,   956,   992,   957,
     958,   959,   990,  1010,   849,   850,   851,   852,   898,   853,
     186,   346,   347,   591,   592,   593,   594,    94,    95,    96,
      97,    98,   126,   856,   938,   100,   101,   621,   166,   167,
     646,   761,   190,   236,   324,   102,   527,   528,   529,   530,
     103,   104,   652,   319,   653,   105,   106,   107,   314,   108,
     109,   755,   595,   636,   637,   638,   110,   111,   112,   113,
     114,   115,   116,   117,   336,   495,   496,   497,   118,   366,
     367,   159,   160,   217,   218,   567,   119,   362,   363,   120,
     531,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -825
static const yytype_int16 yypact[] =
{
    -825,    52,  2298,  -825,  7057,  7057,   -45,  7057,  7057,  7057,
    7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,
    7057,  7057,     0,     0,  7057,  5766,  7057,   116,    53,   111,
     -53,   -42,  5895,  -825,  -825,   -11,   174,  6024,   -16,  -825,
    -825,  5478,  7057,    98,   126,  -825,   132,   147,  -825,  -825,
     104,   170,   162,   166,  -825,  -825,   169,  -825,   181,  -825,
    -825,   201,  -825,   204,  6153,   318,   232,  -825,   166,  7057,
    -825,  -825,   214,   202,   271,  -825,   166,  -825,  7186,  -825,
      15,   221,   250,   127,  -825,    17,  -825,  -825,  -825,  -825,
    -825,  -825,   245,   269,  -825,  -825,   260,   357,   372,   412,
     386,   321,  -825,   399,  -825,  7495,  -825,  -825,   112,  2145,
     334,  -825,   356,   432,   369,  -825,   -38,  -825,   225,  -825,
    -825,  -825,  -825,   402,   383,  -825,   412,  8693,  8693,  7057,
    8693,  8693,  8804,   233,  8266,  1900,  -825,  -825,   475,  -825,
    -825,  -825,  -825,  -825,  -825,  -825,  -825,  -825,   397,   204,
     -21,   393,  -825,  -825,   401,  -825,  -825,     0,  8310,   371,
     527,  -825,   413,   204,   414,   406,   334,  -825,   410,   415,
       5,   225,  -825,  -825,   532,    23,   412,  5766,  -825,  7539,
     535,  7057,  -825,  7583,   418,   403,    24,  8693,  7057,  6282,
    -825,  -825,  7057,  7057,  -825,   163,    25,  -825,   394,   404,
    7186,  4683,  7057,   302,   204,  -825,    86,   160,  -825,   396,
    8693,  5643,     0,  7315,   187,  -825,    -6,   363,  -825,  -825,
       9,  7627,  -825,     0,   120,   317,   204,    12,    26,  -825,
    4842,  2457,   416,   419,  7671,   -26,   392,   309,  7057,   -26,
     240,   429,  1663,  -825,   430,  -825,   460,   469,  -825,  7057,
    7057,  -825,   -48,  7057,   -24,  7057,  7057,  7057,  7057,  7057,
    6412,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,
    7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,
    7057,  7057,   116,  -825,  -825,  -825,  6541,  7057,  7057,  7057,
    7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  7057,  -825,
     265,  7057,   370,  7057,  7057,   221,   -34,   424,  7715,  7057,
     204,   -21,   370,   370,  -825,  -825,  6670,  -825,  6799,  -825,
     204,   414,   277,  -825,  -825,   277,   370,    -3,  8135,   435,
    -825,   425,   431,  -825,  8135,  8693,   433,  -825,   571,    42,
     166,  7057,  -825,   437,  8060,  -825,   438,   589,  8693,   523,
    1986,  7057,  -825,  -825,   104,  -825,  -825,   444,  -825,  -825,
      56,   881,    58,  -825,   447,  -825,    62,  -825,   296,  1980,
    -825,  -825,  -825,  -825,  -825,   449,   542,  7802,  -825,  -825,
     -37,   478,  -825,  -825,  -825,   467,   472,  -825,  -825,  2616,
      67,  -825,  -825,   204,    61,    35,  -825,   204,   121,    36,
    -825,   149,   488,   339,  -825,  -825,  -825,  -825,   477,  -825,
    -825,  -825,  -825,  -825,    -1,  -825,  -825,  -825,  7846,  -825,
    -825,     0,  7057,  -825,    68,  -825,    70,   474,  1347,   617,
      27,   515,    27,   482,   479,   480,   481,   140,   514,  -825,
     487,  7057,   334,    -3,   334,   225,   517,  8736,  8776,  8804,
    8804,  7057,  8649,  1134,  3394,  3552,  1654,  3709,  3868,  3868,
    3868,  3868,  1074,  1214,  1214,  1214,   574,   574,   455,   455,
     455,   475,   475,   475,  -825,   175,  3080,  3080,  3080,  3080,
    3080,  3080,  3080,  3080,  3080,  3080,  3080,  3080,   749,   487,
     334,   334,   518,  -825,  -825,   334,    18,  -825,   522,  7890,
    -825,   330,  5488,   -21,     0,  8693,     0,  8358,   414,  -825,
    -825,  -825,  8135,  8135,  8135,  8135,  8135,   521,  -825,  -825,
     513,   204,    -9,  8135,    65,   549,  -825,  -825,  -825,  8528,
    -825,  -825,   672,   140,  -825,  -825,  -825,  8135,   550,  5001,
     530,  8693,  -825,  -825,  7057,  7057,   117,   117,  7934,  -825,
    -825,  4524,   407,  7057,  -825,   302,   302,   684,  -825,  -825,
    2139,  -825,  7057,  -825,  -825,  -825,  -825,   540,  -825,  -825,
     342,  -825,    -8,   621,     0,   546,   153,   566,   120,  -825,
     198,   568,   317,  -825,   569,  -825,  -825,  2775,   554,  7057,
     370,   580,    28,  -825,  -825,  -825,  -825,  -825,  8693,  5637,
    -825,  -825,  8135,   586,   204,   414,  -825,    27,   565,   710,
    -825,  -825,  -825,  -825,   140,  -825,  -825,   567,   713,  -825,
     412,  -825,  -825,  7978,  -825,  -825,    -3,  -825,  3237,  7057,
     116,  -825,  -825,  -825,  -825,  -825,   658,   659,  -825,  7057,
    7057,  -825,  -825,  -825,  -825,  6928,   593,   251,   251,   663,
     663,  8402,   570,   723,  8135,   204,   150,   628,  7759,     6,
    8135,  8135,  8135,  8135,  8062,  8135,  8135,  8135,  8135,  8135,
    8135,  8135,  8135,  8135,  8135,  8135,  8135,  8135,  8135,  8135,
    8135,  8135,  8135,  8135,  8135,  8135,  8135,  8135,   578,  -825,
     722,  -825,  -825,  -825,  -825,   581,  8693,     0,   584,   642,
    -825,   642,  -825,   443,   166,  5478,  -825,  -825,    71,  -825,
    7057,  -825,  1385,  -825,   366,  7057,    10,   588,     7,  -825,
     592,   590,  -825,  -825,   605,  -825,  -825,   612,  -825,  -825,
    -825,   594,   595,   597,   334,  -825,  7057,   580,  -825,  -825,
     204,   414,   710,  -825,    27,   291,   598,   610,   274,   608,
    -825,  3237,   334,  7057,  7057,   580,   600,  8022,     0,  8693,
     370,  -825,  8135,  -825,  8135,  -825,   606,   241,  -825,  -825,
    -825,  8569,  1563,  8607,  8607,  8135,  8486,  2441,  2599,   806,
    2758,  1028,  2914,  2914,  2914,  2914,   934,   979,   979,   979,
     564,   564,   251,   251,   251,   663,   663,   663,  1837,  -825,
     610,  8135,  2934,  7057,  -825,   302,   117,   607,   609,   166,
     737,   695,  5478,  -825,  -825,  3080,   616,   615,  7451,  -825,
    -825,  -825,  -825,  -825,    27,   622,  -825,  -825,  -825,  -825,
    -825,  -825,  -825,   613,   414,   324,  -825,  -825,  -825,  -825,
    -825,  -825,  -825,   640,    27,  -825,  -825,  -825,  -825,   632,
     402,   411,  -825,    45,   631,   626,   633,  -825,  -825,   639,
    -825,   627,   643,  -825,  -825,  -825,  -825,  -825,  8528,  8444,
    -825,  2283,  8135,  -825,   648,  -825,   649,   651,    76,  -825,
    5160,  5160,   778,  -825,   652,  -825,  -825,  -825,  -825,  4524,
     665,  -825,  -825,  -825,   797,    13,  -825,   802,    48,   412,
    -825,   679,  -825,  -825,     3,  -825,   804,  -825,  -825,  8135,
    2283,  -825,  -825,  5319,  -825,  -825,  -825,  -825,  -825,  -825,
    4524,  -825,  4524,   664,  3093,  8135,    27,   337,  -825,  -825,
    8135,   671,  -825,   683,   808,  3252,   677,  -825,    79,  3411,
    8135,  8528,  3570,  -825,  -825,  -825,  3729,  4524,   673,  -825,
    -825,  -825,   751,   675,   337,  -825,   674,   754,   711,   676,
     699,  -825,   844,   704,  8135,  -825,  -825,    21,  -825,  -825,
    -825,  -825,  3888,   705,  -825,  -825,  -825,  -825,   623,    27,
    -825,   725,  8135,   140,  -825,   716,  -825,   708,  -825,  4047,
     730,   732,   854,  -825,  -825,  -825,   715,  -825,  -825,   791,
    -825,    27,    81,   718,  -825,   791,  -825,  -825,  -825,  -825,
    -825,    27,  -825,  4206,   726,  -825,   719,   724,  -825,  4365,
    -825
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -825,  -825,  -185,   -15,  -825,  -825,   483,  -825,   295,  -825,
     301,  -825,  -205,  -825,     4,  -825,  -825,  -825,  -825,  -825,
    -124,  -825,   306,     2,    11,  -125,  -825,  -825,  -825,  -825,
    -825,  -825,  -825,  -825,   275,   182,  -536,  -825,    14,  -825,
    -825,  -825,  -367,    72,  -825,  -825,  -825,  -825,  -825,  -528,
    -825,   143,  -825,   -61,  -825,   289,  -825,   538,  -825,   165,
    -825,  -825,  -825,  -825,  -825,  -825,   -41,  -825,  -825,  -825,
    -825,  -825,  -825,  -825,  -825,  -825,  -825,  -824,  -825,  -825,
    -825,  -530,  -825,   322,  -825,  -825,  -825,   815,    30,   -56,
    -825,  -825,    -2,   109,  -825,  -825,   533,  -143,  -279,  -825,
    -825,  -825,  -825,  -825,   164,   970,  -825,  -210,   476,  -825,
    -825,  -825,   270,   266,  -825,  1264,   -29,   731,  -405,   498,
      19,  -825,  -568,  -825,  -825,   193,  -245,  -825,   555,  -825,
    -825,   -25,     8,  -825,  -146,  -316,  -825,  -135,    44,  -537,
     365,   752,  -825,   267,   299,  -825,  -825,  -825,   375,  -825,
    -825,  -825
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -515
static const yytype_int16 yytable[] =
{
      99,   307,   169,   474,    88,   688,    86,   150,   150,   442,
     511,   701,   164,    89,   695,   191,   597,   389,   708,   572,
     369,   926,   233,   735,   201,   244,   303,   900,   176,   135,
     303,   329,   341,   354,   403,   170,   936,   385,   819,   220,
     133,   153,   153,   578,   582,   185,   206,   230,   207,   299,
     538,   331,     3,   901,   985,   490,   931,   494,   380,   227,
     439,   303,    49,   589,  -514,   212,   553,   442,   490,   303,
     556,   171,   213,   715,   147,   574,   599,   509,  -155,   556,
     510,   494,   639,   211,   556,   716,   746,   967,   715,   402,
     769,   436,   736,   657,   209,   564,   174,   215,  -450,   643,
     716,   644,   565,   434,   435,   323,   212,   438,   437,   446,
     241,   129,   566,   213,   177,   440,   304,   235,  -446,   444,
     304,   176,  -447,   216,   535,    75,   306,   381,   180,   148,
     441,   149,   590,   233,   311,   242,    81,   172,   577,   125,
     184,  -450,   150,   241,   233,   770,   372,   719,   321,    75,
     697,   304,   937,   551,   991,   492,   603,   498,   604,   304,
      81,   590,   823,   386,   216,   491,   125,   927,   820,   735,
     986,   928,   640,   284,   285,   245,   315,   444,   491,   327,
     150,   330,   342,   355,   404,   560,   427,   863,   150,   368,
     147,   147,   241,   579,   583,   173,   241,   150,   581,   539,
     587,  -331,   714,   902,   718,   359,   932,   344,   150,   394,
     398,   401,   350,  -514,   353,   554,   615,   241,   343,   557,
     616,   361,   365,   349,   575,   600,   584,  -155,   814,    99,
     724,   375,   360,   914,   406,  1008,   968,   147,   181,  1009,
     370,   630,   392,   698,   371,   162,   148,   163,   149,   147,
     372,   393,   241,   194,   188,   125,   125,   169,   241,   125,
     219,   428,   443,  -331,   195,    75,    75,   164,   878,   603,
     879,   604,   426,   877,   734,   727,    81,    81,   212,   125,
     241,   241,   189,   242,   241,   213,  -333,   606,   192,   610,
     170,   241,   148,   378,   149,   503,  -333,  -141,   445,   683,
     684,   685,   125,   193,   148,   508,   149,   558,   443,   198,
     443,   540,    75,   524,   125,   686,   242,   351,   199,   524,
     443,   443,   200,    81,    75,   202,   171,   689,   502,   241,
     443,   212,   204,   443,   443,    81,   216,   203,   213,   501,
     125,   212,   382,   125,   445,   494,   445,   237,   213,   240,
     615,   752,   239,   866,   616,   205,   445,   445,   223,   224,
     837,   838,   839,   840,   841,   842,   445,    99,   222,   445,
     445,    88,   241,    86,    75,   238,   147,  -332,   576,   843,
      89,   624,   580,   625,   246,   305,   225,    99,   227,   216,
    -305,  -305,   739,   837,   838,   839,   840,   841,   842,   216,
     212,   419,   226,   603,   489,   604,   150,   213,   247,   212,
     125,   382,   843,   125,    75,   605,   213,   605,   248,   441,
     214,   249,   605,   715,   215,    81,    75,   241,   364,   632,
     633,   148,  -332,   149,   635,   716,   250,    81,   844,   845,
     315,   125,   558,   733,   867,   251,   846,   715,   397,   717,
     253,    75,   242,   626,   212,   996,   125,   254,   216,   716,
     150,   213,    81,   255,   610,   382,   603,   216,   604,   383,
     226,   844,   845,   817,   704,   705,   952,   799,   125,   893,
     837,   838,   839,   840,   841,   842,   802,  -307,  -307,   150,
     242,   150,   300,   756,   631,   749,   301,   524,   524,   524,
     524,   524,   302,   279,   280,   281,   656,   282,   524,   493,
     809,   810,   216,   379,   204,   494,   384,    49,   605,    75,
     152,   155,   524,   315,   441,   315,  -200,   282,   310,   312,
      81,   150,   150,   317,   379,   318,   384,   313,   379,   384,
     150,   150,   322,   692,   320,   241,   325,   328,   326,    99,
     334,   417,   356,   340,   373,   151,   151,   338,    99,   150,
     165,   357,    88,   394,    86,   700,   700,   398,   420,   429,
     430,    89,   361,   414,   365,   365,   415,   154,   154,   432,
     437,   533,   168,   360,   532,    99,   537,   524,   534,   741,
     833,   875,   605,   392,   542,   536,   544,   545,   443,   605,
     546,   836,   550,   555,   561,   169,   562,   861,   862,   680,
     681,   682,   683,   684,   685,   164,   889,   568,   428,   276,
     277,   278,   279,   280,   281,   569,   282,   585,   686,   426,
     571,   601,   602,   588,   445,   607,   611,   614,   170,   524,
     767,   612,   613,  -471,   655,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   635,   171,   812,   622,   654,   920,   627,
     634,   890,   150,   922,   641,   659,   924,   687,   694,   690,
     151,   323,   837,   838,   839,   840,   841,   842,   935,   710,
     939,   896,   713,   720,   723,   725,   942,   728,   730,   813,
     946,   732,   154,   590,   947,   950,   804,   740,   744,   743,
     961,   748,   753,   754,   747,   834,   760,   686,   151,   605,
     970,   764,   763,   605,   378,   800,   151,   801,   972,   803,
     805,   806,   825,   150,   827,   151,   822,   524,   824,   524,
     154,   828,   829,   830,   984,   854,   151,   855,   154,   831,
     524,   858,   864,   870,   880,   883,   881,   154,   443,   989,
     884,   886,   995,   887,   933,   892,   891,   315,   154,   894,
     882,   897,   904,   951,   960,   903,   524,   905,   906,   907,
     150,   150,   274,   275,   276,   277,   278,   279,   280,   281,
      99,   282,   911,  1013,   445,   908,   919,   912,   913,   605,
     921,   960,   925,  1019,   923,   165,   885,   930,   934,   940,
     962,   948,   963,   964,   365,   700,   966,   974,  -188,   605,
     975,   978,   977,   979,   980,   981,   993,   168,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   899,   678,
     679,   680,   681,   682,   683,   684,   685,   524,  1007,   982,
     983,   525,  1001,   988,   994,   997,   998,   525,  1014,  1000,
     686,  -194,  1002,  1003,  1011,  1016,  1017,   729,  1018,   726,
     722,  1012,   742,   808,   916,   916,   586,    99,   738,  -513,
     888,   857,   549,   232,   524,   918,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   835,   874,
     524,   605,   605,   976,   737,   524,   860,   944,    99,   765,
      99,   709,    99,   298,   766,   524,   352,   832,   707,   332,
       0,     0,     0,    99,     0,     0,     0,    99,     0,   605,
      99,     0,  -434,  -434,    99,    99,     0,     0,     0,   524,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   605,     0,     0,   524,   605,     0,
      99,     0,  -515,   675,   676,   677,   154,   678,   679,   680,
     681,   682,   683,   684,   685,     0,   605,    99,   647,   648,
     649,   650,   651,     0,     0,     0,   605,     0,   686,   658,
       0,     0,     0,     0,     0,     0,     0,     0,   151,     0,
       0,    99,     0,     0,     0,     0,     0,    99,  -515,  -515,
    -515,     0,   678,   679,   680,   681,   682,   683,   684,   685,
     154,     0,     0,     0,     0,     0,     0,   151,  -513,   151,
       0,     0,     0,   686,     0,   525,   525,   525,   525,   525,
       0,     0,     0,     0,     0,     0,   525,     0,     0,   154,
       0,   154,   670,   671,   672,   673,   674,   675,   676,   677,
     525,   678,   679,   680,   681,   682,   683,   684,   685,   151,
     151,     0,     0,     0,     0,     0,     0,     0,   151,   151,
       0,     0,   686,     0,     0,     0,     0,     0,     0,     0,
       0,   154,   154,     0,     0,     0,     0,   151,     0,     0,
     154,   154,  -515,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,     0,     0,   154,
     651,     0,     0,     0,     0,   525,   771,   772,   773,   774,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   165,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,   168,   282,   525,     0,     0,
       0,     0,     0,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,   868,     0,
     869,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   871,   154,  -515,  -515,  -515,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,     0,   127,   128,
       0,   130,   131,   132,   134,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,     0,   156,   158,
     161,   151,     0,     0,     0,   525,   179,   525,   526,     0,
       0,   183,     0,     0,   526,     0,   187,     0,   525,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,   221,   525,     0,     0,     0,   151,   151,
       0,     0,   234,     0,     0,     0,     0,     0,   910,     0,
       0,     0,     0,     0,     0,  -156,     0,     0,     0,     0,
     154,   154,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   941,     0,     0,     0,   298,
       0,     0,     0,   308,   256,   257,   258,     0,     0,   259,
       0,     0,     0,     0,     0,   525,     0,     0,  -434,  -434,
       0,     0,   260,     0,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,     0,     0,
       0,   158,   525,     0,     0,   335,     0,     0,     0,     0,
       0,     0,   210,   234,     0,     0,   348,   210,   525,     0,
       0,     0,     0,   525,   234,     0,   210,     0,     0,     0,
       0,     0,     0,   525,     0,     0,     0,   377,     0,     0,
       0,     0,   526,   526,   526,   526,   526,     0,     0,     0,
       0,     0,     0,   526,     0,     0,     0,   525,     0,     0,
       0,     0,   418,     0,  -156,     0,   210,   526,     0,     0,
       0,     0,     0,   335,   335,   525,     0,   335,     0,   335,
     447,   448,   449,   450,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,     0,   816,     0,     0,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,     0,     0,   335,     0,   335,   499,     0,
       0,     0,   526,   210,   662,     0,     0,   663,     0,     0,
     505,     0,   507,     0,     0,     0,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   541,   678,   679,   680,   681,
     682,   683,   684,   685,     0,   548,     0,     0,     0,     0,
       0,     0,     0,     0,   526,     0,     0,   686,     0,     0,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   598,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   421,   274,   275,   276,
     277,   278,   279,   280,   281,   623,   282,     0,    11,    12,
       0,     0,     0,     0,    13,   628,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,   526,     0,   526,     0,     0,   123,     0,    31,
       0,     0,     0,     0,     0,   526,     0,     0,    34,     0,
       0,     0,    36,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,   526,    44,     0,    45,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   124,    62,    63,     0,     0,     0,     0,     0,
       0,    65,   125,    67,     0,     0,     0,    71,   348,   696,
       0,     0,    75,     0,     0,     0,   422,   210,     0,    78,
     423,     0,    80,    81,    82,     0,   712,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   526,     0,     0,     0,   660,   661,   662,     0,
       0,   663,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   526,
     678,   679,   680,   681,   682,   683,   684,   685,     0,     0,
       0,     0,     0,   751,     0,   526,     0,     0,     0,     0,
     526,   686,     0,   335,   757,     0,     0,     0,     0,   759,
     526,     0,     0,     0,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
       0,     0,     0,     0,   526,     0,     0,     0,     0,     0,
       0,     0,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   526,     0,     0,     0,     0,     0,     0,     0,
       0,  -434,  -434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   815,     0,     0,     0,     0,   818,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,     0,     0,     0,     0,   873,
     335,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,     0,   335,   335,     0,
       0,     0,     0,     0,     0,    11,    12,     0,   298,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,  -434,  -434,     0,
       0,     0,    28,    29,    30,     0,    31,  -306,  -306,    32,
       0,     0,     0,   547,    33,    34,     0,   348,    35,    36,
      37,     0,    38,     0,    39,    40,    41,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    54,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    75,
      76,     0,     0,     0,    77,   559,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,   298,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,  -434,  -434,     0,     0,
       0,    28,    29,    30,     0,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,    35,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    75,    76,
       0,     0,     0,    77,   711,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,     0,   678,   679,   680,   681,
     682,   683,   684,   685,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,   686,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,    33,    34,     0,     0,    35,    36,    37,     0,
      38,     0,    39,    40,    41,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    54,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,     0,   678,   679,   680,   681,   682,   683,
     684,   685,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,   686,     0,     0,    13,     0,
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
       0,    77,   409,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,     0,   678,   679,   680,   681,   682,   683,   684,   685,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,   686,     0,     0,     0,    13,     0,    14,
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
      77,   573,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,   669,   670,   671,   672,   673,   674,   675,   676,   677,
       0,   678,   679,   680,   681,   682,   683,   684,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,   686,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,   731,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   408,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,  -515,  -515,
    -515,  -515,   674,   675,   676,   677,     0,   678,   679,   680,
     681,   682,   683,   684,   685,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   686,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,    28,    29,    30,     0,
      31,     0,     0,    32,     0,     0,     0,     0,    33,    34,
       0,     0,     0,    36,    37,     0,    38,     0,    39,    40,
      41,     0,     0,     0,    42,    43,     0,   876,     0,     0,
       0,     0,     0,    44,     0,    45,    46,    47,    48,    49,
      50,    51,   408,    53,     0,    54,     0,    55,    56,    57,
      58,    59,    60,   124,    62,    63,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,   260,     0,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,   274,   275,   276,   277,   278,   279,   280,
     281,     0,   282,     0,     0,     0,     0,     0,    11,    12,
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
       0,     0,    75,    76,     0,     0,     0,    77,   949,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     0,
     274,   275,   276,   277,   278,   279,   280,   281,     0,   282,
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
       0,    75,    76,     0,     0,     0,    77,   965,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282,     0,     0,     0,
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
      75,    76,     0,     0,     0,    77,   969,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,     0,     0,     0,     0,     0,
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
      76,     0,     0,     0,    77,   971,    78,     0,    79,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,    28,    29,    30,     0,    31,     0,     0,    32,     0,
       0,     0,     0,    33,    34,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,     0,     0,     0,    42,
      43,     0,     0,     0,   973,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,   408,    53,     0,
      54,     0,    55,    56,    57,    58,    59,    60,   124,    62,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    75,    76,
       0,     0,     0,    77,     0,    78,     0,    79,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,  -515,  -515,  -515,  -515,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,     0,
     282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,    33,    34,     0,     0,     0,    36,    37,     0,
      38,     0,    39,    40,    41,     0,     0,     0,    42,    43,
       0,     0,   987,     0,     0,     0,     0,    44,     0,    45,
      46,    47,    48,    49,    50,    51,   408,    53,     0,    54,
       0,    55,    56,    57,    58,    59,    60,   124,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    77,   999,    78,     0,    79,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      77,  1015,    78,     0,    79,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    36,    37,     0,    38,     0,    39,
      40,    41,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,   408,    53,     0,    54,     0,    55,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,    75,    76,     0,     0,     0,    77,
    1020,    78,     0,    79,    80,    81,    82,     4,     5,     6,
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
      73,     0,     0,    75,    76,     0,     0,     0,    77,     0,
      78,     0,    79,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    31,
       0,     0,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,     0,    53,     0,    54,     0,     0,    56,    57,    58,
      59,    60,   124,    62,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,     0,    71,    72,    73,
       0,     0,    75,    76,     0,     0,     0,    77,     0,    78,
       0,    79,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    31,     0,
       0,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,    37,     0,    38,     0,    39,    40,    41,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
       0,    53,     0,    54,     0,     0,    56,    57,    58,    59,
      60,   124,    62,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,     0,    71,    72,    73,     0,
       0,    75,    76,     0,     0,     0,    77,     0,    78,     0,
      79,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    31,     0,     0,
      32,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
      44,     0,    45,    46,    47,    48,    49,    50,    51,     0,
      53,     0,    54,     0,     0,    56,    57,    58,    59,    60,
     124,    62,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,     0,    71,    72,    73,     0,     0,
      75,    76,     0,     0,     0,    77,     0,    78,     0,    79,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   915,     0,
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
       0,     0,     0,     0,     0,     0,     0,   943,     0,     0,
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
       0,     0,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
     298,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,  -434,
    -434,     0,    30,     0,    31,     0,     0,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    36,    37,     0,
      38,     0,    39,    40,    41,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    45,
      46,    47,    48,    49,    50,    51,     0,    53,     0,    54,
       0,     0,    56,    57,    58,    59,    60,   124,    62,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,     0,    71,    72,    73,     0,     0,    75,    76,     0,
       0,     0,    77,     0,    78,     0,    79,    80,    81,    82,
       4,     5,     6,     7,     8,  -308,  -308,     0,     0,     9,
     122,     0,     0,     0,     0,     0,     0,     0,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,   298,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,  -434,  -434,     0,     0,     0,     0,
       0,   123,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,   124,    62,    63,     4,
       5,     6,     7,     8,     0,    65,   125,    67,     9,   122,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
     422,     0,     0,    78,     0,     0,    80,    81,    82,   157,
       0,   374,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    78,     0,     0,    80,    81,    82,     0,     0,
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
       0,    78,     0,   178,    80,    81,    82,     0,     0,     0,
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
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
      78,     0,   182,    80,    81,    82,     0,     0,     0,     0,
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
       0,    65,   125,    67,     9,    10,     0,    71,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,    78,
       0,   208,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,   123,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,   124,    62,    63,     0,     4,     5,     6,     7,     8,
      65,   125,    67,     0,     9,   122,    71,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,    78,   345,
     451,    80,    81,    82,     0,     0,     0,     0,     0,     0,
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
       0,    80,    81,    82,   475,     0,     0,     0,     0,     0,
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
      75,     0,     0,     0,     0,     0,     0,    78,     0,     0,
      80,    81,    82,   504,     0,     0,     0,     0,     0,     0,
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
      67,     9,   122,     0,    71,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,    78,     0,     0,    80,
      81,    82,   506,     0,     0,     0,     0,     0,     0,     0,
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
      82,   758,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,   123,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    36,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,   124,    62,    63,     4,
       5,     6,     7,     8,     0,    65,   125,    67,     9,    10,
       0,    71,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,    78,     0,     0,    80,    81,    82,     0,
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
       0,     0,    78,     0,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,   123,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    36,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,    60,   124,    62,    63,     0,     0,     0,
       0,     0,     0,    65,   125,   376,     0,     0,     0,    71,
     256,   257,   258,     0,    75,   259,     0,     0,     0,     0,
       0,    78,     0,     0,    80,    81,    82,     0,   260,   819,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,   274,   275,   276,   277,   278,   279,
     280,   281,     0,   282,   256,   257,   258,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,   256,   257,
     258,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,   256,   257,   258,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   820,
     260,     0,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,     0,   274,   275,   276,   277,
     278,   279,   280,   281,     0,   282,   256,   257,   258,     0,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,   260,     0,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     0,
     274,   275,   276,   277,   278,   279,   280,   281,     0,   282,
     256,   257,   258,     0,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   333,   260,     0,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,   274,   275,   276,   277,   278,   279,
     280,   281,     0,   282,   256,   257,   258,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   337,   260,     0,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,   274,   275,
     276,   277,   278,   279,   280,   281,     0,   282,   660,   661,
     662,     0,     0,   663,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   388,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,     0,   678,   679,   680,   681,   682,   683,   684,   685,
       0,   256,   257,   258,     0,     0,   259,     0,     0,     0,
       0,     0,     0,   686,     0,     0,     0,     0,   416,   260,
       0,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,   274,   275,   276,   277,   278,
     279,   280,   281,     0,   282,   256,   257,   258,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   500,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,   256,
     257,   258,     0,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,   260,     0,   261,
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
     279,   280,   281,     0,   282,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,     0,   702,
     775,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   298,     0,     0,     0,     0,   512,   513,     0,
       0,     0,     0,   514,     0,   515,     0,     0,     0,     0,
       0,  -434,  -434,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,   750,     0,     0,   147,     0,   517,     0,
       0,     0,     0,     0,     0,     0,     0,   518,     0,     0,
       0,   519,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    48,   865,     0,     0,
     512,   513,     0,     0,     0,     0,   514,    57,   515,    59,
      60,   520,    62,   521,     0,     0,     0,     0,     0,   516,
     522,   125,     0,     0,     0,     0,    71,     0,     0,   147,
       0,   517,     0,     0,     0,     0,     0,   543,   523,     0,
     518,     0,     0,     0,   519,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    59,    60,   520,    62,   521,     0,     0,     0,
       0,     0,     0,   522,   125,   256,   257,   258,     0,    71,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   523,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,   256,
     257,   258,     0,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,   274,   275,   276,   277,   278,   279,   280,
     281,     0,   282,     0,     0,   309,     0,   256,   257,   258,
       0,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   280,   281,   316,
     282,   660,   661,   662,     0,     0,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,     0,   678,   679,   680,   681,   682,
     683,   684,   685,   660,   661,   662,     0,   645,   663,     0,
       0,     0,     0,     0,     0,     0,   686,     0,     0,     0,
       0,   664,     0,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,     0,   678,   679,   680,
     681,   682,   683,   684,   685,   660,   661,   662,     0,     0,
     663,   762,     0,     0,     0,     0,     0,     0,   686,     0,
       0,     0,     0,   664,   872,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,     0,   678,
     679,   680,   681,   682,   683,   684,   685,   660,   661,   662,
       0,     0,   663,   909,     0,     0,     0,     0,     0,     0,
     686,     0,     0,     0,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
       0,   678,   679,   680,   681,   682,   683,   684,   685,   661,
     662,     0,     0,   663,     0,     0,     0,     0,     0,     0,
       0,     0,   686,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,     0,   678,   679,   680,   681,   682,   683,   684,   685,
       0,   663,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   686,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,     0,
     678,   679,   680,   681,   682,   683,   684,   685,   256,   257,
     258,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,   686,     0,     0,     0,     0,   260,   629,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   280,   281,
       0,   282,   256,   257,   258,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,     0,   274,   275,   276,   277,
     278,   279,   280,   281,     0,   282,   257,   258,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,   274,
     275,   276,   277,   278,   279,   280,   281,   258,   282,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   259,   274,
     275,   276,   277,   278,   279,   280,   281,     0,   282,     0,
       0,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   280,   281,     0,   282
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-825)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-515)))

static const yytype_int16 yycheck[] =
{
       2,   126,    27,   282,     2,   533,     2,    22,    23,   254,
     326,   547,    27,     2,   544,    44,   421,   222,   555,   386,
     205,     8,    78,   591,    53,     8,    64,   851,    30,    10,
      64,     8,     8,     8,     8,    27,    33,    28,    28,    68,
      10,    22,    23,     8,     8,    41,    61,    76,    63,   110,
       8,   176,     0,     8,    33,   300,     8,   302,    64,    74,
      84,    64,   115,    64,     8,    91,     8,   312,   313,    64,
       8,    27,    98,    81,    74,     8,     8,   322,     8,     8,
     325,   326,    64,    64,     8,    93,   614,     8,    81,    77,
      84,   139,    64,   102,    64,   132,   149,   106,   136,   504,
      93,   506,   139,   249,   250,   166,    91,   253,   156,   255,
     131,   156,   149,    98,   156,   139,   154,   102,   156,   254,
     154,   123,   156,   149,   334,   149,   118,   133,   139,   129,
     154,   131,   133,   189,   149,   156,   160,    84,    77,   139,
     156,   136,   157,   131,   200,   139,   207,   155,   163,   149,
      33,   154,   149,   358,   978,   301,   129,   303,   131,   154,
     160,   133,   155,   154,   149,   300,   139,   154,   158,   737,
     149,   158,   154,    61,    62,   158,   157,   312,   313,   171,
     195,   158,   158,   158,   158,   370,   242,   755,   203,   204,
      74,    74,   131,   158,   158,    84,   131,   212,    77,   157,
     405,   136,   569,   158,   571,   201,   158,   188,   223,   224,
     225,   226,   193,   157,   195,   157,    76,   131,   188,   157,
      80,   202,   203,   193,   157,   157,    77,   157,   157,   231,
      77,   212,   202,   157,   230,   154,   157,    74,    64,   158,
     154,    66,   223,   126,   158,   129,   129,   131,   131,    74,
     311,   131,   131,   149,   156,   139,   139,   282,   131,   139,
      28,   242,   254,   136,   160,   149,   149,   282,   805,   129,
     806,   131,   242,   803,   590,    77,   160,   160,    91,   139,
     131,   131,   156,   156,   131,    98,   136,   430,   156,   432,
     282,   131,   129,   106,   131,   310,   136,   157,   254,    48,
      49,    50,   139,   156,   129,   320,   131,   368,   300,   139,
     302,   340,   149,   328,   139,    64,   156,   154,   156,   334,
     312,   313,   156,   160,   149,   156,   282,   537,   309,   131,
     322,    91,   131,   325,   326,   160,   149,   156,    98,   309,
     139,    91,   102,   139,   300,   590,   302,    80,    98,    82,
      76,   630,   102,   758,    80,   154,   312,   313,   156,    88,
      69,    70,    71,    72,    73,    74,   322,   369,   154,   325,
     326,   369,   131,   369,   149,   154,    74,   136,   393,    88,
     369,   442,   397,   444,   139,   160,   115,   389,   403,   149,
     157,   158,   602,    69,    70,    71,    72,    73,    74,   149,
      91,   161,   131,   129,   139,   131,   421,    98,   139,    91,
     139,   102,    88,   139,   149,   430,    98,   432,   158,   154,
     102,    64,   437,    81,   106,   160,   149,   131,   126,   490,
     491,   129,   136,   131,   495,    93,    64,   160,   147,   148,
     421,   139,   503,   589,   760,    33,   155,    81,   131,   107,
      64,   149,   156,   445,    91,   983,   139,   136,   149,    93,
     475,    98,   160,    64,   607,   102,   129,   149,   131,   106,
     131,   147,   148,   107,    67,    68,   139,   687,   139,   155,
      69,    70,    71,    72,    73,    74,   691,   157,   158,   504,
     156,   506,   136,   639,   475,   620,    64,   512,   513,   514,
     515,   516,   133,    48,    49,    50,   521,    52,   523,   139,
      67,    68,   149,   214,   131,   760,   217,   115,   533,   149,
      22,    23,   537,   504,   154,   506,   115,    52,   131,   136,
     160,   546,   547,   162,   235,     8,   237,   136,   239,   240,
     555,   556,   136,   539,   131,   131,   136,    15,   133,   551,
      15,   159,   158,   150,   158,    22,    23,   139,   560,   574,
      27,   157,   560,   578,   560,   546,   547,   582,   139,   139,
     110,   560,   553,   157,   555,   556,   157,    22,    23,   110,
     156,   156,    27,   553,   149,   587,    15,   602,   157,   604,
     736,   801,   607,   574,   157,   162,   158,     8,   590,   614,
      77,   744,   158,   156,   155,   630,    64,   753,   754,    45,
      46,    47,    48,    49,    50,   630,   821,   139,   599,    45,
      46,    47,    48,    49,    50,   158,    52,   139,    64,   599,
     158,   157,    15,   156,   590,   120,   154,   156,   630,   654,
     655,   162,   162,   156,   131,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   734,   630,   704,   162,   156,   883,   162,
     162,   824,   697,   888,   162,   136,   891,    15,   158,   139,
     157,   752,    69,    70,    71,    72,    73,    74,   903,    15,
     905,   844,   162,    82,   158,   139,   911,   139,   139,   705,
     915,   157,   157,   133,   919,   925,   697,   131,     8,   154,
     930,     8,    64,    64,   157,   740,   133,    64,   195,   744,
     940,     8,   162,   748,   106,   157,   203,    15,   943,   158,
     156,    99,   152,   758,   139,   212,   158,   762,   156,   764,
     195,   139,   158,   158,   964,   157,   223,   147,   203,   162,
     775,   153,   162,   157,   157,    28,   157,   212,   760,   974,
      75,   155,   982,   158,   899,   162,   154,   758,   223,   139,
     809,   149,   156,   926,   927,   154,   801,   154,   149,   162,
     805,   806,    43,    44,    45,    46,    47,    48,    49,    50,
     802,    52,   154,  1008,   760,   162,    28,   158,   157,   824,
     158,   954,    15,  1018,   149,   282,   812,    15,   139,    15,
     149,   157,   139,    15,   805,   806,   149,   154,    77,   844,
     155,    77,   158,   122,   158,   136,   979,   282,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   850,    43,
      44,    45,    46,    47,    48,    49,    50,   872,  1001,    15,
     156,   328,     8,   158,   139,   149,   158,   334,  1011,   139,
      64,   139,   157,    82,   156,   149,   157,   582,   154,   578,
     574,  1005,   607,   701,   880,   881,   403,   889,   599,     8,
     818,   748,   354,    78,   909,   881,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   743,   800,
     925,   926,   927,   954,   592,   930,   752,   913,   920,   653,
     922,   556,   924,    42,   654,   940,   195,   734,   553,   177,
      -1,    -1,    -1,   935,    -1,    -1,    -1,   939,    -1,   954,
     942,    -1,    61,    62,   946,   947,    -1,    -1,    -1,   964,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   979,    -1,    -1,   982,   983,    -1,
     972,    -1,    38,    39,    40,    41,   421,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,  1001,   989,   512,   513,
     514,   515,   516,    -1,    -1,    -1,  1011,    -1,    64,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,  1013,    -1,    -1,    -1,    -1,    -1,  1019,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
     475,    -1,    -1,    -1,    -1,    -1,    -1,   504,   157,   506,
      -1,    -1,    -1,    64,    -1,   512,   513,   514,   515,   516,
      -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,   504,
      -1,   506,    34,    35,    36,    37,    38,    39,    40,    41,
     537,    43,    44,    45,    46,    47,    48,    49,    50,   546,
     547,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,   556,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   546,   547,    -1,    -1,    -1,    -1,   574,    -1,    -1,
     555,   556,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,   574,
     654,    -1,    -1,    -1,    -1,   602,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   630,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,   630,    52,   654,    -1,    -1,
      -1,    -1,    -1,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     697,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   762,    -1,
     764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   775,   697,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,   758,    -1,    -1,    -1,   762,    32,   764,   328,    -1,
      -1,    37,    -1,    -1,   334,    -1,    42,    -1,   775,    -1,
      -1,    -1,    -1,   758,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,   801,    -1,    -1,    -1,   805,   806,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,   872,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
     805,   806,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   909,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   129,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,   872,    -1,    -1,    61,    62,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,   177,   909,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   189,    -1,    -1,   192,   193,   925,    -1,
      -1,    -1,    -1,   930,   200,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,   940,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,   512,   513,   514,   515,   516,    -1,    -1,    -1,
      -1,    -1,    -1,   523,    -1,    -1,    -1,   964,    -1,    -1,
      -1,    -1,   238,    -1,   157,    -1,   242,   537,    -1,    -1,
      -1,    -1,    -1,   249,   250,   982,    -1,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,   162,    -1,    -1,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,    -1,    -1,   301,    -1,   303,   304,    -1,
      -1,    -1,   602,   309,    11,    -1,    -1,    14,    -1,    -1,
     316,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   341,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   654,    -1,    -1,    64,    -1,    -1,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   422,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    33,    43,    44,    45,
      46,    47,    48,    49,    50,   441,    52,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,   451,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,   762,    -1,   764,    -1,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,   775,    -1,    -1,    85,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   801,   109,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,   544,   545,
      -1,    -1,   149,    -1,    -1,    -1,   153,   553,    -1,   156,
     157,    -1,   159,   160,   161,    -1,   562,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   872,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    14,    -1,   589,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   599,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   909,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,   629,    -1,   925,    -1,    -1,    -1,    -1,
     930,    64,    -1,   639,   640,    -1,    -1,    -1,    -1,   645,
     940,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   964,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   982,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   710,    -1,    -1,    -1,    -1,   715,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,   162,
     736,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,   753,   754,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    42,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    61,    62,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,   157,   158,    79,
      -1,    -1,    -1,    77,    84,    85,    -1,   803,    88,    89,
      90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,   154,   155,   156,    -1,   158,   159,
     160,   161,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    42,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    61,    62,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,    90,
      -1,    92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,   154,   155,   156,    -1,   158,   159,   160,
     161,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    64,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    88,    89,    90,    -1,
      92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,   161,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    64,    -1,    -1,    51,    -1,
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
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    64,    -1,    -1,    -1,    51,    -1,    53,
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
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    64,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,   156,    -1,   158,   159,   160,   161,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,    -1,
     156,    -1,   158,   159,   160,   161,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    45,    46,
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
      -1,    -1,    -1,    -1,    12,    13,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
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
      -1,    -1,    -1,    12,    13,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
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
     149,   150,    -1,    -1,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
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
      -1,    12,    13,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      12,    13,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    89,    90,    -1,
      92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,   161,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    89,    90,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    -1,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,
     155,   156,    -1,   158,   159,   160,   161,     3,     4,     5,
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
     146,    -1,    -1,   149,   150,    -1,    -1,    -1,   154,    -1,
     156,    -1,   158,   159,   160,   161,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    -1,    92,    -1,    94,    95,    96,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,    -1,   121,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
      -1,    -1,   149,   150,    -1,    -1,    -1,   154,    -1,   156,
      -1,   158,   159,   160,   161,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    -1,    92,    -1,    94,    95,    96,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
      -1,   119,    -1,   121,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,    -1,
      -1,   149,   150,    -1,    -1,    -1,   154,    -1,   156,    -1,
     158,   159,   160,   161,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      89,    90,    -1,    92,    -1,    94,    95,    96,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,    -1,   121,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,    -1,    -1,
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
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      42,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    61,
      62,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,    -1,
      92,    -1,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,    -1,   119,    -1,   121,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,   154,    -1,   156,    -1,   158,   159,   160,   161,
       3,     4,     5,     6,     7,   157,   158,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    42,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    61,    62,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,     3,
       4,     5,     6,     7,    -1,   138,   139,   140,    12,    13,
      -1,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
     153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,    33,
      -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,
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
      -1,   156,    -1,   158,   159,   160,   161,    -1,    -1,    -1,
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
     156,    -1,   158,   159,   160,   161,    -1,    -1,    -1,    -1,
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
      -1,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,     3,     4,     5,     6,     7,
     138,   139,   140,    -1,    12,    13,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      28,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   159,   160,   161,    33,    -1,    -1,    -1,    -1,    -1,
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
     149,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
     159,   160,   161,    33,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,   159,
     160,   161,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,
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
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
       9,    10,    11,    -1,   149,    14,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   159,   160,   161,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,   157,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,     9,
      10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    27,    -1,    29,
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
      48,    49,    50,    -1,    52,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,   155,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   155,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,   125,    53,   127,
     128,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    64,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,   157,   156,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,     9,    10,    11,    -1,   144,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,     9,
      10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    99,    -1,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    99,
      52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,     9,    10,    11,    -1,    99,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,     9,    10,    11,    -1,    -1,
      14,    99,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,     9,    10,    11,
      -1,    -1,    14,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    11,    52,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52
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
     159,   160,   161,   166,   167,   174,   177,   178,   186,   187,
     190,   191,   192,   194,   250,   251,   252,   253,   254,   255,
     258,   259,   268,   273,   274,   278,   279,   280,   282,   283,
     289,   290,   291,   292,   293,   294,   295,   296,   301,   309,
     312,   314,    13,    74,   129,   139,   255,   278,   278,   156,
     278,   278,   278,   251,   278,   283,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,    74,   129,   131,
     166,   259,   282,   283,   291,   282,   278,    33,   278,   304,
     305,   278,   129,   131,   166,   259,   261,   262,   291,   294,
     295,   301,    84,    84,   149,   221,   255,   156,   158,   278,
     139,    64,   158,   278,   156,   177,   243,   278,   156,   156,
     265,   279,   156,   156,   149,   160,   219,   220,   139,   156,
     156,   279,   156,   156,   131,   154,   166,   166,   158,   251,
     278,   283,    91,    98,   102,   106,   149,   306,   307,    28,
     279,   278,   154,   156,    88,   115,   131,   166,   168,   169,
     279,   175,   250,   252,   278,   102,   266,   306,   154,   102,
     306,   131,   156,   216,     8,   158,   139,   139,   158,    64,
      64,    33,   188,    64,   136,    64,     9,    10,    11,    14,
      27,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    43,    44,    45,    46,    47,    48,
      49,    50,    52,   158,    61,    62,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    42,   216,
     136,    64,   133,    64,   154,   160,   295,   188,   278,    99,
     131,   166,   136,   136,   281,   283,    99,   162,     8,   276,
     131,   166,   136,   216,   267,   136,   133,   295,    15,     8,
     158,   188,   304,   158,    15,   278,   297,   158,   139,   203,
     150,     8,   158,   251,   283,   157,   244,   245,   278,   251,
     283,   154,   280,   283,     8,   158,   158,   157,    28,   177,
     251,   283,   310,   311,   126,   283,   302,   303,   166,   165,
     154,   158,   216,   158,   158,   283,   140,   278,   106,   307,
      64,   133,   102,   106,   307,    28,   154,   204,   158,   175,
     184,   185,   283,   131,   166,   172,   173,   131,   166,   170,
     171,   166,    77,     8,   158,    28,   177,   207,   118,   155,
     176,   177,   186,   187,   157,   157,   157,   159,   278,   161,
     139,    33,   153,   157,   217,   218,   251,   252,   283,   139,
     110,   193,   110,   195,   297,   297,   139,   156,   297,    84,
     139,   154,   289,   295,   300,   301,   297,   278,   278,   278,
     278,    28,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   261,    33,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   139,
     289,   300,   297,   139,   289,   298,   299,   300,   297,   278,
     157,   251,   283,   166,    33,   278,    33,   278,   166,   289,
     289,   298,    45,    46,    51,    53,    64,    76,    85,    89,
     129,   131,   138,   156,   166,   259,   268,   269,   270,   271,
     272,   313,   149,   156,   157,   270,   162,    15,     8,   157,
     279,   278,   157,   157,   158,     8,    77,    77,   278,   220,
     158,   175,   208,     8,   157,   156,     8,   157,   216,   155,
     165,   155,    64,   155,   132,   139,   149,   308,   139,   158,
     205,   158,   205,   155,     8,   157,   166,    77,     8,   158,
     166,    77,     8,   158,    77,   139,   169,   175,   156,    64,
     133,   246,   247,   248,   249,   285,   155,   281,   278,     8,
     157,   157,    15,   129,   131,   166,   260,   120,   196,   197,
     260,   154,   162,   162,   156,    76,    80,   212,   213,   214,
     215,   260,   162,   278,   216,   216,   295,   162,   278,    28,
      66,   283,   216,   216,   162,   216,   286,   287,   288,    64,
     154,   162,   155,   281,   281,    99,   263,   271,   271,   271,
     271,   271,   275,   277,   156,   131,   166,   102,   271,   136,
       9,    10,    11,    14,    27,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    46,    47,    48,    49,    50,    64,    15,   212,   270,
     139,    28,   177,   202,   158,   244,   278,    33,   126,   199,
     283,   199,   155,   209,    67,    68,   210,   311,   302,   303,
      15,   155,   278,   162,   205,    81,    93,   107,   205,   155,
      82,   179,   185,   158,    77,   139,   173,    77,   139,   171,
     139,   108,   157,   297,   298,   285,    64,   246,   218,   270,
     131,   166,   197,   154,     8,   222,   212,   157,     8,   188,
     155,   278,   261,    64,    64,   284,   297,   278,    33,   278,
     133,   264,    99,   162,     8,   276,   275,   166,   157,    84,
     139,   271,   271,   271,   271,    28,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   270,
     157,    15,   175,   158,   283,   156,    99,   198,   198,    67,
      68,   211,   279,   177,   157,   278,   162,   107,   278,    28,
     158,   206,   158,   155,   156,   152,   180,   139,   139,   158,
     158,   162,   288,   297,   166,   222,   260,    69,    70,    71,
      72,    73,    74,    88,   147,   148,   155,   223,   224,   237,
     238,   239,   240,   242,   157,   147,   256,   214,   153,   189,
     267,   297,   297,   285,   162,   155,   281,   298,   271,   271,
     157,   271,    28,   162,   256,   270,   103,   244,   302,   199,
     157,   157,   279,    28,    75,   177,   155,   158,   206,   175,
     260,   154,   162,   155,   139,   225,   260,   149,   241,   255,
     240,     8,   158,   154,   156,   154,   149,   162,   162,    99,
     271,   154,   158,   157,   157,    28,   177,   201,   201,    28,
     175,   158,   175,   149,   175,    15,     8,   154,   158,   226,
      15,     8,   158,   188,   139,   175,    33,   149,   257,   175,
      15,   271,   175,    28,   177,   200,   175,   175,   157,   155,
     270,   260,   139,   227,   228,   229,   230,   232,   233,   234,
     260,   270,   149,   139,    15,   155,   149,     8,   157,   155,
     270,   155,   175,   105,   154,   155,   229,   158,    77,   122,
     158,   136,    15,   156,   270,    33,   149,   104,   158,   175,
     235,   240,   231,   260,   139,   270,   212,   149,   158,   155,
     139,     8,   157,    82,   181,   182,   183,   260,   154,   158,
     236,   156,   183,   175,   260,   155,   149,   157,   154,   175,
     155
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
#line 4130 "/Users/roberto/Projects/pelet/src/Php56LintParser.cpp"
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
#line 1312 "/Users/roberto/Projects/pelet/src/Php56LintParser.y"

