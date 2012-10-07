
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
#line 1 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"


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
#line 127 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.cpp"

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
#line 298 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.cpp"

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
#define YYLAST   7792

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  455
/* YYNRULES -- Number of states.  */
#define YYNSTATES  922

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
    1277,  1279,  1281,  1283,  1289,  1291,  1294,  1295,  1299,  1304,
    1309,  1313,  1315,  1317,  1318,  1320,  1323,  1327,  1331,  1333,
    1338,  1343,  1345,  1347,  1349,  1351,  1354,  1356,  1361,  1366,
    1368,  1370,  1375,  1376,  1378,  1380,  1382,  1387,  1392,  1394,
    1396,  1400,  1402,  1405,  1409,  1411,  1413,  1418,  1419,  1420,
    1423,  1429,  1433,  1437,  1439,  1446,  1451,  1456,  1459,  1462,
    1465,  1467,  1470,  1472,  1477,  1481,  1485,  1492,  1496,  1498,
    1500,  1502,  1507,  1512,  1513,  1517,  1518,  1522,  1527,  1528,
    1532,  1533,  1537,  1539,  1543,  1547
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
     272,    -1,   272,    -1,   239,    61,   284,   157,    -1,    61,
     284,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   252,   258,    -1,   123,   151,   289,
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
      26,   266,    -1,   296,    -1,    57,   266,    -1,    56,   266,
      -1,    55,   266,    -1,    54,   266,    -1,    53,   266,    -1,
      52,   266,    -1,    51,   266,    -1,   106,   256,    -1,    60,
     266,    -1,   262,    -1,    73,   151,   291,   152,    -1,    61,
     291,   157,    -1,   154,   257,   154,    -1,    12,   266,    -1,
     244,   179,   151,   205,   152,   245,   149,   168,   150,    -1,
      72,   244,   179,   151,   205,   152,   245,   149,   168,   150,
      -1,   112,    -1,    -1,   144,   151,   246,   152,    -1,   246,
       8,   146,    -1,   246,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   151,   248,   208,   152,    -1,
     126,   128,   161,   151,   208,   152,    -1,    -1,   128,   161,
     151,   249,   208,   152,    -1,   250,   133,   136,   151,   208,
     152,    -1,   250,   133,   276,   151,   208,   152,    -1,   278,
     133,   136,   151,   208,   152,    -1,   278,   133,   276,   151,
     208,   152,    -1,   276,   151,   208,   152,    -1,    72,    -1,
     161,    -1,   126,   128,   161,    -1,   128,   161,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   250,    -1,
     253,    -1,   281,   130,   285,   254,    -1,   281,    -1,   254,
     255,    -1,    -1,   130,   285,    -1,    -1,   151,   152,    -1,
     151,   266,   152,    -1,    -1,    99,    -1,   293,    -1,    -1,
     151,   208,   152,    -1,   124,    -1,    92,    -1,    86,    -1,
     122,    -1,   108,    -1,    91,    -1,   141,    -1,   125,    -1,
     111,    -1,   127,    -1,   135,    99,   103,    -1,   135,   103,
      -1,   259,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,    42,   260,    -1,    43,   260,    -1,    73,   151,
     263,   152,    -1,   261,    -1,    61,   263,   157,    -1,    82,
      -1,   250,   133,   136,    -1,   137,    -1,   302,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   259,    -1,
     156,   293,   156,    -1,   135,   293,   103,    -1,    82,    -1,
      -1,   265,   264,    -1,    -1,     8,    -1,   265,     8,   260,
      96,   260,    -1,   265,     8,   260,    -1,   260,    96,   260,
      -1,   260,    -1,   267,    -1,   243,    -1,   270,    -1,   270,
      -1,   270,    -1,   280,   130,   285,   275,   271,    -1,   280,
      -1,   271,   272,    -1,    -1,   130,   285,   275,    -1,   273,
      61,   284,   157,    -1,   274,    61,   284,   157,    -1,   151,
     208,   152,    -1,   274,    -1,   273,    -1,    -1,   282,    -1,
     288,   282,    -1,   250,   133,   276,    -1,   278,   133,   276,
      -1,   282,    -1,   279,    61,   284,   157,    -1,   247,    61,
     284,   157,    -1,   281,    -1,   279,    -1,   247,    -1,   282,
      -1,   288,   282,    -1,   277,    -1,   282,    61,   284,   157,
      -1,   282,   149,   266,   150,    -1,   283,    -1,   146,    -1,
     155,   149,   266,   150,    -1,    -1,   266,    -1,   286,    -1,
     276,    -1,   286,    61,   284,   157,    -1,   286,   149,   266,
     150,    -1,   287,    -1,   136,    -1,   149,   266,   150,    -1,
     155,    -1,   288,   155,    -1,   289,     8,   290,    -1,   290,
      -1,   270,    -1,   123,   151,   289,   152,    -1,    -1,    -1,
     292,   264,    -1,   292,     8,   266,    96,   266,    -1,   292,
       8,   266,    -1,   266,    96,   266,    -1,   266,    -1,   292,
       8,   266,    96,    31,   268,    -1,   292,     8,    31,   268,
      -1,   266,    96,    31,   268,    -1,    31,   268,    -1,   293,
     294,    -1,   293,    99,    -1,   294,    -1,    99,   294,    -1,
     146,    -1,   146,    61,   295,   157,    -1,   146,   130,   136,
      -1,    95,   266,   150,    -1,    95,   137,    61,   266,   157,
     150,    -1,    88,   270,   150,    -1,   136,    -1,   129,    -1,
     146,    -1,   121,   151,   301,   152,    -1,    98,   151,   270,
     152,    -1,    -1,     7,   297,   266,    -1,    -1,     6,   298,
     266,    -1,     5,   151,   266,   152,    -1,    -1,     4,   299,
     266,    -1,    -1,     3,   300,   266,    -1,   270,    -1,   301,
       8,   270,    -1,   250,   133,   136,    -1,   278,   133,   136,
      -1
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
     533,   537,   538,   543,   542,   556,   555,   564,   563,   574,
     575,   576,   577,   581,   582,   589,   593,   594,   599,   600,
     605,   608,   612,   613,   617,   618,   622,   623,   627,   628,
     632,   633,   637,   638,   642,   643,   644,   645,   649,   650,
     651,   655,   656,   660,   661,   665,   666,   672,   673,   679,
     680,   684,   685,   689,   690,   694,   695,   696,   697,   698,
     699,   700,   701,   705,   706,   707,   708,   712,   713,   717,
     724,   731,   738,   739,   740,   744,   745,   749,   750,   751,
     755,   756,   757,   758,   762,   763,   767,   768,   769,   771,
     770,   782,   787,   788,   793,   794,   798,   799,   803,   804,
     808,   809,   813,   818,   819,   823,   826,   830,   836,   837,
     841,   842,   846,   847,   851,   852,   858,   859,   863,   864,
     868,   869,   870,   871,   872,   873,   877,   883,   889,   895,
     904,   911,   920,   921,   925,   926,   930,   931,   935,   936,
     940,   941,   945,   946,   947,   951,   952,   956,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1015,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1034,  1039,
    1043,  1044,  1048,  1049,  1050,  1051,  1055,  1055,  1072,  1075,
    1075,  1092,  1094,  1096,  1098,  1100,  1105,  1106,  1107,  1108,
    1112,  1113,  1114,  1118,  1119,  1123,  1125,  1129,  1130,  1134,
    1138,  1139,  1140,  1144,  1145,  1146,  1150,  1151,  1155,  1164,
    1173,  1182,  1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,
    1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,
    1207,  1211,  1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,
    1223,  1224,  1228,  1229,  1233,  1234,  1235,  1236,  1240,  1241,
    1245,  1249,  1253,  1257,  1261,  1265,  1266,  1270,  1274,  1275,
    1279,  1283,  1284,  1285,  1289,  1290,  1294,  1295,  1299,  1303,
    1304,  1308,  1309,  1310,  1315,  1316,  1317,  1321,  1322,  1323,
    1327,  1328,  1332,  1333,  1337,  1338,  1342,  1343,  1344,  1348,
    1349,  1353,  1354,  1358,  1359,  1363,  1364,  1365,  1369,  1370,
    1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,  1385,  1386,
    1387,  1388,  1392,  1393,  1394,  1395,  1396,  1397,  1401,  1402,
    1403,  1407,  1408,  1409,  1409,  1415,  1415,  1421,  1422,  1422,
    1428,  1428,  1436,  1437,  1441,  1442
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
  "encaps_var_offset", "internal_functions_in_yacc", "$@9", "$@10", "$@11",
  "$@12", "isset_variables", "class_constant", 0
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
     267,   268,   269,   270,   270,   271,   271,   272,   273,   273,
     274,   275,   275,   275,   276,   276,   277,   277,   278,   279,
     279,   280,   280,   280,   281,   281,   281,   282,   282,   282,
     283,   283,   284,   284,   285,   285,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   290,   291,   291,
     292,   292,   292,   292,   292,   292,   292,   292,   293,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   296,   296,   297,   296,   298,   296,   296,   299,   296,
     300,   296,   301,   301,   302,   302
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
       1,     1,     1,     5,     1,     2,     0,     3,     4,     4,
       3,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       4,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     1,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     4,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     4,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     0,     3,     0,     3,     4,     0,     3,
       0,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   450,   448,     0,   445,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   418,     0,     0,     0,     0,   306,
       0,     0,    79,   359,     0,   330,     0,     0,   333,   329,
       0,     0,     0,   320,   332,     0,     0,   336,   289,     0,
       0,     0,     0,    51,    85,     0,   331,     0,   328,   335,
       0,   337,     0,     0,     0,     5,   351,     0,     0,    81,
     334,     0,     0,     0,   400,     0,    27,     0,    57,   323,
     411,     0,   353,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   369,    71,   393,     0,   356,   282,
       0,   368,     0,   370,     0,   396,     0,   392,   374,   391,
     394,   399,     0,   272,   352,     0,     0,     0,     0,     0,
     306,     0,     5,    71,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   306,     0,     0,   307,
       0,   237,   372,     0,   235,   281,     0,   423,     0,   362,
     222,     0,     0,   307,   313,   326,   314,     0,   316,   394,
       0,    82,    80,   152,     0,    71,   418,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   417,
       0,    14,     0,   355,    45,   369,     0,   370,     0,     0,
       0,   339,   432,     0,   430,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   324,     0,
     325,     0,     0,     0,     0,   296,     0,    17,    83,    86,
      72,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   402,     0,   402,
       0,   412,   395,   451,   449,     0,   446,   444,     0,     0,
     309,     0,     0,   427,   371,     0,   284,   363,   419,     0,
     309,     0,   138,   217,     0,     0,   395,     0,     0,    49,
       0,     0,    42,     0,    44,     0,     0,     0,     0,    50,
       0,   321,     0,     0,   205,   207,   369,   370,     0,   148,
     370,     0,    48,    60,     0,     0,   452,     0,     0,   415,
       0,   414,   354,     4,    12,    11,   299,    46,    47,     0,
     351,     0,   338,   431,     0,     0,   429,   358,   428,     0,
      59,     0,     0,    66,    68,    22,     0,     0,    16,     0,
       0,    34,    26,    28,    29,    30,   215,   267,   285,     0,
     357,     6,   138,     0,     0,    88,     0,    77,     0,   133,
     403,     0,   454,   386,   384,     0,   240,   242,   241,     0,
       0,   238,   239,   243,   245,   244,   259,   258,   261,   260,
     262,   264,   265,   263,   253,   252,   247,   248,   246,   249,
     250,   251,   266,     0,   219,   233,   232,   231,   230,   229,
     228,   227,   226,   225,   224,   223,     0,     0,   137,   369,
     370,   455,   387,     0,   409,     0,   405,   383,   404,   408,
       0,     0,   447,   308,     0,     0,     0,   422,     0,   421,
     308,   386,     0,   387,   318,     0,     0,   360,     0,   349,
       0,     0,     0,   341,     0,   340,   153,   347,   150,   133,
     283,    25,     0,     0,     0,     0,   202,   442,   322,   204,
       0,     0,     0,     0,   145,    10,     0,     0,   441,   417,
     417,     0,   138,     0,     4,   138,   437,     0,   435,   439,
     438,   440,     0,   434,     0,     0,     0,     0,     0,    21,
      18,     0,     0,   402,     0,   214,   213,   216,   269,   209,
     401,     0,     0,     0,     0,   310,    84,     0,    75,    87,
      90,     0,   133,   135,   136,     0,   123,     0,   134,   390,
     138,   138,   385,   271,     0,     0,   220,   141,   305,     0,
     138,   138,   389,     0,   138,   382,   381,   376,   402,     0,
     397,   398,   426,   425,     0,   327,   315,   344,   345,   367,
       0,   362,   360,     0,   343,     0,     0,     0,     0,   102,
       0,    27,   100,    56,     0,     0,   206,    92,     0,    92,
      94,   149,    27,   115,   453,     0,   413,     0,     0,    15,
       0,     0,     0,   433,   108,   108,    40,     0,    67,    53,
      23,    27,   113,    37,     0,     0,   383,   208,   402,   212,
     297,    24,     0,   312,    89,     0,     0,   155,     0,   290,
     133,     0,   125,     0,     0,   270,   326,     0,   369,   370,
       0,     0,   410,     0,   402,   402,   373,     0,     0,     0,
     420,     0,   317,     0,   348,   363,   361,     0,   342,   350,
     151,   290,     0,     0,     0,   204,     0,     0,    95,     0,
     117,   119,   416,   218,   298,    13,   300,     0,   108,     0,
     108,     0,     0,     0,    31,   211,   377,     0,   311,   155,
      91,   186,    73,     0,     0,     0,   126,     0,   301,   302,
     221,   144,   303,   304,   380,     0,     0,   375,   406,   407,
     424,   319,   366,   365,   346,     0,   103,     0,    38,     0,
      93,     0,     0,   121,     0,     0,    35,   436,     0,     0,
       0,     0,     0,   104,     0,     0,   210,   186,   190,   191,
     192,   195,   194,   193,     0,     0,   185,    78,   154,   158,
       0,     0,   184,   188,     0,     0,     0,    27,     0,   129,
       0,   128,   378,   379,     0,    27,   101,     0,    27,    98,
      55,    54,     0,     0,     0,     0,   120,     0,     0,   111,
     112,    27,   106,   105,     0,   114,    76,     0,     0,   162,
     198,     0,    71,   189,     0,   157,    27,     0,   294,     0,
       0,   130,     0,   127,   364,     0,    27,    96,    39,     0,
       0,    27,     0,     0,   107,    27,   110,     0,     0,     0,
     166,   164,   161,     0,     0,   156,     0,     0,     0,   295,
       0,   291,   287,     0,   132,   288,     0,     0,     0,   122,
      36,     0,   109,    27,   201,   163,     5,     0,   167,   168,
       0,     0,   176,     0,     0,   199,   196,     0,     0,    74,
       0,   292,   131,     0,    99,     0,   116,     0,   165,   169,
     170,   180,     0,   171,     0,     0,   133,   200,   293,    97,
      27,    62,     0,   179,   172,   173,   177,   197,     0,   118,
       0,    58,    61,    63,   178,     0,   159,     0,    64,   174,
       0,     0,    27,   182,   160,     0,     0,     0,   183,    27,
       0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   504,   343,   212,   213,    84,
     215,   372,   373,    86,   901,   902,   903,   362,   363,   374,
     375,   231,    89,   765,    90,   635,   541,    91,   385,    92,
     387,   538,   539,   677,   599,   818,   780,   593,   316,   616,
     689,   791,   623,   681,   733,   736,   784,   545,   546,   547,
     437,   438,   183,   184,   164,   701,   758,   910,   759,   798,
     832,   857,   858,   859,   860,   894,   861,   862,   863,   892,
     914,   760,   761,   762,   763,   801,   764,   174,   323,   324,
     525,   526,   527,   528,    93,    94,   123,   704,   809,    96,
     382,   505,    97,   548,   155,   156,   576,   662,   178,   219,
     303,    98,   579,   477,    99,   580,   298,   581,   100,   101,
     293,   102,   103,   656,   529,   565,   566,   567,   104,   105,
     106,   107,   108,   109,   110,   111,   391,   447,   448,   449,
     112,   340,   341,   148,   149,   203,   204,   512,   113,   119,
     118,   116,   115,   337,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -701
static const yytype_int16 yypact[] =
{
    -701,    63,  1805,  -701,  -701,  -701,   -85,  -701,  -701,  6398,
    6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,
    6398,   345,   345,  6398,  4885,  6398,   431,    56,    64,   -57,
      45,  5011,  -701,  -701,    47,  -701,  5137,    76,  -701,  -701,
    4731,  6398,    79,    86,  -701,   101,   114,  -701,  -701,   -44,
      75,   116,   131,  -701,  -701,   167,  -701,   168,  -701,  -701,
      87,  -701,   140,  5263,   147,   299,  -701,   178,  6398,  -701,
    -701,   184,   201,   -27,  -701,   217,  -701,  6398,  -701,   126,
     213,   308,   -59,  -701,     8,  -701,  -701,  -701,  -701,  -701,
    -701,   227,   251,  -701,  -701,   363,   334,   271,  -701,  -701,
    6739,  -701,    58,  1472,   254,  -701,   276,   361,   309,  -701,
       3,  -701,   -42,  -701,  -701,  6398,  6398,  6398,  6398,  6398,
     313,   319,  -701,   363,  1637,  -701,  -701,   392,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,   320,   140,   -63,
     316,  -701,  -701,   324,  -701,  -701,   345,  7541,   301,   444,
    -701,   332,   140,   337,   339,   315,  -701,   342,   340,    71,
     -42,  -701,  -701,   454,    13,   363,  4885,  -701,  6788,   461,
    -701,  6829,   344,   330,    16,  7666,   345,  5389,  -701,  6398,
    6398,  -701,   244,    17,  -701,   325,   338,  6398,   345,   288,
     140,  -701,   -53,   -46,  -701,   331,  7666,  1260,   345,  6524,
      -4,  -701,   -20,   341,  -701,  -701,  6398,  6870,  -701,   345,
     140,   -13,    21,  -701,  6398,  1959,   354,  6915,   255,   353,
     347,  6398,   255,   113,   349,  -701,   356,  -701,   402,   405,
    -701,   -39,  6398,   162,  6398,  6398,  6398,  5516,  6398,  6398,
    6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,
    6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,  6398,   431,
    -701,  -701,  -701,  5642,  6398,  6398,  6398,  6398,  6398,  6398,
    6398,  6398,  6398,  6398,  6398,  5768,   210,  6398,   233,  6398,
    6398,   213,   -10,  7666,  7666,  6956,  7666,  7666,   348,   140,
     -43,   211,   212,  -701,  -701,  5894,  -701,  6020,  -701,   140,
     337,    54,  5768,  -701,    54,   233,   -15,  1315,   368,  -701,
     364,   372,  -701,  1315,  -701,   503,    20,   374,  6398,  -701,
     375,  -701,  6997,   373,   524,  7666,   459,  1316,  6398,  -701,
    -701,   -44,  -701,  -701,   384,  7041,  -701,    26,   387,  -701,
      30,  -701,   100,  -701,  -701,  -701,  -701,  -701,  -701,   390,
     482,  7293,  -701,  -701,   256,   406,  -701,  -701,  -701,  7082,
    -701,  2113,    32,  -701,  -701,    29,   409,   -27,  -701,  7123,
     395,  -701,  -701,  -701,  -701,  -701,    18,  -701,  -701,  7334,
    -701,  -701,  5768,   534,   194,   433,   194,  -701,   398,   121,
    7666,   394,   403,   404,   -15,   -42,  7706,  7743,  1637,  6398,
    7625,  1944,  2097,  2250,  2403,  2556,  2710,  2710,  2710,  2710,
     656,  2859,  2859,  2859,   554,   554,   381,   381,   381,   392,
     392,   392,  -701,   169,  1637,  1637,  1637,  1637,  1637,  1637,
    1637,  1637,  1637,  1637,  1637,  1637,   345,   401,   548,    37,
     106,   415,   417,   413,  -701,  6398,  -701,   424,   -11,  -701,
     421,  7375,  -701,    88,   403,   415,   345,  7666,   345,  7582,
     337,  -701,   430,  -701,  -701,  1315,  1315,  1315,   434,  -701,
     465,   140,    60,   135,   469,  -701,  -701,  -701,   574,   121,
    -701,  -701,  1315,   458,  3961,  6398,  7666,  -701,  -701,  6398,
    6398,   345,   166,  7417,  -701,  -701,  4115,   345,  -701,   288,
     288,   593,  5768,  1497,  -701,  5768,  -701,  6398,  -701,  -701,
    -701,  -701,   453,  -701,     4,   539,   345,   460,   479,  -701,
    -701,  4269,   468,  6398,   233,   491,    46,  -701,  -701,  -701,
    -701,   474,  1315,   500,   140,   337,  -701,   194,  -701,   622,
    -701,   485,   121,  -701,  -701,   484,   623,    12,  -701,  -701,
    5768,  5768,   -15,  1791,  6398,   431,  -701,  -701,  -701,  6146,
    5768,  5768,  -701,  7458,  5768,   577,   578,  -701,  6398,  6398,
    -701,  -701,  -701,  -701,  6272,  -701,   510,  -701,  -701,   546,
     486,   637,  1315,   140,   199,   543,   512,  1315,   497,  -701,
     640,  -701,  -701,  -701,  7167,   505,  7666,   563,   345,   563,
    -701,  -701,  -701,  -701,  -701,    39,  -701,  6398,   520,  -701,
    1651,   522,  6657,  -701,   523,   526,  -701,   531,  -701,  -701,
    -701,  -701,  -701,  -701,   530,   518,   424,  -701,  6398,   491,
    -701,  -701,   140,   337,   622,   528,   194,  -701,   532,   541,
     333,   540,   674,   538,   556,  1791,   315,   345,    40,  1201,
     557,   561,  -701,   562,  6398,  6398,   491,   549,  7499,   345,
    7666,   233,  -701,  1315,  -701,  1315,  -701,   564,   216,  -701,
    -701,   541,  1315,  2267,   565,  6398,   166,   568,  -701,   569,
    3807,   138,  -701,  1637,  -701,  -701,  -701,   572,  -701,   -18,
    -701,     0,   194,  2421,  -701,  -701,  -701,   558,   337,  -701,
    -701,   268,  -701,   573,   576,    22,   713,  1315,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,   570,   571,  -701,  -701,  -701,
    -701,  -701,  -701,   633,  -701,   581,  -701,   579,  -701,   584,
    -701,  4423,  4423,   179,   587,  4731,  -701,  -701,   127,  6398,
      -9,   586,     5,  -701,   594,   589,  -701,   306,  -701,  -701,
    -701,  -701,  -701,  -701,   607,   194,  -701,  -701,  -701,  -701,
     598,   313,   450,  -701,    24,   597,    25,  -701,   599,   734,
    1315,  -701,  -701,  -701,  1315,  -701,  -701,  4577,  -701,  -701,
    -701,  -701,   600,   723,   684,  6398,  -701,   601,  6698,  -701,
    -701,  -701,  -701,  -701,   603,  -701,  -701,   740,     7,  -701,
     744,    27,   363,  -701,   624,  -701,  -701,   612,  -701,    41,
    2575,   748,  1315,  -701,  -701,  2729,  -701,  -701,  -701,  2883,
    6398,  -701,   609,  7208,  -701,  -701,  3807,   614,  1315,   194,
     295,  -701,  -701,  1315,   618,  -701,   629,   753,  3037,  -701,
      42,  -701,  -701,  1315,  -701,  -701,  3191,   615,  7249,  3807,
    -701,  4731,  3807,  -701,  -701,  -701,   695,   620,   295,  -701,
     621,   699,   657,   625,   642,  -701,   764,   630,  1315,  -701,
     634,  -701,  -701,   632,  -701,   756,  -701,  3345,  -701,  -701,
    -701,   596,   194,  -701,   650,  1315,   121,  -701,  -701,  -701,
    -701,   708,   653,   655,   784,  -701,  -701,  -701,   641,  3807,
     643,  -701,   708,  -701,  -701,   194,  -701,   194,  -701,  -701,
     150,   649,  -701,  -701,  -701,   644,  3499,   651,  -701,  -701,
    3653,  -701
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -701,  -701,  -329,    -3,  -701,  -701,  -701,  -701,   435,  -701,
    -202,  -701,     2,  -701,  -701,  -701,  -104,  -701,   283,    -1,
       1,  -121,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,   266,   205,   129,  -701,    74,  -701,  -701,  -701,
    -557,    19,  -701,  -701,  -701,  -701,  -701,  -471,  -701,   170,
    -276,  -701,  -701,   480,  -701,   115,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,   -40,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -700,  -701,  -701,  -701,  -476,  -701,
     286,  -701,  -701,  -701,   738,   481,    -2,   145,  -701,  -701,
    -701,  -701,   125,  -347,  -249,  -701,  -701,  -701,  -701,  -701,
     173,   536,   428,  -701,  -701,   238,   240,  -701,   910,   646,
    -425,   258,   868,  -701,  -489,  -701,  -701,   196,  -224,  -701,
      72,  -701,  -701,   -19,    50,  -701,  -257,  -300,  -701,  -701,
     -14,   335,   323,   663,  -701,   174,   432,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -701
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -389
static const yytype_int16 yytable[] =
{
      95,    87,   288,    88,    85,   464,   361,   158,   588,   393,
     422,   557,   160,   595,   503,   829,   226,   789,   139,   139,
     443,   308,   450,   153,   318,   331,   462,   165,   483,   367,
     614,   572,   804,   573,   497,   834,   627,   536,   500,   540,
     516,   354,   173,   641,   310,  -139,   279,   500,  -142,   840,
     568,   279,   442,   768,   446,    48,   807,   192,   691,   193,
     739,   366,   803,     3,   279,   224,   117,   393,   442,   224,
     211,   638,   740,   870,  -307,   224,   159,   461,   739,   523,
     463,   446,   224,   739,   198,   224,   741,  -309,   225,   163,
     740,   199,   225,   143,   143,   740,   344,   388,   157,   352,
     345,   210,   181,   518,    74,   346,   531,   628,   346,   122,
     355,   182,   389,   281,  -140,   224,   261,   262,   165,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   738,   279,   742,   280,   290,  -388,   161,   569,   280,
     627,  -385,   202,   139,   790,   162,   140,   140,   524,   300,
     743,   154,   280,   615,  -384,   793,   830,   224,   642,   585,
     831,   227,   282,   201,  -372,  -372,   309,   717,   769,   319,
     332,   808,   484,   139,   368,   610,   524,   805,   498,   139,
     835,   893,   501,   169,   517,   139,   139,   342,   871,  -139,
     540,   682,  -142,   841,   543,   139,   166,   598,   544,   729,
      74,   198,   734,   735,  -388,   739,   139,   365,   199,    80,
     306,   185,   356,    95,   198,   190,   224,   740,   143,   395,
     280,   199,   711,   122,   626,   218,   608,   172,   224,   611,
     176,   787,   555,  -308,   720,   198,   191,   177,   136,   502,
     158,   136,   199,   782,   783,   160,   200,   533,   143,   534,
     201,   502,   179,   220,   143,   223,   153,   122,  -140,   202,
     143,   143,   395,   224,   395,   180,   625,   186,  -307,   380,
     143,   140,   202,  -124,   643,   644,   122,   395,   395,   141,
     144,   143,   187,   394,   650,   651,   453,   395,   653,   700,
     395,   395,   137,   202,   138,   137,   460,   138,   392,   912,
     446,   140,   122,   913,   473,   122,   646,   140,    74,   159,
     473,   657,    74,   140,   140,    74,   136,    80,   188,   189,
     533,    80,   534,   140,    80,   205,   394,   224,   394,   206,
     122,   157,  -309,   208,   140,   748,   749,   750,   751,   752,
     753,   394,   394,   198,   224,   744,   441,   454,   455,  -308,
     199,   394,   209,   754,   394,   394,    74,    74,    74,    95,
     136,   721,   221,   228,   211,    80,    80,    80,   214,   444,
     137,   697,   138,   748,   749,   750,   751,   752,   753,    74,
     122,   535,   445,   535,   154,   509,   535,   229,    80,   673,
      74,   754,   510,   328,   230,   232,   198,   715,   716,    80,
     680,   202,   511,   199,   233,   275,   543,   222,   799,   276,
     544,   338,   755,   756,   137,   898,   138,   136,   757,   693,
     139,   533,   277,   534,   122,    48,   256,   257,   258,   198,
     259,   856,   474,   139,    74,   198,   199,   446,   474,   278,
     356,   259,   199,    80,   357,   552,   356,   190,   289,   291,
     755,   756,   297,   139,   202,   139,   796,   292,   296,   533,
     299,   534,   473,   473,   473,   224,   302,   307,   584,   122,
     305,   137,   301,   138,   313,   304,   535,   317,   333,   473,
     315,   122,   855,   864,   347,   381,   592,   202,   139,   139,
     334,    74,   383,   202,   139,   143,   139,   139,   603,   389,
      80,    95,    87,   136,    88,    85,   376,   378,   143,   384,
     395,   864,   386,   139,   478,   479,   482,   748,   749,   750,
     751,   752,   753,   622,   480,   485,   489,   487,   143,   473,
     143,   633,   490,   491,   535,   895,   158,   495,   499,   535,
     506,   160,   513,   507,   195,   519,   522,   532,   140,   542,
     537,   549,   153,   558,   550,   551,   559,   151,   909,   152,
     911,   140,  -187,   143,   143,   810,   560,   122,   561,   143,
     562,   143,   143,   815,   394,   564,   819,    74,   570,   473,
     668,   140,   575,   140,   473,   582,    80,   587,   143,   826,
     474,   474,   474,   583,   590,   139,   253,   254,   255,   256,
     257,   258,   586,   259,   838,   159,   607,   474,    95,    87,
     613,    88,    85,   619,   846,   620,   140,   140,   617,   849,
     624,   524,   140,   852,   140,   140,   630,   157,   632,   698,
     636,   640,   353,   535,   637,   358,   639,   535,   654,   655,
     661,   140,   663,   664,   139,   665,   352,   395,   669,   671,
     353,   877,   358,   672,   353,   358,   139,   474,   675,   676,
     473,   326,   473,   748,   749,   750,   751,   752,   753,   473,
     143,    95,   684,   139,   686,   695,   688,   699,    95,   690,
     154,   836,   692,   694,   702,   703,   706,   707,   899,   535,
     708,    95,  -389,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   473,   259,   718,   474,   709,   712,
     916,   394,   474,   713,   714,   746,   724,   920,   728,   143,
     731,   732,   737,   140,   766,   767,   770,   772,   773,   774,
     775,   143,   776,   779,   779,   476,   777,   786,   785,   792,
     794,   481,   795,   797,   800,   811,   806,   812,   143,   821,
     822,   820,   535,   828,   824,   827,   439,   833,   839,   802,
     837,   843,   850,   853,   866,   867,   868,   473,   874,  -175,
     878,   473,   140,   881,   880,   884,   882,   885,   883,   817,
     888,   886,   890,   439,   140,   889,   896,   900,   474,   904,
     474,  -181,   905,   906,   907,   915,   917,   474,   908,   618,
     919,   140,   520,   634,   679,   730,   781,   825,    95,   473,
     705,   494,   629,    95,   747,   216,   725,    95,   879,   710,
     667,   666,   696,   606,    95,   473,   535,   535,   329,   311,
     473,     0,   474,     0,   605,     0,    95,     0,     0,     0,
     473,     0,     0,   475,    95,     0,     0,    95,     0,   475,
      95,     0,     0,   876,     0,   535,     0,     0,     0,     0,
       0,     0,     0,   439,     0,   473,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,     0,   535,
       0,     0,   473,   535,     0,     0,     0,     0,     0,   142,
     142,     0,     0,   577,   578,   474,     0,    95,     0,   474,
       0,     0,   535,     0,   535,     0,     0,     0,     0,     0,
     589,     0,     0,     0,    95,     0,     0,     0,    95,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   197,     0,   145,   147,   150,     0,   474,     0,     0,
       0,   168,     0,     0,     0,     0,   171,     0,     0,     0,
       0,   175,     0,   474,     0,     0,     0,     0,   474,     0,
     631,     0,     0,     0,     0,     0,     0,     0,   474,     0,
       0,     0,     0,   196,     0,     0,     0,     0,   207,     0,
       0,     0,     0,   439,     0,     0,   439,   217,     0,     0,
       0,     0,     0,   474,     0,     0,     0,     0,     0,     0,
       0,   475,   475,   475,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,   294,   670,     0,     0,   475,     0,
       0,     0,     0,     0,     0,   283,   284,   285,   286,   287,
       0,   439,   439,     0,     0,     0,     0,     0,     0,     0,
     648,   439,   439,     0,   320,   439,     0,     0,   327,     0,
     330,     0,     0,     0,     0,     0,   336,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,   475,     0,
       0,     0,     0,     0,     0,     0,   147,   364,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   322,     0,   325,
     196,   722,     0,   723,     0,     0,     0,   335,     0,     0,
     726,     0,     0,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,   359,     0,   475,     0,
       0,     0,     0,   475,   369,     0,     0,     0,     0,     0,
       0,   379,     0,     0,     0,   771,     0,     0,     0,     0,
       0,     0,   390,   440,   396,   397,   398,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,     0,
     440,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   196,     0,   390,     0,   390,
     451,     0,     0,     0,     0,     0,     0,     0,   813,   475,
       0,   475,   814,     0,     0,   457,     0,   459,   475,  -143,
       0,     0,   196,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,     0,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   493,     0,
     844,     0,     0,   475,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,   854,     0,     0,  -372,
    -372,   865,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   872,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,     0,
       0,   556,   196,     0,     0,     0,   887,     0,     0,     0,
       0,     0,     0,     0,   294,     0,   475,     0,     0,   553,
     475,     0,     0,   897,     0,     0,     0,     0,  -372,  -372,
       0,     0,     0,     0,   294,     0,   294,     0,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,  -143,     0,   563,     0,   465,   466,   597,
     600,     0,     0,     0,   475,   604,     0,   339,   339,   475,
     440,     0,     0,   440,  -372,  -372,   467,     0,     0,   475,
       0,     0,     0,     0,   364,     0,     0,   136,   468,     0,
     492,     0,     0,     0,     0,   594,     0,   469,     0,   325,
     596,    35,     0,     0,   475,     0,    38,    39,     0,     0,
       0,     0,   196,   348,     0,   196,     0,   612,   440,   440,
       0,   475,     0,    44,     0,     0,    47,   649,   440,   440,
       0,     0,   440,   390,     0,     0,     0,    56,     0,    58,
      59,   470,    61,   471,     0,     0,     0,     0,     0,     0,
     472,   122,     0,     0,     0,     0,    70,     0,     0,     0,
     196,   196,     0,     0,   645,     0,   678,     0,     0,   196,
     196,   196,     0,     0,   196,     0,     0,     0,   390,   658,
       0,     0,     0,     0,   660,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,   294,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   294,     0,     0,
    -372,  -372,     0,     0,     0,     0,     0,     0,   390,    10,
      11,     0,     0,     0,   600,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,   390,   390,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,    34,    35,    36,   325,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,   609,    77,   788,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,   237,     9,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,    10,    11,   823,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
     848,     0,    32,    33,     0,     0,    34,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,   685,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
      34,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   371,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   515,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,   727,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,   745,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   842,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,  -389,  -389,  -389,  -389,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   845,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,  -389,  -389,  -389,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,   847,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,   869,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,   873,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   891,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   918,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   921,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   602,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   621,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   778,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    52,
       0,    53,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   816,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
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
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    77,     0,   167,    79,    80,    81,     0,     0,
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
     170,    79,    80,    81,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,     0,   194,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     4,
       5,     6,     7,     8,    64,   122,    66,     0,     9,     0,
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,   321,   399,    79,    80,    81,     0,     0,     0,     0,
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
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,   423,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,     0,     0,    79,    80,    81,   436,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,   456,     0,     0,     0,     0,
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
      81,   458,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    77,     0,     0,    79,    80,    81,   647,     0,     0,
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
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,   659,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,     0,     0,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     0,     0,     0,     0,     0,     0,    64,
     122,   350,     0,     0,     0,    70,   234,   235,   236,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   789,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   687,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   790,     0,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   312,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   314,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   360,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   377,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   452,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   488,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   496,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   514,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   521,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   674,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     851,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   875,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   508,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   530,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   571,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   601,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   652,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,   295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   719,
     237,   554,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,   574,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   236,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259
};

static const yytype_int16 yycheck[] =
{
       2,     2,   123,     2,     2,   305,   208,    26,   479,   233,
     259,   436,    26,   489,   343,     8,     8,    26,    21,    22,
     277,     8,   279,    26,     8,     8,   302,    29,     8,     8,
      26,   456,     8,   458,     8,     8,   525,   384,     8,   386,
       8,    61,    40,    31,   165,     8,    61,     8,     8,     8,
      61,    61,   276,    31,   278,   112,    31,    60,   615,    62,
      78,    74,   762,     0,    61,   128,   151,   291,   292,   128,
      73,   542,    90,    31,   133,   128,    26,   301,    78,    61,
     304,   305,   128,    78,    88,   128,   104,   133,   151,   146,
      90,    95,   151,    21,    22,    90,   149,   136,    26,   103,
     153,   128,   146,    74,   146,   151,   382,    61,   151,   136,
     130,   155,   151,   155,     8,   128,    58,    59,   120,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   688,    61,   690,   149,   138,   133,    81,   149,   149,
     629,   151,   146,   146,   153,    81,    21,    22,   130,   152,
     150,    26,   149,   149,   151,   150,   149,   128,   146,    99,
     153,   153,   112,   103,    58,    59,   153,   656,   146,   153,
     153,   146,   152,   176,   153,   504,   130,   153,   152,   182,
     153,   881,   152,   136,   152,   188,   189,   190,   146,   152,
     537,   152,   152,   152,    73,   198,   151,    31,    77,   675,
     146,    88,    64,    65,   133,    78,   209,   210,    95,   155,
     160,   136,    99,   215,    88,   128,   128,    90,   146,   233,
     149,    95,   647,   136,   524,    99,   502,   151,   128,   505,
     151,   104,    63,   133,   659,    88,   149,   151,    72,   151,
     259,    72,    95,    64,    65,   259,    99,   126,   176,   128,
     103,   151,   151,    79,   182,    81,   259,   136,   152,   146,
     188,   189,   276,   128,   278,   151,   523,   151,   133,   156,
     198,   146,   146,   152,   550,   551,   136,   291,   292,    21,
      22,   209,   151,   233,   560,   561,   289,   301,   564,   636,
     304,   305,   126,   146,   128,   126,   299,   128,   136,   149,
     524,   176,   136,   153,   307,   136,   555,   182,   146,   259,
     313,   568,   146,   188,   189,   146,    72,   155,   151,   151,
     126,   155,   128,   198,   155,    26,   276,   128,   278,   151,
     136,   259,   133,   149,   209,    67,    68,    69,    70,    71,
      72,   291,   292,    88,   128,   692,   136,   136,   136,   133,
      95,   301,   151,    85,   304,   305,   146,   146,   146,   361,
      72,   661,   149,   136,   367,   155,   155,   155,   151,   136,
     126,   628,   128,    67,    68,    69,    70,    71,    72,   146,
     136,   384,   149,   386,   259,   129,   389,   136,   155,   591,
     146,    85,   136,   149,    31,    61,    88,   654,   655,   155,
     602,   146,   146,    95,   133,   151,    73,    99,   755,   133,
      77,   123,   144,   145,   126,   886,   128,    72,   150,   621,
     423,   126,    61,   128,   136,   112,    45,    46,    47,    88,
      49,   136,   307,   436,   146,    88,    95,   661,   313,   130,
      99,    49,    95,   155,   103,   395,    99,   128,   128,   133,
     144,   145,     8,   456,   146,   458,   150,   133,   157,   126,
     128,   128,   465,   466,   467,   128,   151,    13,   471,   136,
     130,   126,   133,   128,    13,   133,   479,   147,   153,   482,
     136,   136,   829,   830,   153,   136,   484,   146,   491,   492,
     152,   146,   136,   146,   497,   423,   499,   500,   496,   151,
     155,   503,   503,    72,   503,   503,   152,   154,   436,   107,
     524,   858,   107,   516,   146,   151,    13,    67,    68,    69,
      70,    71,    72,   521,   152,   151,   153,   152,   456,   532,
     458,   534,     8,    74,   537,   882,   555,   153,   151,   542,
     150,   555,   136,    61,    63,   136,   151,    13,   423,   151,
     117,   157,   555,   152,   151,   151,     8,   126,   905,   128,
     907,   436,   112,   491,   492,   767,   151,   136,   151,   497,
     157,   499,   500,   775,   524,   151,   778,   146,   157,   582,
     583,   456,   152,   458,   587,   151,   155,    13,   516,   791,
     465,   466,   467,   128,   136,   598,    42,    43,    44,    45,
      46,    47,   133,    49,   806,   555,    13,   482,   610,   610,
     157,   610,   610,   153,   816,   136,   491,   492,    79,   821,
     152,   130,   497,   825,   499,   500,   152,   555,   128,   632,
       8,     8,   200,   636,   149,   203,   152,   640,    61,    61,
     130,   516,    96,   157,   647,     8,   103,   661,   136,   152,
     218,   853,   220,    13,   222,   223,   659,   532,   153,    96,
     663,   180,   665,    67,    68,    69,    70,    71,    72,   672,
     598,   673,   152,   676,   152,   157,   153,   149,   680,   153,
     555,   802,   151,   153,   152,   144,   146,    13,   890,   692,
     152,   693,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   707,    49,   157,   582,   152,   152,
     912,   661,   587,   152,   152,   157,   152,   919,   153,   647,
     152,   152,   150,   598,   151,   149,    13,   157,   157,    96,
     149,   659,   153,   731,   732,   307,   152,   735,   151,   153,
     146,   313,   153,   136,   146,   146,   149,    13,   676,    26,
      66,   151,   755,    13,   153,   152,   275,    13,   146,   761,
     136,    13,   153,   149,   146,   136,    13,   770,   153,    74,
     150,   774,   647,    74,   153,   133,   119,    13,   153,   777,
     146,   151,    26,   302,   659,   153,   136,    79,   663,   136,
     665,   136,     8,   152,   151,   146,   152,   672,   902,   516,
     149,   676,   367,   537,   599,   676,   732,   788,   810,   812,
     640,   331,   526,   815,   699,    77,   671,   819,   858,   646,
     582,   581,   626,   500,   826,   828,   829,   830,   182,   166,
     833,    -1,   707,    -1,   499,    -1,   838,    -1,    -1,    -1,
     843,    -1,    -1,   307,   846,    -1,    -1,   849,    -1,   313,
     852,    -1,    -1,   851,    -1,   858,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    -1,   868,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   877,    -1,    -1,    -1,   882,
      -1,    -1,   885,   886,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,   465,   466,   770,    -1,   899,    -1,   774,
      -1,    -1,   905,    -1,   907,    -1,    -1,    -1,    -1,    -1,
     482,    -1,    -1,    -1,   916,    -1,    -1,    -1,   920,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    63,    -1,    23,    24,    25,    -1,   812,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    -1,   828,    -1,    -1,    -1,    -1,   833,    -1,
     532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,   502,    -1,    -1,   505,    77,    -1,    -1,
      -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   465,   466,   467,    -1,    -1,    -1,    -1,    -1,    -1,
     885,    -1,    -1,    -1,   146,   587,    -1,    -1,   482,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
      -1,   550,   551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     559,   560,   561,    -1,   176,   564,    -1,    -1,   180,    -1,
     182,    -1,    -1,    -1,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,   532,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,
     180,   663,    -1,   665,    -1,    -1,    -1,   187,    -1,    -1,
     672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   582,    -1,
      -1,    -1,    -1,   587,   214,    -1,    -1,    -1,    -1,    -1,
      -1,   221,    -1,    -1,    -1,   707,    -1,    -1,    -1,    -1,
      -1,    -1,   232,   275,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    -1,
     302,    -1,    -1,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,    -1,   277,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   770,   663,
      -1,   665,   774,    -1,    -1,   295,    -1,   297,   672,     8,
      -1,    -1,   302,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,
     812,    -1,    -1,   707,    -1,    -1,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,    58,
      59,   833,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   843,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,   423,   382,    -1,    -1,    -1,   868,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,    -1,   770,    -1,    -1,   399,
     774,    -1,    -1,   885,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,   456,    -1,   458,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   812,    -1,
      -1,    -1,    -1,   152,    -1,   445,    -1,    42,    43,   491,
     492,    -1,    -1,    -1,   828,   497,    -1,   499,   500,   833,
     502,    -1,    -1,   505,    58,    59,    61,    -1,    -1,   843,
      -1,    -1,    -1,    -1,   516,    -1,    -1,    72,    73,    -1,
      74,    -1,    -1,    -1,    -1,   485,    -1,    82,    -1,   489,
     490,    86,    -1,    -1,   868,    -1,    91,    92,    -1,    -1,
      -1,    -1,   502,   153,    -1,   505,    -1,   507,   550,   551,
      -1,   885,    -1,   108,    -1,    -1,   111,   559,   560,   561,
      -1,    -1,   564,   523,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
     550,   551,    -1,    -1,   554,    -1,   598,    -1,    -1,   559,
     560,   561,    -1,    -1,   564,    -1,    -1,    -1,   568,   569,
      -1,    -1,    -1,    -1,   574,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   647,    -1,   607,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   659,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,   628,    42,
      43,    -1,    -1,    -1,   676,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,   654,   655,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,    86,    87,   675,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,   146,   147,    -1,   149,   150,   151,   739,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    25,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,   785,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
     820,    -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
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
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   151,    -1,   153,   154,   155,   156,    -1,    -1,
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
     153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,     3,
       4,     5,     6,     7,   135,   136,   137,    -1,    12,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,   152,    26,   154,   155,   156,    -1,    -1,    -1,    -1,
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
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,
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
     156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,
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
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,    -1,    -1,   141,     9,    10,    11,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   157,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
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
     266,   267,   269,   270,   276,   277,   278,   279,   280,   281,
     282,   283,   288,   296,   302,   300,   299,   151,   298,   297,
      72,   126,   136,   244,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    72,   126,   128,   161,
     250,   269,   270,   278,   269,   266,    31,   266,   291,   292,
     266,   126,   128,   161,   250,   252,   253,   278,   281,   282,
     288,    81,    81,   146,   212,   244,   151,   153,   266,   136,
     153,   266,   151,   170,   235,   266,   151,   151,   256,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   266,   270,    88,    95,
      99,   103,   146,   293,   294,    26,   151,   266,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   266,    99,   257,
     293,   149,    99,   293,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   130,    61,
     149,   155,   282,   266,   266,   266,   266,   266,   179,   128,
     161,   133,   133,   268,   270,    96,   157,     8,   264,   128,
     161,   133,   151,   258,   133,   130,   282,    13,     8,   153,
     179,   291,   153,    13,   153,   136,   196,   147,     8,   153,
     270,   152,   266,   236,   237,   266,   243,   270,   149,   267,
     270,     8,   153,   153,   152,   266,   270,   301,   123,   270,
     289,   290,   161,   164,   149,   153,   151,   153,   153,   270,
     137,   266,   103,   294,    61,   130,    99,   103,   294,   266,
     153,   168,   175,   176,   270,   161,    74,     8,   153,   266,
     115,   150,   169,   170,   177,   178,   152,   152,   154,   266,
     156,   136,   248,   136,   107,   186,   107,   188,   136,   151,
     266,   284,   136,   276,   282,   288,   266,   266,   266,    26,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   252,    31,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    31,   208,   209,   243,
     270,   136,   276,   284,   136,   149,   276,   285,   286,   287,
     284,   266,   152,   161,   136,   136,    31,   266,    31,   266,
     161,   276,   208,   276,   285,    42,    43,    61,    73,    82,
     126,   128,   135,   161,   250,   259,   260,   261,   146,   151,
     152,   260,    13,     8,   152,   151,   266,   152,   152,   153,
       8,    74,    74,   266,   211,   153,   152,     8,   152,   151,
       8,   152,   151,   160,   163,   249,   150,    61,   150,   129,
     136,   146,   295,   136,   152,   150,     8,   152,    74,   136,
     166,   152,   151,    61,   130,   238,   239,   240,   241,   272,
     150,   208,    13,   126,   128,   161,   251,   117,   189,   190,
     251,   184,   151,    73,    77,   205,   206,   207,   251,   157,
     151,   151,   282,   266,    26,    63,   270,   268,   152,     8,
     151,   151,   157,   266,   151,   273,   274,   275,    61,   149,
     157,   150,   268,   268,    96,   152,   254,   260,   260,   260,
     263,   265,   151,   128,   161,    99,   133,    13,   205,   260,
     136,    26,   170,   195,   266,   236,   266,   270,    31,   192,
     270,   150,    26,   170,   270,   289,   290,    13,   208,   150,
     160,   208,   266,   157,    26,   149,   197,    79,   176,   153,
     136,    26,   170,   200,   152,   284,   285,   272,    61,   238,
     152,   260,   128,   161,   190,   183,     8,   149,   205,   152,
       8,    31,   146,   208,   208,   266,   252,    31,   243,   270,
     208,   208,   150,   208,    61,    61,   271,   284,   266,    31,
     266,   130,   255,    96,   157,     8,   264,   263,   161,   136,
     260,   152,    13,   168,   152,   153,    96,   191,   270,   191,
     168,   201,   152,   266,   152,   150,   152,   157,   153,   198,
     153,   198,   151,   168,   153,   157,   275,   284,   161,   149,
     251,   213,   152,   144,   245,   207,   146,    13,   152,   152,
     258,   268,   152,   152,   152,   284,   284,   272,   157,   150,
     268,   285,   260,   260,   152,   245,   260,   100,   153,   236,
     192,   152,   152,   202,    64,    65,   203,   150,   198,    78,
      90,   104,   198,   150,   251,   105,   157,   213,    67,    68,
      69,    70,    71,    72,    85,   144,   145,   150,   214,   216,
     229,   230,   231,   232,   234,   181,   151,   149,    31,   146,
      13,   260,   157,   157,    96,   149,   153,   152,    26,   170,
     194,   194,    64,    65,   204,   151,   170,   104,   266,    26,
     153,   199,   153,   150,   146,   153,   150,   136,   217,   251,
     146,   233,   244,   232,     8,   153,   149,    31,   146,   246,
     168,   146,    13,   260,   260,   168,    26,   170,   193,   168,
     151,    26,    66,   266,   153,   199,   168,   152,    13,     8,
     149,   153,   218,    13,     8,   153,   179,   136,   168,   146,
       8,   152,   150,    13,   260,   150,   168,   102,   266,   168,
     153,   152,   168,   149,   260,   251,   136,   219,   220,   221,
     222,   224,   225,   226,   251,   260,   146,   136,    13,   150,
      31,   146,   260,   101,   153,   152,   170,   168,   150,   221,
     153,    74,   119,   153,   133,    13,   151,   260,   146,   153,
      26,   150,   227,   232,   223,   251,   136,   260,   205,   168,
      79,   172,   173,   174,   136,     8,   152,   151,   174,   251,
     215,   251,   149,   153,   228,   146,   168,   152,   150,   149,
     168,   150
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
#line 360 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 364 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 365 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 369 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 370 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AddName((yyvsp[(3) - (3)].lexeme)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 374 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 375 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 376 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 377 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 378 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 383 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 384 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 388 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 389 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 394 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 395 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 400 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 401 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 405 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL, false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 408 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 411 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL, true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 414 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 420 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetCurrentNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 426 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetCurrentNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 435 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 436 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 443 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 447 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 448 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 452 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 453 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 457 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 461 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 462 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 471 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 472 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 473 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 474 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 475 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 476 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 477 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 478 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 479 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 480 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 481 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 482 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 483 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 484 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 485 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 488 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 491 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 492 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 493 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 497 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 500 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 501 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 505 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 506 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 510 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 511 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 516 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 520 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 521 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 525 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 537 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isReference) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 538 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isReference) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 543 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 544 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction((yyvsp[(3) - (10)].lexeme), (yyvsp[(2) - (10)].isReference), (yyvsp[(1) - (10)].lexeme), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].token), (yyvsp[(10) - (10)].token),
												observers.GetScope(), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(9) - (10)].statementList);
											  (yyval.statementList)->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 556 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 557 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);											  
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 564 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 565 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 574 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 575 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 576 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, true); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 577 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 581 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 583 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
										;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 589 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 593 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 595 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 599 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 601 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 605 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
															;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 608 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 612 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 613 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 617 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 618 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 622 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 623 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 627 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 628 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 632 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 633 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 637 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 638 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 642 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 643 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 644 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 645 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 649 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 650 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 651 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 655 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 656 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 660 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 661 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 665 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 666 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 672 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 673 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 679 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 680 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 684 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 685 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 689 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 690 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = 0; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 694 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 695 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 696 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 697 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 698 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 699 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 700 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 701 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 705 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 706 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 707 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 708 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("callable")); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 712 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 713 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) =  0; ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 717 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 724 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 731 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 738 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 739 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 740 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 749 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 750 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 751 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 755 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 756 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 757 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 758 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 762 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 763 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 767 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 768 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 769 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 771 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 772 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetCurrentNamespace()); 
															  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
															  observers.SetCurrentMemberName(NULL);
															;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 783 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList)->PushFront((yyvsp[(2) - (3)].traitUse)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 787 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitUse), pelet::TraitUseClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 789 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitUse) = (yyvsp[(1) - (3)].traitUse)->AppendUse((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 793 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 794 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 798 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 799 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 803 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 804 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->Push((yyvsp[(2) - (2)].statement)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 808 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitInsteadOf); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 809 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitAlias); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 814 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(3) - (3)].traitInsteadOf)->SetMethodReference((yyvsp[(1) - (3)].traitAlias)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 818 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitInsteadOf), pelet::TraitInsteadOfClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 819 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(1) - (3)].traitInsteadOf)->AppendInsteadOf((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 823 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
														  (yyval.traitAlias)->SetMethodReference((yyvsp[(1) - (1)].lexeme), NULL, observers.GetScope(), observers.GetCurrentNamespace()); 
														;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 826 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 830 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
																	  (yyval.traitAlias)->SetMethodReference((yyvsp[(3) - (3)].lexeme), (yyvsp[(1) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace());
																	;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 836 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (4)].traitAlias)->SetModifiers((yyvsp[(3) - (4)].lexeme))->SetAlias((yyvsp[(4) - (4)].lexeme))->SetScope(observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 837 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (3)].traitAlias)->SetModifiers((yyvsp[(3) - (3)].lexeme))->SetScope(observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 841 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 842 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 846 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 847 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 851 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 852 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme)); 
										;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 858 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 859 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 863 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 864 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 877 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 883 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 889 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 895 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 905 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 911 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 920 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 921 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 925 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 926 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 930 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 931 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 936 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 941 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 951 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 952 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 956 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 960 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 961 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(3) - (3)].statement); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 962 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 963 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 964 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 965 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 966 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 967 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 968 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 969 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 970 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 971 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 972 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 973 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 974 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 975 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 976 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 977 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 978 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 979 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 980 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 981 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 982 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 983 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 984 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 985 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 986 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 987 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 988 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 989 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 990 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 991 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 992 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 993 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 994 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 995 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 996 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 997 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 998 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 999 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1000 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1001 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1002 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1003 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1004 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1005 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1006 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1007 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1008 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1009 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1010 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1011 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1014 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1016 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1017 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1018 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1019 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1020 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1021 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1022 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1023 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1024 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1025 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1026 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1027 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1028 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1029 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1030 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1031 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1033 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1035 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1043 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1044 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1048 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1049 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1050 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1051 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1055 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true; 
																						  }
																						;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1060 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 1074 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1075 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true; 
																						  }
																						;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1080 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 1093 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1095 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1097 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1099 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1101 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1105 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1106 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1107 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1108 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1112 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1113 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1114 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1118 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1119 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1124 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1125 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1129 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1130 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1134 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1138 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1139 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1140 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1144 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1145 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1146 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1150 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1151 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1155 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 1164 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 1173 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
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
#line 1182 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1183 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1184 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1185 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1186 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1187 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1188 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1189 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1190 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1194 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1195 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1196 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1197 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1198 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1199 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1200 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1201 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1202 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1203 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1207 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1211 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1212 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1213 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1214 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1215 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1216 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1217 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1218 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1219 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1223 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1224 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1228 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1229 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1240 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1241 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1260 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1261 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1265 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1266 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1270 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1274 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1275 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1279 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1283 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1284 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1285 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1294 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1295 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1308 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1309 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1310 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1327 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1328 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1332 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1333 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1348 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1349 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1353 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1354 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1363 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1364 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1365 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1369 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1370 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1374 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1375 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1376 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1377 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1378 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1379 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1380 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1381 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1385 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1386 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1387 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1388 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1392 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1393 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1394 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1395 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1396 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1397 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1401 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1402 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1403 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1407 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1408 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1409 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1410 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1415 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1416 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1421 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1422 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1423 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1428 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1429 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1436 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1437 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1441 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1442 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 6875 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.cpp"
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
#line 1445 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php54ResourceParser.y"

