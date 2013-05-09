
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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
#define yyparse         php54_resource_parse
#define yylex           php54_resource_lex
#define yyerror         php54_resource_error
#define yylval          php54_resource_lval
#define yychar          php54_resource_char
#define yydebug         php54_resource_debug
#define yynerrs         php54_resource_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"


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
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ResourceParserObserverClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ResourceParserTypeClass

// so that both bison parses call the same lex function
#define php54_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php54_resource_error pelet::ResourceGrammarError



/* Line 189 of yacc.c  */
#line 127 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.cpp"

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
     T_WHITESPACE = 627
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 298 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.cpp"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7829

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  457
/* YYNRULES -- Number of states.  */
#define YYNSTATES  924

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
       2,     2,     2,    48,   156,     2,   155,    47,    31,     2,
     151,   152,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   153,
      36,    13,    37,    25,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   157,    30,     2,   154,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,    29,   150,    50,     2,     2,     2,
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
      27,    76,    77,    78,    79,    80,    81,    82,    62,    83,
      84,    20,    85,    86,    87,    88,    58,    89,    90,    91,
      21,    92,    93,    94,    95,    96,    56,    97,    65,    64,
      98,    99,   100,   101,   102,   103,    66,   104,   105,     5,
     106,   107,   108,    70,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    59,     7,     6,   118,    49,   119,    57,
     120,    35,    38,    33,    34,    32,   121,    39,   122,   123,
     124,    11,     9,    10,   125,    23,    19,    22,   126,    63,
     127,   128,   129,    53,   130,   131,   132,    17,   133,    24,
      12,    69,    68,    67,     4,     3,   134,    41,    15,    40,
      14,   135,    72,   136,    55,   137,   138,   139,   140,   141,
     142,   143,    51,   144,   145,   146,   147,   148,    16,     2
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
     317,   320,   322,   325,   326,   329,   331,   332,   335,   336,
     339,   341,   345,   346,   349,   351,   354,   356,   361,   363,
     368,   370,   375,   379,   385,   389,   394,   399,   405,   406,
     412,   417,   419,   421,   423,   428,   429,   436,   437,   445,
     446,   449,   450,   454,   456,   457,   460,   464,   470,   475,
     480,   486,   494,   501,   502,   504,   506,   508,   510,   511,
     513,   515,   518,   522,   526,   531,   535,   537,   539,   542,
     547,   551,   557,   559,   563,   566,   567,   571,   574,   576,
     577,   587,   591,   593,   597,   599,   603,   604,   606,   608,
     611,   614,   617,   621,   623,   627,   629,   631,   635,   640,
     644,   645,   647,   649,   653,   655,   657,   658,   660,   662,
     665,   667,   669,   671,   673,   675,   677,   681,   687,   689,
     693,   699,   704,   708,   710,   711,   713,   717,   719,   722,
     724,   729,   733,   736,   738,   740,   741,   743,   747,   754,
     758,   763,   770,   773,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   820,   823,   826,   829,   833,
     837,   841,   845,   849,   853,   857,   861,   865,   869,   873,
     877,   881,   885,   889,   893,   896,   899,   902,   905,   909,
     913,   917,   921,   925,   929,   933,   937,   941,   945,   947,
     952,   958,   963,   965,   968,   971,   974,   977,   980,   983,
     986,   989,   992,   994,   999,  1003,  1007,  1010,  1020,  1031,
    1033,  1034,  1039,  1043,  1048,  1050,  1053,  1054,  1060,  1067,
    1068,  1075,  1082,  1089,  1096,  1103,  1108,  1110,  1112,  1116,
    1119,  1121,  1125,  1128,  1130,  1132,  1137,  1139,  1142,  1143,
    1146,  1147,  1150,  1154,  1155,  1157,  1159,  1160,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1188,
    1191,  1193,  1195,  1199,  1202,  1205,  1208,  1213,  1215,  1219,
    1221,  1225,  1227,  1229,  1231,  1235,  1238,  1240,  1244,  1248,
    1250,  1251,  1254,  1255,  1257,  1263,  1267,  1271,  1273,  1275,
    1277,  1279,  1281,  1283,  1284,  1285,  1293,  1295,  1298,  1299,
    1303,  1308,  1313,  1317,  1319,  1321,  1322,  1324,  1327,  1331,
    1335,  1337,  1342,  1347,  1349,  1351,  1353,  1355,  1358,  1360,
    1365,  1370,  1372,  1374,  1379,  1380,  1382,  1384,  1386,  1391,
    1396,  1398,  1400,  1404,  1406,  1409,  1413,  1415,  1417,  1422,
    1423,  1424,  1427,  1433,  1437,  1441,  1443,  1450,  1455,  1460,
    1463,  1466,  1469,  1471,  1474,  1476,  1481,  1485,  1489,  1496,
    1500,  1502,  1504,  1506,  1511,  1516,  1517,  1521,  1522,  1526,
    1531,  1532,  1536,  1537,  1541,  1543,  1547,  1551
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   170,    -1,   177,    -1,   178,
      -1,   115,   151,   152,   153,    -1,   126,   161,   153,    -1,
      -1,   126,   161,   149,   163,   160,   150,    -1,    -1,   126,
     149,   164,   160,   150,    -1,   144,   165,   153,    -1,   167,
     153,    -1,   165,     8,   166,    -1,   166,    -1,   161,    -1,
     161,    74,   136,    -1,   128,   161,    -1,   128,   161,    74,
     136,    -1,   167,     8,   136,    13,   260,    -1,    85,   136,
      13,   260,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   266,
     152,   170,   201,   203,    -1,   116,   151,   266,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   266,   152,
     200,    -1,    93,   170,   147,   151,   266,   152,   153,    -1,
     109,   151,   236,   153,   236,   153,   236,   152,   193,    -1,
     138,   151,   266,   152,   197,    -1,    76,   153,    -1,    76,
     266,   153,    -1,    87,   153,    -1,    87,   266,   153,    -1,
     134,   153,    -1,   134,   243,   153,    -1,   134,   270,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     235,   153,    -1,   118,    -1,   266,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   270,    74,   192,   191,
     152,   194,    -1,   110,   151,   243,    74,   270,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   251,   146,   152,   149,
     168,   150,   172,    -1,   139,   266,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   251,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   270,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   244,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   251,    -1,   120,
      -1,    -1,   107,   190,    -1,    -1,   117,   190,    -1,   251,
      -1,   190,     8,   251,    -1,    -1,    96,   192,    -1,   270,
      -1,    31,   270,    -1,   170,    -1,    26,   168,   101,   153,
      -1,   170,    -1,    26,   168,   102,   153,    -1,   170,    -1,
      26,   168,   100,   153,    -1,   136,    13,   260,    -1,   196,
       8,   136,    13,   260,    -1,   149,   198,   150,    -1,   149,
     153,   198,   150,    -1,    26,   198,   104,   153,    -1,    26,
     153,   198,   104,   153,    -1,    -1,   198,    78,   266,   199,
     168,    -1,   198,    90,   199,   168,    -1,    26,    -1,   153,
      -1,   170,    -1,    26,   168,   105,   153,    -1,    -1,   201,
      64,   151,   266,   152,   170,    -1,    -1,   202,    64,   151,
     266,   152,    26,   168,    -1,    -1,    65,   170,    -1,    -1,
      65,    26,   168,    -1,   206,    -1,    -1,   207,   146,    -1,
     207,    31,   146,    -1,   207,    31,   146,    13,   260,    -1,
     207,   146,    13,   260,    -1,   206,     8,   207,   146,    -1,
     206,     8,   207,    31,   146,    -1,   206,     8,   207,    31,
     146,    13,   260,    -1,   206,     8,   207,   146,    13,   260,
      -1,    -1,   251,    -1,    73,    -1,    77,    -1,   209,    -1,
      -1,   243,    -1,   270,    -1,    31,   268,    -1,   209,     8,
     243,    -1,   209,     8,   270,    -1,   209,     8,    31,   268,
      -1,   210,     8,   211,    -1,   211,    -1,   146,    -1,   155,
     267,    -1,   155,   149,   266,   150,    -1,   212,     8,   146,
      -1,   212,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   213,   214,    -1,    -1,   229,   233,   153,
      -1,   234,   153,    -1,   216,    -1,    -1,   230,   244,   179,
     136,   151,   205,   152,   215,   228,    -1,   144,   217,   218,
      -1,   251,    -1,   217,     8,   251,    -1,   153,    -1,   149,
     219,   150,    -1,    -1,   220,    -1,   221,    -1,   220,   221,
      -1,   222,   153,    -1,   226,   153,    -1,   225,   119,   223,
      -1,   251,    -1,   223,     8,   251,    -1,   136,    -1,   225,
      -1,   251,   133,   136,    -1,   224,    74,   227,   136,    -1,
     224,    74,   232,    -1,    -1,   232,    -1,   153,    -1,   149,
     168,   150,    -1,   231,    -1,   145,    -1,    -1,   231,    -1,
     232,    -1,   231,   232,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   233,     8,   146,
      -1,   233,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   234,     8,   136,    13,   260,    -1,    85,
     136,    13,   260,    -1,   235,     8,   266,    -1,   266,    -1,
      -1,   237,    -1,   237,     8,   266,    -1,   266,    -1,   238,
     274,    -1,   274,    -1,   239,    61,   286,   157,    -1,    61,
     286,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   252,   258,    -1,   123,   151,   291,
     152,    13,   266,    -1,   270,    13,   266,    -1,   270,    13,
      31,   270,    -1,   270,    13,    31,    63,   252,   258,    -1,
      62,   266,    -1,   270,    24,   266,    -1,   270,    23,   266,
      -1,   270,    22,   266,    -1,   270,    21,   266,    -1,   270,
      20,   266,    -1,   270,    19,   266,    -1,   270,    18,   266,
      -1,   270,    17,   266,    -1,   270,    16,   266,    -1,   270,
      15,   266,    -1,   270,    14,   266,    -1,   269,    59,    -1,
      59,   269,    -1,   269,    58,    -1,    58,   269,    -1,   266,
      27,   266,    -1,   266,    28,   266,    -1,   266,     9,   266,
      -1,   266,    11,   266,    -1,   266,    10,   266,    -1,   266,
      29,   266,    -1,   266,    31,   266,    -1,   266,    30,   266,
      -1,   266,    44,   266,    -1,   266,    42,   266,    -1,   266,
      43,   266,    -1,   266,    45,   266,    -1,   266,    46,   266,
      -1,   266,    47,   266,    -1,   266,    41,   266,    -1,   266,
      40,   266,    -1,    42,   266,    -1,    43,   266,    -1,    48,
     266,    -1,    50,   266,    -1,   266,    33,   266,    -1,   266,
      32,   266,    -1,   266,    35,   266,    -1,   266,    34,   266,
      -1,   266,    36,   266,    -1,   266,    39,   266,    -1,   266,
      37,   266,    -1,   266,    38,   266,    -1,   266,    49,   252,
      -1,   151,   266,   152,    -1,   242,    -1,   151,   242,   152,
     241,    -1,   266,    25,   266,    26,   266,    -1,   266,    25,
      26,   266,    -1,   298,    -1,    57,   266,    -1,    56,   266,
      -1,    55,   266,    -1,    54,   266,    -1,    53,   266,    -1,
      52,   266,    -1,    51,   266,    -1,   106,   256,    -1,    60,
     266,    -1,   262,    -1,    73,   151,   293,   152,    -1,    61,
     293,   157,    -1,   154,   257,   154,    -1,    12,   266,    -1,
     244,   179,   151,   205,   152,   245,   149,   168,   150,    -1,
      72,   244,   179,   151,   205,   152,   245,   149,   168,   150,
      -1,   112,    -1,    -1,   144,   151,   246,   152,    -1,   246,
       8,   146,    -1,   246,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   151,   248,   208,   152,    -1,
     126,   128,   161,   151,   208,   152,    -1,    -1,   128,   161,
     151,   249,   208,   152,    -1,   250,   133,   136,   151,   208,
     152,    -1,   250,   133,   278,   151,   208,   152,    -1,   280,
     133,   136,   151,   208,   152,    -1,   280,   133,   278,   151,
     208,   152,    -1,   278,   151,   208,   152,    -1,    72,    -1,
     161,    -1,   126,   128,   161,    -1,   128,   161,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   250,    -1,
     253,    -1,   283,   130,   287,   254,    -1,   283,    -1,   254,
     255,    -1,    -1,   130,   287,    -1,    -1,   151,   152,    -1,
     151,   266,   152,    -1,    -1,    99,    -1,   295,    -1,    -1,
     151,   208,   152,    -1,   124,    -1,    92,    -1,    86,    -1,
     122,    -1,   108,    -1,    91,    -1,   141,    -1,   125,    -1,
     111,    -1,   127,    -1,   135,    99,   103,    -1,   135,   103,
      -1,   259,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,    42,   260,    -1,    43,   260,    -1,    73,   151,
     263,   152,    -1,   261,    -1,    61,   263,   157,    -1,    82,
      -1,   250,   133,   136,    -1,   137,    -1,   304,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   259,    -1,
     156,   295,   156,    -1,   135,   295,   103,    -1,    82,    -1,
      -1,   265,   264,    -1,    -1,     8,    -1,   265,     8,   260,
      96,   260,    -1,   265,     8,   260,    -1,   260,    96,   260,
      -1,   260,    -1,   267,    -1,   243,    -1,   270,    -1,   270,
      -1,   270,    -1,    -1,    -1,   282,   271,   130,   287,   277,
     272,   273,    -1,   282,    -1,   273,   274,    -1,    -1,   130,
     287,   277,    -1,   275,    61,   286,   157,    -1,   276,    61,
     286,   157,    -1,   151,   208,   152,    -1,   276,    -1,   275,
      -1,    -1,   284,    -1,   290,   284,    -1,   250,   133,   278,
      -1,   280,   133,   278,    -1,   284,    -1,   281,    61,   286,
     157,    -1,   247,    61,   286,   157,    -1,   283,    -1,   281,
      -1,   247,    -1,   284,    -1,   290,   284,    -1,   279,    -1,
     284,    61,   286,   157,    -1,   284,   149,   266,   150,    -1,
     285,    -1,   146,    -1,   155,   149,   266,   150,    -1,    -1,
     266,    -1,   288,    -1,   278,    -1,   288,    61,   286,   157,
      -1,   288,   149,   266,   150,    -1,   289,    -1,   136,    -1,
     149,   266,   150,    -1,   155,    -1,   290,   155,    -1,   291,
       8,   292,    -1,   292,    -1,   270,    -1,   123,   151,   291,
     152,    -1,    -1,    -1,   294,   264,    -1,   294,     8,   266,
      96,   266,    -1,   294,     8,   266,    -1,   266,    96,   266,
      -1,   266,    -1,   294,     8,   266,    96,    31,   268,    -1,
     294,     8,    31,   268,    -1,   266,    96,    31,   268,    -1,
      31,   268,    -1,   295,   296,    -1,   295,    99,    -1,   296,
      -1,    99,   296,    -1,   146,    -1,   146,    61,   297,   157,
      -1,   146,   130,   136,    -1,    95,   266,   150,    -1,    95,
     137,    61,   266,   157,   150,    -1,    88,   270,   150,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   151,   303,   152,
      -1,    98,   151,   270,   152,    -1,    -1,     7,   299,   266,
      -1,    -1,     6,   300,   266,    -1,     5,   151,   266,   152,
      -1,    -1,     4,   301,   266,    -1,    -1,     3,   302,   266,
      -1,   270,    -1,   303,     8,   270,    -1,   250,   133,   136,
      -1,   280,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   360,   360,   364,   365,   369,   370,   374,   375,   376,
     377,   378,   383,   383,   388,   388,   394,   395,   399,   401,
     405,   408,   411,   414,   420,   426,   435,   436,   440,   441,
     442,   443,   447,   448,   452,   453,   457,   461,   462,   463,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   489,   492,   493,   494,   500,
     501,   505,   506,   510,   511,   515,   520,   521,   525,   529,
     533,   537,   538,   543,   542,   556,   555,   575,   574,   585,
     586,   587,   588,   592,   593,   600,   604,   605,   610,   611,
     616,   619,   623,   624,   628,   629,   633,   634,   638,   639,
     643,   644,   648,   649,   653,   654,   655,   656,   660,   661,
     662,   666,   667,   671,   672,   676,   677,   683,   684,   690,
     691,   695,   696,   700,   701,   705,   706,   707,   708,   709,
     710,   711,   712,   716,   717,   718,   719,   723,   724,   728,
     735,   742,   749,   750,   751,   755,   756,   760,   761,   762,
     766,   767,   768,   769,   773,   774,   778,   779,   780,   782,
     781,   795,   800,   801,   806,   807,   811,   812,   816,   817,
     821,   822,   826,   831,   832,   836,   839,   843,   849,   850,
     854,   855,   859,   860,   864,   865,   871,   872,   876,   877,
     881,   882,   883,   884,   885,   886,   890,   896,   902,   908,
     917,   924,   933,   934,   938,   939,   943,   944,   948,   949,
     953,   954,   958,   959,   960,   964,   965,   969,   973,   974,
     987,   992,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1048,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1067,  1072,
    1076,  1077,  1081,  1082,  1083,  1084,  1088,  1088,  1105,  1108,
    1108,  1125,  1127,  1129,  1131,  1133,  1138,  1139,  1140,  1141,
    1145,  1146,  1147,  1151,  1152,  1156,  1158,  1162,  1163,  1167,
    1171,  1172,  1173,  1177,  1178,  1179,  1183,  1184,  1188,  1197,
    1206,  1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,
    1227,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,
    1240,  1244,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,
    1256,  1257,  1261,  1262,  1266,  1267,  1268,  1269,  1273,  1274,
    1278,  1282,  1286,  1290,  1295,  1290,  1308,  1312,  1313,  1317,
    1321,  1322,  1326,  1330,  1331,  1332,  1336,  1337,  1341,  1342,
    1346,  1350,  1351,  1355,  1365,  1366,  1371,  1372,  1373,  1377,
    1378,  1379,  1383,  1384,  1388,  1389,  1393,  1394,  1398,  1399,
    1400,  1404,  1405,  1409,  1410,  1414,  1415,  1419,  1420,  1421,
    1425,  1426,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1441,  1442,  1443,  1444,  1448,  1449,  1450,  1451,  1452,  1453,
    1457,  1458,  1459,  1463,  1464,  1465,  1465,  1471,  1471,  1477,
    1478,  1478,  1484,  1484,  1492,  1493,  1497,  1498
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
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
  "T_WHITESPACE", "'{'", "'}'", "'('", "')'", "';'", "'`'", "'$'", "'\"'",
  "']'", "$accept", "start", "top_statement_list", "namespace_name",
  "top_statement", "$@1", "$@2", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "additional_catches",
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
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@7", "$@8", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@9", "$@10",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "$@11", "$@12",
  "$@13", "$@14", "isset_variables", "class_constant", 0
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
     553,   502,   612,   504,   506,   507,   511,   512,   513,   514,
     515,   516,   517,   519,   520,   522,   523,   524,   525,   527,
     528,   529,   531,   532,   533,   534,   535,   537,   540,   541,
     542,   543,   544,   545,   547,   548,   550,   551,   552,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   566,   568,
     570,   576,   578,   579,   580,   584,   588,   590,   591,   592,
     594,   595,   596,   598,   606,   611,   613,   615,   616,   617,
     618,   619,   620,   621,   623,   624,   625,   626,   627,   123,
     125,    40,    41,    59,    96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   162,   163,   162,   164,   162,   162,   162,   165,   165,
     166,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   175,   175,   176,   177,
     178,   179,   179,   181,   180,   183,   182,   184,   182,   185,
     185,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   209,   210,   210,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   215,
     214,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   224,   224,   225,   226,   226,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   232,   233,   233,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     245,   245,   246,   246,   246,   246,   248,   247,   247,   249,
     247,   247,   247,   247,   247,   247,   250,   250,   250,   250,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     256,   256,   256,   257,   257,   257,   258,   258,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   266,   266,
     267,   268,   269,   271,   272,   270,   270,   273,   273,   274,
     275,   275,   276,   277,   277,   277,   278,   278,   279,   279,
     280,   281,   281,   282,   282,   282,   283,   283,   283,   284,
     284,   284,   285,   285,   286,   286,   287,   287,   288,   288,
     288,   289,   289,   290,   290,   291,   291,   292,   292,   292,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   295,   295,   295,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   298,   298,   299,   298,   300,   298,   298,
     301,   298,   302,   298,   303,   303,   304,   304
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
       2,     1,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     1,     4,     1,     4,
       1,     4,     3,     5,     3,     4,     4,     5,     0,     5,
       4,     1,     1,     1,     4,     0,     6,     0,     7,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     3,     2,     1,     0,
       9,     3,     1,     3,     1,     3,     0,     1,     1,     2,
       2,     2,     3,     1,     3,     1,     1,     3,     4,     3,
       0,     1,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     3,     1,     2,     1,
       4,     3,     2,     1,     1,     0,     1,     3,     6,     3,
       4,     6,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     3,     3,     2,     9,    10,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     6,     0,
       6,     6,     6,     6,     6,     4,     1,     1,     3,     2,
       1,     3,     2,     1,     1,     4,     1,     2,     0,     2,
       0,     2,     3,     0,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     2,     2,     4,     1,     3,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     3,
       4,     4,     3,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     4,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     1,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     4,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     0,     3,     0,     3,     4,
       0,     3,     0,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   452,   450,     0,   447,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,     0,     0,   306,
       0,     0,    79,   359,     0,   330,     0,     0,   333,   329,
       0,     0,     0,   320,   332,     0,     0,   336,   289,     0,
       0,     0,     0,    51,    85,     0,   331,     0,   328,   335,
       0,   337,     0,     0,     0,     5,   351,     0,     0,    81,
     334,     0,     0,     0,   402,     0,    27,     0,    57,   323,
     413,     0,   353,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   369,    71,   395,     0,   356,   282,
       0,   368,     0,   370,     0,   398,     0,   394,   376,   393,
     396,   401,     0,   272,   352,     0,     0,     0,     0,     0,
     306,     0,     5,    71,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   306,     0,     0,   307,
       0,   237,   372,     0,   235,   281,     0,   425,     0,   362,
     222,     0,     0,   307,   313,   326,   314,     0,   316,   396,
       0,    82,    80,   152,     0,    71,   420,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   419,
       0,    14,     0,   355,    45,   369,     0,   370,     0,     0,
       0,   339,   434,     0,   432,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   324,     0,
     325,     0,     0,     0,     0,   296,     0,    17,    83,    86,
      72,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   404,     0,   404,
       0,   414,   397,   453,   451,     0,   448,   446,     0,     0,
     309,     0,     0,   429,   371,     0,   284,   363,   421,     0,
     309,     0,   138,   217,     0,     0,   397,     0,     0,    49,
       0,     0,    42,     0,    44,     0,     0,     0,     0,    50,
       0,   321,     0,     0,   205,   207,   369,   370,     0,   148,
     370,     0,    48,    60,     0,     0,   454,     0,     0,   417,
       0,   416,   354,     4,    12,    11,   299,    46,    47,     0,
     351,     0,   338,   433,     0,     0,   431,   358,   430,     0,
      59,     0,     0,    66,    68,    22,     0,     0,    16,     0,
       0,    34,    26,    28,    29,    30,   215,   267,   285,     0,
     357,     6,   138,     0,     0,    88,     0,    77,     0,   133,
     405,     0,   456,   388,   386,     0,   240,   242,   241,     0,
       0,   238,   239,   243,   245,   244,   259,   258,   261,   260,
     262,   264,   265,   263,   253,   252,   247,   248,   246,   249,
     250,   251,   266,     0,   219,   233,   232,   231,   230,   229,
     228,   227,   226,   225,   224,   223,     0,     0,   137,   369,
     370,   457,   389,     0,     0,     0,     0,   449,   308,     0,
       0,     0,   424,     0,   423,   308,   388,     0,   389,   411,
       0,   407,   318,   406,   410,     0,     0,   360,     0,   349,
       0,     0,     0,   341,     0,   340,   153,   347,   150,   133,
     283,    25,     0,     0,     0,     0,   202,   444,   322,   204,
       0,     0,     0,     0,   145,    10,     0,     0,   443,   419,
     419,     0,   138,     0,     4,   138,   439,     0,   437,   441,
     440,   442,     0,   436,     0,     0,     0,     0,     0,    21,
      18,     0,     0,   404,     0,   214,   213,   216,   269,   209,
     403,     0,     0,     0,     0,   310,    84,     0,    75,    87,
      90,     0,   133,   135,   136,     0,   123,     0,   134,   392,
     138,   138,   387,   271,     0,     0,   220,   141,   305,     0,
     138,   138,   391,   385,   399,   400,   428,   427,     0,   327,
       0,   315,   404,     0,   344,   345,   367,     0,   362,   360,
       0,   343,     0,     0,     0,     0,   102,     0,    27,   100,
      56,     0,     0,   206,    92,     0,    92,    94,   149,    27,
     115,   455,     0,   415,     0,     0,    15,     0,     0,     0,
     435,   108,   108,    40,     0,    67,    53,    23,    27,   113,
      37,     0,     0,   385,   208,   404,   212,   297,    24,     0,
     312,    89,     0,     0,   155,     0,   290,   133,     0,   125,
       0,     0,   270,   326,     0,   369,   370,     0,     0,   138,
     384,   383,   374,     0,   422,   412,     0,   317,     0,     0,
       0,   348,   363,   361,     0,   342,   350,   151,   290,     0,
       0,     0,   204,     0,     0,    95,     0,   117,   119,   418,
     218,   298,    13,   300,     0,   108,     0,   108,     0,     0,
       0,    31,   211,   379,     0,   311,   155,    91,   186,    73,
       0,     0,     0,   126,     0,   301,   302,   221,   144,   303,
     304,     0,   404,   404,   378,   426,   319,   408,   409,   366,
     365,   346,     0,   103,     0,    38,     0,    93,     0,     0,
     121,     0,     0,    35,   438,     0,     0,     0,     0,     0,
     104,     0,     0,   210,   186,   190,   191,   192,   195,   194,
     193,     0,     0,   185,    78,   154,   158,     0,     0,   184,
     188,     0,     0,     0,    27,     0,   129,     0,   128,   382,
       0,     0,   375,     0,    27,   101,     0,    27,    98,    55,
      54,     0,     0,     0,     0,   120,     0,     0,   111,   112,
      27,   106,   105,     0,   114,    76,     0,     0,   162,   198,
       0,    71,   189,     0,   157,    27,     0,   294,     0,     0,
     130,     0,   127,   380,   381,   377,   364,     0,    27,    96,
      39,     0,     0,    27,     0,     0,   107,    27,   110,     0,
       0,     0,   166,   164,   161,     0,     0,   156,     0,     0,
       0,   295,     0,   291,   287,     0,   132,   288,     0,     0,
       0,   122,    36,     0,   109,    27,   201,   163,     5,     0,
     167,   168,     0,     0,   176,     0,     0,   199,   196,     0,
       0,    74,     0,   292,   131,     0,    99,     0,   116,     0,
     165,   169,   170,   180,     0,   171,     0,     0,   133,   200,
     293,    97,    27,    62,     0,   179,   172,   173,   177,   197,
       0,   118,     0,    58,    61,    63,   178,     0,   159,     0,
      64,   174,     0,     0,    27,   182,   160,     0,     0,     0,
     183,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   504,   343,   212,   213,    84,
     215,   372,   373,    86,   903,   904,   905,   362,   363,   374,
     375,   231,    89,   762,    90,   632,   541,    91,   385,    92,
     387,   538,   539,   674,   596,   820,   779,   590,   316,   613,
     686,   790,   620,   678,   730,   733,   783,   545,   546,   547,
     437,   438,   183,   184,   164,   698,   755,   912,   756,   797,
     834,   859,   860,   861,   862,   896,   863,   864,   865,   894,
     916,   757,   758,   759,   760,   800,   761,   174,   323,   324,
     525,   526,   527,   528,    93,    94,   123,   701,   808,    96,
     382,   505,    97,   548,   155,   156,   571,   657,   178,   219,
     303,    98,   576,   477,    99,   577,   298,   578,   100,   101,
     293,   102,   103,   278,   714,   772,   529,   650,   651,   652,
     104,   105,   106,   107,   108,   109,   110,   111,   391,   462,
     463,   464,   112,   340,   341,   148,   149,   203,   204,   512,
     113,   119,   118,   116,   115,   337,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -727
static const yytype_int16 yypact[] =
{
    -727,    80,  2014,  -727,  -727,  -727,   -84,  -727,  -727,  6607,
    6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,
    6607,   319,   319,  6607,  5094,  6607,   347,   148,   155,   -40,
     -57,  5220,  -727,  -727,    -7,  -727,  5346,   -17,  -727,  -727,
    4940,  6607,    99,   113,  -727,   130,   163,  -727,  -727,   -25,
     112,   215,   248,  -727,  -727,   253,  -727,   260,  -727,  -727,
     -23,  -727,   243,  5472,     9,   262,  -727,   261,  6607,  -727,
    -727,   240,   271,   232,  -727,   273,  -727,  6607,  -727,   173,
     272,   223,   -19,  -727,    14,  -727,  -727,  -727,  -727,  -727,
    -727,   269,   291,  -727,  -727,   404,   380,   323,  -727,  -727,
    1521,  -727,    93,  1372,   306,  -727,   326,   399,   336,  -727,
      66,  -727,   -24,  -727,  -727,  6607,  6607,  6607,  6607,  6607,
     355,   342,  -727,   404,  1846,  -727,  -727,   429,  -727,  -727,
    -727,  -727,  -727,  -727,  -727,  -727,  -727,   352,   243,   -26,
     348,  -727,  -727,   357,  -727,  -727,   319,  7578,   328,   483,
    -727,   364,   243,   367,   366,   361,  -727,   387,   376,    39,
     -24,  -727,  -727,   508,    17,   404,  5094,  -727,  1653,   509,
    -727,  6866,   389,   379,    21,  7703,   319,  5598,  -727,  6607,
    6607,  -727,   282,    23,  -727,   375,   378,  6607,   319,   254,
     243,  -727,   -30,   138,  -727,   383,  7703,   329,   319,  6733,
       4,  -727,    18,   139,  -727,  -727,  6607,  6907,  -727,   319,
     243,   -12,    27,  -727,  6607,  2168,   381,  6948,   108,   384,
     341,  6607,   108,   136,   407,  -727,   408,  -727,   438,   441,
    -727,   104,  6607,   169,  6607,  6607,  6607,  5725,  6607,  6607,
    6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,
    6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,  6607,   347,
    -727,  -727,  -727,  5851,  6607,  6607,  6607,  6607,  6607,  6607,
    6607,  6607,  6607,  6607,  6607,  5977,   238,  6607,   420,  6607,
    6607,   272,    67,  7703,  7703,  6993,  7703,  7703,   400,   243,
      43,   270,   303,  -727,  -727,  6103,  -727,  6229,  -727,   243,
     367,   -22,  5977,  -727,   -22,   391,    40,   970,   410,  -727,
     402,   405,  -727,   970,  -727,   541,    32,   409,  6607,  -727,
     406,  -727,  7034,   411,   557,  7703,   492,   952,  6607,  -727,
    -727,   -25,  -727,  -727,   414,  7076,  -727,    48,   418,  -727,
      52,  -727,   146,  -727,  -727,  -727,  -727,  -727,  -727,   423,
     514,  7328,  -727,  -727,   147,   442,  -727,  -727,  -727,  7119,
    -727,  2322,    53,  -727,  -727,   -11,   443,   232,  -727,  7160,
     431,  -727,  -727,  -727,  -727,  -727,    24,  -727,  -727,  7371,
    -727,  -727,  5977,   567,   237,   466,   237,  -727,   437,    11,
    7703,   432,   439,   444,    40,   -24,  7743,  7780,  1846,  6607,
    7662,  2153,  2306,  2459,  2612,  2765,  2919,  2919,  2919,  2919,
     757,  1192,  1192,  1192,   638,   638,   462,   462,   462,   429,
     429,   429,  -727,    97,  1846,  1846,  1846,  1846,  1846,  1846,
    1846,  1846,  1846,  1846,  1846,  1846,   319,   446,   583,    56,
      31,   445,   448,   436,   391,   449,  7412,  -727,   152,   439,
     445,   319,  7703,   319,  7619,   367,  -727,   451,  -727,  -727,
    6607,  -727,  -727,    49,  -727,   970,   970,   970,   453,  -727,
     484,   243,   195,   228,   461,  -727,  -727,  -727,   600,    11,
    -727,  -727,   970,   478,  4170,  6607,  7703,  -727,  -727,  6607,
    6607,   319,    10,  7454,  -727,  -727,  4324,   319,  -727,   254,
     254,   604,  5977,  1706,  -727,  5977,  -727,  6607,  -727,  -727,
    -727,  -727,   464,  -727,    12,   543,   319,   470,   489,  -727,
    -727,  4478,   475,  6607,   391,   498,    34,  -727,  -727,  -727,
    -727,   477,   970,   503,   243,   367,  -727,   237,  -727,   624,
    -727,   487,    11,  -727,  -727,   481,   629,    44,  -727,  -727,
    5977,  5977,    40,  2000,  6607,   347,  -727,  -727,  -727,  6355,
    5977,  5977,  -727,   488,  -727,  -727,  -727,  -727,  6481,  -727,
    7495,   517,  6607,  6607,  -727,  -727,   542,   496,   636,   970,
     243,   229,   546,   529,   970,   515,  -727,   656,  -727,  -727,
    -727,  7202,   518,  7703,   576,   319,   576,  -727,  -727,  -727,
    -727,  -727,    57,  -727,  6607,   521,  -727,  1860,   525,  1297,
    -727,   544,   547,  -727,   545,  -727,  -727,  -727,  -727,  -727,
    -727,   549,   548,   488,  -727,  6607,   498,  -727,  -727,   243,
     367,   624,   550,   237,  -727,   552,   562,   325,   561,   696,
     558,   560,  2000,   361,   319,    58,   317,   563,   571,  5977,
     652,   658,  -727,   319,  7703,  -727,   391,  -727,   569,  7536,
     970,  -727,   970,  -727,   575,   239,  -727,  -727,   562,   970,
    2476,   579,  6607,    10,   577,  -727,   581,  4016,   137,  -727,
    1846,  -727,  -727,  -727,   578,  -727,   154,  -727,     3,   237,
    2630,  -727,  -727,  -727,   582,   367,  -727,  -727,   623,  -727,
     584,   587,    45,   725,   970,  -727,  -727,  -727,  -727,  -727,
    -727,   588,  6607,  6607,  -727,  -727,  -727,  -727,  -727,  -727,
     646,  -727,   594,  -727,   592,  -727,   595,  -727,  4632,  4632,
     256,   597,  4940,  -727,  -727,   159,  6607,     6,   593,    25,
    -727,   619,   613,  -727,   690,  -727,  -727,  -727,  -727,  -727,
    -727,   633,   237,  -727,  -727,  -727,  -727,   625,   355,   447,
    -727,    28,   627,    46,  -727,   628,   764,   970,  -727,  -727,
     626,   632,   498,   970,  -727,  -727,  4786,  -727,  -727,  -727,
    -727,   631,   758,   719,  6607,  -727,   637,  1579,  -727,  -727,
    -727,  -727,  -727,   634,  -727,  -727,   778,    13,  -727,   792,
      29,   404,  -727,   673,  -727,  -727,   664,  -727,    60,  2784,
     798,   970,  -727,  -727,  -727,  -727,  -727,  2938,  -727,  -727,
    -727,  3092,  6607,  -727,   659,  7245,  -727,  -727,  4016,   665,
     970,   237,   318,  -727,  -727,   970,   667,  -727,   680,   804,
    3246,  -727,    47,  -727,  -727,   970,  -727,  -727,  3400,   668,
    7286,  4016,  -727,  4940,  4016,  -727,  -727,  -727,   744,   672,
     318,  -727,   671,   751,   711,   678,   700,  -727,   823,   686,
     970,  -727,   695,  -727,  -727,   691,  -727,   817,  -727,  3554,
    -727,  -727,  -727,   683,   237,  -727,   712,   970,    11,  -727,
    -727,  -727,  -727,   768,   714,   717,   846,  -727,  -727,  -727,
     704,  4016,   707,  -727,   768,  -727,  -727,   237,  -727,   237,
    -727,  -727,   174,   713,  -727,  -727,  -727,   708,  3708,   715,
    -727,  -727,  3862,  -727
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -727,  -727,  -326,    -3,  -727,  -727,  -727,  -727,   494,  -727,
    -203,  -727,     2,  -727,  -727,  -727,   -42,  -727,   349,     0,
       1,  -122,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,
    -727,  -727,   331,   267,   193,  -727,   142,  -727,  -727,  -727,
    -543,    83,  -727,  -727,  -727,  -727,  -727,  -471,  -727,   235,
    -291,  -727,  -727,   551,  -727,   177,  -727,  -727,  -727,  -727,
    -727,  -727,  -727,    15,  -727,  -727,  -727,  -727,  -727,  -727,
    -727,  -727,  -727,  -727,  -726,  -727,  -727,  -727,  -475,  -727,
     350,  -727,  -727,  -727,   797,    95,    -2,   211,  -727,  -727,
    -727,  -727,   119,  -360,  -239,  -727,  -727,  -727,  -727,  -727,
     244,   538,   255,  -727,  -727,   301,   305,  -727,   922,   706,
    -423,   373,  1082,  -727,  -727,  -727,  -515,  -727,  -727,   266,
    -218,  -727,   225,  -727,  -727,   -20,     8,  -727,  -270,  -428,
    -727,  -727,   -14,   392,   390,   727,  -727,   141,   440,  -727,
    -727,  -727,  -727,  -727,  -727,  -727,  -727
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -391
static const yytype_int16 yytable[] =
{
      95,   288,    87,    88,    85,   361,   158,   443,   585,   445,
     624,   457,   160,   557,   592,   393,   563,   503,   139,   139,
     422,   831,   226,   153,   536,   308,   540,   165,   566,   318,
     567,   331,   788,   802,   159,   367,   803,   836,   611,  -140,
     483,   595,   173,   310,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   497,   192,   442,   193,
     500,   516,   366,   518,  -139,   500,  -142,   117,   842,   688,
     211,   635,    48,   393,   442,   638,   765,   806,   872,   354,
       3,   736,   136,   456,   543,   523,   458,   461,   544,  -372,
    -372,   531,   198,   737,   166,   625,   623,   198,   224,   199,
     279,   279,   224,   736,   199,   190,   163,   352,   200,   224,
     572,   624,   201,   122,  -307,   737,   224,   224,   165,   344,
     282,   181,    74,   345,    74,   225,   191,   279,   279,   169,
     182,   281,   225,    80,   172,   290,   137,   533,   138,   534,
     140,   140,   735,   139,   739,   154,   122,   122,   355,   300,
     202,   261,   262,   740,   524,   202,    74,   895,   195,   789,
     555,   612,   832,  -124,   524,    80,   833,   227,   306,   136,
     309,   224,  -390,   139,   319,   792,   332,   540,   607,   139,
     368,   804,   837,  -140,   484,   139,   139,   342,   280,   280,
     639,   766,   807,   873,   346,   139,   198,   726,   573,  -390,
     498,   731,   732,   199,   501,   517,   139,   365,  -139,   679,
    -142,   605,   843,    95,   608,   280,   280,  -386,  -387,   395,
     220,   708,   223,   137,   198,   138,   461,   198,   716,   161,
     715,   199,   736,   122,   199,   356,   162,   736,   356,   158,
     388,   394,   357,    74,   737,   160,   143,   143,   185,   737,
     176,   157,    80,   622,   202,   389,   153,   815,   738,   640,
     641,   198,   395,   786,   177,   140,   224,   159,   199,   647,
     648,  -309,   218,   697,   224,   326,   509,   395,   395,  -308,
     224,   179,   202,   510,   394,   202,   448,   395,   205,   346,
     395,   395,   380,   511,   582,   140,   455,   502,   201,   394,
     394,   140,   658,   502,   473,   392,   461,   140,   140,   394,
     473,   198,   394,   394,   180,    74,   643,   140,   199,   202,
     781,   782,   222,   914,    80,  -143,   136,   915,   140,   741,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   136,   694,   224,   224,   711,    95,
     210,  -307,  -309,   533,   211,   534,   186,   224,   122,   202,
     439,   143,  -308,   122,   441,  -372,  -372,   338,   154,   122,
     137,   535,   138,   535,    74,   670,   535,  -372,  -372,   208,
     122,   136,   798,    80,   141,   144,   677,   439,   543,   187,
      74,   143,   544,   552,   188,   228,   449,   143,   137,    80,
     138,   189,   206,   143,   143,   690,    74,   900,   122,   136,
     139,   221,   209,   143,   214,    80,   474,   229,    74,   198,
     395,   328,   474,   139,   143,   230,   199,    80,   461,   450,
     356,   232,   770,   771,   533,   137,   534,   138,   139,    74,
     139,   533,   394,   534,   858,   122,   233,   275,    80,   276,
     277,   122,   473,   473,   473,    74,  -373,    48,   581,  -143,
     190,   857,   866,   151,    80,   152,   535,   439,   259,   473,
     289,   291,   348,   122,   157,   296,   589,   202,   139,   139,
     292,   297,   299,    74,   139,   224,   139,   139,   600,   301,
     866,    95,    80,    87,    88,    85,   305,   256,   257,   258,
     395,   259,   302,   139,   745,   746,   747,   748,   749,   750,
     304,   307,   313,   619,   897,   315,   317,   459,   333,   473,
     334,   630,   394,   376,   535,   158,   347,    74,   378,   535,
     460,   160,   140,   381,   383,   384,    80,   911,   386,   913,
     444,   389,   153,   479,   482,   140,   478,   480,   487,  -187,
     485,   809,   476,   159,   489,   490,   491,   495,   481,   499,
     140,   817,   140,   506,   821,   507,   473,   665,   513,   519,
     532,   473,   522,   537,   474,   474,   474,   828,   542,   549,
     550,   559,   139,   562,   583,   551,   560,   439,   558,   561,
     439,   474,   840,   569,   579,    95,   564,    87,    88,    85,
     140,   140,   580,   584,   587,   848,   140,   604,   140,   140,
     851,   610,   614,   616,   854,   617,   695,   621,   524,   627,
     535,   629,   633,   636,   535,   140,   634,   637,   660,   649,
     353,   139,   395,   358,   662,   439,   439,   656,   143,   352,
     139,   474,   879,   661,   645,   439,   439,   473,   353,   473,
     358,   143,   353,   358,   394,   666,   473,   668,    95,   669,
     139,   672,   673,   681,   154,    95,   143,   683,   143,   838,
     253,   254,   255,   256,   257,   258,   535,   259,    95,   901,
     745,   746,   747,   748,   749,   750,   689,   685,   474,   696,
     687,   473,   691,   474,   699,   692,   700,   703,   751,   704,
     705,   918,   706,   712,   140,   709,   143,   143,   922,   713,
     574,   575,   143,   710,   143,   143,   717,   721,   734,   728,
     778,   778,   725,   729,   785,   763,   764,   586,   767,   743,
     769,   143,   773,   774,   439,   775,   791,   776,   784,   535,
     745,   746,   747,   748,   749,   750,   801,   745,   746,   747,
     748,   749,   750,   140,   473,   793,   794,   752,   753,   796,
     473,   799,   140,   754,   810,   751,   805,   811,   819,   474,
     157,   474,   822,   813,   823,   824,   829,   628,   474,   814,
     826,   830,   140,  -391,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   835,   259,    95,   473,   839,
     841,   845,   852,   868,   855,    95,   869,   870,  -175,    95,
     143,   876,   880,   474,   882,   883,    95,   473,   535,   535,
     884,   885,   473,   886,   752,   753,   887,   888,    95,   667,
     795,   890,   473,   892,   891,   475,    95,   902,   898,    95,
     906,   475,    95,  -181,   907,   878,   908,   535,   909,   917,
     919,   520,   910,   676,   921,   615,   727,   473,   631,   143,
     827,   780,   702,   744,   216,   881,   626,    95,   143,   722,
     664,   535,   494,   663,   473,   535,   474,   707,   329,   693,
     603,   602,   474,   311,     0,     0,     0,     0,   143,    95,
       0,     0,     0,     0,   535,     0,   535,     0,     0,     0,
       0,     0,     0,     0,     0,   719,    95,   720,     0,     0,
      95,     0,     0,     0,   723,     0,     0,     0,     0,     0,
     474,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,     0,   145,   147,   150,     0,   474,
       0,     0,     0,   168,   474,     0,     0,     0,   171,   768,
       0,     0,     0,   175,   474,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,   474,
     207,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,     0,   475,   475,   475,   474,     0,     0,     0,
    -372,  -372,   465,   466,     0,     0,     0,     0,     0,     0,
     475,     0,   812,     0,     0,     0,   492,     0,   816,     0,
       0,   467,     0,     0,     0,     0,     0,   283,   284,   285,
     286,   287,   136,   468,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,   846,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    47,     0,     0,     0,   856,     0,     0,   147,     0,
     867,     0,    56,     0,    58,    59,   470,    61,   471,   322,
     874,   325,   196,   142,   142,   472,   122,     0,     0,   335,
       0,    70,     0,     0,     0,     0,     0,   475,     0,     0,
       0,   351,   475,     0,     0,   889,     0,     0,   359,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,   899,   379,     0,   197,     0,     0,     0,     0,
       0,     0,     0,     0,   390,     0,   396,   397,   398,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,     0,     0,     0,     0,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   196,   475,   390,
     475,   390,   446,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,     0,   454,
       0,     0,     0,     0,   196,     0,     0,     0,   294,  -391,
    -391,  -391,   251,   252,   253,   254,   255,   256,   257,   258,
     486,   259,   475,     0,     0,     0,     0,     0,     0,     0,
     493,     0,     0,     0,     0,     0,     0,     0,   320,     0,
       0,     0,   327,     0,   330,     0,     0,     0,     0,     0,
     336,   339,     0,     0,     0,     0,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   475,   234,   235,   236,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   553,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,   570,   475,   440,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   591,   475,     0,
       0,   325,   593,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   475,     0,   196,     0,   609,
    -372,  -372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   390,     0,     0,     0,     0,
       0,     0,     0,     0,   684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     0,     0,     0,
       0,     0,   196,   196,     0,     0,   642,     0,     0,     0,
       0,   196,   196,   196,     0,     0,     0,     0,     0,     0,
     654,     0,     0,     0,   390,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,   680,     0,     0,     0,
     234,   235,   236,   294,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   390,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   196,     0,   594,   597,     0,     0,     0,     0,   601,
       0,   339,   339,     0,   440,     0,     0,   440,   234,   235,
     236,     0,     0,     0,   325,     0,     0,     0,   364,     0,
       0,     0,     0,     0,   237,   788,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,   440,   440,   390,   390,     0,     0,     0,     0,
       0,   646,   440,   440,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   787,     0,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   260,     0,     0,   675,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,   825,     0,     0,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,     0,
       0,   440,   789,     0,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,   850,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,   597,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,    34,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,   312,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,   606,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,   237,     9,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,    34,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
     682,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,    34,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,     0,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   370,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   121,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,   371,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,   370,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,   121,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,    74,    75,
       0,    76,   515,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,   724,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   370,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   121,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,   742,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   370,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   370,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     121,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,   844,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,  -391,  -391,  -391,  -391,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   370,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   121,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,   847,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,   849,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,   370,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,   121,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   370,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   121,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,   871,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,   875,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,   370,    52,     0,    53,     0,
      54,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,   370,
      52,     0,    53,     0,    54,    55,    56,    57,    58,    59,
     121,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
      74,    75,     0,    76,   893,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,     0,     0,    31,     0,     0,     0,     0,    32,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,   370,    52,     0,    53,     0,    54,    55,
      56,    57,    58,    59,   121,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,    74,    75,     0,    76,   920,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,     0,     0,    31,     0,
       0,     0,     0,    32,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,   370,    52,     0,
      53,     0,    54,    55,    56,    57,    58,    59,   121,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,    74,    75,
       0,    76,   923,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
       0,     0,    31,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,   370,    52,     0,    53,     0,    54,    55,    56,    57,
      58,    59,   121,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   588,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    52,     0,    53,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     599,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
      31,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      52,     0,    53,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    70,    71,    72,     0,     0,
      74,    75,     0,    76,     0,    77,     0,    78,    79,    80,
      81,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   618,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,    31,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,     0,    52,     0,    53,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,     0,    70,
      71,    72,     0,     0,    74,    75,     0,    76,     0,    77,
       0,    78,    79,    80,    81,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   777,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,     0,    52,     0,
      53,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,     0,    70,    71,    72,     0,     0,    74,    75,
       0,    76,     0,    77,     0,    78,    79,    80,    81,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   818,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,    31,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,     0,    52,     0,    53,     0,     0,    55,    56,    57,
      58,    59,   121,    61,    62,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,     0,    70,    71,    72,
       0,     0,    74,    75,     0,    76,     0,    77,     0,    78,
      79,    80,    81,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    52,     0,    53,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,     0,     0,    74,    75,     0,    76,
       0,    77,     0,    78,    79,    80,    81,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     122,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     4,
       5,     6,     7,     8,     0,    64,   122,    66,     9,     0,
       0,    70,     0,     0,     0,     0,    74,     0,     0,     0,
       0,    77,     0,   167,    79,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   120,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   121,    61,    62,     4,     5,     6,     7,     8,
       0,    64,   122,    66,     9,     0,     0,    70,     0,     0,
       0,     0,    74,     0,     0,     0,     0,    77,     0,   170,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   122,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    77,     0,   194,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     0,     4,     5,
       6,     7,     8,    64,   122,    66,     0,     9,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
     321,   399,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     4,     5,     6,     7,     8,     0,
      64,   122,    66,     9,     0,     0,    70,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    77,     0,     0,    79,
      80,    81,   423,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       4,     5,     6,     7,     8,     0,    64,   122,    66,     9,
       0,     0,    70,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    77,     0,     0,    79,    80,    81,   436,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   122,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
       0,    79,    80,    81,   451,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     4,     5,     6,     7,     8,     0,    64,   122,
      66,     9,     0,     0,    70,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    77,     0,     0,    79,    80,    81,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     4,     5,
       6,     7,     8,     0,    64,   122,    66,     9,     0,     0,
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,     0,    79,    80,    81,   644,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     4,     5,     6,     7,     8,     0,
      64,   122,    66,     9,     0,     0,    70,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    77,     0,     0,    79,
      80,    81,   653,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       4,     5,     6,     7,     8,     0,    64,   122,    66,     9,
       0,     0,    70,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    77,     0,     0,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   122,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
       0,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,     0,    64,   122,
     350,     0,     0,     0,    70,   234,   235,   236,     0,    74,
       0,     0,     0,     0,    77,     0,     0,    79,    80,    81,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   314,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     360,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   447,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   488,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   496,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   514,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   521,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   671,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   853,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   877,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   508,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   530,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   565,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   598,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   655,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,   234,   235,   236,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   718,   237,   554,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,   568,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   236,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,   123,     2,     2,     2,   208,    26,   277,   479,   279,
     525,   302,    26,   436,   489,   233,   444,   343,    21,    22,
     259,     8,     8,    26,   384,     8,   386,    29,   451,     8,
     453,     8,    26,   759,    26,     8,     8,     8,    26,     8,
       8,    31,    40,   165,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     8,    60,   276,    62,
       8,     8,    74,    74,     8,     8,     8,   151,     8,   612,
      73,   542,   112,   291,   292,    31,    31,    31,    31,    61,
       0,    78,    72,   301,    73,    61,   304,   305,    77,    58,
      59,   382,    88,    90,   151,    61,   524,    88,   128,    95,
      61,    61,   128,    78,    95,   128,   146,   103,    99,   128,
      61,   626,   103,   136,   133,    90,   128,   128,   120,   149,
     112,   146,   146,   153,   146,   151,   149,    61,    61,   136,
     155,   155,   151,   155,   151,   138,   126,   126,   128,   128,
      21,    22,   685,   146,   687,    26,   136,   136,   130,   152,
     146,    58,    59,   150,   130,   146,   146,   883,    63,   153,
      63,   149,   149,   152,   130,   155,   153,   153,   160,    72,
     153,   128,   133,   176,   153,   150,   153,   537,   504,   182,
     153,   153,   153,   152,   152,   188,   189,   190,   149,   149,
     146,   146,   146,   146,   151,   198,    88,   672,   149,   133,
     152,    64,    65,    95,   152,   152,   209,   210,   152,   152,
     152,   502,   152,   215,   505,   149,   149,   151,   151,   233,
      79,   644,    81,   126,    88,   128,   444,    88,   656,    81,
     653,    95,    78,   136,    95,    99,    81,    78,    99,   259,
     136,   233,   103,   146,    90,   259,    21,    22,   136,    90,
     151,    26,   155,   523,   146,   151,   259,   772,   104,   550,
     551,    88,   276,   104,   151,   146,   128,   259,    95,   560,
     561,   133,    99,   633,   128,   180,   129,   291,   292,   133,
     128,   151,   146,   136,   276,   146,   289,   301,    26,   151,
     304,   305,   156,   146,    99,   176,   299,   151,   103,   291,
     292,   182,   572,   151,   307,   136,   524,   188,   189,   301,
     313,    88,   304,   305,   151,   146,   555,   198,    95,   146,
      64,    65,    99,   149,   155,     8,    72,   153,   209,   689,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    72,   625,   128,   128,   649,   361,
     128,   133,   133,   126,   367,   128,   151,   128,   136,   146,
     275,   146,   133,   136,   136,    58,    59,   123,   259,   136,
     126,   384,   128,   386,   146,   588,   389,    58,    59,   149,
     136,    72,   752,   155,    21,    22,   599,   302,    73,   151,
     146,   176,    77,   395,   151,   136,   136,   182,   126,   155,
     128,   151,   151,   188,   189,   618,   146,   888,   136,    72,
     423,   149,   151,   198,   151,   155,   307,   136,   146,    88,
     444,   149,   313,   436,   209,    31,    95,   155,   656,   136,
      99,    61,   712,   713,   126,   126,   128,   128,   451,   146,
     453,   126,   444,   128,   136,   136,   133,   151,   155,   133,
      61,   136,   465,   466,   467,   146,   130,   112,   471,   152,
     128,   831,   832,   126,   155,   128,   479,   382,    49,   482,
     128,   133,   153,   136,   259,   157,   484,   146,   491,   492,
     133,     8,   128,   146,   497,   128,   499,   500,   496,   133,
     860,   503,   155,   503,   503,   503,   130,    45,    46,    47,
     524,    49,   151,   516,    67,    68,    69,    70,    71,    72,
     133,    13,    13,   521,   884,   136,   147,   136,   153,   532,
     152,   534,   524,   152,   537,   555,   153,   146,   154,   542,
     149,   555,   423,   136,   136,   107,   155,   907,   107,   909,
     130,   151,   555,   151,    13,   436,   146,   152,   152,   112,
     151,   764,   307,   555,   153,     8,    74,   153,   313,   151,
     451,   774,   453,   150,   777,    61,   579,   580,   136,   136,
      13,   584,   151,   117,   465,   466,   467,   790,   151,   157,
     151,     8,   595,   157,   133,   151,   151,   502,   152,   151,
     505,   482,   805,   152,   151,   607,   157,   607,   607,   607,
     491,   492,   128,    13,   136,   818,   497,    13,   499,   500,
     823,   157,    79,   153,   827,   136,   629,   152,   130,   152,
     633,   128,     8,   152,   637,   516,   149,     8,    96,   151,
     200,   644,   656,   203,     8,   550,   551,   130,   423,   103,
     653,   532,   855,   157,   559,   560,   561,   660,   218,   662,
     220,   436,   222,   223,   656,   136,   669,   152,   670,    13,
     673,   153,    96,   152,   555,   677,   451,   152,   453,   801,
      42,    43,    44,    45,    46,    47,   689,    49,   690,   892,
      67,    68,    69,    70,    71,    72,   151,   153,   579,   149,
     153,   704,   153,   584,   152,   157,   144,   146,    85,    13,
     152,   914,   152,    61,   595,   152,   491,   492,   921,    61,
     465,   466,   497,   152,   499,   500,   157,   152,   150,   152,
     728,   729,   153,   152,   732,   151,   149,   482,    13,   157,
     152,   516,    96,   149,   649,   153,   153,   152,   151,   752,
      67,    68,    69,    70,    71,    72,   758,    67,    68,    69,
      70,    71,    72,   644,   767,   146,   153,   144,   145,   136,
     773,   146,   653,   150,   146,    85,   149,    13,   776,   660,
     555,   662,   151,   157,    26,    66,   152,   532,   669,   157,
     153,    13,   673,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    13,    49,   809,   811,   136,
     146,    13,   153,   146,   149,   817,   136,    13,    74,   821,
     595,   153,   150,   704,   153,    74,   828,   830,   831,   832,
     119,   153,   835,   133,   144,   145,    13,   151,   840,   584,
     150,   146,   845,    26,   153,   307,   848,    79,   136,   851,
     136,   313,   854,   136,     8,   853,   152,   860,   151,   146,
     152,   367,   904,   596,   149,   516,   673,   870,   537,   644,
     787,   729,   637,   696,    77,   860,   526,   879,   653,   668,
     579,   884,   331,   578,   887,   888,   767,   643,   182,   623,
     500,   499,   773,   166,    -1,    -1,    -1,    -1,   673,   901,
      -1,    -1,    -1,    -1,   907,    -1,   909,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   660,   918,   662,    -1,    -1,
     922,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,    -1,
     811,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,   830,
      -1,    -1,    -1,    31,   835,    -1,    -1,    -1,    36,   704,
      -1,    -1,    -1,    41,   845,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,   870,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,   465,   466,   467,   887,    -1,    -1,    -1,
      58,    59,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
     482,    -1,   767,    -1,    -1,    -1,    74,    -1,   773,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,   811,    -1,    -1,    -1,
     532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   830,    -1,    -1,   166,    -1,
     835,    -1,   122,    -1,   124,   125,   126,   127,   128,   177,
     845,   179,   180,    21,    22,   135,   136,    -1,    -1,   187,
      -1,   141,    -1,    -1,    -1,    -1,    -1,   579,    -1,    -1,
      -1,   199,   584,    -1,    -1,   870,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,   887,   221,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   660,   277,
     662,   279,   280,    -1,    -1,    -1,    -1,   669,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,   297,
      -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,   146,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     318,    49,   704,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,   180,    -1,   182,    -1,    -1,    -1,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   382,   767,     9,    10,    11,    -1,
      -1,   773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,   811,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,
      -1,    -1,    -1,   835,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   460,   845,   302,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,   870,    -1,
      -1,   489,   490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   502,   887,    -1,   505,    -1,   507,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   550,   551,    -1,    -1,   554,    -1,    -1,    -1,
      -1,   559,   560,   561,    -1,    -1,    -1,    -1,    -1,    -1,
     568,    -1,    -1,    -1,   572,   573,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   604,    -1,    -1,    -1,
       9,    10,    11,   451,    -1,   453,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   625,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,   649,    -1,   491,   492,    -1,    -1,    -1,    -1,   497,
      -1,   499,   500,    -1,   502,    -1,    -1,   505,     9,    10,
      11,    -1,    -1,    -1,   672,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,   550,   551,   712,   713,    -1,    -1,    -1,    -1,
      -1,   559,   560,   561,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   736,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   595,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,   784,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   644,    -1,    -1,    -1,
      -1,   649,   153,    -1,    -1,   653,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   822,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,   673,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,   153,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    25,    12,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,     3,     4,
       5,     6,     7,   135,   136,   137,    -1,    12,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
     152,    26,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,   136,
     137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,    -1,    -1,    -1,   141,     9,    10,    11,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    70,    71,    72,
      73,    76,    81,    82,    85,    86,    87,    89,    91,    92,
      93,    97,    98,   106,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   118,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   146,   147,   149,   151,   153,   154,
     155,   156,   161,   162,   167,   170,   171,   177,   178,   180,
     182,   185,   187,   242,   243,   244,   247,   250,   259,   262,
     266,   267,   269,   270,   278,   279,   280,   281,   282,   283,
     284,   285,   290,   298,   304,   302,   301,   151,   300,   299,
      72,   126,   136,   244,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    72,   126,   128,   161,
     250,   269,   270,   280,   269,   266,    31,   266,   293,   294,
     266,   126,   128,   161,   250,   252,   253,   280,   283,   284,
     290,    81,    81,   146,   212,   244,   151,   153,   266,   136,
     153,   266,   151,   170,   235,   266,   151,   151,   256,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   266,   270,    88,    95,
      99,   103,   146,   295,   296,    26,   151,   266,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   266,    99,   257,
     295,   149,    99,   295,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   271,    61,
     149,   155,   284,   266,   266,   266,   266,   266,   179,   128,
     161,   133,   133,   268,   270,    96,   157,     8,   264,   128,
     161,   133,   151,   258,   133,   130,   284,    13,     8,   153,
     179,   293,   153,    13,   153,   136,   196,   147,     8,   153,
     270,   152,   266,   236,   237,   266,   243,   270,   149,   267,
     270,     8,   153,   153,   152,   266,   270,   303,   123,   270,
     291,   292,   161,   164,   149,   153,   151,   153,   153,   270,
     137,   266,   103,   296,    61,   130,    99,   103,   296,   266,
     153,   168,   175,   176,   270,   161,    74,     8,   153,   266,
     115,   150,   169,   170,   177,   178,   152,   152,   154,   266,
     156,   136,   248,   136,   107,   186,   107,   188,   136,   151,
     266,   286,   136,   278,   284,   290,   266,   266,   266,    26,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   252,    31,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    31,   208,   209,   243,
     270,   136,   278,   286,   130,   286,   266,   152,   161,   136,
     136,    31,   266,    31,   266,   161,   278,   208,   278,   136,
     149,   278,   287,   288,   289,    42,    43,    61,    73,    82,
     126,   128,   135,   161,   250,   259,   260,   261,   146,   151,
     152,   260,    13,     8,   152,   151,   266,   152,   152,   153,
       8,    74,    74,   266,   211,   153,   152,     8,   152,   151,
       8,   152,   151,   160,   163,   249,   150,    61,   150,   129,
     136,   146,   297,   136,   152,   150,     8,   152,    74,   136,
     166,   152,   151,    61,   130,   238,   239,   240,   241,   274,
     150,   208,    13,   126,   128,   161,   251,   117,   189,   190,
     251,   184,   151,    73,    77,   205,   206,   207,   251,   157,
     151,   151,   284,   266,    26,    63,   270,   268,   152,     8,
     151,   151,   157,   287,   157,   150,   268,   268,    96,   152,
     266,   254,    61,   149,   260,   260,   260,   263,   265,   151,
     128,   161,    99,   133,    13,   205,   260,   136,    26,   170,
     195,   266,   236,   266,   270,    31,   192,   270,   150,    26,
     170,   270,   291,   292,    13,   208,   150,   160,   208,   266,
     157,    26,   149,   197,    79,   176,   153,   136,    26,   170,
     200,   152,   286,   287,   274,    61,   238,   152,   260,   128,
     161,   190,   183,     8,   149,   205,   152,     8,    31,   146,
     208,   208,   266,   252,    31,   243,   270,   208,   208,   151,
     275,   276,   277,    31,   266,   150,   130,   255,   286,   266,
      96,   157,     8,   264,   263,   161,   136,   260,   152,    13,
     168,   152,   153,    96,   191,   270,   191,   168,   201,   152,
     266,   152,   150,   152,   157,   153,   198,   153,   198,   151,
     168,   153,   157,   277,   286,   161,   149,   251,   213,   152,
     144,   245,   207,   146,    13,   152,   152,   258,   268,   152,
     152,   208,    61,    61,   272,   268,   287,   157,   150,   260,
     260,   152,   245,   260,   100,   153,   236,   192,   152,   152,
     202,    64,    65,   203,   150,   198,    78,    90,   104,   198,
     150,   251,   105,   157,   213,    67,    68,    69,    70,    71,
      72,    85,   144,   145,   150,   214,   216,   229,   230,   231,
     232,   234,   181,   151,   149,    31,   146,    13,   260,   152,
     286,   286,   273,    96,   149,   153,   152,    26,   170,   194,
     194,    64,    65,   204,   151,   170,   104,   266,    26,   153,
     199,   153,   150,   146,   153,   150,   136,   217,   251,   146,
     233,   244,   232,     8,   153,   149,    31,   146,   246,   168,
     146,    13,   260,   157,   157,   274,   260,   168,    26,   170,
     193,   168,   151,    26,    66,   266,   153,   199,   168,   152,
      13,     8,   149,   153,   218,    13,     8,   153,   179,   136,
     168,   146,     8,   152,   150,    13,   260,   150,   168,   102,
     266,   168,   153,   152,   168,   149,   260,   251,   136,   219,
     220,   221,   222,   224,   225,   226,   251,   260,   146,   136,
      13,   150,    31,   146,   260,   101,   153,   152,   170,   168,
     150,   221,   153,    74,   119,   153,   133,    13,   151,   260,
     146,   153,    26,   150,   227,   232,   223,   251,   136,   260,
     205,   168,    79,   172,   173,   174,   136,     8,   152,   151,
     174,   251,   215,   251,   149,   153,   228,   146,   168,   152,
     150,   149,   168,   150
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
int yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 360 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 364 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 365 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 369 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 370 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AppendName((yyvsp[(3) - (3)].lexeme)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 374 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 375 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 376 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 377 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 378 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 383 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 384 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 388 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetDeclaredNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 389 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 394 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 395 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 400 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 401 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 405 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 408 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 411 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 414 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 420 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 426 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 435 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 436 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 443 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 447 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 448 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 452 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 453 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 457 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 461 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 462 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 471 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 472 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 473 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 474 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 475 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 476 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 477 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 478 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 479 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 480 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 481 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 482 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 483 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 484 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 485 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 488 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 491 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 492 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 493 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 497 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 500 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 501 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 505 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 506 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 510 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 511 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 516 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 520 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 521 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 525 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 537 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isReference) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 538 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isReference) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 543 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 544 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction((yyvsp[(3) - (10)].lexeme), (yyvsp[(2) - (10)].isReference), (yyvsp[(1) - (10)].lexeme), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].token), (yyvsp[(10) - (10)].token),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(9) - (10)].statementList);
											  (yyval.statementList)->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 556 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 557 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);
											  
											  /* at the end of a class, see if any assigned properties were not explicitly
											   * defined and it so make them as defined
											   *  very important to use $$ as we want the returned to list to be modified
											   */
											  observers.DeclareAssignedProperties((yyval.statementList));
											  
											  /*
											   * parse out property and method PHP docs
											   */
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 575 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 576 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 585 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 586 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 587 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, true); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 588 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 592 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 594 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
										;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 600 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 604 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 606 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 610 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 612 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 616 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
															;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 619 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 623 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 624 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 628 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 629 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 633 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 634 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 638 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 639 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 643 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 644 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 648 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 649 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 653 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 654 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 655 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 656 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 660 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 661 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 662 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 666 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 667 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 671 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 672 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 676 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 677 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 683 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 684 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 690 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 691 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 695 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 696 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 700 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 701 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = 0; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 705 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 706 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 707 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 708 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 709 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 710 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 711 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 712 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 716 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 717 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 718 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 719 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("callable")); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 723 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 724 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) =  0; ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 728 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 735 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  } 
																			;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 742 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 749 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 750 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 751 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 760 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 761 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 762 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 766 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 767 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 768 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 769 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 773 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 774 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 778 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 779 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 780 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 782 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 783 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetDeclaredNamespace()); 
															  AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushFront(memberSymbol);
															  (yyval.statementList)->PushAll(&((yyvsp[(9) - (9)].classMemberSymbol)->MethodStatements));
															  observers.SetCurrentMemberName(NULL);
															;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 796 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList)->PushFront((yyvsp[(2) - (3)].traitUse)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 800 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitUse), pelet::TraitUseClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 802 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitUse) = (yyvsp[(1) - (3)].traitUse)->AppendUse((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 806 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 807 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 811 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 812 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 816 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 817 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->Push((yyvsp[(2) - (2)].statement)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 821 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitInsteadOf); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 822 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitAlias); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 827 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(3) - (3)].traitInsteadOf)->SetMethodReference((yyvsp[(1) - (3)].traitAlias)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 831 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitInsteadOf), pelet::TraitInsteadOfClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 832 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(1) - (3)].traitInsteadOf)->AppendInsteadOf((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 836 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
														  (yyval.traitAlias)->SetMethodReference((yyvsp[(1) - (1)].lexeme), NULL, observers.GetScope(), observers.GetDeclaredNamespace()); 
														;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 839 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 843 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
																	  (yyval.traitAlias)->SetMethodReference((yyvsp[(3) - (3)].lexeme), (yyvsp[(1) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace());
																	;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 849 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (4)].traitAlias)->SetModifiers((yyvsp[(3) - (4)].lexeme))->SetAlias((yyvsp[(4) - (4)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 850 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (3)].traitAlias)->SetModifiers((yyvsp[(3) - (3)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 854 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 855 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 859 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 860 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 864 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 865 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); 
										;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 871 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 872 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 876 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 877 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 890 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 896 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 902 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 908 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 918 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 924 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 933 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 934 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 938 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 939 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 943 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 944 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 949 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 954 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 964 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 965 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 969 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 973 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 974 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    {
																			  /* 
																			   * since this parser only looks for defines or property assignments
																			   * and there could never be both in one expression we can return
																			   * just one
																			   */
																			  if ((yyvsp[(1) - (3)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (3)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (3)].statement);
																			  }
																			  else {
																				(yyval.statement) = (yyvsp[(3) - (3)].statement);
																			  } 
																			;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 987 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (4)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (4)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (4)].statement);
																			  }
																			;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 992 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (6)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (6)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (6)].statement);
																			  }
																			;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 997 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 998 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 999 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1000 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1001 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1002 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1003 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1004 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1005 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1006 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1007 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1008 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1009 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1010 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1011 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1012 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1013 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1014 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1015 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1016 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1017 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1018 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1019 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1020 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1021 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1022 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1023 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1024 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1025 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1026 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1027 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1028 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1029 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1030 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1031 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1032 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1033 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1034 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1035 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1036 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1037 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1038 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1039 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1040 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1041 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1042 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1043 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1044 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1047 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1049 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1050 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1051 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1052 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1053 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1054 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1055 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1056 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1057 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1058 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1059 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1060 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1061 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1062 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1063 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1064 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1066 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1068 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1076 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1077 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1081 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1082 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1083 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1084 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1088 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true; 
																						  }
																						;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1093 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(1) - (5)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }
																						  observers.DoCaptureScalars = false;	
																						  observers.DoCaptureCallArguments = false; 
																						;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1107 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1108 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true; 
																						  }
																						;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1113 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(2) - (6)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }	
																						  observers.DoCaptureScalars = false;
																						  observers.DoCaptureCallArguments = false; 
																						;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1126 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1128 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1130 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1132 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1134 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1138 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1139 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1140 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1141 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1145 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1146 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1147 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1151 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1152 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1157 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1158 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1162 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1163 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1167 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1171 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1172 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1173 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1177 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1178 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1179 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1183 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1184 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1188 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarStmt;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1197 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarStmt;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1206 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarStmt;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1215 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1216 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1217 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1218 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1219 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1220 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1221 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1222 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1223 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1227 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1228 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1229 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1230 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1231 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1232 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1233 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1234 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1235 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1236 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1240 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1244 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1245 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1246 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1247 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1248 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1249 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1250 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1251 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1252 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1256 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1257 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1261 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1262 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1273 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1274 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1290 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (1)].statement)->Type) {
													observers.DoCaptureProperties = true;	
												  }
												;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1295 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureProperties = false; ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1296 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { 
													if ((yyvsp[(1) - (7)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (7)].statement)->Type && (yyvsp[(4) - (7)].lexeme) && !(yyvsp[(5) - (7)].isMethod)) {
														AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
														
														/* need to cast because we are returning a statement pointer from this rule */
														(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeVariable((yyvsp[(4) - (7)].lexeme), (yyvsp[(4) - (7)].lexeme), false, (yyvsp[(4) - (7)].lexeme)->Pos, 
														observers.GetScope(), observers.GetDeclaredNamespace());
													}
													else {
														(yyval.statement) = 0; 
													}													
												;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1308 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1312 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1313 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1317 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1321 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1322 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1326 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1330 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isMethod) = 1; ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1331 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isMethod) = 0; ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1332 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isMethod) = 0; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1337 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1341 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1342 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1346 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1355 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].lexeme) && (yyvsp[(1) - (1)].lexeme)->Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) == 0) {
										AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
										
										/* need to cast because we are returning a statement pointer from this rule */
										(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace());
									  }
									  else {
										(yyval.statement) = 0; 
									  }
									;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1365 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1366 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1371 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1372 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1373 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1377 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1378 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1379 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1383 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);	;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1384 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1388 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1389 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1398 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1399 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1400 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1404 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = observers.DoCaptureProperties ? ((yyvsp[(1) - (1)].lexeme)) : 0; ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1405 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1409 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1410 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1419 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1420 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1421 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1425 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1426 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1430 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1431 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1432 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1433 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1434 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1435 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1436 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1437 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1441 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1442 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1443 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1444 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1448 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1449 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1450 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1451 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1452 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1453 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1457 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1458 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1459 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1463 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1464 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1465 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1466 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1471 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1472 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1477 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1478 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1479 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1484 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1485 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1492 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1493 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1497 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1498 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 7028 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.cpp"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (analyzer, observers, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (analyzer, observers, yymsg);
	  }
	else
	  {
	    yyerror (analyzer, observers, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, analyzer, observers);
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



/* Line 1675 of yacc.c  */
#line 1501 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php54ResourceParser.y"

