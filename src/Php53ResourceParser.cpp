
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
#define yyparse         php53_resource_parse
#define yylex           php53_resource_lex
#define yyerror         php53_resource_error
#define yylval          php53_resource_lval
#define yychar          php53_resource_char
#define yydebug         php53_resource_debug
#define yynerrs         php53_resource_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"

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
#define php53_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php53_resource_error pelet::ResourceGrammarError



/* Line 189 of yacc.c  */
#line 126 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.cpp"

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
#line 297 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.cpp"

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
#define YYLAST   7578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  127
/* YYNRULES -- Number of rules.  */
#define YYNRULES  410
/* YYNRULES -- Number of states.  */
#define YYNSTATES  840

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
     317,   320,   323,   324,   327,   329,   330,   333,   334,   337,
     339,   343,   344,   347,   349,   352,   354,   359,   361,   366,
     368,   373,   377,   383,   387,   392,   397,   403,   404,   410,
     415,   417,   419,   421,   426,   427,   434,   435,   443,   444,
     447,   448,   452,   454,   455,   458,   462,   468,   473,   478,
     484,   492,   499,   500,   502,   504,   506,   507,   509,   511,
     514,   518,   522,   527,   531,   533,   535,   538,   543,   547,
     553,   555,   559,   562,   563,   567,   570,   571,   581,   583,
     587,   589,   591,   592,   594,   596,   599,   601,   603,   605,
     607,   609,   611,   615,   621,   623,   627,   633,   638,   642,
     644,   645,   647,   651,   653,   660,   664,   669,   676,   680,
     683,   687,   691,   695,   699,   703,   707,   711,   715,   719,
     723,   727,   730,   733,   736,   739,   743,   747,   751,   755,
     759,   763,   767,   771,   775,   779,   783,   787,   791,   795,
     799,   803,   806,   809,   812,   815,   819,   823,   827,   831,
     835,   839,   843,   847,   851,   855,   861,   866,   868,   871,
     874,   877,   880,   883,   886,   889,   892,   895,   897,   902,
     906,   909,   919,   921,   922,   927,   931,   936,   938,   941,
     942,   948,   955,   956,   963,   970,   977,   984,   991,   996,
     998,  1000,  1004,  1007,  1009,  1013,  1016,  1018,  1020,  1025,
    1027,  1030,  1031,  1034,  1035,  1038,  1042,  1043,  1045,  1047,
    1048,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1070,  1072,  1076,  1079,  1081,  1083,  1087,  1090,  1093,  1096,
    1101,  1103,  1107,  1109,  1111,  1113,  1117,  1120,  1122,  1126,
    1130,  1131,  1134,  1135,  1137,  1143,  1147,  1151,  1153,  1155,
    1157,  1159,  1161,  1163,  1164,  1165,  1173,  1175,  1178,  1179,
    1183,  1187,  1188,  1190,  1193,  1197,  1201,  1203,  1205,  1207,
    1209,  1212,  1214,  1219,  1224,  1226,  1228,  1233,  1234,  1236,
    1238,  1240,  1245,  1250,  1252,  1254,  1258,  1260,  1263,  1267,
    1269,  1271,  1276,  1277,  1278,  1281,  1287,  1291,  1295,  1297,
    1304,  1309,  1314,  1317,  1320,  1323,  1325,  1328,  1330,  1335,
    1339,  1343,  1350,  1354,  1356,  1358,  1360,  1365,  1370,  1371,
    1375,  1376,  1380,  1385,  1386,  1390,  1391,  1395,  1397,  1401,
    1405
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
     136,    -1,   167,     8,   136,    13,   243,    -1,    85,   136,
      13,   243,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   249,
     152,   170,   201,   203,    -1,   116,   151,   249,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   249,   152,
     200,    -1,    93,   170,   147,   151,   249,   152,   153,    -1,
     109,   151,   224,   153,   224,   153,   224,   152,   193,    -1,
     138,   151,   249,   152,   197,    -1,    76,   153,    -1,    76,
     249,   153,    -1,    87,   153,    -1,    87,   249,   153,    -1,
     134,   153,    -1,   134,   226,   153,    -1,   134,   253,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     223,   153,    -1,   118,    -1,   249,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   253,    74,   192,   191,
     152,   194,    -1,   110,   151,   226,    74,   253,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   234,   146,   152,   149,
     168,   150,   172,    -1,   139,   249,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   234,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   253,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   227,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
      70,    81,    -1,    -1,   107,   234,    -1,   120,    -1,    -1,
     107,   190,    -1,    -1,   117,   190,    -1,   234,    -1,   190,
       8,   234,    -1,    -1,    96,   192,    -1,   253,    -1,    31,
     253,    -1,   170,    -1,    26,   168,   101,   153,    -1,   170,
      -1,    26,   168,   102,   153,    -1,   170,    -1,    26,   168,
     100,   153,    -1,   136,    13,   243,    -1,   196,     8,   136,
      13,   243,    -1,   149,   198,   150,    -1,   149,   153,   198,
     150,    -1,    26,   198,   104,   153,    -1,    26,   153,   198,
     104,   153,    -1,    -1,   198,    78,   249,   199,   168,    -1,
     198,    90,   199,   168,    -1,    26,    -1,   153,    -1,   170,
      -1,    26,   168,   105,   153,    -1,    -1,   201,    64,   151,
     249,   152,   170,    -1,    -1,   202,    64,   151,   249,   152,
      26,   168,    -1,    -1,    65,   170,    -1,    -1,    65,    26,
     168,    -1,   206,    -1,    -1,   207,   146,    -1,   207,    31,
     146,    -1,   207,    31,   146,    13,   243,    -1,   207,   146,
      13,   243,    -1,   206,     8,   207,   146,    -1,   206,     8,
     207,    31,   146,    -1,   206,     8,   207,    31,   146,    13,
     243,    -1,   206,     8,   207,   146,    13,   243,    -1,    -1,
     234,    -1,    73,    -1,   209,    -1,    -1,   226,    -1,   253,
      -1,    31,   251,    -1,   209,     8,   226,    -1,   209,     8,
     253,    -1,   209,     8,    31,   251,    -1,   210,     8,   211,
      -1,   211,    -1,   146,    -1,   155,   250,    -1,   155,   149,
     249,   150,    -1,   212,     8,   146,    -1,   212,     8,   146,
      13,   243,    -1,   146,    -1,   146,    13,   243,    -1,   213,
     214,    -1,    -1,   217,   221,   153,    -1,   222,   153,    -1,
      -1,   218,   227,   179,   136,   151,   205,   152,   215,   216,
      -1,   153,    -1,   149,   168,   150,    -1,   219,    -1,   145,
      -1,    -1,   219,    -1,   220,    -1,   219,   220,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   221,     8,   146,    -1,   221,     8,   146,    13,   243,
      -1,   146,    -1,   146,    13,   243,    -1,   222,     8,   136,
      13,   243,    -1,    85,   136,    13,   243,    -1,   223,     8,
     249,    -1,   249,    -1,    -1,   225,    -1,   225,     8,   249,
      -1,   249,    -1,   123,   151,   271,   152,    13,   249,    -1,
     253,    13,   249,    -1,   253,    13,    31,   253,    -1,   253,
      13,    31,    63,   235,   241,    -1,    63,   235,   241,    -1,
      62,   249,    -1,   253,    24,   249,    -1,   253,    23,   249,
      -1,   253,    22,   249,    -1,   253,    21,   249,    -1,   253,
      20,   249,    -1,   253,    19,   249,    -1,   253,    18,   249,
      -1,   253,    17,   249,    -1,   253,    16,   249,    -1,   253,
      15,   249,    -1,   253,    14,   249,    -1,   252,    59,    -1,
      59,   252,    -1,   252,    58,    -1,    58,   252,    -1,   249,
      27,   249,    -1,   249,    28,   249,    -1,   249,     9,   249,
      -1,   249,    11,   249,    -1,   249,    10,   249,    -1,   249,
      29,   249,    -1,   249,    31,   249,    -1,   249,    30,   249,
      -1,   249,    44,   249,    -1,   249,    42,   249,    -1,   249,
      43,   249,    -1,   249,    45,   249,    -1,   249,    46,   249,
      -1,   249,    47,   249,    -1,   249,    41,   249,    -1,   249,
      40,   249,    -1,    42,   249,    -1,    43,   249,    -1,    48,
     249,    -1,    50,   249,    -1,   249,    33,   249,    -1,   249,
      32,   249,    -1,   249,    35,   249,    -1,   249,    34,   249,
      -1,   249,    36,   249,    -1,   249,    39,   249,    -1,   249,
      37,   249,    -1,   249,    38,   249,    -1,   249,    49,   235,
      -1,   151,   249,   152,    -1,   249,    25,   249,    26,   249,
      -1,   249,    25,    26,   249,    -1,   278,    -1,    57,   249,
      -1,    56,   249,    -1,    55,   249,    -1,    54,   249,    -1,
      53,   249,    -1,    52,   249,    -1,    51,   249,    -1,   106,
     239,    -1,    60,   249,    -1,   245,    -1,    73,   151,   273,
     152,    -1,   154,   240,   154,    -1,    12,   249,    -1,   227,
     179,   151,   205,   152,   228,   149,   168,   150,    -1,   112,
      -1,    -1,   144,   151,   229,   152,    -1,   229,     8,   146,
      -1,   229,     8,    31,   146,    -1,   146,    -1,    31,   146,
      -1,    -1,   161,   151,   231,   208,   152,    -1,   126,   128,
     161,   151,   208,   152,    -1,    -1,   128,   161,   151,   232,
     208,   152,    -1,   233,   133,   136,   151,   208,   152,    -1,
     233,   133,   259,   151,   208,   152,    -1,   261,   133,   136,
     151,   208,   152,    -1,   261,   133,   259,   151,   208,   152,
      -1,   259,   151,   208,   152,    -1,    72,    -1,   161,    -1,
     126,   128,   161,    -1,   128,   161,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,   233,    -1,   236,    -1,
     263,   130,   267,   237,    -1,   263,    -1,   237,   238,    -1,
      -1,   130,   267,    -1,    -1,   151,   152,    -1,   151,   249,
     152,    -1,    -1,    99,    -1,   275,    -1,    -1,   151,   208,
     152,    -1,   124,    -1,    92,    -1,    86,    -1,   122,    -1,
     108,    -1,    91,    -1,    82,    -1,   125,    -1,   111,    -1,
     127,    -1,   135,    99,   103,    -1,   135,   103,    -1,   242,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
      42,   243,    -1,    43,   243,    -1,    73,   151,   246,   152,
      -1,   244,    -1,   233,   133,   136,    -1,   137,    -1,   284,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     242,    -1,   156,   275,   156,    -1,   135,   275,   103,    -1,
      -1,   248,   247,    -1,    -1,     8,    -1,   248,     8,   243,
      96,   243,    -1,   248,     8,   243,    -1,   243,    96,   243,
      -1,   243,    -1,   250,    -1,   226,    -1,   253,    -1,   253,
      -1,   253,    -1,    -1,    -1,   262,   130,   254,   267,   258,
     255,   256,    -1,   262,    -1,   256,   257,    -1,    -1,   130,
     267,   258,    -1,   151,   208,   152,    -1,    -1,   264,    -1,
     270,   264,    -1,   233,   133,   259,    -1,   261,   133,   259,
      -1,   264,    -1,   263,    -1,   230,    -1,   264,    -1,   270,
     264,    -1,   260,    -1,   264,    61,   266,   157,    -1,   264,
     149,   249,   150,    -1,   265,    -1,   146,    -1,   155,   149,
     249,   150,    -1,    -1,   249,    -1,   268,    -1,   259,    -1,
     268,    61,   266,   157,    -1,   268,   149,   249,   150,    -1,
     269,    -1,   136,    -1,   149,   249,   150,    -1,   155,    -1,
     270,   155,    -1,   271,     8,   272,    -1,   272,    -1,   253,
      -1,   123,   151,   271,   152,    -1,    -1,    -1,   274,   247,
      -1,   274,     8,   249,    96,   249,    -1,   274,     8,   249,
      -1,   249,    96,   249,    -1,   249,    -1,   274,     8,   249,
      96,    31,   251,    -1,   274,     8,    31,   251,    -1,   249,
      96,    31,   251,    -1,    31,   251,    -1,   275,   276,    -1,
     275,    99,    -1,   276,    -1,    99,   276,    -1,   146,    -1,
     146,    61,   277,   157,    -1,   146,   130,   136,    -1,    95,
     249,   150,    -1,    95,   137,    61,   249,   157,   150,    -1,
      88,   253,   150,    -1,   136,    -1,   129,    -1,   146,    -1,
     121,   151,   283,   152,    -1,    98,   151,   253,   152,    -1,
      -1,     7,   279,   249,    -1,    -1,     6,   280,   249,    -1,
       5,   151,   249,   152,    -1,    -1,     4,   281,   249,    -1,
      -1,     3,   282,   249,    -1,   253,    -1,   283,     8,   253,
      -1,   233,   133,   136,    -1,   261,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   341,   341,   345,   346,   350,   351,   355,   356,   357,
     358,   359,   364,   364,   369,   369,   375,   376,   380,   382,
     386,   389,   392,   395,   401,   407,   416,   417,   421,   422,
     423,   424,   428,   429,   433,   434,   438,   442,   443,   444,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   470,   473,   474,   475,   481,
     482,   486,   487,   491,   492,   496,   501,   502,   506,   510,
     514,   518,   519,   524,   523,   537,   536,   558,   557,   568,
     569,   570,   574,   575,   582,   586,   587,   592,   593,   598,
     601,   605,   606,   610,   611,   615,   616,   620,   621,   625,
     626,   630,   631,   635,   636,   637,   638,   642,   643,   644,
     648,   649,   653,   654,   658,   659,   665,   666,   672,   673,
     677,   678,   682,   683,   687,   688,   689,   690,   691,   692,
     693,   694,   698,   699,   700,   704,   705,   709,   716,   723,
     730,   731,   732,   736,   737,   741,   742,   743,   747,   748,
     749,   750,   754,   755,   759,   760,   762,   761,   775,   776,
     780,   781,   787,   788,   792,   793,   797,   798,   799,   800,
     801,   802,   806,   812,   818,   824,   833,   840,   849,   850,
     854,   855,   859,   860,   864,   865,   878,   883,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   938,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   959,   963,   964,   968,   969,   970,   971,   975,
     975,   992,   995,   995,  1012,  1014,  1016,  1018,  1020,  1025,
    1026,  1027,  1028,  1032,  1033,  1034,  1038,  1039,  1043,  1045,
    1050,  1051,  1055,  1059,  1060,  1061,  1065,  1066,  1067,  1072,
    1073,  1078,  1087,  1097,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,  1114,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1126,  1130,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,
    1146,  1147,  1151,  1152,  1156,  1157,  1158,  1159,  1163,  1164,
    1169,  1174,  1178,  1183,  1188,  1182,  1201,  1205,  1206,  1211,
    1215,  1216,  1220,  1221,  1225,  1226,  1231,  1235,  1245,  1249,
    1250,  1251,  1255,  1256,  1257,  1262,  1263,  1267,  1268,  1272,
    1273,  1277,  1278,  1279,  1283,  1284,  1288,  1289,  1293,  1294,
    1299,  1300,  1301,  1305,  1306,  1310,  1311,  1312,  1313,  1314,
    1315,  1316,  1317,  1321,  1322,  1323,  1324,  1328,  1329,  1330,
    1331,  1332,  1333,  1337,  1338,  1339,  1343,  1344,  1345,  1345,
    1351,  1351,  1357,  1358,  1358,  1364,  1364,  1373,  1374,  1378,
    1379
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
  "class_statement_list", "class_statement", "$@6", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "expr_without_variable", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@7", "$@8",
  "class_name", "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@9", "$@10",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
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
     185,   185,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   197,   197,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   207,   207,   207,   208,   208,   209,   209,   209,
     209,   209,   209,   210,   210,   211,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   215,   214,   216,   216,
     217,   217,   218,   218,   219,   219,   220,   220,   220,   220,
     220,   220,   221,   221,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   227,   228,   228,   229,   229,   229,   229,   231,
     230,   230,   232,   230,   230,   230,   230,   230,   230,   233,
     233,   233,   233,   234,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   239,   239,   239,   240,   240,   240,   241,
     241,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   243,   243,   243,   243,   243,
     243,   244,   245,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   247,   247,   248,   248,   248,   248,   249,   249,
     250,   251,   252,   254,   255,   253,   253,   256,   256,   257,
     258,   258,   259,   259,   260,   260,   261,   262,   262,   263,
     263,   263,   264,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   272,   273,   273,   274,   274,   274,   274,   274,
     274,   274,   274,   275,   275,   275,   275,   276,   276,   276,
     276,   276,   276,   277,   277,   277,   278,   278,   279,   278,
     280,   278,   278,   281,   278,   282,   278,   283,   283,   284,
     284
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
       2,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     1,     4,     1,     4,     1,
       4,     3,     5,     3,     4,     4,     5,     0,     5,     4,
       1,     1,     1,     4,     0,     6,     0,     7,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     3,     2,     0,     9,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     3,     1,     6,     3,     4,     6,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     4,     3,
       2,     9,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     6,     0,     6,     6,     6,     6,     6,     4,     1,
       1,     3,     2,     1,     3,     2,     1,     1,     4,     1,
       2,     0,     2,     0,     2,     3,     0,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     3,     2,     2,     2,     4,
       1,     3,     1,     1,     1,     3,     2,     1,     3,     3,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     3,
       3,     0,     1,     2,     3,     3,     1,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     0,     1,     1,
       1,     4,     4,     1,     1,     3,     1,     2,     3,     1,
       1,     4,     0,     0,     2,     5,     3,     3,     1,     6,
       4,     4,     2,     2,     2,     1,     2,     1,     4,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     0,     3,
       0,     3,     4,     0,     3,     0,     3,     1,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   405,   403,     0,   400,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   269,     0,
       0,    79,   297,     0,   293,     0,     0,   296,   292,     0,
       0,     0,   283,   295,     0,     0,   299,   252,     0,     0,
       0,     0,    51,    84,     0,   294,     0,   291,   298,     0,
     300,     0,     0,     0,     5,   312,     0,     0,     0,     0,
       0,   355,     0,    27,     0,    57,   286,   366,     0,   314,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     329,    71,   348,     0,   317,   247,     0,   328,     0,   330,
       0,   351,     0,   336,   347,   349,   354,     0,   237,   313,
       0,     0,     0,     0,     0,   269,     0,     5,    71,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   270,     0,   204,   332,     0,   202,   246,
     189,     0,     0,   270,   276,   289,   277,     0,   279,   349,
       0,    81,    80,   150,     0,   373,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   372,     0,
      14,     0,   316,    45,   329,     0,   330,     0,     0,     0,
     302,   387,     0,   385,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   287,     0,   288,     0,
       0,     0,     0,   259,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   333,   357,     0,   367,   350,   406,
     404,     0,   401,   399,     0,     0,   272,     0,     0,     0,
     272,     0,   136,   188,     0,     0,   350,     0,     0,    49,
       0,   378,     0,   322,    42,     0,    44,     0,     0,     0,
       0,    50,     0,   284,     0,     0,   181,   183,   329,   330,
       0,   146,   330,     0,    48,    60,     0,     0,   407,     0,
       0,   370,     0,   369,   315,     4,    12,    11,   262,    46,
      47,     0,   312,     0,   301,   386,     0,     0,   384,   319,
     383,     0,    59,     0,     0,    66,    68,    22,     0,     0,
      16,     0,     0,    34,    26,    28,    29,    30,   234,   249,
       0,   318,     6,   136,     0,     0,    87,     0,    77,     0,
     132,   409,   344,   342,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,     0,   135,   329,   330,
     410,   345,     0,   358,     0,     0,   402,   271,     0,     0,
     271,   344,     0,   345,   364,     0,   360,   281,   359,   363,
       0,     0,     0,     0,     0,     0,   304,     0,   303,   151,
     310,   148,   382,   331,     0,   248,   323,   374,    25,     0,
       0,     0,     0,   178,   397,   285,   180,     0,     0,     0,
       0,   143,    10,     0,     0,   396,   372,   372,     0,   136,
       0,     4,   136,   392,     0,   390,   394,   393,   395,     0,
     389,     0,     0,     0,     0,     0,    21,    18,     0,     0,
     356,     0,     0,     0,     0,   273,    83,     0,    75,    86,
      89,     0,   132,   134,     0,   122,     0,   133,   136,   136,
     343,   236,     0,     0,   186,   139,   268,     0,   136,   136,
     341,   352,   353,   290,     0,   278,   357,     0,   307,   308,
     320,     0,   306,     0,     0,     0,     0,   377,     0,   376,
     101,     0,    27,    99,    56,     0,     0,   182,    91,     0,
      91,    93,   147,    27,   114,   408,     0,   368,     0,     0,
      15,     0,     0,     0,   388,   107,   107,    40,     0,    67,
      53,    23,    27,   112,    37,     0,   260,    24,     0,   275,
      88,     0,     0,   153,     0,   253,   132,     0,   124,     0,
       0,   235,   289,     0,   329,   330,     0,     0,   136,   334,
     365,     0,   280,     0,     0,   327,     0,   322,   305,   311,
     149,   381,   380,     0,     0,     0,     0,   180,     0,     0,
      94,     0,   116,   118,   371,   184,   261,    13,   263,     0,
     107,     0,   107,     0,     0,     0,    31,   274,   153,    90,
     162,    73,     0,     0,     0,   125,     0,   264,   265,   187,
     142,   266,   267,     0,   338,   282,   361,   362,     0,   309,
     323,   321,     0,   375,   102,     0,    38,     0,    92,     0,
       0,   120,     0,     0,    35,   391,     0,     0,     0,     0,
       0,   103,     0,     0,   162,   166,   167,   168,   171,   170,
     169,     0,   161,    78,   152,     0,     0,   160,   164,     0,
       0,     0,    27,     0,   128,     0,   127,   340,   335,   326,
     325,   379,   100,     0,    27,    97,    55,    54,     0,     0,
       0,     0,   119,     0,     0,   110,   111,    27,   105,   104,
       0,   113,    76,     0,   174,     0,    71,   165,     0,   155,
      27,     0,   257,     0,     0,   129,     0,   126,     0,   337,
       0,    27,    95,    39,     0,     0,    27,     0,     0,   106,
      27,   109,     0,     0,     0,     0,   154,     0,     0,     0,
     258,     0,   254,   251,     0,   131,   341,   324,     0,     0,
       0,   121,    36,     0,   108,    27,   177,   175,   172,     0,
       0,    74,     0,   255,   130,   339,     0,    98,     0,   115,
       0,     0,   132,   176,   256,    96,    27,    62,   173,     0,
     117,     0,    58,    61,    63,   156,     0,    64,     0,     0,
      27,   158,   157,     0,     0,     0,   159,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   481,   325,   201,   202,    81,
     204,   354,   355,    83,   822,   823,   824,   344,   345,   356,
     357,   219,    86,   710,    87,   591,   511,    88,   366,    89,
     368,   508,   509,   629,   560,   763,   726,   554,   298,   577,
     641,   737,   584,   633,   681,   684,   730,   514,   515,   516,
     416,   417,   172,   173,   154,   650,   704,   828,   832,   705,
     706,   707,   708,   745,   709,   163,   305,   306,    90,   118,
     653,   753,    92,   363,   482,    93,   517,   145,   146,   535,
     612,   167,   207,   283,    94,   449,   450,    95,   616,   457,
     617,    96,    97,   452,    98,    99,   422,   664,   718,   759,
     609,   100,   101,   102,   103,   104,   105,   106,   424,   437,
     438,   439,   107,   322,   323,   292,   293,   192,   193,   489,
     108,   114,   113,   111,   110,   319,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -508
static const yytype_int16 yypact[] =
{
    -508,    47,  1828,  -508,  -508,  -508,  -124,  -508,  -508,  6267,
    6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,
    6267,   467,   467,  6267,  6267,   480,    -9,    50,   -85,   -52,
    4754,  -508,  -508,    37,  -508,  4880,   -27,  -508,  -508,  4600,
    6267,     7,    49,  -508,    74,   124,  -508,  -508,   152,    52,
     153,   165,  -508,  -508,   191,  -508,   196,  -508,  -508,   209,
    -508,   106,  5006,   256,   118,  -508,   222,  6267,    15,   225,
     -74,  -508,   230,  -508,  6267,  -508,   214,   186,   316,   224,
    -508,    10,  -508,  -508,  -508,  -508,  -508,  -508,   213,   250,
    -508,   136,  -508,   255,  -508,  -508,  6566,  -508,   159,  1046,
     243,  -508,   263,   276,  -508,   -11,  -508,   155,  -508,  -508,
    6267,  6267,  6267,  6267,  6267,  -508,   291,  -508,   136,  1660,
    -508,  -508,   373,  -508,  -508,  -508,  -508,  -508,  -508,  -508,
    -508,   293,   106,     0,   283,  -508,  -508,   307,  -508,  -508,
    -508,   313,   106,   318,   314,   297,  -508,   322,   334,   -10,
     155,  -508,  -508,   452,    12,  5132,  -508,  6607,   454,  -508,
    6652,   333,   324,    13,  7452,   467,  5258,  -508,  6267,  6267,
    -508,   271,    16,  -508,   335,   323,  6267,   467,   407,   106,
    -508,   108,   254,  -508,   339,  7452,   415,   467,  6393,   144,
    -508,   -12,   315,  -508,  -508,  6267,  6693,  -508,   467,   106,
      40,    18,  -508,  6267,  1982,  6734,   150,   332,   355,  6267,
     150,   149,   361,  -508,   364,  -508,   398,   402,  -508,   -99,
      80,  6267,  6267,  6267,  5385,  6267,  6267,  6267,  6267,  6267,
    6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,
    6267,  6267,  6267,  6267,  6267,  6267,   480,  -508,  -508,  -508,
    5511,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,  6267,
    6267,  6267,  5637,   367,  -508,  6267,  6267,   186,   -30,  7452,
    7452,  6779,  7452,  7452,   363,   106,     6,   372,   379,   106,
     318,   160,  5637,  -508,   160,   317,   -29,  1006,   370,  -508,
     467,  7322,   369,   524,  -508,  1006,  -508,   528,    25,   386,
    6267,  -508,   392,  -508,  6820,   393,   552,  7452,   490,   659,
    6267,  -508,  -508,   152,  -508,  -508,   408,  6862,  -508,    26,
     414,  -508,    27,  -508,   262,  -508,  -508,  -508,  -508,  -508,
    -508,   417,   509,  1453,  -508,  -508,   131,   437,  -508,  -508,
    -508,  6905,  -508,  2136,    28,  -508,  -508,    58,   438,   -74,
    -508,  6946,   426,  -508,  -508,  -508,  -508,  -508,  -508,  -508,
    7114,  -508,  -508,  5637,   565,    65,   464,    65,  -508,   433,
      70,   434,   439,   -29,   155,  7492,  7529,  1660,  6267,  7410,
    1967,  2120,  1117,  1167,  2271,  2425,  2425,  2425,  2425,   942,
     818,   818,   818,   663,   663,   502,   502,   502,   373,   373,
     373,  -508,   228,  1660,  1660,  1660,  1660,  1660,  1660,  1660,
    1660,  1660,  1660,  1660,  1660,   467,   442,   589,    31,    88,
     449,   450,   317,  7452,   447,  7157,  -508,     8,   434,   449,
     318,  -508,   453,  -508,  -508,  6267,  -508,  -508,   -23,  -508,
    1006,  1006,   459,   489,   106,    91,    17,   482,  -508,  -508,
    -508,   605,  -508,  -508,  5763,  -508,  5889,  -508,  -508,  1006,
     483,  3830,  6267,  7452,  -508,  -508,  6267,  6267,   467,    69,
    7198,  -508,  -508,  3984,   467,  -508,   407,   407,   607,  5637,
    1520,  -508,  5637,  -508,  6267,  -508,  -508,  -508,  -508,   468,
    -508,    -7,   545,   467,   475,   495,  -508,  -508,  4138,   481,
    -508,   484,  1006,   504,   106,   318,  -508,    65,  -508,   626,
    -508,   488,    70,  -508,   486,   632,    66,  -508,  5637,  5637,
     -29,  1814,  6267,   480,  -508,  -508,  -508,  6015,  5637,  5637,
     493,  -508,  -508,  -508,  7240,   511,  6267,  6267,  -508,  -508,
    1006,   106,   175,   542,   514,  1006,   467,  7452,   467,  7364,
    -508,   634,  -508,  -508,  -508,  6988,   499,  7452,   558,   467,
     558,  -508,  -508,  -508,  -508,  -508,    32,  -508,  6267,   508,
    -508,  1674,   510,    46,  -508,   512,   513,  -508,   517,  -508,
    -508,  -508,  -508,  -508,  -508,   516,  -508,  -508,   106,   318,
     626,   515,    65,  -508,   518,   540,    83,   539,   648,   534,
     535,  1814,   297,   467,    33,   304,   538,   541,  5637,  -508,
    -508,   317,  -508,   537,  7281,   595,   543,   688,   203,  -508,
    -508,  -508,  -508,  6141,  1006,  2290,   544,  6267,    69,   548,
    -508,   549,  3676,   275,  -508,  1660,  -508,  -508,  -508,   553,
    -508,   207,  -508,   -20,    65,  2444,  -508,   318,  -508,  -508,
     184,  -508,   551,   567,    67,   701,  1006,  -508,  -508,  -508,
    -508,  -508,  -508,   584,  -508,  -508,  -508,  -508,  1006,  -508,
    1006,  -508,   467,  7452,  -508,   566,  -508,   585,  -508,  4292,
    4292,   336,   591,  4600,  -508,  -508,   287,  6267,    -1,   587,
      39,  -508,   598,   594,   299,  -508,  -508,  -508,  -508,  -508,
    -508,   612,  -508,  -508,  -508,   603,   638,   487,  -508,    21,
     604,    82,  -508,   608,   742,  1006,  -508,  -508,   629,  -508,
     664,  -508,  -508,  4446,  -508,  -508,  -508,  -508,   613,   737,
     699,  6267,  -508,   615,  6525,  -508,  -508,  -508,  -508,  -508,
     614,  -508,  -508,   757,   758,    22,   136,  -508,   636,  -508,
    -508,   628,  -508,    35,  2598,   762,  1006,  -508,   317,  -508,
    1006,  -508,  -508,  -508,  2752,  6267,  -508,   623,  7031,  -508,
    -508,  3676,   630,  1006,  1006,   635,  -508,   644,   769,  2906,
    -508,    85,  -508,  -508,  1006,  -508,   493,  -508,  3060,   631,
    7072,  3676,  -508,  4600,  3676,  -508,  -508,  -508,   774,   637,
    1006,  -508,   645,  -508,  -508,  -508,   640,  -508,   764,  -508,
    3214,  1006,    70,  -508,  -508,  -508,  -508,   717,  -508,   646,
    3676,   649,  -508,   717,  -508,  -508,    65,  -508,   110,   651,
    -508,  -508,  -508,   652,  3368,   656,  -508,  -508,  3522,  -508
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -508,  -508,  -309,   -17,  -508,  -508,  -508,  -508,   457,  -508,
    -174,  -508,     9,  -508,  -508,  -508,   -22,  -508,   319,     1,
      11,  -117,  -508,  -508,  -508,  -508,  -508,  -508,  -508,  -508,
    -508,  -508,   300,   251,   182,  -508,   133,  -508,  -508,  -508,
    -507,    81,  -508,  -508,  -508,  -508,  -508,  -498,  -508,   218,
    -236,  -508,  -508,   506,  -508,   172,  -508,  -508,  -508,  -508,
    -508,  -508,   119,  -508,  -508,  -508,  -451,  -508,   130,    -2,
    -508,  -508,  -508,  -508,  -508,    43,  -358,  -229,  -508,  -508,
    -508,  -508,  -508,   226,   599,   756,  -508,  -508,  -508,   212,
    -508,   711,   660,  -393,   358,   829,  -508,  -508,  -508,  -508,
      44,  -218,  -508,   847,  -508,   -19,   -13,  -508,   298,  -412,
    -508,  -508,     3,   357,   360,  -508,  -508,   198,   288,  -508,
    -508,  -508,  -508,  -508,  -508,  -508,  -508
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -347
static const yytype_int16 yytable[] =
{
      91,   274,   372,    84,   133,   133,   148,   506,   143,   510,
     530,    82,   149,    85,   594,   556,   480,   401,   214,   575,
     288,   300,   525,   343,   313,   735,   349,   112,   150,   748,
     775,   265,   265,   460,   474,   477,   493,   369,   536,  -137,
     477,  -140,   181,   781,   182,   421,   432,     3,   162,   336,
     265,   265,   370,   200,   199,   221,   222,   223,   687,   372,
     421,   153,   117,   431,   134,   134,   433,   436,   144,   643,
     688,   224,   151,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   268,   246,  -138,   597,   713,   155,
     559,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   751,   348,   276,   802,   687,   337,   266,
     266,  -343,  -346,  -346,   161,   280,   537,   501,   212,   688,
     691,   152,   495,   686,   212,   690,   212,   286,   266,   266,
    -342,   115,   576,   513,   194,   212,  -332,  -332,   133,   510,
    -270,   213,   736,   621,   133,   622,   513,   328,   165,   479,
     133,   133,   324,   215,   197,   289,   301,   218,   212,   314,
     133,   350,   571,   158,   749,   776,   677,   461,   475,   478,
     494,   133,   347,  -137,   634,  -140,   212,   782,   174,   739,
     543,   503,   184,   504,   190,   131,   503,   132,   504,   665,
     166,   117,    91,   639,   436,   117,   117,   373,   134,   503,
     660,   504,   598,   714,   134,    71,   371,   248,   249,   117,
     134,   134,  -123,   374,    77,   168,    71,   148,   752,   143,
     134,   803,   187,   149,   649,    77,   212,   187,   187,   188,
    -138,   134,   117,   569,   188,   188,   572,   334,   338,   150,
     373,   695,   696,   697,   698,   699,   700,   326,   427,   830,
     486,   327,   430,   831,   373,   373,   374,   487,   373,   701,
     446,   373,   373,   133,   208,   169,   211,   488,   446,   721,
     374,   374,   599,   600,   374,   687,   692,   374,   374,   144,
     191,   523,   606,   607,   602,   191,   191,   688,   170,   308,
     115,    71,   187,   212,   175,   361,    71,   171,  -272,   188,
     267,   689,  -141,   206,   819,    77,   176,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   702,
     447,   212,   200,   134,   703,   209,  -271,   179,   447,   682,
     683,    91,   177,   115,   187,   117,   786,   178,   505,   216,
     505,   188,   212,   505,   131,   189,   132,  -270,   180,   190,
     191,   520,  -332,  -332,   117,   687,   695,   696,   697,   698,
     699,   700,   663,   195,    71,   213,   198,   688,   625,   135,
     138,   203,   212,    77,   701,   133,   217,  -272,   220,   632,
     212,   733,   418,   436,   262,  -271,   263,   131,   133,   132,
     728,   729,   191,   187,   187,   328,   264,   117,   645,   373,
     188,   188,   418,   479,   338,   210,   277,    71,   339,   179,
     310,   275,   246,   446,   446,   374,    77,   542,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     278,   279,   446,   187,   702,   134,   212,   281,   282,   742,
     188,   133,   133,   434,   338,   284,  -141,   133,   134,   133,
     133,   191,   191,    71,   285,   287,   435,   295,   829,   297,
     553,   299,    77,  -332,  -332,   316,   133,   335,    91,   115,
     340,    84,   564,   447,   447,   446,   359,   589,   315,    82,
     505,    85,   329,   418,   335,   505,   340,   362,   335,   340,
     364,   191,   447,   420,   148,   365,   143,   583,   428,   367,
     149,   134,   134,    71,   370,   429,   451,   134,    71,   134,
     134,   455,    77,   446,   618,    71,   150,    77,   446,   133,
     320,   133,   456,   131,    77,   132,   134,   462,   754,   115,
     436,   459,   133,   117,   464,   447,   466,   243,   244,   245,
     764,   246,   115,    71,   695,   696,   697,   698,   699,   700,
     467,   472,    77,   771,   468,   476,   144,   483,   330,    91,
     484,   647,    84,   490,   496,   505,   779,   499,   502,   505,
      82,   507,    85,   447,   512,   518,   133,   788,   447,   134,
     519,   134,   791,   131,   526,   132,   794,   527,   373,  -163,
     528,   529,   134,   117,   531,   533,   141,   446,   142,   418,
     540,   133,   418,    71,   374,   544,   117,   541,   545,   551,
     568,   810,    77,    91,   578,   574,    71,   505,   580,   777,
      91,   581,   588,   585,   592,    77,   586,   593,   595,   446,
     596,   611,   820,    91,   608,   334,   134,   624,   418,   418,
     619,   446,   627,   446,   628,   133,   834,   604,   418,   418,
     636,   656,   638,   838,   648,   640,   642,   447,   644,   646,
     651,   134,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   652,   655,   657,   658,   725,   725,
     661,   668,   732,   662,   666,   669,   670,   676,   446,   447,
     679,   680,   711,   685,   746,   240,   241,   242,   243,   244,
     245,   447,   246,   447,   715,   134,   712,  -332,  -332,   722,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   762,   469,   139,   140,   717,   723,   418,   446,
     738,   157,   731,   446,   740,   373,   160,   741,   743,   744,
      47,   164,    91,   750,   755,   756,   446,   446,   447,   758,
     760,   374,    91,   766,   765,   767,   772,   446,   769,    91,
     773,   774,   778,   185,   780,   784,   792,    91,   196,   795,
     799,   798,   800,   446,   807,   205,    91,   811,   812,    91,
     816,   814,    91,   815,   446,   505,   821,   833,   825,   447,
     826,   827,   809,   447,   835,   837,   497,   590,    91,   505,
     678,   631,   579,   727,   654,   770,   447,   447,    91,   471,
     694,   269,   270,   271,   272,   273,   747,   447,   659,   671,
     805,   311,    91,   566,   613,     0,    91,   567,     0,     0,
       0,     0,     0,   447,     0,     0,     0,     0,     0,     0,
     136,   136,     0,     0,   447,  -347,  -347,  -347,   238,   239,
     240,   241,   242,   243,   244,   245,   291,   246,   137,   137,
       0,     0,   147,     0,     0,     0,     0,   304,     0,   307,
     185,     0,     0,     0,     0,     0,   448,   317,     0,     0,
       0,   186,     0,     0,   448,     0,     0,     0,     0,   333,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   375,   376,   377,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   185,     0,     0,   423,   425,  -347,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   185,   302,     0,     0,     0,   309,     0,
     312,     0,     0,     0,     0,     0,   318,   321,     0,     0,
       0,   463,   137,     0,     0,     0,   331,     0,   137,     0,
       0,   470,     0,     0,   137,   137,     0,   346,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,   448,
     448,     0,     0,     0,     0,   137,     0,     0,   440,   441,
       0,   458,     0,     0,     0,     0,     0,     0,   448,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,     0,     0,   185,     0,     0,     0,   115,   442,
       0,     0,     0,     0,     0,     0,     0,     0,    32,   521,
       0,   419,    34,   147,     0,     0,     0,    37,    38,     0,
       0,   448,     0,     0,  -332,  -332,     0,     0,     0,     0,
       0,   419,     0,     0,    43,     0,     0,    46,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      57,    58,   443,    60,   444,     0,     0,   137,     0,   448,
       0,   445,   117,     0,   448,     0,   534,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   547,   246,   549,     0,     0,
       0,     0,     0,   555,     0,     0,     0,   307,   557,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,     0,   419,   185,     0,   573,   538,   539,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   550,   246,     0,     0,     0,
       0,     0,     0,   448,     0,     0,     0,     0,     0,   185,
     185,   524,     0,   601,     0,     0,     0,     0,   185,   185,
     185,     0,     0,     0,   453,     0,     0,   423,   614,   137,
       0,     0,     0,     0,     0,   448,     0,     0,   587,     0,
       0,     0,   137,     0,     0,     0,     0,   448,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   635,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   615,   558,   561,     0,
       0,   620,     0,   565,     0,   321,   321,     0,   419,     0,
       0,   419,     0,     0,   448,   137,   137,     0,     0,   185,
       0,   137,   346,   137,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   673,     0,     0,     0,   307,     0,
     137,     0,     0,     0,     0,     0,     0,   419,   419,     0,
       0,     0,     0,     0,     0,   448,   605,   419,   419,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,   448,   448,     0,   453,     0,   453,     0,     0,
     674,     0,     0,   448,     0,     0,     0,     0,   630,     0,
       0,     0,     0,   137,     0,   137,     0,     0,   734,   448,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     448,     0,   716,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   719,     0,   720,     0,     0,     0,
       0,     0,   453,     0,     0,     0,     0,   419,     0,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,     0,     0,     0,   561,     0,     0,
       0,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,   137,   790,     0,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   453,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   785,     0,     0,     0,   787,     0,     0,   137,
       0,     0,     0,     4,     5,     6,     7,     8,     0,   796,
     797,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     804,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   813,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,   818,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,   485,     0,    33,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,    70,     0,    71,    72,     0,    73,
     570,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,   224,     9,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,    33,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,    70,     0,
      71,    72,     0,    73,   637,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,    33,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,    70,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,   352,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,   116,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,   353,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   352,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,   116,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,   492,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
     675,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   352,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,  -347,  -347,  -347,
    -347,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,   693,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   352,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     116,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,   352,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,   783,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,   789,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,   352,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,   116,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,     0,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   352,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,   116,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,   801,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,   806,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   352,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   352,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     116,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,   817,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,   352,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,   836,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,   352,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,   116,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,   839,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   352,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,   116,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   552,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    51,     0,    52,     0,
       0,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      51,     0,    52,     0,     0,    54,    55,    56,    57,    58,
     116,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,    30,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,    52,     0,     0,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,    30,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    51,     0,
      52,     0,     0,    54,    55,    56,    57,    58,   116,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,     0,     0,    71,    72,
       0,    73,     0,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    51,     0,    52,     0,     0,    54,    55,    56,
      57,    58,   116,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,    71,    72,     0,    73,     0,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    51,     0,    52,     0,
       0,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   115,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
      34,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
     116,    60,    61,     4,     5,     6,     7,     8,     0,    63,
     117,    65,     9,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    74,     0,   156,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,   115,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    34,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,    57,    58,   116,    60,    61,     4,
       5,     6,     7,     8,     0,    63,   117,    65,     9,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,    74,     0,   159,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    34,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,   116,    60,    61,     4,     5,     6,     7,     8,
       0,    63,   117,    65,     9,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    74,     0,   183,
      76,    77,    78,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   116,    60,
      61,     4,     5,     6,     7,     8,     0,    63,   117,    65,
       9,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,     0,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     4,     5,
       6,     7,     8,    63,   117,    65,     0,     9,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
     303,   378,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   116,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   117,    65,     9,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,     0,    76,
      77,    78,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   115,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   116,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   117,    65,     9,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,     0,     0,    76,    77,    78,   415,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   115,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   116,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   117,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
       0,    76,    77,    78,   546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   116,
      60,    61,     4,     5,     6,     7,     8,     0,    63,   117,
      65,     9,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,     0,     0,    76,    77,    78,
     548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   115,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   116,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   117,    65,     9,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,     0,    76,    77,    78,   603,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   116,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   117,    65,     9,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,     0,    76,
      77,    78,   672,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   115,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   116,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   117,    65,     9,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,     0,     0,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   115,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   116,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   117,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   116,
      60,    61,     0,     0,     0,     0,     0,     0,    63,   117,
     332,     0,     0,     0,   221,   222,   223,     0,     0,    71,
       0,     0,     0,     0,    74,     0,     0,    76,    77,    78,
     224,   735,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   736,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   247,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     294,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   296,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   342,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   426,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   465,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   473,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   491,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   498,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     626,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   793,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   808,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   532,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   562,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     610,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,     0,     0,   454,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   667,     0,     0,     0,   224,   522,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     623,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     223,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246
};

static const yytype_int16 yycheck[] =
{
       2,   118,   220,     2,    21,    22,    25,   365,    25,   367,
     422,     2,    25,     2,   512,   466,   325,   246,     8,    26,
       8,     8,   415,   197,     8,    26,     8,   151,    25,     8,
       8,    61,    61,     8,     8,     8,     8,   136,    61,     8,
       8,     8,    59,     8,    61,   263,   282,     0,    39,    61,
      61,    61,   151,    70,   128,     9,    10,    11,    78,   277,
     278,   146,   136,   281,    21,    22,   284,   285,    25,   576,
      90,    25,    81,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   107,    49,     8,    31,    31,   151,
      31,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    31,    74,   132,    31,    78,   130,   149,
     149,   151,   133,   133,   151,   142,   149,   363,   128,    90,
     150,    81,    74,   640,   128,   642,   128,   150,   149,   149,
     151,    72,   149,    73,    26,   128,    58,    59,   165,   507,
     133,   151,   153,   546,   171,   548,    73,   151,   151,   151,
     177,   178,   179,   153,   149,   153,   153,    31,   128,   153,
     187,   153,   481,   136,   153,   153,   627,   152,   152,   152,
     152,   198,   199,   152,   152,   152,   128,   152,   136,   150,
      99,   126,    62,   128,   103,   126,   126,   128,   128,   611,
     151,   136,   204,   157,   422,   136,   136,   220,   165,   126,
     603,   128,   146,   146,   171,   146,   136,    58,    59,   136,
     177,   178,   152,   220,   155,   151,   146,   246,   146,   246,
     187,   146,    88,   246,   592,   155,   128,    88,    88,    95,
     152,   198,   136,   479,    95,    95,   482,   103,    99,   246,
     263,    67,    68,    69,    70,    71,    72,   149,   275,   149,
     129,   153,   279,   153,   277,   278,   263,   136,   281,    85,
     287,   284,   285,   290,    76,   151,    78,   146,   295,   672,
     277,   278,   518,   519,   281,    78,   644,   284,   285,   246,
     146,    63,   528,   529,   523,   146,   146,    90,   146,   169,
      72,   146,    88,   128,   151,   156,   146,   155,   133,    95,
     155,   104,     8,    99,   812,   155,   151,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   145,
     287,   128,   349,   290,   150,   149,   133,   128,   295,    64,
      65,   343,   151,    72,    88,   136,   758,   151,   365,   136,
     367,    95,   128,   370,   126,    99,   128,   133,   149,   103,
     146,   374,    58,    59,   136,    78,    67,    68,    69,    70,
      71,    72,   608,   151,   146,   151,   151,    90,   552,    21,
      22,   151,   128,   155,    85,   402,   136,   133,   133,   563,
     128,   104,   262,   611,   151,   133,   133,   126,   415,   128,
      64,    65,   146,    88,    88,   151,   130,   136,   582,   422,
      95,    95,   282,   151,    99,    99,   133,   146,   103,   128,
     149,   128,    49,   440,   441,   422,   155,   444,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     133,   128,   459,    88,   145,   402,   128,   133,   151,   150,
      95,   468,   469,   136,    99,   133,   152,   474,   415,   476,
     477,   146,   146,   146,   130,    13,   149,    13,   826,   136,
     461,   147,   155,    58,    59,   152,   493,   189,   480,    72,
     192,   480,   473,   440,   441,   502,   154,   504,   153,   480,
     507,   480,   153,   363,   206,   512,   208,   136,   210,   211,
     136,   146,   459,   136,   523,   107,   523,   498,   136,   107,
     523,   468,   469,   146,   151,   136,   146,   474,   146,   476,
     477,   152,   155,   540,   541,   146,   523,   155,   545,   546,
     123,   548,     8,   126,   155,   128,   493,   151,   712,    72,
     758,    13,   559,   136,   152,   502,   153,    45,    46,    47,
     724,    49,    72,   146,    67,    68,    69,    70,    71,    72,
       8,   153,   155,   737,    74,   151,   523,   150,   153,   571,
      61,   588,   571,   136,   136,   592,   750,   151,    13,   596,
     571,   117,   571,   540,   151,   151,   603,   761,   545,   546,
     151,   548,   766,   126,   152,   128,   770,     8,   611,   112,
     151,   151,   559,   136,   157,   152,   126,   624,   128,   479,
     151,   628,   482,   146,   611,   133,   136,   128,    13,   136,
      13,   795,   155,   625,    79,   157,   146,   644,   153,   746,
     632,   136,   128,   152,     8,   155,   152,   149,   152,   656,
       8,   130,   816,   645,   151,   103,   603,    13,   518,   519,
     136,   668,   153,   670,    96,   672,   830,   527,   528,   529,
     152,    13,   152,   837,   149,   153,   153,   624,   151,   153,
     152,   628,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   144,   146,   152,   152,   679,   680,
     152,    96,   683,   152,   157,   152,     8,   153,   715,   656,
     152,   152,   151,   150,   706,    42,    43,    44,    45,    46,
      47,   668,    49,   670,    13,   672,   149,    58,    59,   153,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   723,    74,    23,    24,   152,   152,   608,   756,
     153,    30,   151,   760,   146,   758,    35,   153,   136,   146,
     112,    40,   754,   149,   146,    13,   773,   774,   715,   130,
      96,   758,   764,    26,   151,    66,   152,   784,   153,   771,
      13,    13,   136,    62,   146,    13,   153,   779,    67,   149,
     136,   146,    13,   800,   153,    74,   788,    13,   151,   791,
      26,   146,   794,   153,   811,   812,    79,   146,   152,   756,
     151,   823,   793,   760,   152,   149,   349,   507,   810,   826,
     628,   560,   493,   680,   596,   734,   773,   774,   820,   313,
     648,   110,   111,   112,   113,   114,   707,   784,   602,   617,
     786,   171,   834,   476,   536,    -1,   838,   477,    -1,    -1,
      -1,    -1,    -1,   800,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,   811,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   155,    49,    21,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,   166,    -1,   168,
     169,    -1,    -1,    -1,    -1,    -1,   287,   176,    -1,    -1,
      -1,    62,    -1,    -1,   295,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,    -1,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,   282,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,    -1,    -1,    -1,    -1,   177,   178,    -1,    -1,
      -1,   300,   165,    -1,    -1,    -1,   187,    -1,   171,    -1,
      -1,   310,    -1,    -1,   177,   178,    -1,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   440,
     441,    -1,    -1,    -1,    -1,   198,    -1,    -1,    42,    43,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,   459,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,   363,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,   378,
      -1,   262,    86,   246,    -1,    -1,    -1,    91,    92,    -1,
      -1,   502,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,   282,    -1,    -1,   108,    -1,    -1,   111,    -1,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,   125,   126,   127,   128,    -1,    -1,   290,    -1,   540,
      -1,   135,   136,    -1,   545,    -1,   435,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   454,    49,   456,    -1,    -1,
      -1,    -1,    -1,   462,    -1,    -1,    -1,   466,   467,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     479,    -1,   363,   482,    -1,   484,   440,   441,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   459,    49,    -1,    -1,    -1,
      -1,    -1,    -1,   624,    -1,    -1,    -1,    -1,    -1,   518,
     519,   402,    -1,   522,    -1,    -1,    -1,    -1,   527,   528,
     529,    -1,    -1,    -1,   415,    -1,    -1,   536,   537,   402,
      -1,    -1,    -1,    -1,    -1,   656,    -1,    -1,   502,    -1,
      -1,    -1,   415,    -1,    -1,    -1,    -1,   668,    -1,   670,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   540,   468,   469,    -1,
      -1,   545,    -1,   474,    -1,   476,   477,    -1,   479,    -1,
      -1,   482,    -1,    -1,   715,   468,   469,    -1,    -1,   608,
      -1,   474,   493,   476,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   623,    -1,    -1,    -1,   627,    -1,
     493,    -1,    -1,    -1,    -1,    -1,    -1,   518,   519,    -1,
      -1,    -1,    -1,    -1,    -1,   756,   527,   528,   529,   760,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     523,    -1,   773,   774,    -1,   546,    -1,   548,    -1,    -1,
     624,    -1,    -1,   784,    -1,    -1,    -1,    -1,   559,    -1,
      -1,    -1,    -1,   546,    -1,   548,    -1,    -1,   687,   800,
      -1,    -1,    -1,    -1,    -1,    -1,   559,    -1,    -1,    -1,
     811,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   668,    -1,   670,    -1,    -1,    -1,
      -1,    -1,   603,    -1,    -1,    -1,    -1,   608,    -1,    -1,
      -1,    -1,   731,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     603,    -1,    -1,    -1,    -1,    -1,    -1,   628,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   715,    -1,    -1,    -1,   628,   765,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   672,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   756,    -1,    -1,    -1,   760,    -1,    -1,   672,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,   773,
     774,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   800,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,   811,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,   150,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,   144,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    25,    12,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,   144,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,   139,    -1,    -1,   142,   143,
      -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,     3,     4,
       5,     6,     7,   135,   136,   137,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
     152,    26,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,   136,
     137,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,     3,     4,     5,     6,     7,    -1,
     135,   136,   137,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    25,    -1,    27,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    96,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      96,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    81,    82,    85,    86,    87,    89,    91,    92,    93,
      97,    98,   106,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   134,   135,   136,   137,   138,   139,   142,   143,
     144,   146,   147,   149,   151,   153,   154,   155,   156,   161,
     162,   167,   170,   171,   177,   178,   180,   182,   185,   187,
     226,   227,   230,   233,   242,   245,   249,   250,   252,   253,
     259,   260,   261,   262,   263,   264,   265,   270,   278,   284,
     282,   281,   151,   280,   279,    72,   126,   136,   227,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   126,   128,   161,   233,   252,   253,   261,   252,   249,
     249,   126,   128,   161,   233,   235,   236,   261,   263,   264,
     270,    81,    81,   146,   212,   151,   153,   249,   136,   153,
     249,   151,   170,   223,   249,   151,   151,   239,   151,   151,
     146,   155,   210,   211,   136,   151,   151,   151,   151,   128,
     149,   161,   161,   153,   226,   249,   253,    88,    95,    99,
     103,   146,   275,   276,    26,   151,   249,   149,   151,   128,
     161,   165,   166,   151,   168,   249,    99,   240,   275,   149,
      99,   275,   128,   151,     8,   153,   136,   136,    31,   179,
     133,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   153,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   151,   133,   130,    61,   149,   155,   264,   249,
     249,   249,   249,   249,   179,   128,   161,   133,   133,   128,
     161,   133,   151,   241,   133,   130,   264,    13,     8,   153,
      31,   249,   273,   274,   153,    13,   153,   136,   196,   147,
       8,   153,   253,   152,   249,   224,   225,   249,   226,   253,
     149,   250,   253,     8,   153,   153,   152,   249,   253,   283,
     123,   253,   271,   272,   161,   164,   149,   153,   151,   153,
     153,   253,   137,   249,   103,   276,    61,   130,    99,   103,
     276,   249,   153,   168,   175,   176,   253,   161,    74,     8,
     153,   249,   115,   150,   169,   170,   177,   178,   152,   154,
     249,   156,   136,   231,   136,   107,   186,   107,   188,   136,
     151,   136,   259,   264,   270,   249,   249,   249,    26,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   235,    31,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,    31,   208,   209,   226,   253,
     136,   259,   254,   249,   266,   249,   152,   161,   136,   136,
     161,   259,   208,   259,   136,   149,   259,   267,   268,   269,
      42,    43,    73,   126,   128,   135,   161,   233,   242,   243,
     244,   146,   251,   253,    96,   152,     8,   247,   243,    13,
       8,   152,   151,   249,   152,   152,   153,     8,    74,    74,
     249,   211,   153,   152,     8,   152,   151,     8,   152,   151,
     160,   163,   232,   150,    61,   150,   129,   136,   146,   277,
     136,   152,   150,     8,   152,    74,   136,   166,   152,   151,
     150,   208,    13,   126,   128,   161,   234,   117,   189,   190,
     234,   184,   151,    73,   205,   206,   207,   234,   151,   151,
     264,   249,    26,    63,   253,   251,   152,     8,   151,   151,
     267,   157,   150,   152,   249,   237,    61,   149,   243,   243,
     151,   128,   161,    99,   133,    13,    31,   249,    31,   249,
     243,   136,    26,   170,   195,   249,   224,   249,   253,    31,
     192,   253,   150,    26,   170,   253,   271,   272,    13,   208,
     150,   160,   208,   249,   157,    26,   149,   197,    79,   176,
     153,   136,    26,   170,   200,   152,   152,   243,   128,   161,
     190,   183,     8,   149,   205,   152,     8,    31,   146,   208,
     208,   249,   235,    31,   226,   253,   208,   208,   151,   258,
     150,   130,   238,   266,   249,   243,   246,   248,   161,   136,
     243,   251,   251,    96,    13,   168,   152,   153,    96,   191,
     253,   191,   168,   201,   152,   249,   152,   150,   152,   157,
     153,   198,   153,   198,   151,   168,   153,   161,   149,   234,
     213,   152,   144,   228,   207,   146,    13,   152,   152,   241,
     251,   152,   152,   208,   255,   267,   157,   150,    96,   152,
       8,   247,    31,   249,   243,   100,   153,   224,   192,   152,
     152,   202,    64,    65,   203,   150,   198,    78,    90,   104,
     198,   150,   234,   105,   213,    67,    68,    69,    70,    71,
      72,    85,   145,   150,   214,   217,   218,   219,   220,   222,
     181,   151,   149,    31,   146,    13,   243,   152,   256,   243,
     243,   251,   153,   152,    26,   170,   194,   194,    64,    65,
     204,   151,   170,   104,   249,    26,   153,   199,   153,   150,
     146,   153,   150,   136,   146,   221,   227,   220,     8,   153,
     149,    31,   146,   229,   168,   146,    13,   243,   130,   257,
      96,    26,   170,   193,   168,   151,    26,    66,   249,   153,
     199,   168,   152,    13,    13,     8,   153,   179,   136,   168,
     146,     8,   152,   150,    13,   243,   267,   243,   168,   102,
     249,   168,   153,   152,   168,   149,   243,   243,   146,   136,
      13,   150,    31,   146,   243,   258,   101,   153,   152,   170,
     168,    13,   151,   243,   146,   153,    26,   150,   243,   205,
     168,    79,   172,   173,   174,   152,   151,   174,   215,   234,
     149,   153,   216,   146,   168,   152,   150,   149,   168,   150
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
#line 341 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 345 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 346 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 350 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 351 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AppendName((yyvsp[(3) - (3)].lexeme)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 355 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 356 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 357 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 358 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 359 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 364 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 365 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 369 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetDeclaredNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 370 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 375 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 376 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 381 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 382 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 386 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 389 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 392 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 395 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 401 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 407 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 416 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 417 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 424 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 428 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 429 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 433 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 434 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 438 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 442 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 443 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 452 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 453 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 454 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 455 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 456 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 457 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 458 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 459 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 460 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 461 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 462 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 463 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 464 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 465 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 466 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 469 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 472 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 473 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 474 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 478 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 481 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 482 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 486 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 487 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 491 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 492 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 497 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 501 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 502 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 506 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 518 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isReference) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 519 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isReference) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 524 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 525 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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
#line 537 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 538 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);
											  
											   /* at the end of a class, see if any assigned properties were not explicitly
											    * defined and it so make them as defined
											    * very important to use $$ as we want the returned to list to be modified
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
#line 558 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 559 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 568 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 569 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 570 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 574 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 576 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
										;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 582 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 586 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 588 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 592 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 594 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 598 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
															;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 601 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 605 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 606 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 610 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 611 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 615 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 616 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 620 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 621 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 625 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 626 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 630 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 631 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 635 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 636 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 637 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 638 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 642 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 643 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 644 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 648 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 649 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 653 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 654 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 658 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 659 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 665 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 666 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 672 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 673 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 677 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 678 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 682 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 683 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = 0; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 687 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 688 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 689 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 690 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 691 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 692 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 693 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 694 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 698 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 699 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 700 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 704 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 705 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) =  0; ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 709 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    {  if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 716 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 723 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement)); 
																			   }
																			   else {
																				 (yyval.statementList) = 0;
																			   }
																			;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 730 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 731 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 732 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 741 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 742 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 743 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 747 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 748 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 749 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 750 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 754 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 755 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 759 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 760 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 762 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 763 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 158:

/* Line 1455 of yacc.c  */
#line 775 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 776 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 780 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 781 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); 
										;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 787 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 788 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 792 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 793 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 800 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 806 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 812 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 818 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 824 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 834 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 840 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 849 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 850 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 854 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 855 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 859 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 860 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 864 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 865 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 186:

/* Line 1455 of yacc.c  */
#line 878 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (4)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (4)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (4)].statement);
																			  }
																			;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 883 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (6)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (6)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (6)].statement);
																			  }	
																			;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 888 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 889 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 890 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 891 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 892 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 893 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 894 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 895 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 896 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 897 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 898 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 899 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 900 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 901 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 902 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 903 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 904 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 905 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 906 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 907 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 908 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 909 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 910 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 911 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 912 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 913 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 914 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 915 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 916 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 917 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 918 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 919 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 920 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 921 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 922 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 923 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 924 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 925 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 926 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 927 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 928 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 929 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 930 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 931 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 932 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 933 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 934 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 937 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 939 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 940 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 941 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 942 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 943 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 944 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 945 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 946 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 947 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 948 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 949 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 950 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 951 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 952 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 953 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 955 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 963 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 964 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 968 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 969 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 970 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 971 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 975 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true;
																						  }
																						;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 980 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 261:

/* Line 1455 of yacc.c  */
#line 994 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 995 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true;
																						  }
																						;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1000 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 264:

/* Line 1455 of yacc.c  */
#line 1013 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1015 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1017 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1019 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1021 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1025 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1026 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1027 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1028 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1032 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1033 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1034 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1038 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1039 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1044 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1045 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1050 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1051 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1055 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1059 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1060 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1061 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1065 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1066 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1067 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1072 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1073 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1078 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 292:

/* Line 1455 of yacc.c  */
#line 1087 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { 
																			  if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarStmt;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1097 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 294:

/* Line 1455 of yacc.c  */
#line 1106 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1107 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1108 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1109 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1110 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1111 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1112 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1113 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1114 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1119 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1120 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1121 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1122 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1123 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1124 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1125 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1126 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1130 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1134 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1135 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1136 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1137 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1138 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1139 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1140 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1141 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1146 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1147 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1151 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1152 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1163 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1164 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1183 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { if ((yyvsp[(1) - (2)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (2)].statement)->Type) {
													observers.DoCaptureProperties = true;	
												  }
												;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1188 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.DoCaptureProperties = false; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1189 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 336:

/* Line 1455 of yacc.c  */
#line 1201 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1205 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1206 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1211 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1215 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isMethod) = 1; ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1216 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.isMethod) = 0; ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1221 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1225 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1226 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1231 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1235 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
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

  case 348:

/* Line 1455 of yacc.c  */
#line 1245 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1249 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1250 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1251 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1255 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1256 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1257 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1262 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);	;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1263 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1267 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1268 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1272 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1273 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1277 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1278 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1279 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1283 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = observers.DoCaptureProperties ? ((yyvsp[(1) - (1)].lexeme)) : 0; ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1284 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.lexeme) = 0; ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1288 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1289 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1299 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1300 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1301 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1305 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1306 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1310 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1311 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1312 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1313 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1314 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1315 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1316 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1317 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1321 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1322 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1323 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1324 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1328 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1329 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1330 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1331 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1332 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1333 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1337 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1338 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1339 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1343 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1344 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1345 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1346 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1351 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1352 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1357 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.statement) = 0; ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1358 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1359 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1364 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1365 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1373 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1374 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1378 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1379 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"
    { (yyval.unused) = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 6647 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.cpp"
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
#line 1382 "C:\\Users\\Roberto\\Documents\\GitHub\\pelet\\src\\Php53ResourceParser.y"


